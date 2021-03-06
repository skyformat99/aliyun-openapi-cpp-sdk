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

#include <alibabacloud/ecs/model/CancelSimulatedSystemEventsRequest.h>

using AlibabaCloud::Ecs::Model::CancelSimulatedSystemEventsRequest;

CancelSimulatedSystemEventsRequest::CancelSimulatedSystemEventsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CancelSimulatedSystemEvents")
{}

CancelSimulatedSystemEventsRequest::~CancelSimulatedSystemEventsRequest()
{}

std::vector<std::string> CancelSimulatedSystemEventsRequest::getEventId()const
{
	return eventId_;
}

void CancelSimulatedSystemEventsRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int i = 0; i!= eventId.size(); i++)
		setParameter("EventId."+ std::to_string(i), eventId.at(i));
}

long CancelSimulatedSystemEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelSimulatedSystemEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CancelSimulatedSystemEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CancelSimulatedSystemEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CancelSimulatedSystemEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CancelSimulatedSystemEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CancelSimulatedSystemEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CancelSimulatedSystemEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CancelSimulatedSystemEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CancelSimulatedSystemEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CancelSimulatedSystemEventsRequest::getCallerType()const
{
	return callerType_;
}

void CancelSimulatedSystemEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CancelSimulatedSystemEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelSimulatedSystemEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CancelSimulatedSystemEventsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CancelSimulatedSystemEventsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CancelSimulatedSystemEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void CancelSimulatedSystemEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CancelSimulatedSystemEventsRequest::getRegionId()const
{
	return regionId_;
}

void CancelSimulatedSystemEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CancelSimulatedSystemEventsRequest::getEnable()const
{
	return enable_;
}

void CancelSimulatedSystemEventsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CancelSimulatedSystemEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void CancelSimulatedSystemEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CancelSimulatedSystemEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CancelSimulatedSystemEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CancelSimulatedSystemEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CancelSimulatedSystemEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CancelSimulatedSystemEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void CancelSimulatedSystemEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CancelSimulatedSystemEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void CancelSimulatedSystemEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CancelSimulatedSystemEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelSimulatedSystemEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelSimulatedSystemEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelSimulatedSystemEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CancelSimulatedSystemEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void CancelSimulatedSystemEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CancelSimulatedSystemEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelSimulatedSystemEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CancelSimulatedSystemEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CancelSimulatedSystemEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CancelSimulatedSystemEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CancelSimulatedSystemEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CancelSimulatedSystemEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CancelSimulatedSystemEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CancelSimulatedSystemEventsRequest::getRequestId()const
{
	return requestId_;
}

void CancelSimulatedSystemEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

