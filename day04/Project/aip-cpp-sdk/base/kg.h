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

#ifndef __AIP_KG_H__
#define __AIP_KG_H__

#include "base/base.h"

namespace aip {

    class Kg: public AipBase
    {
    public:

    
        std::string _create_task =
            "https://aip.baidubce.com/rest/2.0/kg/v1/pie/task_create";
        
        std::string _update_task =
            "https://aip.baidubce.com/rest/2.0/kg/v1/pie/task_update";
        
        std::string _task_info =
            "https://aip.baidubce.com/rest/2.0/kg/v1/pie/task_info";
        
        std::string _task_query =
            "https://aip.baidubce.com/rest/2.0/kg/v1/pie/task_query";
        
        std::string _task_start =
            "https://aip.baidubce.com/rest/2.0/kg/v1/pie/task_start";
        
        std::string _task_status =
            "https://aip.baidubce.com/rest/2.0/kg/v1/pie/task_status";
        

        Kg(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk)
        {
        }
       
        Json::Value create_task(
            std::string const & name,
            std::string const & template_content,
            std::string const & input_mapping_file,
            std::string const & output_file,
            std::string const & url_pattern,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["name"] = name;
            data["template_content"] = template_content;
            data["input_mapping_file"] = input_mapping_file;
            data["output_file"] = output_file;
            data["url_pattern"] = url_pattern;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_create_task, null, data, null);

            return result;
        }
       
        Json::Value update_task(
            const int & id,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["id"] =  std::to_string(id);

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_update_task, null, data, null);

            return result;
        }
        
        Json::Value task_info(
            const int & id,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["id"] =  std::to_string(id);

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_task_info, null, data, null);

            return result;
        }
        
    
        Json::Value task_query(
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_task_query, null, data, null);

            return result;
        }
        
    
        Json::Value task_start(
            const int & id,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["id"] =  std::to_string(id);

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_task_start, null, data, null);

            return result;
        }
      
        Json::Value task_status(
            const int & id,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["id"] =  std::to_string(id);

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_task_status, null, data, null);

            return result;
        }
        

    };
}
#endif
