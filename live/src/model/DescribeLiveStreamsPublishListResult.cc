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

#include <alibabacloud/live/model/DescribeLiveStreamsPublishListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamsPublishListResult::DescribeLiveStreamsPublishListResult() :
	ServiceResult()
{}

DescribeLiveStreamsPublishListResult::DescribeLiveStreamsPublishListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamsPublishListResult::~DescribeLiveStreamsPublishListResult()
{}

void DescribeLiveStreamsPublishListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPublishInfo = value["PublishInfo"]["LiveStreamPublishInfo"];
	for (auto value : allPublishInfo)
	{
		LiveStreamPublishInfo publishInfoObject;
		if(!value["DomainName"].isNull())
			publishInfoObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			publishInfoObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			publishInfoObject.streamName = value["StreamName"].asString();
		if(!value["StreamUrl"].isNull())
			publishInfoObject.streamUrl = value["StreamUrl"].asString();
		if(!value["PublishTime"].isNull())
			publishInfoObject.publishTime = value["PublishTime"].asString();
		if(!value["StopTime"].isNull())
			publishInfoObject.stopTime = value["StopTime"].asString();
		if(!value["PublishUrl"].isNull())
			publishInfoObject.publishUrl = value["PublishUrl"].asString();
		if(!value["ClientAddr"].isNull())
			publishInfoObject.clientAddr = value["ClientAddr"].asString();
		if(!value["EdgeNodeAddr"].isNull())
			publishInfoObject.edgeNodeAddr = value["EdgeNodeAddr"].asString();
		if(!value["PublishDomain"].isNull())
			publishInfoObject.publishDomain = value["PublishDomain"].asString();
		if(!value["PublishType"].isNull())
			publishInfoObject.publishType = value["PublishType"].asString();
		if(!value["Transcoded"].isNull())
			publishInfoObject.transcoded = value["Transcoded"].asString();
		if(!value["TranscodeId"].isNull())
			publishInfoObject.transcodeId = value["TranscodeId"].asString();
		publishInfo_.push_back(publishInfoObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeLiveStreamsPublishListResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveStreamsPublishListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveStreamsPublishListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveStreamsPublishListResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeLiveStreamsPublishListResult::LiveStreamPublishInfo> DescribeLiveStreamsPublishListResult::getPublishInfo()const
{
	return publishInfo_;
}

