// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryColoringTypes.h"
#include "FGInventoryComponent.h"

UFGFactoryCustomizationDescriptor::UFGFactoryCustomizationDescriptor() : Super() {
	this->mIcon = nullptr;
}
#if WITH_EDITOR
void UFGFactoryCustomizationDescriptor_Material::Sanitize(TSubclassOf<UFGFactoryCustomizationDescriptor_Material> MaterialToSanitize, FString invalidTypeName, TArray<TSubclassOf<class AFGBuildable>> &mPurgeList){ }
void UFGFactoryCustomizationDescriptor_Material::Purge(TSubclassOf<UFGFactoryCustomizationDescriptor_Material> MaterialToSanitize, TArray<TSubclassOf<class AFGBuildable>> mPurgeList){ }
#endif 
bool UFGFactoryCustomizationDescriptor_Material::BuildableRecipeIsMappedTo(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
bool UFGFactoryCustomizationDescriptor_Material::AddType(TSubclassOf<  AFGBuildable > inBuildable, TSubclassOf<UFGRecipe> inRecipe){ return bool(); }
void UFGFactoryCustomizationDescriptor_PaintFinish::GetPaintFinishSettings(TSubclassOf<UFGFactoryCustomizationDescriptor_PaintFinish> Class, float& Roughness, float& Metallic, bool& HasForcedColor, FLinearColor& ForcedColor){ }
void UFGFactorySkinActorData::GetSkinComponentDataForSkinActorData(TSubclassOf< UFGFactorySkinActorData > skinClass, TMap< TSubclassOf< UFGFactoryCustomizationDescriptor_Skin >, FFactorySkinComponentGroup >& out_componentGroupData){ }
#if WITH_EDITOR
EDataValidationResult UFGFactoryCustomizationCollection::IsDataValid(TArray< FText >& ValidationErrors){ return EDataValidationResult::Valid; }
#endif 
UFGFactoryCustomizationCollection::UFGFactoryCustomizationCollection() : Super() {
	this->mCustomizationClass = nullptr;
}
void FFactoryCustomizationData::Initialize( AFGGameState* gameState, int32 forceDataSize){ }
void FFactoryCustomizationData::InlineCombine(const FFactoryCustomizationData& other){ }
void FFactoryCustomizationData::UpdateHasPowerData(){ }
void FFactoryCustomizationData::GetAppliedRecipes(class UWorld* worldContext, TArray<TSubclassOf<class UFGRecipe>>& out_recipes) const{ }
TArray<struct FInventoryStack> FFactoryCustomizationData::GetCustomizationRefunds(class UWorld* worldContext, const FFactoryCustomizationData& baseCustomizationData, const FFactoryCustomizationData* newCustomizationData) { return TArray<FInventoryStack>(); }
