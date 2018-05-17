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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYBROKERDEMANDREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYBROKERDEMANDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryBrokerDemandRequest : public RpcServiceRequest
			{

			public:
				QueryBrokerDemandRequest();
				~QueryBrokerDemandRequest();

				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				int pageSize_;
				std::string bizId_;
				int currentPage_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYBROKERDEMANDREQUEST_H_