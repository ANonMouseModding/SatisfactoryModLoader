// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipeManager.h"

AFGRecipeManager* AFGRecipeManager::Get( UWorld* world){ return nullptr; }
AFGRecipeManager* AFGRecipeManager::Get( UObject* worldContext){ return nullptr; }
void AFGRecipeManager::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGRecipeManager::BeginPlay(){ }
void AFGRecipeManager::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRecipeManager::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRecipeManager::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRecipeManager::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRecipeManager::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGRecipeManager::NeedTransform_Implementation(){ return bool(); }
bool AFGRecipeManager::ShouldSave_Implementation() const{ return bool(); }
void AFGRecipeManager::AddAvailableRecipe( TSubclassOf< UFGRecipe > recipe){ }
void AFGRecipeManager::GetAllAvailableRecipes( TArray< TSubclassOf< UFGRecipe > >& out_recipes){ }
void AFGRecipeManager::GetAvailableRecipesForProducer( TSubclassOf< UObject > forProducer, TArray< TSubclassOf< UFGRecipe > >& out_recipes){ }
void AFGRecipeManager::GetAffordableRecipesForProducer(  AFGCharacterPlayer* player, TSubclassOf< UObject > forProducer, TArray< TSubclassOf< UFGRecipe > >& out_recipes){ }
bool AFGRecipeManager::IsRecipeAvailable( TSubclassOf< UFGRecipe > recipeClass){ return bool(); }
TArray< TSubclassOf< UFGRecipe > > AFGRecipeManager::FindRecipesByIngredient( TSubclassOf< UFGItemDescriptor > ingredient) const{ return TArray<TSubclassOf<UFGRecipe> >(); }
TArray< TSubclassOf< UFGRecipe > > AFGRecipeManager::FindRecipesByProduct( TSubclassOf< UFGItemDescriptor > product) const{ return TArray<TSubclassOf<UFGRecipe> >(); }
void AFGRecipeManager::ResetAllRecipes(){ }
void AFGRecipeManager::Debug_DumpStateToLog() const{ }
void AFGRecipeManager::FilterRecipesByProducer( const TArray< TSubclassOf< UFGRecipe > >& inRecipes, TSubclassOf< UObject > forProducer, TArray< TSubclassOf< UFGRecipe > >& out_recipes){ }
