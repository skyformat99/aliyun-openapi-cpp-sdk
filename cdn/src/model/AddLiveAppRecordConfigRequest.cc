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

#include <alibabacloud/cdn/model/AddLiveAppRecordConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

AddLiveAppRecordConfigRequest::AddLiveAppRecordConfigRequest() :
	CdnRequest("AddLiveAppRecordConfig")
{}

AddLiveAppRecordConfigRequest::~AddLiveAppRecordConfigRequest()
{}

std::string AddLiveAppRecordConfigRequest::getOssBucket()const
{
	return ossBucket_;
}

void AddLiveAppRecordConfigRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setParameter("OssBucket", ossBucket);
}

std::string AddLiveAppRecordConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveAppRecordConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string AddLiveAppRecordConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveAppRecordConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddLiveAppRecordConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveAppRecordConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string AddLiveAppRecordConfigRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void AddLiveAppRecordConfigRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setParameter("OssEndpoint", ossEndpoint);
}

std::string AddLiveAppRecordConfigRequest::getOssObjectPrefix()const
{
	return ossObjectPrefix_;
}

void AddLiveAppRecordConfigRequest::setOssObjectPrefix(const std::string& ossObjectPrefix)
{
	ossObjectPrefix_ = ossObjectPrefix;
	setParameter("OssObjectPrefix", ossObjectPrefix);
}

long AddLiveAppRecordConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveAppRecordConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLiveAppRecordConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLiveAppRecordConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

