//$ Copyright 2015-21, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SnapGridFlowAssetFactories.generated.h"

UCLASS()
class DUNGEONARCHITECTEDITOR_API USnapGridFlowAssetFactory : public UFactory {
    GENERATED_UCLASS_BODY()

    // UFactory interface
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
                              FFeedbackContext* Warn) override;
    virtual bool CanCreateNew() const override;
    // End of UFactory interface
};

UCLASS()
class DUNGEONARCHITECTEDITOR_API USnapGridFlowModuleBoundsAssetFactory : public UFactory {
    GENERATED_UCLASS_BODY()

    // UFactory interface
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
                              FFeedbackContext* Warn) override;
    virtual bool CanCreateNew() const override;
    // End of UFactory interface
};

UCLASS()
class DUNGEONARCHITECTEDITOR_API USnapGridFlowModuleDatabaseFactory : public UFactory {
    GENERATED_UCLASS_BODY()

    // UFactory interface
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
                              FFeedbackContext* Warn) override;
    virtual bool CanCreateNew() const override;
    // End of UFactory interface
};

