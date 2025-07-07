#ifndef __AIP_CONTENTCENSOR_H__
#define __AIP_CONTENTCENSOR_H__

#include "base/base.h"

namespace aip {

    class Contentcensor: public AipBase {
    public:

        std::string _anti_porn = "https://aip.baidubce.com/rest/2.0/antiporn/v1/detect";
        std::string _anti_porn_gif = "https://aip.baidubce.com/rest/2.0/antiporn/v1/detect_gif";
        std::string _anti_spam = "https://aip.baidubce.com/rest/2.0/antispam/v2/spam";
        std::string _user_defined_image = "https://aip.baidubce.com/rest/2.0/solution/v1/img_censor/v2/user_defined";
        std::string _user_defined_text = "https://aip.baidubce.com/rest/2.0/solution/v1/text_censor/v2/user_defined";
        std::string _face_audit = "https://aip.baidubce.com/rest/2.0/solution/v1/face_audit";
        std::string _report = "https://aip.baidubce.com/rpc/2.0/feedback/v1/report";
        std::string _combo = "https://aip.baidubce.com/api/v1/solution/direct/img_censor";

        Contentcensor(const std::string & app_id, const std::string & ak, const std::string & sk)
            : AipBase(app_id, ak, sk) {}

        Json::Value anti_porn_gif(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_anti_porn_gif, null, data, null);
        }

        Json::Value anti_spam(std::string const & content, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["content"] = content;
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_anti_spam, null, data, null);
        }

        Json::Value user_defined_image(std::string const & image_or_url, std::string const & type, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            if (type == "image") {
                data["image"] = base64_encode(image_or_url.c_str(), (int) image_or_url.size());
            }
            if (type == "imgUrl") {
                data["imgUrl"] = image_or_url;
            }
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_user_defined_image, null, data, null);
        }

        Json::Value user_defined_text(std::string const & text, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["text"] = text;
            return this->request(_user_defined_text, null, data, null);
        }

        Json::Value combo(std::string const & image_or_url, std::string const & type, std::vector<std::string> const & scenes, Json::Value const & scene_conf) {
            Json::Value data;
            if (type == "image") {
                data["image"] = base64_encode(image_or_url.c_str(), (int) image_or_url.size());
            }
            if (type == "imgUrl") {
                data["imgUrl"] = image_or_url;
            }
            data["scenes"] = {};
            for (int i = 0; i < (int) scenes.size(); i++) {
                data["scenes"][i] = scenes[i];
            }
            if (scene_conf != Json::Value::null) {
                data["sceneConf"] = scene_conf;
            }
            std::map<std::string, std::string> extern_headers;
            extern_headers["Content-Type"] = "application/json";
            return this->request(_combo, null, data.toStyledString(), extern_headers);
        }

        Json::Value face_audit(const std::vector<std::string> image_or_url, std::string const & type, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            if (type == "images") {
                data["images"] = vector_join_base64(image_or_url);
            }
            if (type == "imgUrls") {
                data["imgUrls"] = vector_join_url(image_or_url);
            }
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_face_audit, null, data, null);
        }

        Json::Value report(Json::Value const & report) {
            Json::Value param;
            param["feedback"] = report;
            return this->request(_report, null, param.toStyledString(), null);
        }
    };
}

#endif
