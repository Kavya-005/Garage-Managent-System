/**
 * Copyright (c) 2017 Baidu.com, Inc. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
 * an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations under the License.
 *
 * @author baidu aip
 */

#ifndef __AIP_FACE_H__
#define __AIP_FACE_H__

#include "base/base.h"

namespace aip {

    class Face: public AipBase
    {
    public:
        
        std::string _detect =
            "https://aip.baidubce.com/rest/2.0/face/v3/detect";
        
        std::string _search =
            "https://aip.baidubce.com/rest/2.0/face/v3/search";
        
        std::string _multi_search =
            "https://aip.baidubce.com/rest/2.0/face/v3/multi-search";
        
        std::string _user_add =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/user/add";
        
        std::string _user_update =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/user/update";
        
        std::string _face_delete =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/face/delete";
        
        std::string _user_get =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/user/get";
        
        std::string _face_getlist =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/face/getlist";
        
        std::string _group_getusers =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/group/getusers";
        
        std::string _user_copy =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/user/copy";
        
        std::string _user_delete =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/user/delete";
        
        std::string _group_add =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/group/add";
        
        std::string _group_delete =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/group/delete";
        
        std::string _group_getlist =
            "https://aip.baidubce.com/rest/2.0/face/v3/faceset/group/getlist";
        
        std::string _person_verify =
            "https://aip.baidubce.com/rest/2.0/face/v3/person/verify";
        
        std::string _video_sessioncode =
            "https://aip.baidubce.com/rest/2.0/face/v1/faceliveness/sessioncode";
        

        Face(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk)
        {
        }

       
        Json::Value detect(
            std::string const & image,
            std::string const & image_type,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["image"] = image;
            data["image_type"] = image_type;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_detect, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value search(
            std::string const & image,
            std::string const & image_type,
            std::string const & group_id_list,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["image"] = image;
            data["image_type"] = image_type;
            data["group_id_list"] = group_id_list;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_search, null, data.toStyledString(), null);

            return result;
        }
      
        Json::Value multi_search(
            std::string const & image,
            std::string const & image_type,
            std::string const & group_id_list,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["image"] = image;
            data["image_type"] = image_type;
            data["group_id_list"] = group_id_list;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_multi_search, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value user_add(
            std::string const & image,
            std::string const & image_type,
            std::string const & group_id,
            std::string const & user_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["image"] = image;
            data["image_type"] = image_type;
            data["group_id"] = group_id;
            data["user_id"] = user_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_user_add, null, data.toStyledString(), null);

            return result;
        }
        
        
        Json::Value user_update(
            std::string const & image,
            std::string const & image_type,
            std::string const & group_id,
            std::string const & user_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["image"] = image;
            data["image_type"] = image_type;
            data["group_id"] = group_id;
            data["user_id"] = user_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_user_update, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value face_delete(
            std::string const & user_id,
            std::string const & group_id,
            std::string const & face_token,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["user_id"] = user_id;
            data["group_id"] = group_id;
            data["face_token"] = face_token;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_face_delete, null, data.toStyledString(), null);

            return result;
        }
        
      
        Json::Value user_get(
            std::string const & user_id,
            std::string const & group_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["user_id"] = user_id;
            data["group_id"] = group_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_user_get, null, data.toStyledString(), null);

            return result;
        }
     
        Json::Value face_getlist(
            std::string const & user_id,
            std::string const & group_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["user_id"] = user_id;
            data["group_id"] = group_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_face_getlist, null, data.toStyledString(), null);

            return result;
        }
      
        Json::Value group_getusers(
            std::string const & group_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["group_id"] = group_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_group_getusers, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value user_copy(
            std::string const & user_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["user_id"] = user_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_user_copy, null, data.toStyledString(), null);

            return result;
        }
       
        Json::Value user_delete(
            std::string const & group_id,
            std::string const & user_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["group_id"] = group_id;
            data["user_id"] = user_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_user_delete, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value group_add(
            std::string const & group_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["group_id"] = group_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_group_add, null, data.toStyledString(), null);

            return result;
        }
  
        Json::Value group_delete(
            std::string const & group_id,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["group_id"] = group_id;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_group_delete, null, data.toStyledString(), null);

            return result;
        }
        
    
        Json::Value group_getlist(
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_group_getlist, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value person_verify(
            std::string const & image,
            std::string const & image_type,
            std::string const & id_card_number,
            std::string const & name,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["image"] = image;
            data["image_type"] = image_type;
            data["id_card_number"] = id_card_number;
            data["name"] = name;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_person_verify, null, data.toStyledString(), null);

            return result;
        }
     
        Json::Value video_sessioncode(
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_video_sessioncode, null, data.toStyledString(), null);

            return result;
        }
       
        Json::Value faceverify(
            Json::Value const & data)
        {
            std::string _faceverify =
                "https://aip.baidubce.com/rest/2.0/face/v3/faceverify";
            Json::Value result =
                this->request(_faceverify, null, data.toStyledString(), null);

            return result;
        }

        Json::Value match(
            Json::Value const & data)
        {
            std::string _match =
                "https://aip.baidubce.com/rest/2.0/face/v3/match";
            Json::Value result =
                this->request(_match, null, data.toStyledString(), null);

            return result;
        }

    };
}
#endif
