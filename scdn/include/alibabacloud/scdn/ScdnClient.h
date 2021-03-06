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

#ifndef ALIBABACLOUD_SCDN_SCDNCLIENT_H_
#define ALIBABACLOUD_SCDN_SCDNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ScdnExport.h"
#include "model/DescribeScdnRefreshQuotaRequest.h"
#include "model/DescribeScdnRefreshQuotaResult.h"
#include "model/DescribeScdnDomainTrafficDataRequest.h"
#include "model/DescribeScdnDomainTrafficDataResult.h"
#include "model/DescribeScdnDomainDetailRequest.h"
#include "model/DescribeScdnDomainDetailResult.h"
#include "model/DescribeScdnDomainOriginBpsDataRequest.h"
#include "model/DescribeScdnDomainOriginBpsDataResult.h"
#include "model/DescribeScdnCertificateListRequest.h"
#include "model/DescribeScdnCertificateListResult.h"
#include "model/DescribeScdnDomainQpsDataRequest.h"
#include "model/DescribeScdnDomainQpsDataResult.h"
#include "model/DescribeScdnDomainUvDataRequest.h"
#include "model/DescribeScdnDomainUvDataResult.h"
#include "model/DescribeScdnIpInfoRequest.h"
#include "model/DescribeScdnIpInfoResult.h"
#include "model/DescribeScdnDomainConfigsRequest.h"
#include "model/DescribeScdnDomainConfigsResult.h"
#include "model/SetScdnDomainCertificateRequest.h"
#include "model/SetScdnDomainCertificateResult.h"
#include "model/BatchDeleteScdnDomainConfigsRequest.h"
#include "model/BatchDeleteScdnDomainConfigsResult.h"
#include "model/DescribeScdnDomainBpsDataRequest.h"
#include "model/DescribeScdnDomainBpsDataResult.h"
#include "model/PreloadScdnObjectCachesRequest.h"
#include "model/PreloadScdnObjectCachesResult.h"
#include "model/DescribeScdnDomainHitRateDataRequest.h"
#include "model/DescribeScdnDomainHitRateDataResult.h"
#include "model/DescribeScdnUserDomainsRequest.h"
#include "model/DescribeScdnUserDomainsResult.h"
#include "model/StopScdnDomainRequest.h"
#include "model/StopScdnDomainResult.h"
#include "model/AddScdnDomainRequest.h"
#include "model/AddScdnDomainResult.h"
#include "model/DescribeScdnDomainCnameRequest.h"
#include "model/DescribeScdnDomainCnameResult.h"
#include "model/DescribeScdnCertificateDetailRequest.h"
#include "model/DescribeScdnCertificateDetailResult.h"
#include "model/StartScdnDomainRequest.h"
#include "model/StartScdnDomainResult.h"
#include "model/DeleteScdnDomainRequest.h"
#include "model/DeleteScdnDomainResult.h"
#include "model/DescribeScdnServiceRequest.h"
#include "model/DescribeScdnServiceResult.h"
#include "model/DescribeScdnDomainLogRequest.h"
#include "model/DescribeScdnDomainLogResult.h"
#include "model/DescribeScdnDomainPvDataRequest.h"
#include "model/DescribeScdnDomainPvDataResult.h"
#include "model/DescribeScdnUserQuotaRequest.h"
#include "model/DescribeScdnUserQuotaResult.h"
#include "model/DescribeScdnDomainHttpCodeDataRequest.h"
#include "model/DescribeScdnDomainHttpCodeDataResult.h"
#include "model/RefreshScdnObjectCachesRequest.h"
#include "model/RefreshScdnObjectCachesResult.h"
#include "model/DescribeScdnDomainCertificateInfoRequest.h"
#include "model/DescribeScdnDomainCertificateInfoResult.h"
#include "model/CheckScdnServiceRequest.h"
#include "model/CheckScdnServiceResult.h"
#include "model/UpdateScdnDomainRequest.h"
#include "model/UpdateScdnDomainResult.h"
#include "model/DescribeScdnDomainOriginTrafficDataRequest.h"
#include "model/DescribeScdnDomainOriginTrafficDataResult.h"
#include "model/DescribeScdnDomainIspDataRequest.h"
#include "model/DescribeScdnDomainIspDataResult.h"
#include "model/DescribeScdnRefreshTasksRequest.h"
#include "model/DescribeScdnRefreshTasksResult.h"


namespace AlibabaCloud
{
	namespace Scdn
	{
		class ALIBABACLOUD_SCDN_EXPORT ScdnClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeScdnRefreshQuotaResult> DescribeScdnRefreshQuotaOutcome;
			typedef std::future<DescribeScdnRefreshQuotaOutcome> DescribeScdnRefreshQuotaOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnRefreshQuotaRequest&, const DescribeScdnRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainTrafficDataResult> DescribeScdnDomainTrafficDataOutcome;
			typedef std::future<DescribeScdnDomainTrafficDataOutcome> DescribeScdnDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainTrafficDataRequest&, const DescribeScdnDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainDetailResult> DescribeScdnDomainDetailOutcome;
			typedef std::future<DescribeScdnDomainDetailOutcome> DescribeScdnDomainDetailOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainDetailRequest&, const DescribeScdnDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainOriginBpsDataResult> DescribeScdnDomainOriginBpsDataOutcome;
			typedef std::future<DescribeScdnDomainOriginBpsDataOutcome> DescribeScdnDomainOriginBpsDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainOriginBpsDataRequest&, const DescribeScdnDomainOriginBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainOriginBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnCertificateListResult> DescribeScdnCertificateListOutcome;
			typedef std::future<DescribeScdnCertificateListOutcome> DescribeScdnCertificateListOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnCertificateListRequest&, const DescribeScdnCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainQpsDataResult> DescribeScdnDomainQpsDataOutcome;
			typedef std::future<DescribeScdnDomainQpsDataOutcome> DescribeScdnDomainQpsDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainQpsDataRequest&, const DescribeScdnDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainUvDataResult> DescribeScdnDomainUvDataOutcome;
			typedef std::future<DescribeScdnDomainUvDataOutcome> DescribeScdnDomainUvDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainUvDataRequest&, const DescribeScdnDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnIpInfoResult> DescribeScdnIpInfoOutcome;
			typedef std::future<DescribeScdnIpInfoOutcome> DescribeScdnIpInfoOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnIpInfoRequest&, const DescribeScdnIpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnIpInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainConfigsResult> DescribeScdnDomainConfigsOutcome;
			typedef std::future<DescribeScdnDomainConfigsOutcome> DescribeScdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainConfigsRequest&, const DescribeScdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::SetScdnDomainCertificateResult> SetScdnDomainCertificateOutcome;
			typedef std::future<SetScdnDomainCertificateOutcome> SetScdnDomainCertificateOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::SetScdnDomainCertificateRequest&, const SetScdnDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetScdnDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteScdnDomainConfigsResult> BatchDeleteScdnDomainConfigsOutcome;
			typedef std::future<BatchDeleteScdnDomainConfigsOutcome> BatchDeleteScdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::BatchDeleteScdnDomainConfigsRequest&, const BatchDeleteScdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteScdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainBpsDataResult> DescribeScdnDomainBpsDataOutcome;
			typedef std::future<DescribeScdnDomainBpsDataOutcome> DescribeScdnDomainBpsDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainBpsDataRequest&, const DescribeScdnDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::PreloadScdnObjectCachesResult> PreloadScdnObjectCachesOutcome;
			typedef std::future<PreloadScdnObjectCachesOutcome> PreloadScdnObjectCachesOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::PreloadScdnObjectCachesRequest&, const PreloadScdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadScdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainHitRateDataResult> DescribeScdnDomainHitRateDataOutcome;
			typedef std::future<DescribeScdnDomainHitRateDataOutcome> DescribeScdnDomainHitRateDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainHitRateDataRequest&, const DescribeScdnDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnUserDomainsResult> DescribeScdnUserDomainsOutcome;
			typedef std::future<DescribeScdnUserDomainsOutcome> DescribeScdnUserDomainsOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnUserDomainsRequest&, const DescribeScdnUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::StopScdnDomainResult> StopScdnDomainOutcome;
			typedef std::future<StopScdnDomainOutcome> StopScdnDomainOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::StopScdnDomainRequest&, const StopScdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopScdnDomainAsyncHandler;
			typedef Outcome<Error, Model::AddScdnDomainResult> AddScdnDomainOutcome;
			typedef std::future<AddScdnDomainOutcome> AddScdnDomainOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::AddScdnDomainRequest&, const AddScdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddScdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainCnameResult> DescribeScdnDomainCnameOutcome;
			typedef std::future<DescribeScdnDomainCnameOutcome> DescribeScdnDomainCnameOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainCnameRequest&, const DescribeScdnDomainCnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainCnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnCertificateDetailResult> DescribeScdnCertificateDetailOutcome;
			typedef std::future<DescribeScdnCertificateDetailOutcome> DescribeScdnCertificateDetailOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnCertificateDetailRequest&, const DescribeScdnCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::StartScdnDomainResult> StartScdnDomainOutcome;
			typedef std::future<StartScdnDomainOutcome> StartScdnDomainOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::StartScdnDomainRequest&, const StartScdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartScdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteScdnDomainResult> DeleteScdnDomainOutcome;
			typedef std::future<DeleteScdnDomainOutcome> DeleteScdnDomainOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DeleteScdnDomainRequest&, const DeleteScdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnServiceResult> DescribeScdnServiceOutcome;
			typedef std::future<DescribeScdnServiceOutcome> DescribeScdnServiceOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnServiceRequest&, const DescribeScdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainLogResult> DescribeScdnDomainLogOutcome;
			typedef std::future<DescribeScdnDomainLogOutcome> DescribeScdnDomainLogOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainLogRequest&, const DescribeScdnDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainPvDataResult> DescribeScdnDomainPvDataOutcome;
			typedef std::future<DescribeScdnDomainPvDataOutcome> DescribeScdnDomainPvDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainPvDataRequest&, const DescribeScdnDomainPvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainPvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnUserQuotaResult> DescribeScdnUserQuotaOutcome;
			typedef std::future<DescribeScdnUserQuotaOutcome> DescribeScdnUserQuotaOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnUserQuotaRequest&, const DescribeScdnUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainHttpCodeDataResult> DescribeScdnDomainHttpCodeDataOutcome;
			typedef std::future<DescribeScdnDomainHttpCodeDataOutcome> DescribeScdnDomainHttpCodeDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainHttpCodeDataRequest&, const DescribeScdnDomainHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::RefreshScdnObjectCachesResult> RefreshScdnObjectCachesOutcome;
			typedef std::future<RefreshScdnObjectCachesOutcome> RefreshScdnObjectCachesOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::RefreshScdnObjectCachesRequest&, const RefreshScdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshScdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainCertificateInfoResult> DescribeScdnDomainCertificateInfoOutcome;
			typedef std::future<DescribeScdnDomainCertificateInfoOutcome> DescribeScdnDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainCertificateInfoRequest&, const DescribeScdnDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::CheckScdnServiceResult> CheckScdnServiceOutcome;
			typedef std::future<CheckScdnServiceOutcome> CheckScdnServiceOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::CheckScdnServiceRequest&, const CheckScdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckScdnServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdateScdnDomainResult> UpdateScdnDomainOutcome;
			typedef std::future<UpdateScdnDomainOutcome> UpdateScdnDomainOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::UpdateScdnDomainRequest&, const UpdateScdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainOriginTrafficDataResult> DescribeScdnDomainOriginTrafficDataOutcome;
			typedef std::future<DescribeScdnDomainOriginTrafficDataOutcome> DescribeScdnDomainOriginTrafficDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainOriginTrafficDataRequest&, const DescribeScdnDomainOriginTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainOriginTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnDomainIspDataResult> DescribeScdnDomainIspDataOutcome;
			typedef std::future<DescribeScdnDomainIspDataOutcome> DescribeScdnDomainIspDataOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnDomainIspDataRequest&, const DescribeScdnDomainIspDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnDomainIspDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScdnRefreshTasksResult> DescribeScdnRefreshTasksOutcome;
			typedef std::future<DescribeScdnRefreshTasksOutcome> DescribeScdnRefreshTasksOutcomeCallable;
			typedef std::function<void(const ScdnClient*, const Model::DescribeScdnRefreshTasksRequest&, const DescribeScdnRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnRefreshTasksAsyncHandler;

			ScdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ScdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ScdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ScdnClient();
			DescribeScdnRefreshQuotaOutcome describeScdnRefreshQuota(const Model::DescribeScdnRefreshQuotaRequest &request)const;
			void describeScdnRefreshQuotaAsync(const Model::DescribeScdnRefreshQuotaRequest& request, const DescribeScdnRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnRefreshQuotaOutcomeCallable describeScdnRefreshQuotaCallable(const Model::DescribeScdnRefreshQuotaRequest& request) const;
			DescribeScdnDomainTrafficDataOutcome describeScdnDomainTrafficData(const Model::DescribeScdnDomainTrafficDataRequest &request)const;
			void describeScdnDomainTrafficDataAsync(const Model::DescribeScdnDomainTrafficDataRequest& request, const DescribeScdnDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainTrafficDataOutcomeCallable describeScdnDomainTrafficDataCallable(const Model::DescribeScdnDomainTrafficDataRequest& request) const;
			DescribeScdnDomainDetailOutcome describeScdnDomainDetail(const Model::DescribeScdnDomainDetailRequest &request)const;
			void describeScdnDomainDetailAsync(const Model::DescribeScdnDomainDetailRequest& request, const DescribeScdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainDetailOutcomeCallable describeScdnDomainDetailCallable(const Model::DescribeScdnDomainDetailRequest& request) const;
			DescribeScdnDomainOriginBpsDataOutcome describeScdnDomainOriginBpsData(const Model::DescribeScdnDomainOriginBpsDataRequest &request)const;
			void describeScdnDomainOriginBpsDataAsync(const Model::DescribeScdnDomainOriginBpsDataRequest& request, const DescribeScdnDomainOriginBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainOriginBpsDataOutcomeCallable describeScdnDomainOriginBpsDataCallable(const Model::DescribeScdnDomainOriginBpsDataRequest& request) const;
			DescribeScdnCertificateListOutcome describeScdnCertificateList(const Model::DescribeScdnCertificateListRequest &request)const;
			void describeScdnCertificateListAsync(const Model::DescribeScdnCertificateListRequest& request, const DescribeScdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnCertificateListOutcomeCallable describeScdnCertificateListCallable(const Model::DescribeScdnCertificateListRequest& request) const;
			DescribeScdnDomainQpsDataOutcome describeScdnDomainQpsData(const Model::DescribeScdnDomainQpsDataRequest &request)const;
			void describeScdnDomainQpsDataAsync(const Model::DescribeScdnDomainQpsDataRequest& request, const DescribeScdnDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainQpsDataOutcomeCallable describeScdnDomainQpsDataCallable(const Model::DescribeScdnDomainQpsDataRequest& request) const;
			DescribeScdnDomainUvDataOutcome describeScdnDomainUvData(const Model::DescribeScdnDomainUvDataRequest &request)const;
			void describeScdnDomainUvDataAsync(const Model::DescribeScdnDomainUvDataRequest& request, const DescribeScdnDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainUvDataOutcomeCallable describeScdnDomainUvDataCallable(const Model::DescribeScdnDomainUvDataRequest& request) const;
			DescribeScdnIpInfoOutcome describeScdnIpInfo(const Model::DescribeScdnIpInfoRequest &request)const;
			void describeScdnIpInfoAsync(const Model::DescribeScdnIpInfoRequest& request, const DescribeScdnIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnIpInfoOutcomeCallable describeScdnIpInfoCallable(const Model::DescribeScdnIpInfoRequest& request) const;
			DescribeScdnDomainConfigsOutcome describeScdnDomainConfigs(const Model::DescribeScdnDomainConfigsRequest &request)const;
			void describeScdnDomainConfigsAsync(const Model::DescribeScdnDomainConfigsRequest& request, const DescribeScdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainConfigsOutcomeCallable describeScdnDomainConfigsCallable(const Model::DescribeScdnDomainConfigsRequest& request) const;
			SetScdnDomainCertificateOutcome setScdnDomainCertificate(const Model::SetScdnDomainCertificateRequest &request)const;
			void setScdnDomainCertificateAsync(const Model::SetScdnDomainCertificateRequest& request, const SetScdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetScdnDomainCertificateOutcomeCallable setScdnDomainCertificateCallable(const Model::SetScdnDomainCertificateRequest& request) const;
			BatchDeleteScdnDomainConfigsOutcome batchDeleteScdnDomainConfigs(const Model::BatchDeleteScdnDomainConfigsRequest &request)const;
			void batchDeleteScdnDomainConfigsAsync(const Model::BatchDeleteScdnDomainConfigsRequest& request, const BatchDeleteScdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteScdnDomainConfigsOutcomeCallable batchDeleteScdnDomainConfigsCallable(const Model::BatchDeleteScdnDomainConfigsRequest& request) const;
			DescribeScdnDomainBpsDataOutcome describeScdnDomainBpsData(const Model::DescribeScdnDomainBpsDataRequest &request)const;
			void describeScdnDomainBpsDataAsync(const Model::DescribeScdnDomainBpsDataRequest& request, const DescribeScdnDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainBpsDataOutcomeCallable describeScdnDomainBpsDataCallable(const Model::DescribeScdnDomainBpsDataRequest& request) const;
			PreloadScdnObjectCachesOutcome preloadScdnObjectCaches(const Model::PreloadScdnObjectCachesRequest &request)const;
			void preloadScdnObjectCachesAsync(const Model::PreloadScdnObjectCachesRequest& request, const PreloadScdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadScdnObjectCachesOutcomeCallable preloadScdnObjectCachesCallable(const Model::PreloadScdnObjectCachesRequest& request) const;
			DescribeScdnDomainHitRateDataOutcome describeScdnDomainHitRateData(const Model::DescribeScdnDomainHitRateDataRequest &request)const;
			void describeScdnDomainHitRateDataAsync(const Model::DescribeScdnDomainHitRateDataRequest& request, const DescribeScdnDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainHitRateDataOutcomeCallable describeScdnDomainHitRateDataCallable(const Model::DescribeScdnDomainHitRateDataRequest& request) const;
			DescribeScdnUserDomainsOutcome describeScdnUserDomains(const Model::DescribeScdnUserDomainsRequest &request)const;
			void describeScdnUserDomainsAsync(const Model::DescribeScdnUserDomainsRequest& request, const DescribeScdnUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnUserDomainsOutcomeCallable describeScdnUserDomainsCallable(const Model::DescribeScdnUserDomainsRequest& request) const;
			StopScdnDomainOutcome stopScdnDomain(const Model::StopScdnDomainRequest &request)const;
			void stopScdnDomainAsync(const Model::StopScdnDomainRequest& request, const StopScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopScdnDomainOutcomeCallable stopScdnDomainCallable(const Model::StopScdnDomainRequest& request) const;
			AddScdnDomainOutcome addScdnDomain(const Model::AddScdnDomainRequest &request)const;
			void addScdnDomainAsync(const Model::AddScdnDomainRequest& request, const AddScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddScdnDomainOutcomeCallable addScdnDomainCallable(const Model::AddScdnDomainRequest& request) const;
			DescribeScdnDomainCnameOutcome describeScdnDomainCname(const Model::DescribeScdnDomainCnameRequest &request)const;
			void describeScdnDomainCnameAsync(const Model::DescribeScdnDomainCnameRequest& request, const DescribeScdnDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainCnameOutcomeCallable describeScdnDomainCnameCallable(const Model::DescribeScdnDomainCnameRequest& request) const;
			DescribeScdnCertificateDetailOutcome describeScdnCertificateDetail(const Model::DescribeScdnCertificateDetailRequest &request)const;
			void describeScdnCertificateDetailAsync(const Model::DescribeScdnCertificateDetailRequest& request, const DescribeScdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnCertificateDetailOutcomeCallable describeScdnCertificateDetailCallable(const Model::DescribeScdnCertificateDetailRequest& request) const;
			StartScdnDomainOutcome startScdnDomain(const Model::StartScdnDomainRequest &request)const;
			void startScdnDomainAsync(const Model::StartScdnDomainRequest& request, const StartScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartScdnDomainOutcomeCallable startScdnDomainCallable(const Model::StartScdnDomainRequest& request) const;
			DeleteScdnDomainOutcome deleteScdnDomain(const Model::DeleteScdnDomainRequest &request)const;
			void deleteScdnDomainAsync(const Model::DeleteScdnDomainRequest& request, const DeleteScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScdnDomainOutcomeCallable deleteScdnDomainCallable(const Model::DeleteScdnDomainRequest& request) const;
			DescribeScdnServiceOutcome describeScdnService(const Model::DescribeScdnServiceRequest &request)const;
			void describeScdnServiceAsync(const Model::DescribeScdnServiceRequest& request, const DescribeScdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnServiceOutcomeCallable describeScdnServiceCallable(const Model::DescribeScdnServiceRequest& request) const;
			DescribeScdnDomainLogOutcome describeScdnDomainLog(const Model::DescribeScdnDomainLogRequest &request)const;
			void describeScdnDomainLogAsync(const Model::DescribeScdnDomainLogRequest& request, const DescribeScdnDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainLogOutcomeCallable describeScdnDomainLogCallable(const Model::DescribeScdnDomainLogRequest& request) const;
			DescribeScdnDomainPvDataOutcome describeScdnDomainPvData(const Model::DescribeScdnDomainPvDataRequest &request)const;
			void describeScdnDomainPvDataAsync(const Model::DescribeScdnDomainPvDataRequest& request, const DescribeScdnDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainPvDataOutcomeCallable describeScdnDomainPvDataCallable(const Model::DescribeScdnDomainPvDataRequest& request) const;
			DescribeScdnUserQuotaOutcome describeScdnUserQuota(const Model::DescribeScdnUserQuotaRequest &request)const;
			void describeScdnUserQuotaAsync(const Model::DescribeScdnUserQuotaRequest& request, const DescribeScdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnUserQuotaOutcomeCallable describeScdnUserQuotaCallable(const Model::DescribeScdnUserQuotaRequest& request) const;
			DescribeScdnDomainHttpCodeDataOutcome describeScdnDomainHttpCodeData(const Model::DescribeScdnDomainHttpCodeDataRequest &request)const;
			void describeScdnDomainHttpCodeDataAsync(const Model::DescribeScdnDomainHttpCodeDataRequest& request, const DescribeScdnDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainHttpCodeDataOutcomeCallable describeScdnDomainHttpCodeDataCallable(const Model::DescribeScdnDomainHttpCodeDataRequest& request) const;
			RefreshScdnObjectCachesOutcome refreshScdnObjectCaches(const Model::RefreshScdnObjectCachesRequest &request)const;
			void refreshScdnObjectCachesAsync(const Model::RefreshScdnObjectCachesRequest& request, const RefreshScdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshScdnObjectCachesOutcomeCallable refreshScdnObjectCachesCallable(const Model::RefreshScdnObjectCachesRequest& request) const;
			DescribeScdnDomainCertificateInfoOutcome describeScdnDomainCertificateInfo(const Model::DescribeScdnDomainCertificateInfoRequest &request)const;
			void describeScdnDomainCertificateInfoAsync(const Model::DescribeScdnDomainCertificateInfoRequest& request, const DescribeScdnDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainCertificateInfoOutcomeCallable describeScdnDomainCertificateInfoCallable(const Model::DescribeScdnDomainCertificateInfoRequest& request) const;
			CheckScdnServiceOutcome checkScdnService(const Model::CheckScdnServiceRequest &request)const;
			void checkScdnServiceAsync(const Model::CheckScdnServiceRequest& request, const CheckScdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckScdnServiceOutcomeCallable checkScdnServiceCallable(const Model::CheckScdnServiceRequest& request) const;
			UpdateScdnDomainOutcome updateScdnDomain(const Model::UpdateScdnDomainRequest &request)const;
			void updateScdnDomainAsync(const Model::UpdateScdnDomainRequest& request, const UpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateScdnDomainOutcomeCallable updateScdnDomainCallable(const Model::UpdateScdnDomainRequest& request) const;
			DescribeScdnDomainOriginTrafficDataOutcome describeScdnDomainOriginTrafficData(const Model::DescribeScdnDomainOriginTrafficDataRequest &request)const;
			void describeScdnDomainOriginTrafficDataAsync(const Model::DescribeScdnDomainOriginTrafficDataRequest& request, const DescribeScdnDomainOriginTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainOriginTrafficDataOutcomeCallable describeScdnDomainOriginTrafficDataCallable(const Model::DescribeScdnDomainOriginTrafficDataRequest& request) const;
			DescribeScdnDomainIspDataOutcome describeScdnDomainIspData(const Model::DescribeScdnDomainIspDataRequest &request)const;
			void describeScdnDomainIspDataAsync(const Model::DescribeScdnDomainIspDataRequest& request, const DescribeScdnDomainIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnDomainIspDataOutcomeCallable describeScdnDomainIspDataCallable(const Model::DescribeScdnDomainIspDataRequest& request) const;
			DescribeScdnRefreshTasksOutcome describeScdnRefreshTasks(const Model::DescribeScdnRefreshTasksRequest &request)const;
			void describeScdnRefreshTasksAsync(const Model::DescribeScdnRefreshTasksRequest& request, const DescribeScdnRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScdnRefreshTasksOutcomeCallable describeScdnRefreshTasksCallable(const Model::DescribeScdnRefreshTasksRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SCDN_SCDNCLIENT_H_
