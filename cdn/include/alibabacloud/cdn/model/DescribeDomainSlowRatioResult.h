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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSLOWRATIORESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSLOWRATIORESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainSlowRatioResult : public ServiceResult
			{
			public:
				struct SlowRatioData
				{
					int slowUsers;
					std::string ispNameEn;
					std::string ispNameZh;
					std::string time;
					std::string regionNameEn;
					int totalUsers;
					float slowRatio;
					std::string regionNameZh;
				};


				DescribeDomainSlowRatioResult();
				explicit DescribeDomainSlowRatioResult(const std::string &payload);
				~DescribeDomainSlowRatioResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getDataInterval()const;
				void setDataInterval(int dataInterval);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::vector<SlowRatioData> getSlowRatioDataPerInterval()const;
				void setSlowRatioDataPerInterval(const std::vector<SlowRatioData>& slowRatioDataPerInterval);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string endTime_;
				int pageSize_;
				int pageNumber_;
				int dataInterval_;
				std::string startTime_;
				std::vector<SlowRatioData> slowRatioDataPerInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINSLOWRATIORESULT_H_