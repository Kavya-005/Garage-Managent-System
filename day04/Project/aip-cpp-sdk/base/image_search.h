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

#ifndef __AIP_IMAGESEARCH_H__
#define __AIP_IMAGESEARCH_H__

#include "base/base.h"

namespace aip {

    class Imagesearch: public AipBase
    {
    public:

    
        std::string _same_hq_add =
            "https://aip.baidubce.com/rest/2.0/realtime_search/same_hq/add";
        
        std::string _same_hq_search =
            "https://aip.baidubce.com/rest/2.0/realtime_search/same_hq/search";
        
        std::string _same_hq_update =
            "https://aip.baidubce.com/rest/2.0/realtime_search/same_hq/update";
        
        std::string _same_hq_delete =
            "https://aip.baidubce.com/rest/2.0/realtime_search/same_hq/delete";
        
        std::string _similar_add =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/similar/add";
        
        std::string _similar_search =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/similar/search";
        
        std::string _similar_update =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/similar/update";
        
        std::string _similar_delete =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/similar/delete";
        
        std::string _product_add =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/product/add";
        
        std::string _product_search =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/product/search";
        
        std::string _product_update =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/product/update";
        
        std::string _product_delete =
            "https://aip.baidubce.com/rest/2.0/image-classify/v1/realtime_search/product/delete";
        

        Imagesearch(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk)
        {
        }
        
        
        Json::Value same_hq_add(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_add, null, data, null);

            return result;
        }
        
        
        Json::Value same_hq_add_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_add, null, data, null);

            return result;
        }
        
       
        Json::Value same_hq_search(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_search, null, data, null);

            return result;
        }
        
       
        Json::Value same_hq_search_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_search, null, data, null);

            return result;
        }
       
        Json::Value same_hq_update(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_update, null, data, null);

            return result;
        }
      
        Json::Value same_hq_update_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_update, null, data, null);

            return result;
        }
        
      
        Json::Value same_hq_update_cont_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_update, null, data, null);

            return result;
        }
       
        Json::Value same_hq_delete_by_image(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_delete, null, data, null);

            return result;
        }
      
        Json::Value same_hq_delete_by_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_delete, null, data, null);

            return result;
        }
       
        Json::Value same_hq_delete_by_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_same_hq_delete, null, data, null);

            return result;
        }
    
        Json::Value similar_add(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_add, null, data, null);

            return result;
        }
        
        
        Json::Value similar_add_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_add, null, data, null);

            return result;
        }
        
       
        Json::Value similar_search(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_search, null, data, null);

            return result;
        }
       
        Json::Value similar_search_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_search, null, data, null);

            return result;
        }
        
       
        Json::Value similar_update(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_update, null, data, null);

            return result;
        }
        
       
        Json::Value similar_update_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_update, null, data, null);

            return result;
        }
        
        Json::Value similar_update_cont_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_update, null, data, null);

            return result;
        }
        
       
        Json::Value similar_delete_by_image(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_delete, null, data, null);

            return result;
        }
        
      
        Json::Value similar_delete_by_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_delete, null, data, null);

            return result;
        }
       
        Json::Value similar_delete_by_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_similar_delete, null, data, null);

            return result;
        }
        
       
        Json::Value product_add(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_add, null, data, null);

            return result;
        }
      
        Json::Value product_add_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_add, null, data, null);

            return result;
        }
        
       
        Json::Value product_search(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_search, null, data, null);

            return result;
        }
      
        Json::Value product_search_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_search, null, data, null);

            return result;
        }
        
      
        Json::Value product_update(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_update, null, data, null);

            return result;
        }
        
        
        Json::Value product_update_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_update, null, data, null);

            return result;
        }
        
      
        Json::Value product_update_cont_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_update, null, data, null);

            return result;
        }
       
        Json::Value product_delete_by_image(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_delete, null, data, null);

            return result;
        }
        
        Json::Value product_delete_by_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_delete, null, data, null);

            return result;
        }
       
        Json::Value product_delete_by_sign(
            std::string const & cont_sign,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["cont_sign"] = cont_sign;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_product_delete, null, data, null);

            return result;
        }
        

    };
}
#endif
