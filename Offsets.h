#ifndef XT_OFFSETS_H
#define XT_OFFSETS_H

namespace OffsetsAll64 {
	uintptr_t Gworld = 0;
	uintptr_t Gname = 0;
	uintptr_t ViewWorld = 0;
	uintptr_t NetDriver = 0;
	uintptr_t ServerConnection = 0;
	uintptr_t PlayerController = 0;
    uintptr_t STExtraBaseCharacter = 0;
	uintptr_t Mesh = 0;
	uintptr_t FixAttachInfoList = 0;
	uintptr_t MinLOD = 0;
	uintptr_t Children = 0;
	uintptr_t DrawShootLineTime = 0;
	uintptr_t UploadInterval = 0;
	uintptr_t CurBulletNumInClip = 0;
	uintptr_t bDead = 0;
	uintptr_t Health = 0;
	uintptr_t TeamID = 0;
	uintptr_t Role = 0;
	uintptr_t bIsAI = 0; 
	uintptr_t PlayerName = 0;
	uintptr_t bIsWeaponFiring = 0;
    uintptr_t bIsGunADS = 0;
    uintptr_t STPlayerController = 0;
    uintptr_t PlayerCameraManager = 0;
    uintptr_t CameraCache = 0;
    uintptr_t MinimalViewInfo = 0;
    uintptr_t MovementCharacter = 0;
	uintptr_t CurrentVehicle = 0;
    uintptr_t ReplicatedMovement = 0;
    uintptr_t Velocity = 0;
	uintptr_t RootComponent = 0;
	uintptr_t ParachuteEquipItems = 0;
	uintptr_t ThirdPersonCameraComponent = 0; 
    uintptr_t FieldOfView = 0;
    uintptr_t WeaponManagerComponent = 0; 
    uintptr_t CurrWeapon = 0;
    uintptr_t ShootWeaponEntityComp = 0;
    uintptr_t BulletFireSpeed = 0;
    uintptr_t ShootInterval = 0;
    uintptr_t AccessoriesVRecoilFactor = 0;
    uintptr_t AccessoriesHRecoilFactor = 0;
    uintptr_t AccessoriesRecoveryFactor = 0;
    uintptr_t GameDeviationFactor = 0;
    uintptr_t RecoilKickADS = 0;
    uintptr_t ExtraHitPerformScale = 0;
    uintptr_t AnimationKick = 0;
    uintptr_t SRecoilInfo = 0;
    uintptr_t AutoAimingConfig = 0;
    uintptr_t SwitchWeaponSpeedScale = 0; 
    uintptr_t VehicleCommon = 0;
    uintptr_t VHealth = 0;
    uintptr_t VHealthMax = 0;
    uintptr_t VFuel = 0;
    uintptr_t VFuelMax = 0;
	uintptr_t SlotWeapon = 0;
	uintptr_t ViewPitchMin =0;
    uintptr_t ViewPitchMax = 0;
    uintptr_t ViewYawMin = 0;
    uintptr_t ViewYawMax = 0;
	
//Telegram : @G100_m

    
    
void GameType64(){
    
 //global 64
     GWorld:  0x58,0x78  
     GWorld:  0x58, 0x78  
	
	 NetDriver = 0x78;
	//NetDriver* NetDriver;//[Offset: 
	
	 ServerConnection = 0x78;
	//NetConnection* ServerConnection;//[Offset:
	
	 PlayerController = 0x564;
	//PlayerController* PlayerController;//[Offset:
	
     STExtraBaseCharacter = 0x2dd0; ///
    //STExtraBaseCharacter* STExtraBaseCharacter;//[Offset:
    
	 Mesh = 0x510;
    //Class: Character.Pawn.Actor.Object
	//SkeletalMeshComponent* Mesh;//[Offset:
	
	 FixAttachInfoList = 0x2;
	//FixAttachInfoList
	
	 MinLOD = 0x984; ///
	//int MinLOD;//[Offset:
	
	 Children = 0x1f8;
	//Actor*[] Children;//[Offset:
	
	 DrawShootLineTime = 0x1914;
	//DrawShootLineTime
	
	 UploadInterval = 0x1e0; ///
    //float UploadInterval;//[Offset:
	
	 CurBulletNumInClip = 0x8; ///
	//int CurBulletNumInClip;//[Offset: ///

	 bDead = 0x48; ///
	//bool bDead;//(ByteOffset: 0, ByteMask: 1, FieldMask: 1)[Offset:
	
	 Health = 0x30; ///
	 //Class: STExtraCharacter.UAECharacter.Character.Pawn.Actor.Object
	//float Health;//[Offset:
	
	 TeamID = 0x998;
	//Class: UAECharacter.Character.Pawn.Actor.Object
	//int TeamID;//[Offset:
	
	 Role = 0x1a8;
	//byte Role;//[Offset:

	 bIsAI = 0xa30; ///
	 //bool bEnsure;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset: 
	//bool bIsAI;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
	
	 PlayerName = 0x960; ///
	 //Class: UAECharacter.Character.Pawn.Actor.Object
	//FString PlayerName;//[Offset:

	 bIsWeaponFiring = 0x1788; ///
	//bool bIsWeaponFiring;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
	
     bIsGunADS = 0x10e1; ///
    //bool bIsGunADS;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
    
     STPlayerController = 0x49e8; ///
    //STExtraPlayerController* STPlayerController;//[Offset:
    
     PlayerCameraManager = 0x548;
    //PlayerCameraManager* PlayerCameraManager;//[Offset:
    
     CameraCache = 0x10;
    //CameraCacheEntry CameraCache;//[Offset:
    
     MinimalViewInfo = 0x24;
    //MinimalViewInfo POV;//[Offset:
    
     MovementCharacter = 0x4B8;
	 //Class: Character.Pawn.Actor.Object
    //CharacterMovementComponent* CharacterMovement;//[Offset:
    
	 CurrentVehicle = 0xe70; ///
	 //Class: STExtraCharacter.UAECharacter.Character.Pawn.Actor.Object
    //STExtraVehicleBase* CurrentVehicle;//[Offset:
    
     ReplicatedMovement = 0x110;
    //RepMovement ReplicatedMovement;//[Offset:
    
     Velocity = 0x2c0; ///
	 //Class: MovementComponent.ActorComponent.Object
    //Vector Velocity;//[Offset: 
	
	 RootComponent = 0x208;
	//SceneComponent* RootComponent;//[Offset:
	
	// ParachuteEquipItems = 0x1b8; ///
	 ParachuteEquipItems = 0x218;///
    //int[] ParachuteEquipItems;//[Offset:
    
	 CurrWeapon = 0x30; ///
    //STExtraWeapon* CurrentWeaponReplicated;//[Offset: 
	
	 ShootWeaponEntityComp = 0x398; ///
	//ShootWeaponEntity* ShootWeaponEntityComp;//[Offset:

     WeaponManagerComponent = 0x5c8; ///
	//CharacterWeaponManagerComponent* WeaponManagerComponent;//[Offset:

	 AccessoriesVRecoilFactor = 0xbc8;///
	 AccessoriesHRecoilFactor = 0xbd0;///
	 AccessoriesRecoveryFactor = 0xbcc;///
	 //Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object
	//float AccessoriesVRecoilFactor;//[Offset:
	//float AccessoriesHRecoilFactor;//[Offset:
	//float AccessoriesRecoveryFactor;//[Offset:
    
     GameDeviationFactor = 0xc2c;
	 //Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object
    //float GameDeviationFactor;//[Offset: 
	
     AutoAimingConfig = 0x110; ///
	 //Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object
	// AutoAimingConfig AutoAimingConfig;//[Offset:
    
	 ThirdPersonCameraComponent = 0x1cb0; ///
	//CameraComponent* ThirdPersonCameraComponent;//[Offset:
	
	 FieldOfView = 0x39c; ///
	 //Class: CameraComponent.SceneComponent.ActorComponent.Object
	//float FieldOfView;//[Offset:
	
	 BulletFireSpeed = 0x560; ///
	 
	 ShootInterval = 0x640; ///
	 
     RecoilKickADS = 0x4;///
    
     ExtraHitPerformScale = 0xcf8; ///
    
     AnimationKick = 0xcf4; ///
    
     SwitchWeaponSpeedScale = 0x2bb4; ///
	//  Class: STExtraBaseCharacter.STExtraCharacter.UAECharacter.Character.Pawn.Actor.Object
	//float SwitchWeaponSpeedScale 
    
     VehicleCommon = 0xbf0; ///
    //VehicleCommonComponent* VehicleCommon;//[Offset:
    
     VHealth = 0x6e9;
	 //Class: VehicleCommonComponent.VehicleComponent.LuaActorComponent.ActorComponent.Object
    //float HP;//[Offset:
     VHealthMax = 0x3b0;
    //float HPMax;//[Offset: 0x2a0, Size: 0x4]
     VFuel = 0x7f3;
    //float Fuel;//[Offset: 0x2c8, Size: 0x4]
     VFuelMax = 0x3b0;
	//float FuelMax;//[Offset: 0x2c4, Size: 0x4]
	
	SlotWeapon = 0x6f2;
	
	ViewPitchMin =0x1d50;
    ViewPitchMax = 0x1d50;
    ViewYawMin = 0x1d58;
    ViewYawMax = 0x1d58;

    }
}

//Telegram : @JungliCheats

namespace OffsetsAll32 {
	uintptr_t Gworld = 0;
	uintptr_t Gname = 0;
	uintptr_t ViewWorld = 0;
	uintptr_t NetDriver = 0;
	uintptr_t ServerConnection = 0;
	uintptr_t PlayerController = 0;
    uintptr_t STExtraBaseCharacter = 0;
	uintptr_t Mesh = 0;
	uintptr_t FixAttachInfoList = 0;
	uintptr_t MinLOD = 0;
	uintptr_t Children = 0;
	uintptr_t DrawShootLineTime = 0;
	uintptr_t UploadInterval = 0;
	uintptr_t CurBulletNumInClip = 0;
	uintptr_t bDead = 0;
	uintptr_t Health = 0;
	uintptr_t TeamID = 0;
	uintptr_t Role = 0;
	uintptr_t bIsAI = 0; 
	uintptr_t PlayerName = 0;
	uintptr_t bIsWeaponFiring = 0;
    uintptr_t bIsGunADS = 0;
    uintptr_t STPlayerController = 0;
    uintptr_t PlayerCameraManager = 0;
    uintptr_t CameraCache = 0;
    uintptr_t MinimalViewInfo = 0;
    uintptr_t MovementCharacter = 0;
	uintptr_t CurrentVehicle = 0;
    uintptr_t ReplicatedMovement = 0;
    uintptr_t Velocity = 0;
	uintptr_t RootComponent = 0;
	uintptr_t ParachuteEquipItems = 0;
	uintptr_t ThirdPersonCameraComponent = 0; 
    uintptr_t FieldOfView = 0;
    uintptr_t WeaponManagerComponent = 0; 
    uintptr_t CurrWeapon = 0;
    uintptr_t ShootWeaponEntityComp = 0;
    uintptr_t BulletFireSpeed = 0;
    uintptr_t ShootInterval = 0;
    uintptr_t AccessoriesVRecoilFactor = 0;
    uintptr_t AccessoriesHRecoilFactor = 0;
    uintptr_t AccessoriesRecoveryFactor = 0;
    uintptr_t GameDeviationFactor = 0;
    uintptr_t RecoilKickADS = 0;
    uintptr_t ExtraHitPerformScale = 0;
    uintptr_t AnimationKick = 0;
    uintptr_t SRecoilInfo = 0;
    uintptr_t AutoAimingConfig = 0;
    uintptr_t SwitchWeaponSpeedScale = 0; 
    uintptr_t VehicleCommon = 0;
    uintptr_t VHealth = 0;
    uintptr_t VHealthMax = 0;
    uintptr_t VFuel = 0;
    uintptr_t VFuelMax = 0;
	uintptr_t ViewPitchMin = 0;
    uintptr_t ViewPitchMax = 0;
    uintptr_t ViewYawMin = 0;
    uintptr_t ViewYawMax = 0;
    uintptr_t SlotWeapon = 0;
    
//Telegram : @JungliCheats

void GameType32(){
    	
 //gl 32
     Gworld = 0x93faef8;
	 Gname = 0x8eac4a4;
	 
	 NetDriver = 0x24;
	//NetDriver* NetDriver;//[Offset: 
	
	 ServerConnection = 0x60;
	//NetConnection* ServerConnection;//[Offset:
	
	 PlayerController = 0x20;
	//PlayerController* PlayerController;//[Offset:
	
     STExtraBaseCharacter = 0x1ca8;
    //STExtraBaseCharacter* STExtraBaseCharacter;//[Offset:
    
	 Mesh = 0x354;
    //Class: Character.Pawn.Actor.Object
	//SkeletalMeshComponent* Mesh;//[Offset:
	
	 FixAttachInfoList = 0x150;
	//FixAttachInfoList
	
	 MinLOD = 0x6b0; //0x68c
	//int MinLOD;//[Offset:
	
	 Children = 0x14c;
	//Actor*[] Children;//[Offset:
	
	 DrawShootLineTime = 0xf4;
	//DrawShootLineTime
	
	 UploadInterval = 0x108;
    //float UploadInterval;//[Offset:
	
	 CurBulletNumInClip = 0xb90;
	//int CurBulletNumInClip;//[Offset: 0xd60, Size: 4]

	 bDead = 0xa2c;
	//bool bDead;//(ByteOffset: 0, ByteMask: 1, FieldMask: 1)[Offset: 0xcfc, Size: 1]
	
	 Health = 0xa14;
	//float Health;//[Offset: 0xcb8, Size: 4]
	
	 TeamID = 0x6b4;
	//Class: UAECharacter.Character.Pawn.Actor.Object
	//int TeamID;//[Offset: 0x8c0, Size: 4]
	
	 Role = 0x108;
	//byte Role;//[Offset: 0x140, Size: 1]

	 bIsAI = 0x74d; //bool bEnsure;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset: 
	//bool bIsAI;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
	
	 PlayerName = 0x658;
	//FString PlayerName;//[Offset: 0x878, Size: 16]

	 bIsWeaponFiring = 0x1044;
	//bool bIsWeaponFiring;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset: 0x14b8, Size: 1]
	
     bIsGunADS = 0xbe9;
    //bool bIsGunADS;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset: 0xf59, Size: 1]
    
     STPlayerController = 0x30ec;
    //STExtraPlayerController* STPlayerController;//[Offset:
    
     PlayerCameraManager = 0x378;
    //PlayerCameraManager* PlayerCameraManager;//[Offset:
    
     CameraCache = 0x380;
    //CameraCacheEntry CameraCache;//[Offset:
    
     MinimalViewInfo = 0x10;
    //MinimalViewInfo POV;//[Offset:
    
     MovementCharacter = 0x358;
    //CharacterMovementComponent* CharacterMovement;//[Offset:
    
	 CurrentVehicle = 0xa4c;
    //STExtraVehicleBase* CurrentVehicle;//[Offset:
    
     ReplicatedMovement = 0x80;
    //RepMovement ReplicatedMovement;//[Offset:
    
     Velocity = 0xd0;
    //Vector Velocity;//[Offset: 
	
	 RootComponent = 0x158;
	//SceneComponent* RootComponent;//[Offset: 0x1b8, Size: 8]
	
	 ParachuteEquipItems = 0x160;
    //int[] ParachuteEquipItems;//[Offset: 0x158, Size: 16]
    
	 ThirdPersonCameraComponent = 0x13fc; //CameraComponent* ThirdPersonCameraComponent
     FieldOfView = 0x2c0; //float FieldOfView
    
    
     WeaponManagerComponent = 0x1a90; //CharacterWeaponManagerComponent* WeaponManagerComponent
     CurrWeapon = 0x40c; //STExtraWeapon* CurrentWeaponReplicated
     ShootWeaponEntityComp = 0x40c;  //ShootWeaponEntity* ShootWeaponEntityComp
    
    //Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object
    
     BulletFireSpeed = 0x420;
     ShootInterval = 0x44c;
    
     AccessoriesVRecoilFactor = 0x930;
     AccessoriesHRecoilFactor = 0x934;
     AccessoriesRecoveryFactor = 0x938;
    
     GameDeviationFactor = 0x998;
    
     RecoilKickADS = 0xa48;
    
     ExtraHitPerformScale = 0xa4c;
    
     AnimationKick = 0xa64;
    
     
    
     AutoAimingConfig = 0x7c0;
    
     SwitchWeaponSpeedScale = 0x1eec; //float SwitchWeaponSpeedScale 
    
     VehicleCommon = 0x79c;
    //VehicleCommonComponent* VehicleCommon;//[Offset: 0x960, Size: 0x8]
    
     VHealth = 0x1e8;
    //float HP;//[Offset: 0x2a4, Size: 0x4]
    
     VHealthMax = 0x1e4;
    //float HPMax;//[Offset: 0x2a0, Size: 0x4]
    
     VFuel = 0x244;
    //float Fuel;//[Offset: 0x2c8, Size: 0x4]
    
     VFuelMax = 0x240;
	//float FuelMax;//[Offset: 0x2c4, Size: 0x4]
	
	ViewPitchMin = 0x1aa0;
    ViewPitchMax = 0x1aa4;
    ViewYawMin = 0x1aa8;
    ViewYawMax = 0x1aac;
	SlotWeapon = 0X1D0;

}

}



//Telegram : @G100_m


#endif 
//Telegram : @G100_m


