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

#include <alibabacloud/dcdn/model/DescribeDcdnTopDomainsByFlowRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnTopDomainsByFlowRequest;

DescribeDcdnTopDomainsByFlowRequest::DescribeDcdnTopDomainsByFlowRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnTopDomainsByFlow")
{}

DescribeDcdnTopDomainsByFlowRequest::~DescribeDcdnTopDomainsByFlowRequest()
{}

long DescribeDcdnTopDomainsByFlowRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDcdnTopDomainsByFlowRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnTopDomainsByFlowRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDcdnTopDomainsByFlowRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnTopDomainsByFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnTopDomainsByFlowRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnTopDomainsByFlowRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnTopDomainsByFlowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnTopDomainsByFlowRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getAoneId()const
{
	return aoneId_;
}

void DescribeDcdnTopDomainsByFlowRequest::setAoneId(const std::string& aoneId)
{
	aoneId_ = aoneId;
	setParameter("AoneId", aoneId);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnTopDomainsByFlowRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeDcdnTopDomainsByFlowRequest::getLimit()const
{
	return limit_;
}

void DescribeDcdnTopDomainsByFlowRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string DescribeDcdnTopDomainsByFlowRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnTopDomainsByFlowRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDcdnTopDomainsByFlowRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnTopDomainsByFlowRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnTopDomainsByFlowRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getMethod()const
{
	return method_;
}

void DescribeDcdnTopDomainsByFlowRequest::setMethod(const std::string& method)
{
	method_ = method;
	setParameter("Method", method);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnTopDomainsByFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDcdnTopDomainsByFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnTopDomainsByFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnTopDomainsByFlowRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnTopDomainsByFlowRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDcdnTopDomainsByFlowRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnTopDomainsByFlowRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDcdnTopDomainsByFlowRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnTopDomainsByFlowRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDcdnTopDomainsByFlowRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnTopDomainsByFlowRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDcdnTopDomainsByFlowRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnTopDomainsByFlowRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getCategory()const
{
	return category_;
}

void DescribeDcdnTopDomainsByFlowRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

