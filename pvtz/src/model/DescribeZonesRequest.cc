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

#include <alibabacloud/pvtz/model/DescribeZonesRequest.h>

using AlibabaCloud::Pvtz::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "DescribeZones")
{}

DescribeZonesRequest::~DescribeZonesRequest()
{}

int DescribeZonesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeZonesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeZonesRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeZonesRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeZonesRequest::getLang()const
{
	return lang_;
}

void DescribeZonesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeZonesRequest::getKeyword()const
{
	return keyword_;
}

void DescribeZonesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

int DescribeZonesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeZonesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

