#ifndef __AIP_BODYANALYSIS_H__
#define __AIP_BODYANALYSIS_H__

#include "base/base.h"

namespace aip {

    class Bodyanalysis: public AipBase {
    public:

        std::string _body_analysis =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/body_analysis";

        std::string _body_attr =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/body_attr";

        std::string _body_num =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/body_num";

        std::string _gesture =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/gesture";

        std::string _body_seg =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/body_seg";

        std::string _driver_behavior =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/driver_behavior";

        std::string _body_tracking =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/body_tracking";

        std::string _hand_analysis =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/driver_behavior";

        Bodyanalysis(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk) {}

        Json::Value body_analysis(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_body_analysis, null, data, null);
        }

        Json::Value body_attr(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_body_attr, null, data, null);
        }

        Json::Value body_num(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_body_num, null, data, null);
        }

        Json::Value gesture(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_gesture, null, data, null);
        }

        Json::Value body_seg(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_body_seg, null, data, null);
        }

        Json::Value driver_behavior(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_driver_behavior, null, data, null);
        }

        Json::Value body_tracking(std::string const & image, std::string const & dynamic, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            data["dynamic"] = dynamic;
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_body_tracking, null, data, null);
        }

        Json::Value hand_analysis(std::string const & image, const std::map<std::string, std::string> & options) {
            std::map<std::string, std::string> data;
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));
            return this->request(_hand_analysis, null, data, null);
        }
    };

}

#endif
