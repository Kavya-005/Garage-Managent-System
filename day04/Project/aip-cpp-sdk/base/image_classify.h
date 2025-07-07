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

#ifndef __AIP_IMAGECLASSIFY_H__
#define __AIP_IMAGECLASSIFY_H__

#include "base/base.h"

namespace aip {

    class Imageclassify: public AipBase
    {
    public:

    
        std::string _advanced_general =
            "https://aip.baidubce.com/rest/2.0/image-classify/v2/advanced_general";
        
        std::string _dish_detect =
            "https://aip.baidubce.com/rest/2.0/image-classify/v2/dish";
        
        std::string _car_detect =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/car";
        
        std::string _vehicle_detect =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/vehicle_detect";
        
        std::string _vehicle_damage =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/vehicle_damage";
        
        std::string _logo_search =
            "https://aip.baidubce.com/rest/2.0/image-classify/v2/logo";
        
        std::string _logo_add =
            "https://aip.baidubce.com/rest/2.0/realtime_search/v1/logo/add";
        
        std::string _logo_delete =
            "https://aip.baidubce.com/rest/2.0/realtime_search/v1/logo/delete";
        
        std::string _animal_detect =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/animal";
        
        std::string _plant_detect =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/plant";
        
        std::string _object_detect =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/object_detect";
        
        std::string _landmark =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/landmark";
        
        std::string _flower =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/flower";
        
        std::string _ingredient =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/classify/ingredient";
        
        std::string _redwine =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/redwine";
        
        std::string _currency =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/currency";
        

        Imageclassify(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk)
        {
        }
        
        Json::Value advanced_general(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_advanced_general, null, data, null);

            return result;
        }
       
        Json::Value dish_detect(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_dish_detect, null, data, null);

            return result;
        }
        
        
        Json::Value car_detect(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_car_detect, null, data, null);

            return result;
        }
       
        Json::Value vehicle_detect(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vehicle_detect, null, data, null);

            return result;
        }
        
        
        Json::Value vehicle_damage(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vehicle_damage, null, data, null);

            return result;
        }
        
        Json::Value logo_search(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_logo_search, null, data, null);

            return result;
        }
        
        Json::Value logo_add(
            std::string const & image,
            std::string const & brief,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            data["brief"] = brief;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_logo_add, null, data, null);

            return result;
        }
       
        Json::Value logo_delete_by_image(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_logo_delete, null, data, null);

            return result;
        }
      
        Json::Value logo_delete_by_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_logo_delete, null, data, null);

            return result;
        }
        
        
        Json::Value animal_detect(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_animal_detect, null, data, null);

            return result;
        }
        
        
        Json::Value plant_detect(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_plant_detect, null, data, null);

            return result;
        }
        
        
        Json::Value object_detect(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_object_detect, null, data, null);

            return result;
        }
        
        Json::Value landmark(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_landmark, null, data, null);

            return result;
        }
        
        Json::Value flower(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_flower, null, data, null);

            return result;
        }
       
        Json::Value ingredient(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_ingredient, null, data, null);

            return result;
        }
       
        Json::Value redwine(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_redwine, null, data, null);

            return result;
        }
      
        Json::Value currency(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_currency, null, data, null);

            return result;
        }
        

    };
}
#endif
