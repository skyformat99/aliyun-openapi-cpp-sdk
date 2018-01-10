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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPCODEDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPCODEDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainHttpCodeDataResult : public ServiceResult
			{
			public:
				struct UsageData
				{
					struct CodeProportionData
					{
						std::string proportion;
						std::string count;
						std::string code;
					};
					std::vector<UsageData::CodeProportionData> value;
					std::string timeStamp;
				};


				DescribeDomainHttpCodeDataResult();
				explicit DescribeDomainHttpCodeDataResult(const std::string &payload);
				~DescribeDomainHttpCodeDataResult();
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getDataInterval()const;
				void setDataInterval(const std::string& dataInterval);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::vector<UsageData> getHttpCodeData()const;
				void setHttpCodeData(const std::vector<UsageData>& httpCodeData);

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::string dataInterval_;
				std::string startTime_;
				std::vector<UsageData> httpCodeData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPCODEDATARESULT_H_