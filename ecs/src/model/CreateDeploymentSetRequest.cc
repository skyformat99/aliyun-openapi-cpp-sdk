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

#include <alibabacloud/ecs/model/CreateDeploymentSetRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateDeploymentSetRequest::CreateDeploymentSetRequest() :
	EcsRequest("CreateDeploymentSet")
{}

CreateDeploymentSetRequest::~CreateDeploymentSetRequest()
{}

long CreateDeploymentSetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDeploymentSetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDeploymentSetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDeploymentSetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDeploymentSetRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDeploymentSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDeploymentSetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDeploymentSetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDeploymentSetRequest::getDescription()const
{
	return description_;
}

void CreateDeploymentSetRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDeploymentSetRequest::getDeploymentSetName()const
{
	return deploymentSetName_;
}

void CreateDeploymentSetRequest::setDeploymentSetName(const std::string& deploymentSetName)
{
	deploymentSetName_ = deploymentSetName;
	setParameter("DeploymentSetName", deploymentSetName);
}

long CreateDeploymentSetRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDeploymentSetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDeploymentSetRequest::getRegionId()const
{
	return regionId_;
}

void CreateDeploymentSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDeploymentSetRequest::getGranularity()const
{
	return granularity_;
}

void CreateDeploymentSetRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setParameter("Granularity", granularity);
}

std::string CreateDeploymentSetRequest::getDomain()const
{
	return domain_;
}

void CreateDeploymentSetRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateDeploymentSetRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDeploymentSetRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDeploymentSetRequest::getStrategy()const
{
	return strategy_;
}

void CreateDeploymentSetRequest::setStrategy(const std::string& strategy)
{
	strategy_ = strategy;
	setParameter("Strategy", strategy);
}
