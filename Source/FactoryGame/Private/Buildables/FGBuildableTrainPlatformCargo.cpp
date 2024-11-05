// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableTrainPlatformCargo.h"
#include "FGInventoryComponent.h"
#include "Net/UnrealNetwork.h"

AFGBuildableTrainPlatformCargo::AFGBuildableTrainPlatformCargo() : Super() {
	this->mFreightCargoType = EFreightCargoType::FCT_NONE;
	this->mStorageSizeX = 4;
	this->mStorageSizeY = 4;
	this->mMagicBoxSkelMeshComponent = nullptr;
	this->mCargoMeshComponent = nullptr;
	this->mCanUnloadAny = false;
	this->mIsFullUnload = false;
	this->mCanLoadAny = false;
	this->mIsFullLoad = false;
	this->mTimeToCompleteLoad = 20.0;
	this->mTimeToSwapLoadVisibility = 10.0;
	this->mTimeToCompleteUnload = 20.0;
	this->mTimeToSwapUnloadVisibility = 10.0;
	this->mWaitForConditionUpdatePeriod = 2.5;
	this->mDockingRuleSet.DockingDefinition = ETrainDockingDefinition::TDD_LoadUnloadOnce;
	this->mDockingRuleSet.DockForDuration = 15.0;
	this->mDockingRuleSet.IsDurationAndRule = false;
	this->mDockingRuleSet.IgnoreFullLoadUnloadIfTransferBlockedByFilters = false;
	this->mHasFullyLoadUnloadRule = false;
	this->mDockForDuration = 0.0;
	this->mMustDockForDuration = false;
	this->mCurrentDockForDuration = 0.0;
	this->mHasAnyRelevantStacksToMove = false;
	this->mAllowDepartureNoValidItemsToTransfer = false;
	this->mInventory = CreateDefaultSubobject<UFGInventoryComponent>(TEXT("inventory"));
	this->mHasDockedActor = false;
	this->mIsInLoadMode = true;
	this->mIsLoadUnloading = false;
	this->mShouldExecuteLoadOrUnload = false;
	this->mRanCompleteBeforeNone = false;
	this->mLastDockedFreight = nullptr;
	this->mTimeSinceLastLoadTransferUpdate = 0.0;
	this->mTimeSinceLastUnloadTransferUpdate = 0.0;
	this->mSmoothedLoadRate = 0.0;
	this->mSmoothedUnloadRate = 0.0;
	this->mReplicatedOutflowRate = 0.0;
	this->mReplicatedInflowRate = 0.0;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->mPlatformConnections.Add(mPlatformConnection0);
	this->mPlatformConnections.Add(mPlatformConnection1);
}
void AFGBuildableTrainPlatformCargo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableTrainPlatformCargo, mCanUnloadAny);
	DOREPLIFETIME(AFGBuildableTrainPlatformCargo, mIsFullUnload);
	DOREPLIFETIME(AFGBuildableTrainPlatformCargo, mCanLoadAny);
	DOREPLIFETIME(AFGBuildableTrainPlatformCargo, mIsFullLoad);
	DOREPLIFETIME(AFGBuildableTrainPlatformCargo, mIsInLoadMode);
	DOREPLIFETIME(AFGBuildableTrainPlatformCargo, mIsLoadUnloading);
}
void AFGBuildableTrainPlatformCargo::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
void AFGBuildableTrainPlatformCargo::BeginPlay(){ }
void AFGBuildableTrainPlatformCargo::Destroyed(){ }
bool AFGBuildableTrainPlatformCargo::Factory_PeekOutput_Implementation(const  UFGFactoryConnectionComponent* connection, TArray< FInventoryItem >& out_items, TSubclassOf< UFGItemDescriptor > type) const{ return bool(); }
bool AFGBuildableTrainPlatformCargo::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
bool AFGBuildableTrainPlatformCargo::Dock( AFGRailroadVehicle* actor){ return bool(); }
void AFGBuildableTrainPlatformCargo::Undock(){ }
void AFGBuildableTrainPlatformCargo::SetIsInLoadMode(bool isInLoadMode){ }
bool AFGBuildableTrainPlatformCargo::GetIsInLoadMode() const{ return bool(); }
bool AFGBuildableTrainPlatformCargo::IsLoadUnloading() const{ return bool(); }
float AFGBuildableTrainPlatformCargo::GetDockedVehicleOffset() const{ return float(); }
void AFGBuildableTrainPlatformCargo::NotifyTrainDocked( AFGRailroadVehicle* railroadVehicle,  AFGBuildableRailroadStation* initiatedByStation){ }
void AFGBuildableTrainPlatformCargo::UpdateDockingSequence(){ }
void AFGBuildableTrainPlatformCargo::CancelDockingSequence(){ }
void AFGBuildableTrainPlatformCargo::UpdatePowerConnectionFromTrack(){ }
void AFGBuildableTrainPlatformCargo::Factory_Tick(float dt){ }
void AFGBuildableTrainPlatformCargo::Factory_CollectInput_Implementation(){ }
void AFGBuildableTrainPlatformCargo::Factory_PullPipeInput_Implementation(float dt){ }
void AFGBuildableTrainPlatformCargo::Factory_PushPipeOutput_Implementation(float dt){ }
bool AFGBuildableTrainPlatformCargo::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableTrainPlatformCargo::OnRep_UpdateDockingStatus(){ }
void AFGBuildableTrainPlatformCargo::OnRep_DockedRailroadVehicle(){ }
bool AFGBuildableTrainPlatformCargo::FilterResourceForms(TSubclassOf< UFGItemDescriptor > itemDesc, int32 idx) const{ return bool(); }
int32 AFGBuildableTrainPlatformCargo::GetFirstIndexWithItem(UFGInventoryComponent* inventory) const{ return int32(); }
void AFGBuildableTrainPlatformCargo::TransferInventory(UFGInventoryComponent* from, UFGInventoryComponent* to){ }
void AFGBuildableTrainPlatformCargo::LoadUnloadVehicleComplete(){ }
void AFGBuildableTrainPlatformCargo::EvaluateFreightInventoryStatus(){ }
void AFGBuildableTrainPlatformCargo::UpdateUnloadSettings(){ }
void AFGBuildableTrainPlatformCargo::UpdateLoadSettings(){ }
void AFGBuildableTrainPlatformCargo::SwapCargoContainerVisibility(){ }
void AFGBuildableTrainPlatformCargo::HidePlatformCargoContainer(){ }
void AFGBuildableTrainPlatformCargo::ShowPlatformCargoContainer(){ }
void AFGBuildableTrainPlatformCargo::MatchVisualsOfCargoContainerToTrain(){ }
void AFGBuildableTrainPlatformCargo::ForceUpdateAnimInstance(){ }
void AFGBuildableTrainPlatformCargo::OnCargoPowerStateChanged(bool hasPower){ }
void AFGBuildableTrainPlatformCargo::EvaluateRuleSet(){ }
bool AFGBuildableTrainPlatformCargo::CanCompleteDocking(){ return bool(); }
bool AFGBuildableTrainPlatformCargo::IsLoadUnloadBlockedByNoneFilter(){ return bool(); }
void AFGBuildableTrainPlatformCargo::UpdateItemTransferRate(int32 numItemsTransfered){ }
float AFGBuildableTrainPlatformCargo::GetCurrentItemTransferRate(){ return float(); }
bool AFGBuildableTrainPlatformCargo::ShouldLockIncomingOutgoing() const{ return bool(); }
void AFGBuildableTrainPlatformCargo::OnRep_SmoothedLoadRate(){ }
void AFGBuildableTrainPlatformCargo::OnRep_SmoothedUnloadRate(){ }
FName AFGBuildableTrainPlatformCargo::mMagicBoxComponentName = FName();
FName AFGBuildableTrainPlatformCargo::mCargoMeshComponentName = FName();
