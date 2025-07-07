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

#ifndef __AIP_OCR_H__
#define __AIP_OCR_H__

#include "base/base.h"

namespace aip {

    class Ocr: public AipBase
    {
    public:

    
        std::string _general_basic =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/general_basic";
        
        std::string _accurate_basic =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/accurate_basic";
        
        std::string _general =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/general";
        
        std::string _accurate =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/accurate";
        
        std::string _general_enhanced =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/general_enhanced";
        
        std::string _web_image =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/webimage";
        
        std::string _idcard =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/idcard";
        
        std::string _bankcard =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/bankcard";
        
        std::string _driving_license =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/driving_license";
        
        std::string _vehicle_license =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/vehicle_license";
        
        std::string _license_plate =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/license_plate";
        
        std::string _business_license =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/business_license";
        
        std::string _receipt =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/receipt";
        
        std::string _train_ticket =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/train_ticket";
        
        std::string _taxi_receipt =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/taxi_receipt";
        
        std::string _form =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/form";
        
        std::string _table_recognize =
            "https://aip.baidubce.com/rest/2.0/solution/v1/form_ocr/request";
        
        std::string _table_result_get =
            "https://aip.baidubce.com/rest/2.0/solution/v1/form_ocr/get_request_result";
        
        std::string _vin_code =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/vin_code";
        
        std::string _quota_invoice =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/quota_invoice";
        
        std::string _household_register =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/household_register";
        
        std::string _HK_Macau_exitentrypermit =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/HK_Macau_exitentrypermit";
        
        std::string _taiwan_exitentrypermit =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/taiwan_exitentrypermit";
        
        std::string _birth_certificate =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/birth_certificate";
        
        std::string _vehicle_invoice =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/vehicle_invoice";
        
        std::string _vehicle_certificate =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/vehicle_certificate";
        
        std::string _invoice =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/invoice";
        
        std::string _air_ticket =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/air_ticket";
        
        std::string _insurance_documents =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/insurance_documents";
        
        std::string _vat_invoice =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/vat_invoice";
        
        std::string _qrcode =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/qrcode";
        
        std::string _numbers =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/numbers";
        
        std::string _lottery =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/lottery";
        
        std::string _passport =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/passport";
        
        std::string _business_card =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/business_card";
        
        std::string _handwriting =
            "https://aip.baidubce.com/rest/2.0/ocr/v1/handwriting";
        
        std::string _custom =
            "https://aip.baidubce.com/rest/2.0/solution/v1/iocr/recognise";
        

        Ocr(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk)
        {
        }
        
        
        Json::Value general_basic(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_general_basic, null, data, null);

            return result;
        }
        
        
        Json::Value general_basic_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_general_basic, null, data, null);

            return result;
        }
        
        Json::Value accurate_basic(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_accurate_basic, null, data, null);

            return result;
        }
        
       
        Json::Value general(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_general, null, data, null);

            return result;
        }
        
      
        Json::Value general_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_general, null, data, null);

            return result;
        }
        
        
        Json::Value accurate(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_accurate, null, data, null);

            return result;
        }
        
       
        Json::Value general_enhanced(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_general_enhanced, null, data, null);

            return result;
        }
      
        Json::Value general_enhanced_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_general_enhanced, null, data, null);

            return result;
        }
        
       
        Json::Value web_image(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_web_image, null, data, null);

            return result;
        }
        
        Json::Value web_image_url(
            std::string const & url,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["url"] = url;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_web_image, null, data, null);

            return result;
        }
        
     
        Json::Value idcard(
            std::string const & image,
            std::string const & id_card_side,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());
            data["id_card_side"] = id_card_side;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_idcard, null, data, null);

            return result;
        }

        Json::Value bankcard(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_bankcard, null, data, null);

            return result;
        }
 
        Json::Value driving_license(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_driving_license, null, data, null);

            return result;
        }
        
       
        Json::Value vehicle_license(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vehicle_license, null, data, null);

            return result;
        }
        
        Json::Value license_plate(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_license_plate, null, data, null);

            return result;
        }
        
        Json::Value business_license(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_business_license, null, data, null);

            return result;
        }
        
        Json::Value receipt(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_receipt, null, data, null);

            return result;
        }
        
      
        Json::Value train_ticket(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_train_ticket, null, data, null);

            return result;
        }
      
        Json::Value taxi_receipt(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_taxi_receipt, null, data, null);

            return result;
        }
        
      
        Json::Value form(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_form, null, data, null);

            return result;
        }
       
        Json::Value table_recognize(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_table_recognize, null, data, null);

            return result;
        }
        
        Json::Value table_result_get(
            std::string const & request_id,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["request_id"] = request_id;

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_table_result_get, null, data, null);

            return result;
        }
      
        Json::Value vin_code(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vin_code, null, data, null);

            return result;
        }
      
        Json::Value quota_invoice(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_quota_invoice, null, data, null);

            return result;
        }
        
        
        Json::Value household_register(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_household_register, null, data, null);

            return result;
        }
        
       
        Json::Value HK_Macau_exitentrypermit(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_HK_Macau_exitentrypermit, null, data, null);

            return result;
        }
        
      
        Json::Value taiwan_exitentrypermit(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_taiwan_exitentrypermit, null, data, null);

            return result;
        }
        
      
        Json::Value birth_certificate(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_birth_certificate, null, data, null);

            return result;
        }
        
       
        Json::Value vehicle_invoice(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vehicle_invoice, null, data, null);

            return result;
        }
    
        Json::Value vehicle_certificate(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vehicle_certificate, null, data, null);

            return result;
        }
        
     
        Json::Value invoice(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_invoice, null, data, null);

            return result;
        }
        
        
        Json::Value air_ticket(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_air_ticket, null, data, null);

            return result;
        }
        
       
        Json::Value insurance_documents(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_insurance_documents, null, data, null);

            return result;
        }
        
       
        Json::Value vat_invoice(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_vat_invoice, null, data, null);

            return result;
        }
        
        Json::Value qrcode(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_qrcode, null, data, null);

            return result;
        }
       
        Json::Value numbers(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_numbers, null, data, null);

            return result;
        }
       
        Json::Value lottery(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_lottery, null, data, null);

            return result;
        }
        
       
        Json::Value passport(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_passport, null, data, null);

            return result;
        }
        
       
        Json::Value business_card(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_business_card, null, data, null);

            return result;
        }
        
        
        Json::Value handwriting(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_handwriting, null, data, null);

            return result;
        }
        
        
        Json::Value custom(
            std::string const & image,
            const std::map<std::string, std::string> & options)
        {
            std::map<std::string, std::string> data;
            
            data["image"] = base64_encode(image.c_str(), (int) image.size());

            std::copy(options.begin(), options.end(), std::inserter(data, data.end()));

            Json::Value result =
                this->request(_custom, null, data, null);

            return result;
        }
        

    };
}
#endif
