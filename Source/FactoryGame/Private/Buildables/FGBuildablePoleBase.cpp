// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePoleBase.h"

#if WITH_EDITORONLY_DATA
#endif 
#if WITH_EDITOR
void AFGBuildablePoleBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
#endif 
void AFGBuildablePoleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}
bool AFGBuildablePoleBase::ShouldBeConsideredForBase_Implementation(){ return bool(); }
bool AFGBuildablePoleBase::ShouldShowCenterGuidelinesForHologram(const AFGHologram* hologram) const{ return bool(); }
struct FPoleHeightMesh AFGBuildablePoleBase::FindBestHeightMesh(float inHeight) const{ return FPoleHeightMesh(); }
void AFGBuildablePoleBase::PostLoad(){ Super::PostLoad(); }
void AFGBuildablePoleBase::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
