// Thanks for https://github.com/a2x/ <3
// Чуть-чуть изменил и оптимизировал для deadlock
// 2024-09-20 16:34:28.518673900 UTC

#pragma once

#include <cstddef>

namespace dumper {
    namespace schemas {
        namespace client_dll {
            // Parent: CBodyComponent
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
            }
            // Parent: C_BaseEntity
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x558; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x560; // CHitboxComponent
                constexpr std::ptrdiff_t m_bInitModelEffects = 0x5A8; // bool
                constexpr std::ptrdiff_t m_bIsStaticProp = 0x5A9; // bool
                constexpr std::ptrdiff_t m_nLastAddDecal = 0x5AC; // int32
                constexpr std::ptrdiff_t m_nDecalsAdded = 0x5B0; // int32
                constexpr std::ptrdiff_t m_iOldHealth = 0x5B4; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0x5B8; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0x5B9; // RenderFx_t
                constexpr std::ptrdiff_t m_szAddModifier = 0x5C0; // CUtlString
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0x5C8; // bool
                constexpr std::ptrdiff_t m_bHasCollision = 0x5E8; // bool
                constexpr std::ptrdiff_t m_vSupport = 0x5EC; // Vector
                constexpr std::ptrdiff_t m_clrRender = 0x5F8; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x600; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x668; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0x669; // bool
                constexpr std::ptrdiff_t m_Collision = 0x670; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0x720; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x778; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0x77C; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0x780; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0x784; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0x788; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0x78C; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0x790; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0x794; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x7A0; // Vector
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x7B0; // float32
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x7B8; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0x7D0; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0x800; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0x808; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0x80C; // bool
            }
            // Parent: CPlayerPawnComponent
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_vecPunchAngleVel = 0x58; // QAngle
                constexpr std::ptrdiff_t m_nPunchAngleJoltTickClientSide = 0x70; // GameTick_t
                constexpr std::ptrdiff_t m_nPunchAngleJoltTick = 0x74; // GameTick_t
                constexpr std::ptrdiff_t m_PlayerFog = 0x78; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xB8; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0xBC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xC0; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xC8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x140; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x158; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x15C; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x160; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1C8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1CC; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1D1; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1E5; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1EC; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x200; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x214; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x218; // QAngle
            }
            // Parent: CEntityComponent
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
            }
            // Parent: CGameSceneNode
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x170; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x3D0; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3D1; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3D2; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x3D4; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3D8; // uint8
            }
            // Parent: CPlayer_MovementServices
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x210; // int32
            }
            // Parent: C_BaseEntity
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x558; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x588; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x58C; // char[129]
            }
            // Parent: C_BaseEntity
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x560; // int32
                constexpr std::ptrdiff_t m_CommandContext = 0x568; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x600; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x608; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x60C; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x610; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x614; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x618; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x61C; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x620; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x638; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x63C; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x640; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x6C8; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x6D0; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x6D4; // uint32
            }
            // Parent: C_BaseCombatCharacter
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xD68; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0xD70; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xD78; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0xD80; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0xD88; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0xD90; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xD98; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0xDA0; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0xDA8; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xDB8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0xE08; // uint32
                constexpr std::ptrdiff_t v_angle = 0xE0C; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0xE18; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0xE24; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0xE28; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0xEBC; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0xEC8; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0xECC; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0xED8; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0xEE0; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0xEE4; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0xEF0; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0xEF4; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0xEF8; // int32
                constexpr std::ptrdiff_t m_hController = 0xEFC; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0xF00; // bool
            }
            // Parent: CCitadelPlayerPawnBase
            namespace C_CitadelPlayerPawn {
                constexpr std::ptrdiff_t m_angEyeAngles = 0xF80; // QAngle
                constexpr std::ptrdiff_t m_angClientCamera = 0xF98; // QAngle
                constexpr std::ptrdiff_t m_eZipLineLaneColor = 0xFA4; // CMsgLaneColor
                constexpr std::ptrdiff_t m_nLevel = 0xFA8; // int32
                constexpr std::ptrdiff_t m_nCurrencies = 0xFAC; // int32[4]
                constexpr std::ptrdiff_t m_nSpentCurrencies = 0xFBC; // int32[4]
                constexpr std::ptrdiff_t m_flLastSpawnTime = 0xFCC; // GameTime_t
                constexpr std::ptrdiff_t m_flRespawnTime = 0xFD0; // GameTime_t
                constexpr std::ptrdiff_t m_bInRegenerationZone = 0xFD4; // bool
                constexpr std::ptrdiff_t m_bInItemShopZone = 0xFD5; // bool
                constexpr std::ptrdiff_t m_timeRevealedOnMinimapByNPC = 0xFD8; // GameTime_t
                constexpr std::ptrdiff_t m_vecFullSellPriceItems = 0xFE0; // C_NetworkUtlVectorBase<CUtlStringToken>
                constexpr std::ptrdiff_t m_vecFullSellPriceAbilityUpgrades = 0xFF8; // C_NetworkUtlVectorBase<FullSellPriceAbilityUpgrades_t>
                constexpr std::ptrdiff_t m_bNetworkDisconnected = 0x1010; // bool
                constexpr std::ptrdiff_t m_bHasIncomingThreats = 0x1011; // bool
                constexpr std::ptrdiff_t m_bLearningAbility = 0x1012; // bool
                constexpr std::ptrdiff_t m_nFlashStartTick = 0x1014; // int32
                constexpr std::ptrdiff_t m_nFlashMaxStartTick = 0x1018; // int32
                constexpr std::ptrdiff_t m_nFlashFadeStartTick = 0x101C; // int32
                constexpr std::ptrdiff_t m_nFlashEndTick = 0x1020; // int32
                constexpr std::ptrdiff_t m_nFlashMaxAlpha = 0x1024; // int8
                constexpr std::ptrdiff_t m_nDeducedLane = 0x1028; // int32
                constexpr std::ptrdiff_t m_bDismissedReportCard = 0x102C; // bool
                constexpr std::ptrdiff_t m_flCurrentHealingAmount = 0x1030; // float32
                constexpr std::ptrdiff_t m_angLockedEyeAngles = 0x1034; // QAngle
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0x1040; // CCitadelAbilityComponent
                constexpr std::ptrdiff_t m_CCitadelHeroComponent = 0x11E0; // CCitadelHeroComponent
                constexpr std::ptrdiff_t m_flRichPresenceUpdateInterval = 0x12A0; // float32
                constexpr std::ptrdiff_t m_bAnimGraphMovementClipped = 0x1398; // bool
                constexpr std::ptrdiff_t m_bAnimGraphMovementDisableGravity = 0x1399; // bool
                constexpr std::ptrdiff_t m_bAnimGraphMovementDirectAirControl = 0x139A; // bool
                constexpr std::ptrdiff_t m_bLastMoveWasAnimGraph = 0x139B; // bool
                constexpr std::ptrdiff_t m_flPredTimeSlowedStart = 0x139C; // GameTime_t
                constexpr std::ptrdiff_t m_flPredTimeSlowedEnd = 0x13A0; // GameTime_t
                constexpr std::ptrdiff_t m_flPredSlowSpeed = 0x13A4; // float32
                constexpr std::ptrdiff_t m_flTimeSlowedStart = 0x13A8; // GameTime_t[4]
                constexpr std::ptrdiff_t m_flTimeSlowedEnd = 0x13B8; // GameTime_t[4]
                constexpr std::ptrdiff_t m_flSlowSpeed = 0x13C8; // float32[4]
                constexpr std::ptrdiff_t m_flSprintAnimSuppressEndTime = 0x13D8; // GameTime_t
                constexpr std::ptrdiff_t m_iCurSlowSlot = 0x13DC; // int32
                constexpr std::ptrdiff_t m_vShootTestOffsetStanding = 0x13E0; // Vector
                constexpr std::ptrdiff_t m_vShootTestOffsetCrouching = 0x13EC; // Vector
                constexpr std::ptrdiff_t m_leanStartTime = 0x13F8; // GameTime_t
            }
            // Parent: None
            namespace PlayerDataGlobal_t {
                constexpr std::ptrdiff_t m_iLevel = 0x8; // int32
                constexpr std::ptrdiff_t m_iMaxAmmo = 0xC; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x10; // int32
                constexpr std::ptrdiff_t m_flHealthRegen = 0x14; // float32
                constexpr std::ptrdiff_t m_flRespawnTime = 0x18; // GameTime_t
                constexpr std::ptrdiff_t m_nHeroID = 0x1C; // HeroID_t
                constexpr std::ptrdiff_t m_iGoldNetWorth = 0x20; // int32
                constexpr std::ptrdiff_t m_iAPNetWorth = 0x24; // int32
                constexpr std::ptrdiff_t m_iCreepGold = 0x28; // int32
                constexpr std::ptrdiff_t m_iCreepGoldSoloBonus = 0x2C; // int32
                constexpr std::ptrdiff_t m_iCreepGoldKill = 0x30; // int32
                constexpr std::ptrdiff_t m_iCreepGoldAirOrb = 0x34; // int32
                constexpr std::ptrdiff_t m_iCreepGoldGroundOrb = 0x38; // int32
                constexpr std::ptrdiff_t m_iCreepGoldDeny = 0x3C; // int32
                constexpr std::ptrdiff_t m_iCreepGoldNeutral = 0x40; // int32
                constexpr std::ptrdiff_t m_iFarmBaseline = 0x44; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x48; // int32
                constexpr std::ptrdiff_t m_iPlayerKills = 0x4C; // int32
                constexpr std::ptrdiff_t m_iPlayerAssists = 0x50; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x54; // int32
                constexpr std::ptrdiff_t m_iDenies = 0x58; // int32
                constexpr std::ptrdiff_t m_iLastHits = 0x5C; // int32
                constexpr std::ptrdiff_t m_bAlive = 0x60; // bool
                constexpr std::ptrdiff_t m_nHeroDraftPosition = 0x64; // int32
                constexpr std::ptrdiff_t m_bUltimateTrained = 0x68; // bool
                constexpr std::ptrdiff_t m_flUltimateCooldownStart = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_flUltimateCooldownEnd = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_bHasRejuvenator = 0x74; // bool
                constexpr std::ptrdiff_t m_bHasRebirth = 0x75; // bool
                constexpr std::ptrdiff_t m_iHeroDamage = 0x78; // int32
                constexpr std::ptrdiff_t m_iHeroHealing = 0x7C; // int32
                constexpr std::ptrdiff_t m_iSelfHealing = 0x80; // int32
                constexpr std::ptrdiff_t m_iObjectiveDamage = 0x84; // int32
                constexpr std::ptrdiff_t m_nHeroAbilityUpgradeBits = 0x88; // int32[4]
                constexpr std::ptrdiff_t m_vecUpgrades = 0x98; // C_NetworkUtlVectorBase<CUtlStringToken>
                constexpr std::ptrdiff_t m_vecBonusCounterAbilities = 0xB0; // C_NetworkUtlVectorBase<CUtlStringToken>
                constexpr std::ptrdiff_t m_vecBonusCounterValues = 0xC8; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_tHeldItem = 0xE0; // CUtlStringToken
                constexpr std::ptrdiff_t m_vecImbuements = 0xE8; // C_UtlVectorEmbeddedNetworkVar<ItemImbuementPair_t>
                constexpr std::ptrdiff_t m_vecDynamicAbilityValues = 0x138; // C_UtlVectorEmbeddedNetworkVar<DynamicAbilityValues_t>
                constexpr std::ptrdiff_t m_vecStatViewerModifierValues = 0x188; // C_UtlVectorEmbeddedNetworkVar<StatViewerModifierValues_t>
            }
            // Parent: CPlayerPawnComponent
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
            }
            // Parent: None
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x118; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x1D0; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x252; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x253; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x254; // int8
            }
            // Parent: CEntityComponent
            namespace CCitadelAbilityComponent {
                constexpr std::ptrdiff_t m_vecAbilities = 0x70; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_vecUniversalItems = 0x88; // C_NetworkUtlVectorBase<CUtlStringToken>
                constexpr std::ptrdiff_t m_arPendingAsyncAbilityReservationSlots = 0xA0; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_arPendingAsyncAbilityReservationAbilityIDs = 0xB8; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_hSelectedAbility = 0xD0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hPreviouslySelectedAbility = 0xD4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreviousAbilityQueued = 0xD8; // bool
                constexpr std::ptrdiff_t m_flTimeScale = 0xDC; // float32
                constexpr std::ptrdiff_t m_flParticleTimeScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_bInInterruptState = 0xE4; // bool
                constexpr std::ptrdiff_t m_ResourceStamina = 0xE8; // AbilityResource_t
                constexpr std::ptrdiff_t m_ResourceAbility = 0x108; // AbilityResource_t
                constexpr std::ptrdiff_t m_nExecuteAbilityMask = 0x170; // uint32
            }
            // Parent: CPlayerPawnComponent
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
            }
            // Parent: None
            namespace CBaseModifier {
                constexpr std::ptrdiff_t m_nSerialNumber = 0x28; // ModifierSerialNumber_t
                constexpr std::ptrdiff_t m_flLastAppliedTime = 0x2C; // GameTime_t
                constexpr std::ptrdiff_t m_flCreationTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDuration = 0x34; // float32
                constexpr std::ptrdiff_t m_hCaster = 0x38; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hAbility = 0x3C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hAuraProvider = 0x40; // CModifierHandleBase
                constexpr std::ptrdiff_t m_nAbilitySubclassID = 0x58; // CUtlStringToken
                constexpr std::ptrdiff_t m_iAttributes = 0x5C; // uint8
                constexpr std::ptrdiff_t m_iTeam = 0x5D; // uint8
                constexpr std::ptrdiff_t m_iStackCount = 0x5E; // int16
                constexpr std::ptrdiff_t m_iMaxStackCount = 0x60; // int16
                constexpr std::ptrdiff_t m_pVecStackDecayTimes = 0x68; // CUtlVector<GameTime_t>*
                constexpr std::ptrdiff_t m_eDestroyReason = 0x70; // uint8
                constexpr std::ptrdiff_t m_bDisabled = 0x71; // bool
                constexpr std::ptrdiff_t m_bSuppressSendModifier = 0x72; // bool
                constexpr std::ptrdiff_t m_flThinkInterval = 0x74; // float32
                constexpr std::ptrdiff_t m_flThinkIntervalStartTime = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_pVecTrackedObjects = 0x80; // CUtlVector<IModifierTrackedObject*>*
                constexpr std::ptrdiff_t m_hModifierListHandle = 0x88; // ModifierRuntimeHandle_t
            }
            // Parent: C_CitadelBaseAbility
            namespace CCitadel_Ability_PrimaryWeapon {
                constexpr std::ptrdiff_t m_flNextPrimaryAttack = 0xC70; // GameTime_t
                constexpr std::ptrdiff_t m_iClip = 0xC74; // int32
                constexpr std::ptrdiff_t m_iBonusClip = 0xC78; // int32
                constexpr std::ptrdiff_t m_flSpreadPenalty = 0xC7C; // float32
                constexpr std::ptrdiff_t m_flZoomTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_flZoomOutTime = 0xC84; // GameTime_t
                constexpr std::ptrdiff_t m_iSpreadIndex = 0xC88; // int8
                constexpr std::ptrdiff_t m_nShotRecoilIndex = 0xC8A; // int16
                constexpr std::ptrdiff_t m_flNextShotRecoilRecoveryTime = 0xC8C; // GameTime_t
                constexpr std::ptrdiff_t m_bIsZoomed = 0xC90; // bool
                constexpr std::ptrdiff_t m_nBurstShotsRemaining = 0xC91; // uint8
                constexpr std::ptrdiff_t m_nShotNumber = 0xC94; // uint32
                constexpr std::ptrdiff_t m_bInReload = 0xC98; // bool
                constexpr std::ptrdiff_t m_bSingleShotReloadFirstBullet = 0xC99; // bool
                constexpr std::ptrdiff_t m_reloadQueuedStartTime = 0xC9C; // GameTime_t
                constexpr std::ptrdiff_t m_flReloadAvailableTime = 0xCA0; // GameTime_t
                constexpr std::ptrdiff_t m_bCanActiveReload = 0xCA4; // bool
                constexpr std::ptrdiff_t m_flLastAttackTime = 0xCA8; // GameTime_t
                constexpr std::ptrdiff_t m_flNextAttackDelayStartTime = 0xCAC; // GameTime_t
                constexpr std::ptrdiff_t m_flNextAttackDelayEndTime = 0xCB0; // GameTime_t
                constexpr std::ptrdiff_t m_flAttackDelayPauseTotalTime = 0xCB4; // float32
                constexpr std::ptrdiff_t m_flAttackDelayPauseEndTime = 0xCB8; // GameTime_t
                constexpr std::ptrdiff_t m_eNextAttackDelayReason = 0xCBC; // ENextAttackDelayReason_t
                constexpr std::ptrdiff_t m_bInputPressedWhileSelected = 0xCC0; // bool
                constexpr std::ptrdiff_t m_eActiveFireMode = 0xCC4; // EFireMode_t
                constexpr std::ptrdiff_t m_angRecoilAngles = 0xCC8; // QAngle
                constexpr std::ptrdiff_t m_angRecoilToAdd = 0xCD4; // QAngle
                constexpr std::ptrdiff_t m_angRecoilRecovery = 0xCE0; // QAngle
                constexpr std::ptrdiff_t m_flRecoilStartTime = 0xCEC; // GameTime_t
                constexpr std::ptrdiff_t m_flRecoilRecoverySpeed = 0xCF0; // float32
                constexpr std::ptrdiff_t m_flAddApproachSpeed = 0xCF4; // float32
                constexpr std::ptrdiff_t m_bFireBackwards = 0xCF8; // bool
                constexpr std::ptrdiff_t m_currentSpread = 0xCFC; // float32
                constexpr std::ptrdiff_t m_currentMaxSpread = 0xD00; // float32
                constexpr std::ptrdiff_t m_currentFireSpread = 0xD04; // float32
                constexpr std::ptrdiff_t m_flCurrentSpinRate = 0xD08; // float32
                constexpr std::ptrdiff_t m_fFireDuration = 0xD10; // float32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xD15; // bool
                constexpr std::ptrdiff_t m_flNextDisarmSound = 0xD18; // GameTime_t
            }
            // Parent: CEntityInstance
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x320; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x328; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x330; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x338; // CCollisionProperty*
                constexpr std::ptrdiff_t m_pModifierProp = 0x340; // CModifierProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x348; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x34C; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x350; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x351; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x360; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x361; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x36C; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x370; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x374; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x378; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x379; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x37A; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x37B; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x37C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x380; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x390; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x394; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3B0; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x3B4; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x3B8; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3BC; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3BD; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3BE; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x3C8; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x3E0; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x3E4; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E8; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3EA; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3EB; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3EC; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3F0; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3F4; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3F8; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x408; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x438; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x43C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x440; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x441; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x442; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x444; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x448; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x44C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x450; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x454; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x458; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x45C; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x460; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x464; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x468; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x46C; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x478; // uint8
                constexpr std::ptrdiff_t m_bPredictable = 0x479; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x47A; // bool
                constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x47C; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x480; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x484; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x488; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x490; // CParticleProperty
                constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x4B8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4D0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x500; // int32
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x510; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x51C; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x520; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x538; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x545; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x546; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x550; // CUtlString
            }
            // Parent: None
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
            }
            // Parent: CBasePlayerController
            namespace CCitadelPlayerController {
                constexpr std::ptrdiff_t m_ePlayState = 0x6F0; // EPlayerPlayState
                constexpr std::ptrdiff_t m_iGuidedBotMatchLastHits = 0x6F4; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchOrbsSecured = 0x6F8; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchOrbsDenied = 0x6FC; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchDamageToGuardians = 0x700; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchDamageToPlayers = 0x704; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchDamageTaken = 0x708; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchNetWorth = 0x70C; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchModsPurchased = 0x710; // int32
                constexpr std::ptrdiff_t m_iGuidedBotMatchAbilityUpgrades = 0x714; // int32
                constexpr std::ptrdiff_t m_flGuideBotMatchLastTaskNagVO = 0x718; // float32
                constexpr std::ptrdiff_t m_flGuideBotLastTimeTaskCompleted = 0x71C; // float32
                constexpr std::ptrdiff_t m_eGuidedBotMatchObjective = 0x720; // EGuidedBotMatchObjective
                constexpr std::ptrdiff_t m_nAssignedLane = 0x724; // int8
                constexpr std::ptrdiff_t m_nOriginalLaneAssignment = 0x725; // int8
                constexpr std::ptrdiff_t m_bSwapCastModeAbility1 = 0x726; // bool
                constexpr std::ptrdiff_t m_bSwapCastModeAbility2 = 0x727; // bool
                constexpr std::ptrdiff_t m_bSwapCastModeAbility3 = 0x728; // bool
                constexpr std::ptrdiff_t m_bSwapCastModeAbility4 = 0x729; // bool
                constexpr std::ptrdiff_t m_bIsKingPanda = 0x72A; // bool
                constexpr std::ptrdiff_t m_bBotDisconnectTakeover = 0x72B; // bool
                constexpr std::ptrdiff_t m_bInTeamChat = 0x72C; // bool
                constexpr std::ptrdiff_t m_bInPartyChat = 0x72D; // bool
                constexpr std::ptrdiff_t m_hHeroPawn = 0x730; // CHandle<C_CitadelPlayerPawn>
                constexpr std::ptrdiff_t m_PlayerDataGlobal = 0x758; // PlayerDataGlobal_t
                constexpr std::ptrdiff_t m_nDeathReplayAvailable = 0x930; // int8
                constexpr std::ptrdiff_t m_unLobbyPlayerSlot = 0x931; // CitadelLobbyPlayerSlot_t
                constexpr std::ptrdiff_t m_bHasCheckedFriendName = 0x932; // bool
                constexpr std::ptrdiff_t m_sFriendName = 0x938; // CUtlString
            }
            // Parent: None
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x78; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xC0; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xCC; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0; // Vector
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xEC; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xEE; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xEF; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xF0; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xF3; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xF4; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5; // uint8
                constexpr std::ptrdiff_t m_name = 0xF8; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x138; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x13C; // float32
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x140; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x144; // Vector
            }
        }
    }
}
