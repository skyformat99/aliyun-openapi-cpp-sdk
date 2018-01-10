/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ECS_MODEL_EIPFILLPRODUCTRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_EIPFILLPRODUCTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT EipFillProductResult : public ServiceResult
			{
			public:


				EipFillProductResult();
				explicit EipFillProductResult(const std::string &payload);
				~EipFillProductResult();
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getData()const;
				void setData(const std::string& data);
				std::string getCode()const;
				void setCode(const std::string& code);
				bool getSuccess()const;
				void setSuccess(bool success);

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string message_;
				std::string data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_EIPFILLPRODUCTRESULT_H_