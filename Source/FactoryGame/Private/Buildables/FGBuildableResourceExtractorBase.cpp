// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableResourceExtractorBase.h"
#include "FGConstructDisqualifier.h"
#include "Hologram/FGResourceExtractorHologram.h"
#include "Net/UnrealNetwork.h"

void UFGResourceExtractorClipboardRCO::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
void UFGResourceExtractorClipboardRCO::Server_PasteSettings_Implementation(class AFGBuildableResourceExtractorBase* extractor, AFGCharacterPlayer* player, float overclock, float productionBoost, TSubclassOf<UFGPowerShardDescriptor> overclockingShard, TSubclassOf<UFGPowerShardDescriptor> productionBoostShard){ }
int AFGBuildableResourceExtractorBase::GetDebugLevel(){ return int(); }
void AFGBuildableResourceExtractorBase::SetDebugLevel(int level){ }
void AFGBuildableResourceExtractorBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableResourceExtractorBase, mExtractableResource);
}
void AFGBuildableResourceExtractorBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildableResourceExtractorBase::AFGBuildableResourceExtractorBase() : Super() {
	this->mRestrictToNodeType = nullptr;
	this->mOnlyAllowCertainResources = false;
	this->mMustPlaceOnResourceDisqualifier = UFGCDNeedsResourceNode::StaticClass();
	this->mExtractorTypeName = TEXT("None");
	this->mTryFindMissingResource = false;
	this->mExtractResourceNode = nullptr;
	this->mExtractableResource = nullptr;
	this->mCanChangePotential = true;
	this->mHologramClass = AFGResourceExtractorHologram::StaticClass();
}
void AFGBuildableResourceExtractorBase::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableResourceExtractorBase::Destroyed(){ Super::Destroyed(); }
bool AFGBuildableResourceExtractorBase::DisconnectExtractableResource(){ return bool(); }
void AFGBuildableResourceExtractorBase::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
UFGFactoryClipboardSettings* AFGBuildableResourceExtractorBase::CopySettings_Implementation(){ return nullptr; }
bool AFGBuildableResourceExtractorBase::PasteSettings_Implementation(UFGFactoryClipboardSettings* settings) { return bool(); }
void AFGBuildableResourceExtractorBase::SetExtractableResource(TScriptInterface< IFGExtractableResourceInterface > extractableInterface){ }
void AFGBuildableResourceExtractorBase::SetResourceNode( AFGResourceNode* resourceNode){ }
UFXSystemAsset* AFGBuildableResourceExtractorBase::GetMiningParticle(){ return nullptr; }
bool AFGBuildableResourceExtractorBase::CanOccupyResource(const TScriptInterface<  IFGExtractableResourceInterface >& resource) const{ return bool(); }
bool AFGBuildableResourceExtractorBase::IsAllowedOnResource(const TScriptInterface<  IFGExtractableResourceInterface >& resource) const{ return bool(); }
AActor* AFGBuildableResourceExtractorBase::TryFindMissingResource(){ return nullptr; }
void AFGBuildableResourceExtractorBase::OnExtractableResourceSet(){ }
