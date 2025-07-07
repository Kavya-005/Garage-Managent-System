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

#ifndef __AIP_NLP_H__
#define __AIP_NLP_H__

#include "base/base.h"

namespace aip {

    class Nlp: public AipBase
    {
    public:
        
        std::string _lexer =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/lexer";
        
        std::string _lexer_custom =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/lexer_custom";
        
        std::string _dep_parser =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/depparser";
        
        std::string _word_embedding =
            "https://aip.baidubce.com/rpc/2.0/nlp/v2/word_emb_vec";
        
        std::string _dnnlm_cn =
            "https://aip.baidubce.com/rpc/2.0/nlp/v2/dnnlm_cn";
        
        std::string _word_sim_embedding =
            "https://aip.baidubce.com/rpc/2.0/nlp/v2/word_emb_sim";
        
        std::string _simnet =
            "https://aip.baidubce.com/rpc/2.0/nlp/v2/simnet";
        
        std::string _comment_tag =
            "https://aip.baidubce.com/rpc/2.0/nlp/v2/comment_tag";
        
        std::string _sentiment_classify =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/sentiment_classify";
        
        std::string _keyword =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/keyword";
        
        std::string _topic =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/topic";
        
        std::string _ecnet =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/ecnet";
        
        std::string _emotion =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/emotion";
        
        std::string _news_summary =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/news_summary";
        
        std::string _address =
            "https://aip.baidubce.com/rpc/2.0/nlp/v1/address";
        

        Nlp(const std::string & app_id, const std::string & ak, const std::string & sk): AipBase(app_id, ak, sk)
        {
        }

        
        
        Json::Value lexer(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_lexer, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value lexer_custom(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_lexer_custom, null, data.toStyledString(), null);

            return result;
        }
        
        
        Json::Value dep_parser(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_dep_parser, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value word_embedding(
            std::string const & word,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["word"] = word;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_word_embedding, null, data.toStyledString(), null);

            return result;
        }
        
        
        Json::Value dnnlm_cn(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_dnnlm_cn, null, data.toStyledString(), null);

            return result;
        }
        
     
        Json::Value word_sim_embedding(
            std::string const & word_1,
            std::string const & word_2,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["word_1"] = word_1;
            data["word_2"] = word_2;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_word_sim_embedding, null, data.toStyledString(), null);

            return result;
        }
        
        
        Json::Value simnet(
            std::string const & text_1,
            std::string const & text_2,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text_1"] = text_1;
            data["text_2"] = text_2;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_simnet, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value comment_tag(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_comment_tag, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value sentiment_classify(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_sentiment_classify, null, data.toStyledString(), null);

            return result;
        }
        
       
        Json::Value keyword(
            std::string const & title,
            std::string const & content,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["title"] = title;
            data["content"] = content;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_keyword, null, data.toStyledString(), null);

            return result;
        }
        
    
        Json::Value topic(
            std::string const & title,
            std::string const & content,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["title"] = title;
            data["content"] = content;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_topic, null, data.toStyledString(), null);

            return result;
        }
     
        Json::Value ecnet(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_ecnet, null, data.toStyledString(), null);

            return result;
        }
       
        Json::Value emotion(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_emotion, null, data.toStyledString(), null);

            return result;
        }
        
        
        Json::Value news_summary(
            std::string const & content,
            const int & max_summary_len,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["content"] = content;
            data["max_summary_len"] = max_summary_len;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_news_summary, null, data.toStyledString(), null);

            return result;
        }
        
      
        Json::Value address(
            std::string const & text,
            const std::map<std::string, std::string> & options)
        {
            Json::Value data;
            
            data["text"] = text;

            std::map<std::string, std::string>::const_iterator it;
            for (it = options.begin(); it != options.end(); it++)
            {
                data[it->first] = it->second;
            }

            Json::Value result =
                this->request(_address, null, data.toStyledString(), null);

            return result;
        }
        
    };
}
#endif
