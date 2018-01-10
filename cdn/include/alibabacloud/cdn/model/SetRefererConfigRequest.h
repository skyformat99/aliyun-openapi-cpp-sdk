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

#ifndef ALIBABACLOUD_CDN_MODEL_SETREFERERCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETREFERERCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cdn/CdnRequest.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT SetRefererConfigRequest : public CdnRequest
			{

			public:
				SetRefererConfigRequest();
				~SetRefererConfigRequest();

				std::string getReferList()const;
				void setReferList(const std::string& referList);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getReferType()const;
				void setReferType(const std::string& referType);
				std::string getDisableAst()const;
				void setDisableAst(const std::string& disableAst);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAllowEmpty()const;
				void setAllowEmpty(const std::string& allowEmpty);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string referList_;
				std::string securityToken_;
				std::string domainName_;
				std::string referType_;
				std::string disableAst_;
				long ownerId_;
				std::string allowEmpty_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETREFERERCONFIGREQUEST_H_