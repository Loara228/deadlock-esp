// Thanks for https://github.com/a2x/ <3
// Чуть-чуть изменил и оптимизировал для deadlock
// 2024-09-20 16:34:28.518673900 UTC

namespace Dumper.Schemas {
    public static class ClientDll {
        // Parent: CBodyComponent
        public static class CBodyComponentSkeletonInstance {
            public const IntPtr m_skeletonInstance = 0x50; // CSkeletonInstance
        }
        // Parent: C_BaseEntity
        public static class C_BaseModelEntity {
            public const IntPtr m_CRenderComponent = 0x558; // CRenderComponent*
            public const IntPtr m_CHitboxComponent = 0x560; // CHitboxComponent
            public const IntPtr m_bInitModelEffects = 0x5A8; // bool
            public const IntPtr m_bIsStaticProp = 0x5A9; // bool
            public const IntPtr m_nLastAddDecal = 0x5AC; // int32
            public const IntPtr m_nDecalsAdded = 0x5B0; // int32
            public const IntPtr m_iOldHealth = 0x5B4; // int32
            public const IntPtr m_nRenderMode = 0x5B8; // RenderMode_t
            public const IntPtr m_nRenderFX = 0x5B9; // RenderFx_t
            public const IntPtr m_szAddModifier = 0x5C0; // CUtlString
            public const IntPtr m_bAllowFadeInView = 0x5C8; // bool
            public const IntPtr m_bHasCollision = 0x5E8; // bool
            public const IntPtr m_vSupport = 0x5EC; // Vector
            public const IntPtr m_clrRender = 0x5F8; // Color
            public const IntPtr m_vecRenderAttributes = 0x600; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const IntPtr m_bRenderToCubemaps = 0x668; // bool
            public const IntPtr m_bNoInterpolate = 0x669; // bool
            public const IntPtr m_Collision = 0x670; // CCollisionProperty
            public const IntPtr m_Glow = 0x720; // CGlowProperty
            public const IntPtr m_flGlowBackfaceMult = 0x778; // float32
            public const IntPtr m_fadeMinDist = 0x77C; // float32
            public const IntPtr m_fadeMaxDist = 0x780; // float32
            public const IntPtr m_flFadeScale = 0x784; // float32
            public const IntPtr m_flShadowStrength = 0x788; // float32
            public const IntPtr m_nObjectCulling = 0x78C; // uint8
            public const IntPtr m_nAddDecal = 0x790; // int32
            public const IntPtr m_vDecalPosition = 0x794; // Vector
            public const IntPtr m_vDecalForwardAxis = 0x7A0; // Vector
            public const IntPtr m_flDecalHealBloodRate = 0x7AC; // float32
            public const IntPtr m_flDecalHealHeightRate = 0x7B0; // float32
            public const IntPtr m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x7B8; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const IntPtr m_vecViewOffset = 0x7D0; // CNetworkViewOffsetVector
            public const IntPtr m_pClientAlphaProperty = 0x800; // CClientAlphaProperty*
            public const IntPtr m_ClientOverrideTint = 0x808; // Color
            public const IntPtr m_bUseClientOverrideTint = 0x80C; // bool
        }
        // Parent: CPlayerPawnComponent
        public static class CPlayer_CameraServices {
            public const IntPtr m_vecPunchAngle = 0x40; // QAngle
            public const IntPtr m_vecPunchAngleVel = 0x58; // QAngle
            public const IntPtr m_nPunchAngleJoltTickClientSide = 0x70; // GameTick_t
            public const IntPtr m_nPunchAngleJoltTick = 0x74; // GameTick_t
            public const IntPtr m_PlayerFog = 0x78; // C_fogplayerparams_t
            public const IntPtr m_hColorCorrectionCtrl = 0xB8; // CHandle<C_ColorCorrection>
            public const IntPtr m_hViewEntity = 0xBC; // CHandle<C_BaseEntity>
            public const IntPtr m_hTonemapController = 0xC0; // CHandle<C_TonemapController2>
            public const IntPtr m_audio = 0xC8; // audioparams_t
            public const IntPtr m_PostProcessingVolumes = 0x140; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            public const IntPtr m_flOldPlayerZ = 0x158; // float32
            public const IntPtr m_flOldPlayerViewOffsetZ = 0x15C; // float32
            public const IntPtr m_CurrentFog = 0x160; // fogparams_t
            public const IntPtr m_hOldFogController = 0x1C8; // CHandle<C_FogController>
            public const IntPtr m_bOverrideFogColor = 0x1CC; // bool[5]
            public const IntPtr m_OverrideFogColor = 0x1D1; // Color[5]
            public const IntPtr m_bOverrideFogStartEnd = 0x1E5; // bool[5]
            public const IntPtr m_fOverrideFogStart = 0x1EC; // float32[5]
            public const IntPtr m_fOverrideFogEnd = 0x200; // float32[5]
            public const IntPtr m_hActivePostProcessingVolume = 0x214; // CHandle<C_PostProcessingVolume>
            public const IntPtr m_angDemoViewAngles = 0x218; // QAngle
        }
        // Parent: CEntityComponent
        public static class CBodyComponent {
            public const IntPtr m_pSceneNode = 0x8; // CGameSceneNode*
            public const IntPtr __m_pChainEntity = 0x20; // CNetworkVarChainer
        }
        // Parent: CGameSceneNode
        public static class CSkeletonInstance {
            public const IntPtr m_modelState = 0x170; // CModelState
            public const IntPtr m_bIsAnimationEnabled = 0x3D0; // bool
            public const IntPtr m_bUseParentRenderBounds = 0x3D1; // bool
            public const IntPtr m_bDisableSolidCollisionsForHierarchy = 0x3D2; // bool
            public const IntPtr m_bDirtyMotionType = 0x0; // bitfield:1
            public const IntPtr m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const IntPtr m_materialGroup = 0x3D4; // CUtlStringToken
            public const IntPtr m_nHitboxSet = 0x3D8; // uint8
        }
        // Parent: CPlayer_MovementServices
        public static class CPlayer_MovementServices_Humanoid {
            public const IntPtr m_flStepSoundTime = 0x1D8; // float32
            public const IntPtr m_flFallVelocity = 0x1DC; // float32
            public const IntPtr m_bInCrouch = 0x1E0; // bool
            public const IntPtr m_nCrouchState = 0x1E4; // uint32
            public const IntPtr m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const IntPtr m_bDucked = 0x1EC; // bool
            public const IntPtr m_bDucking = 0x1ED; // bool
            public const IntPtr m_bInDuckJump = 0x1EE; // bool
            public const IntPtr m_groundNormal = 0x1F0; // Vector
            public const IntPtr m_flSurfaceFriction = 0x1FC; // float32
            public const IntPtr m_surfaceProps = 0x200; // CUtlStringToken
            public const IntPtr m_nStepside = 0x210; // int32
        }
        // Parent: C_BaseEntity
        public static class C_Team {
            public const IntPtr m_aPlayerControllers = 0x558; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const IntPtr m_aPlayers = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const IntPtr m_iScore = 0x588; // int32
            public const IntPtr m_szTeamname = 0x58C; // char[129]
        }
        // Parent: C_BaseEntity
        public static class CBasePlayerController {
            public const IntPtr m_nFinalPredictedTick = 0x560; // int32
            public const IntPtr m_CommandContext = 0x568; // C_CommandContext
            public const IntPtr m_nInButtonsWhichAreToggles = 0x600; // uint64
            public const IntPtr m_nTickBase = 0x608; // uint32
            public const IntPtr m_hPawn = 0x60C; // CHandle<C_BasePlayerPawn>
            public const IntPtr m_bKnownTeamMismatch = 0x610; // bool
            public const IntPtr m_hPredictedPawn = 0x614; // CHandle<C_BasePlayerPawn>
            public const IntPtr m_nSplitScreenSlot = 0x618; // CSplitScreenSlot
            public const IntPtr m_hSplitOwner = 0x61C; // CHandle<CBasePlayerController>
            public const IntPtr m_hSplitScreenPlayers = 0x620; // CUtlVector<CHandle<CBasePlayerController>>
            public const IntPtr m_bIsHLTV = 0x638; // bool
            public const IntPtr m_iConnected = 0x63C; // PlayerConnectedState
            public const IntPtr m_iszPlayerName = 0x640; // char[128]
            public const IntPtr m_steamID = 0x6C8; // uint64
            public const IntPtr m_bIsLocalPlayerController = 0x6D0; // bool
            public const IntPtr m_iDesiredFOV = 0x6D4; // uint32
        }
        // Parent: C_BaseCombatCharacter
        public static class C_BasePlayerPawn {
            public const IntPtr m_pWeaponServices = 0xD68; // CPlayer_WeaponServices*
            public const IntPtr m_pItemServices = 0xD70; // CPlayer_ItemServices*
            public const IntPtr m_pAutoaimServices = 0xD78; // CPlayer_AutoaimServices*
            public const IntPtr m_pObserverServices = 0xD80; // CPlayer_ObserverServices*
            public const IntPtr m_pWaterServices = 0xD88; // CPlayer_WaterServices*
            public const IntPtr m_pUseServices = 0xD90; // CPlayer_UseServices*
            public const IntPtr m_pFlashlightServices = 0xD98; // CPlayer_FlashlightServices*
            public const IntPtr m_pCameraServices = 0xDA0; // CPlayer_CameraServices*
            public const IntPtr m_pMovementServices = 0xDA8; // CPlayer_MovementServices*
            public const IntPtr m_ServerViewAngleChanges = 0xDB8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const IntPtr m_nHighestConsumedServerViewAngleChangeIndex = 0xE08; // uint32
            public const IntPtr v_angle = 0xE0C; // QAngle
            public const IntPtr v_anglePrevious = 0xE18; // QAngle
            public const IntPtr m_iHideHUD = 0xE24; // uint32
            public const IntPtr m_skybox3d = 0xE28; // sky3dparams_t
            public const IntPtr m_flDeathTime = 0xEB8; // GameTime_t
            public const IntPtr m_vecPredictionError = 0xEBC; // Vector
            public const IntPtr m_flPredictionErrorTime = 0xEC8; // GameTime_t
            public const IntPtr m_vecLastCameraSetupLocalOrigin = 0xECC; // Vector
            public const IntPtr m_flLastCameraSetupTime = 0xED8; // GameTime_t
            public const IntPtr m_flFOVSensitivityAdjust = 0xEDC; // float32
            public const IntPtr m_flMouseSensitivity = 0xEE0; // float32
            public const IntPtr m_vOldOrigin = 0xEE4; // Vector
            public const IntPtr m_flOldSimulationTime = 0xEF0; // float32
            public const IntPtr m_nLastExecutedCommandNumber = 0xEF4; // int32
            public const IntPtr m_nLastExecutedCommandTick = 0xEF8; // int32
            public const IntPtr m_hController = 0xEFC; // CHandle<CBasePlayerController>
            public const IntPtr m_bIsSwappingToPredictableController = 0xF00; // bool
        }
        // Parent: CCitadelPlayerPawnBase
        public static class C_CitadelPlayerPawn {
            public const IntPtr m_angEyeAngles = 0xF80; // QAngle
            public const IntPtr m_angClientCamera = 0xF98; // QAngle
            public const IntPtr m_eZipLineLaneColor = 0xFA4; // CMsgLaneColor
            public const IntPtr m_nLevel = 0xFA8; // int32
            public const IntPtr m_nCurrencies = 0xFAC; // int32[4]
            public const IntPtr m_nSpentCurrencies = 0xFBC; // int32[4]
            public const IntPtr m_flLastSpawnTime = 0xFCC; // GameTime_t
            public const IntPtr m_flRespawnTime = 0xFD0; // GameTime_t
            public const IntPtr m_bInRegenerationZone = 0xFD4; // bool
            public const IntPtr m_bInItemShopZone = 0xFD5; // bool
            public const IntPtr m_timeRevealedOnMinimapByNPC = 0xFD8; // GameTime_t
            public const IntPtr m_vecFullSellPriceItems = 0xFE0; // C_NetworkUtlVectorBase<CUtlStringToken>
            public const IntPtr m_vecFullSellPriceAbilityUpgrades = 0xFF8; // C_NetworkUtlVectorBase<FullSellPriceAbilityUpgrades_t>
            public const IntPtr m_bNetworkDisconnected = 0x1010; // bool
            public const IntPtr m_bHasIncomingThreats = 0x1011; // bool
            public const IntPtr m_bLearningAbility = 0x1012; // bool
            public const IntPtr m_nFlashStartTick = 0x1014; // int32
            public const IntPtr m_nFlashMaxStartTick = 0x1018; // int32
            public const IntPtr m_nFlashFadeStartTick = 0x101C; // int32
            public const IntPtr m_nFlashEndTick = 0x1020; // int32
            public const IntPtr m_nFlashMaxAlpha = 0x1024; // int8
            public const IntPtr m_nDeducedLane = 0x1028; // int32
            public const IntPtr m_bDismissedReportCard = 0x102C; // bool
            public const IntPtr m_flCurrentHealingAmount = 0x1030; // float32
            public const IntPtr m_angLockedEyeAngles = 0x1034; // QAngle
            public const IntPtr m_CCitadelAbilityComponent = 0x1040; // CCitadelAbilityComponent
            public const IntPtr m_CCitadelHeroComponent = 0x11E0; // CCitadelHeroComponent
            public const IntPtr m_flRichPresenceUpdateInterval = 0x12A0; // float32
            public const IntPtr m_bAnimGraphMovementClipped = 0x1398; // bool
            public const IntPtr m_bAnimGraphMovementDisableGravity = 0x1399; // bool
            public const IntPtr m_bAnimGraphMovementDirectAirControl = 0x139A; // bool
            public const IntPtr m_bLastMoveWasAnimGraph = 0x139B; // bool
            public const IntPtr m_flPredTimeSlowedStart = 0x139C; // GameTime_t
            public const IntPtr m_flPredTimeSlowedEnd = 0x13A0; // GameTime_t
            public const IntPtr m_flPredSlowSpeed = 0x13A4; // float32
            public const IntPtr m_flTimeSlowedStart = 0x13A8; // GameTime_t[4]
            public const IntPtr m_flTimeSlowedEnd = 0x13B8; // GameTime_t[4]
            public const IntPtr m_flSlowSpeed = 0x13C8; // float32[4]
            public const IntPtr m_flSprintAnimSuppressEndTime = 0x13D8; // GameTime_t
            public const IntPtr m_iCurSlowSlot = 0x13DC; // int32
            public const IntPtr m_vShootTestOffsetStanding = 0x13E0; // Vector
            public const IntPtr m_vShootTestOffsetCrouching = 0x13EC; // Vector
            public const IntPtr m_leanStartTime = 0x13F8; // GameTime_t
        }
        // Parent: None
        public static class PlayerDataGlobal_t {
            public const IntPtr m_iLevel = 0x8; // int32
            public const IntPtr m_iMaxAmmo = 0xC; // int32
            public const IntPtr m_iHealthMax = 0x10; // int32
            public const IntPtr m_flHealthRegen = 0x14; // float32
            public const IntPtr m_flRespawnTime = 0x18; // GameTime_t
            public const IntPtr m_nHeroID = 0x1C; // HeroID_t
            public const IntPtr m_iGoldNetWorth = 0x20; // int32
            public const IntPtr m_iAPNetWorth = 0x24; // int32
            public const IntPtr m_iCreepGold = 0x28; // int32
            public const IntPtr m_iCreepGoldSoloBonus = 0x2C; // int32
            public const IntPtr m_iCreepGoldKill = 0x30; // int32
            public const IntPtr m_iCreepGoldAirOrb = 0x34; // int32
            public const IntPtr m_iCreepGoldGroundOrb = 0x38; // int32
            public const IntPtr m_iCreepGoldDeny = 0x3C; // int32
            public const IntPtr m_iCreepGoldNeutral = 0x40; // int32
            public const IntPtr m_iFarmBaseline = 0x44; // int32
            public const IntPtr m_iHealth = 0x48; // int32
            public const IntPtr m_iPlayerKills = 0x4C; // int32
            public const IntPtr m_iPlayerAssists = 0x50; // int32
            public const IntPtr m_iDeaths = 0x54; // int32
            public const IntPtr m_iDenies = 0x58; // int32
            public const IntPtr m_iLastHits = 0x5C; // int32
            public const IntPtr m_bAlive = 0x60; // bool
            public const IntPtr m_nHeroDraftPosition = 0x64; // int32
            public const IntPtr m_bUltimateTrained = 0x68; // bool
            public const IntPtr m_flUltimateCooldownStart = 0x6C; // GameTime_t
            public const IntPtr m_flUltimateCooldownEnd = 0x70; // GameTime_t
            public const IntPtr m_bHasRejuvenator = 0x74; // bool
            public const IntPtr m_bHasRebirth = 0x75; // bool
            public const IntPtr m_iHeroDamage = 0x78; // int32
            public const IntPtr m_iHeroHealing = 0x7C; // int32
            public const IntPtr m_iSelfHealing = 0x80; // int32
            public const IntPtr m_iObjectiveDamage = 0x84; // int32
            public const IntPtr m_nHeroAbilityUpgradeBits = 0x88; // int32[4]
            public const IntPtr m_vecUpgrades = 0x98; // C_NetworkUtlVectorBase<CUtlStringToken>
            public const IntPtr m_vecBonusCounterAbilities = 0xB0; // C_NetworkUtlVectorBase<CUtlStringToken>
            public const IntPtr m_vecBonusCounterValues = 0xC8; // C_NetworkUtlVectorBase<int32>
            public const IntPtr m_tHeldItem = 0xE0; // CUtlStringToken
            public const IntPtr m_vecImbuements = 0xE8; // C_UtlVectorEmbeddedNetworkVar<ItemImbuementPair_t>
            public const IntPtr m_vecDynamicAbilityValues = 0x138; // C_UtlVectorEmbeddedNetworkVar<DynamicAbilityValues_t>
            public const IntPtr m_vecStatViewerModifierValues = 0x188; // C_UtlVectorEmbeddedNetworkVar<StatViewerModifierValues_t>
        }
        // Parent: CPlayerPawnComponent
        public static class CPlayer_ObserverServices {
            public const IntPtr m_iObserverMode = 0x40; // uint8
            public const IntPtr m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
            public const IntPtr m_iObserverLastMode = 0x48; // ObserverMode_t
            public const IntPtr m_bForcedObserverMode = 0x4C; // bool
            public const IntPtr m_flObserverChaseDistance = 0x50; // float32
            public const IntPtr m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
        }
        // Parent: None
        public static class CModelState {
            public const IntPtr m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
            public const IntPtr m_ModelName = 0xD8; // CUtlSymbolLarge
            public const IntPtr m_bClientClothCreationSuppressed = 0x118; // bool
            public const IntPtr m_MeshGroupMask = 0x1D0; // uint64
            public const IntPtr m_nIdealMotionType = 0x252; // int8
            public const IntPtr m_nForceLOD = 0x253; // int8
            public const IntPtr m_nClothUpdateFlags = 0x254; // int8
        }
        // Parent: CEntityComponent
        public static class CCitadelAbilityComponent {
            public const IntPtr m_vecAbilities = 0x70; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const IntPtr m_vecUniversalItems = 0x88; // C_NetworkUtlVectorBase<CUtlStringToken>
            public const IntPtr m_arPendingAsyncAbilityReservationSlots = 0xA0; // C_NetworkUtlVectorBase<int32>
            public const IntPtr m_arPendingAsyncAbilityReservationAbilityIDs = 0xB8; // C_NetworkUtlVectorBase<int32>
            public const IntPtr m_hSelectedAbility = 0xD0; // CHandle<C_BaseEntity>
            public const IntPtr m_hPreviouslySelectedAbility = 0xD4; // CHandle<C_BaseEntity>
            public const IntPtr m_bPreviousAbilityQueued = 0xD8; // bool
            public const IntPtr m_flTimeScale = 0xDC; // float32
            public const IntPtr m_flParticleTimeScale = 0xE0; // float32
            public const IntPtr m_bInInterruptState = 0xE4; // bool
            public const IntPtr m_ResourceStamina = 0xE8; // AbilityResource_t
            public const IntPtr m_ResourceAbility = 0x108; // AbilityResource_t
            public const IntPtr m_nExecuteAbilityMask = 0x170; // uint32
        }
        // Parent: CPlayerPawnComponent
        public static class CPlayer_WeaponServices {
            public const IntPtr m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            public const IntPtr m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
            public const IntPtr m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
            public const IntPtr m_iAmmo = 0x60; // uint16[32]
        }
        // Parent: None
        public static class CBaseModifier {
            public const IntPtr m_nSerialNumber = 0x28; // ModifierSerialNumber_t
            public const IntPtr m_flLastAppliedTime = 0x2C; // GameTime_t
            public const IntPtr m_flCreationTime = 0x30; // GameTime_t
            public const IntPtr m_flDuration = 0x34; // float32
            public const IntPtr m_hCaster = 0x38; // CHandle<C_BaseEntity>
            public const IntPtr m_hAbility = 0x3C; // CHandle<C_BaseEntity>
            public const IntPtr m_hAuraProvider = 0x40; // CModifierHandleBase
            public const IntPtr m_nAbilitySubclassID = 0x58; // CUtlStringToken
            public const IntPtr m_iAttributes = 0x5C; // uint8
            public const IntPtr m_iTeam = 0x5D; // uint8
            public const IntPtr m_iStackCount = 0x5E; // int16
            public const IntPtr m_iMaxStackCount = 0x60; // int16
            public const IntPtr m_pVecStackDecayTimes = 0x68; // CUtlVector<GameTime_t>*
            public const IntPtr m_eDestroyReason = 0x70; // uint8
            public const IntPtr m_bDisabled = 0x71; // bool
            public const IntPtr m_bSuppressSendModifier = 0x72; // bool
            public const IntPtr m_flThinkInterval = 0x74; // float32
            public const IntPtr m_flThinkIntervalStartTime = 0x78; // GameTime_t
            public const IntPtr m_flTimeScale = 0x7C; // float32
            public const IntPtr m_pVecTrackedObjects = 0x80; // CUtlVector<IModifierTrackedObject*>*
            public const IntPtr m_hModifierListHandle = 0x88; // ModifierRuntimeHandle_t
        }
        // Parent: C_CitadelBaseAbility
        public static class CCitadel_Ability_PrimaryWeapon {
            public const IntPtr m_flNextPrimaryAttack = 0xC70; // GameTime_t
            public const IntPtr m_iClip = 0xC74; // int32
            public const IntPtr m_iBonusClip = 0xC78; // int32
            public const IntPtr m_flSpreadPenalty = 0xC7C; // float32
            public const IntPtr m_flZoomTime = 0xC80; // GameTime_t
            public const IntPtr m_flZoomOutTime = 0xC84; // GameTime_t
            public const IntPtr m_iSpreadIndex = 0xC88; // int8
            public const IntPtr m_nShotRecoilIndex = 0xC8A; // int16
            public const IntPtr m_flNextShotRecoilRecoveryTime = 0xC8C; // GameTime_t
            public const IntPtr m_bIsZoomed = 0xC90; // bool
            public const IntPtr m_nBurstShotsRemaining = 0xC91; // uint8
            public const IntPtr m_nShotNumber = 0xC94; // uint32
            public const IntPtr m_bInReload = 0xC98; // bool
            public const IntPtr m_bSingleShotReloadFirstBullet = 0xC99; // bool
            public const IntPtr m_reloadQueuedStartTime = 0xC9C; // GameTime_t
            public const IntPtr m_flReloadAvailableTime = 0xCA0; // GameTime_t
            public const IntPtr m_bCanActiveReload = 0xCA4; // bool
            public const IntPtr m_flLastAttackTime = 0xCA8; // GameTime_t
            public const IntPtr m_flNextAttackDelayStartTime = 0xCAC; // GameTime_t
            public const IntPtr m_flNextAttackDelayEndTime = 0xCB0; // GameTime_t
            public const IntPtr m_flAttackDelayPauseTotalTime = 0xCB4; // float32
            public const IntPtr m_flAttackDelayPauseEndTime = 0xCB8; // GameTime_t
            public const IntPtr m_eNextAttackDelayReason = 0xCBC; // ENextAttackDelayReason_t
            public const IntPtr m_bInputPressedWhileSelected = 0xCC0; // bool
            public const IntPtr m_eActiveFireMode = 0xCC4; // EFireMode_t
            public const IntPtr m_angRecoilAngles = 0xCC8; // QAngle
            public const IntPtr m_angRecoilToAdd = 0xCD4; // QAngle
            public const IntPtr m_angRecoilRecovery = 0xCE0; // QAngle
            public const IntPtr m_flRecoilStartTime = 0xCEC; // GameTime_t
            public const IntPtr m_flRecoilRecoverySpeed = 0xCF0; // float32
            public const IntPtr m_flAddApproachSpeed = 0xCF4; // float32
            public const IntPtr m_bFireBackwards = 0xCF8; // bool
            public const IntPtr m_currentSpread = 0xCFC; // float32
            public const IntPtr m_currentMaxSpread = 0xD00; // float32
            public const IntPtr m_currentFireSpread = 0xD04; // float32
            public const IntPtr m_flCurrentSpinRate = 0xD08; // float32
            public const IntPtr m_fFireDuration = 0xD10; // float32
            public const IntPtr m_bFireOnEmpty = 0xD15; // bool
            public const IntPtr m_flNextDisarmSound = 0xD18; // GameTime_t
        }
        // Parent: CEntityInstance
        public static class C_BaseEntity {
            public const IntPtr m_CBodyComponent = 0x38; // CBodyComponent*
            public const IntPtr m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const IntPtr m_nLastThinkTick = 0x320; // GameTick_t
            public const IntPtr m_pGameSceneNode = 0x328; // CGameSceneNode*
            public const IntPtr m_pRenderComponent = 0x330; // CRenderComponent*
            public const IntPtr m_pCollision = 0x338; // CCollisionProperty*
            public const IntPtr m_pModifierProp = 0x340; // CModifierProperty*
            public const IntPtr m_iMaxHealth = 0x348; // int32
            public const IntPtr m_iHealth = 0x34C; // int32
            public const IntPtr m_lifeState = 0x350; // uint8
            public const IntPtr m_bTakesDamage = 0x351; // bool
            public const IntPtr m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
            public const IntPtr m_nPlatformType = 0x360; // EntityPlatformTypes_t
            public const IntPtr m_ubInterpolationFrame = 0x361; // uint8
            public const IntPtr m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
            public const IntPtr m_nNoInterpolationTick = 0x368; // int32
            public const IntPtr m_nVisibilityNoInterpolationTick = 0x36C; // int32
            public const IntPtr m_flProxyRandomValue = 0x370; // float32
            public const IntPtr m_iEFlags = 0x374; // int32
            public const IntPtr m_nWaterType = 0x378; // uint8
            public const IntPtr m_bInterpolateEvenWithNoModel = 0x379; // bool
            public const IntPtr m_bPredictionEligible = 0x37A; // bool
            public const IntPtr m_bApplyLayerMatchIDToModel = 0x37B; // bool
            public const IntPtr m_tokLayerMatchID = 0x37C; // CUtlStringToken
            public const IntPtr m_nSubclassID = 0x380; // CUtlStringToken
            public const IntPtr m_nSimulationTick = 0x390; // int32
            public const IntPtr m_iCurrentThinkContext = 0x394; // int32
            public const IntPtr m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
            public const IntPtr m_bDisabledContextThinks = 0x3B0; // bool
            public const IntPtr m_flAnimTime = 0x3B4; // float32
            public const IntPtr m_flSimulationTime = 0x3B8; // float32
            public const IntPtr m_nSceneObjectOverrideFlags = 0x3BC; // uint8
            public const IntPtr m_bHasSuccessfullyInterpolated = 0x3BD; // bool
            public const IntPtr m_bHasAddedVarsToInterpolation = 0x3BE; // bool
            public const IntPtr m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
            public const IntPtr m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
            public const IntPtr m_ListEntry = 0x3C8; // uint16[11]
            public const IntPtr m_flCreateTime = 0x3E0; // GameTime_t
            public const IntPtr m_flSpeed = 0x3E4; // float32
            public const IntPtr m_EntClientFlags = 0x3E8; // uint16
            public const IntPtr m_bClientSideRagdoll = 0x3EA; // bool
            public const IntPtr m_iTeamNum = 0x3EB; // uint8
            public const IntPtr m_spawnflags = 0x3EC; // uint32
            public const IntPtr m_nNextThinkTick = 0x3F0; // GameTick_t
            public const IntPtr m_fFlags = 0x3F4; // uint32
            public const IntPtr m_vecAbsVelocity = 0x3F8; // Vector
            public const IntPtr m_vecVelocity = 0x408; // CNetworkVelocityVector
            public const IntPtr m_hEffectEntity = 0x438; // CHandle<C_BaseEntity>
            public const IntPtr m_hOwnerEntity = 0x43C; // CHandle<C_BaseEntity>
            public const IntPtr m_MoveCollide = 0x440; // MoveCollide_t
            public const IntPtr m_MoveType = 0x441; // MoveType_t
            public const IntPtr m_nActualMoveType = 0x442; // MoveType_t
            public const IntPtr m_flWaterLevel = 0x444; // float32
            public const IntPtr m_fEffects = 0x448; // uint32
            public const IntPtr m_hGroundEntity = 0x44C; // CHandle<C_BaseEntity>
            public const IntPtr m_nGroundBodyIndex = 0x450; // int32
            public const IntPtr m_flFriction = 0x454; // float32
            public const IntPtr m_flElasticity = 0x458; // float32
            public const IntPtr m_flGravityScale = 0x45C; // float32
            public const IntPtr m_flTimeScale = 0x460; // float32
            public const IntPtr m_bAnimatedEveryTick = 0x464; // bool
            public const IntPtr m_flNavIgnoreUntilTime = 0x468; // GameTime_t
            public const IntPtr m_hThink = 0x46C; // uint16
            public const IntPtr m_fBBoxVisFlags = 0x478; // uint8
            public const IntPtr m_bPredictable = 0x479; // bool
            public const IntPtr m_bRenderWithViewModels = 0x47A; // bool
            public const IntPtr m_nSplitUserPlayerPredictionSlot = 0x47C; // CSplitScreenSlot
            public const IntPtr m_nFirstPredictableCommand = 0x480; // int32
            public const IntPtr m_nLastPredictableCommand = 0x484; // int32
            public const IntPtr m_hOldMoveParent = 0x488; // CHandle<C_BaseEntity>
            public const IntPtr m_Particles = 0x490; // CParticleProperty
            public const IntPtr m_vecPredictedScriptFloats = 0x4B8; // CUtlVector<float32>
            public const IntPtr m_vecPredictedScriptFloatIDs = 0x4D0; // CUtlVector<int32>
            public const IntPtr m_nNextScriptVarRecordID = 0x500; // int32
            public const IntPtr m_vecAngVelocity = 0x510; // QAngle
            public const IntPtr m_DataChangeEventRef = 0x51C; // int32
            public const IntPtr m_dependencies = 0x520; // CUtlVector<CEntityHandle>
            public const IntPtr m_nCreationTick = 0x538; // int32
            public const IntPtr m_bAnimTimeChanged = 0x545; // bool
            public const IntPtr m_bSimulationTimeChanged = 0x546; // bool
            public const IntPtr m_sUniqueHammerID = 0x550; // CUtlString
        }
        // Parent: None
        public static class CEntityIdentity {
            public const IntPtr m_nameStringableIndex = 0x14; // int32
            public const IntPtr m_name = 0x18; // CUtlSymbolLarge
            public const IntPtr m_designerName = 0x20; // CUtlSymbolLarge
            public const IntPtr m_flags = 0x30; // uint32
            public const IntPtr m_worldGroupId = 0x38; // WorldGroupId_t
            public const IntPtr m_fDataObjectTypes = 0x3C; // uint32
            public const IntPtr m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const IntPtr m_pPrev = 0x58; // CEntityIdentity*
            public const IntPtr m_pNext = 0x60; // CEntityIdentity*
            public const IntPtr m_pPrevByClass = 0x68; // CEntityIdentity*
            public const IntPtr m_pNextByClass = 0x70; // CEntityIdentity*
        }
        // Parent: CBasePlayerController
        public static class CCitadelPlayerController {
            public const IntPtr m_ePlayState = 0x6F0; // EPlayerPlayState
            public const IntPtr m_iGuidedBotMatchLastHits = 0x6F4; // int32
            public const IntPtr m_iGuidedBotMatchOrbsSecured = 0x6F8; // int32
            public const IntPtr m_iGuidedBotMatchOrbsDenied = 0x6FC; // int32
            public const IntPtr m_iGuidedBotMatchDamageToGuardians = 0x700; // int32
            public const IntPtr m_iGuidedBotMatchDamageToPlayers = 0x704; // int32
            public const IntPtr m_iGuidedBotMatchDamageTaken = 0x708; // int32
            public const IntPtr m_iGuidedBotMatchNetWorth = 0x70C; // int32
            public const IntPtr m_iGuidedBotMatchModsPurchased = 0x710; // int32
            public const IntPtr m_iGuidedBotMatchAbilityUpgrades = 0x714; // int32
            public const IntPtr m_flGuideBotMatchLastTaskNagVO = 0x718; // float32
            public const IntPtr m_flGuideBotLastTimeTaskCompleted = 0x71C; // float32
            public const IntPtr m_eGuidedBotMatchObjective = 0x720; // EGuidedBotMatchObjective
            public const IntPtr m_nAssignedLane = 0x724; // int8
            public const IntPtr m_nOriginalLaneAssignment = 0x725; // int8
            public const IntPtr m_bSwapCastModeAbility1 = 0x726; // bool
            public const IntPtr m_bSwapCastModeAbility2 = 0x727; // bool
            public const IntPtr m_bSwapCastModeAbility3 = 0x728; // bool
            public const IntPtr m_bSwapCastModeAbility4 = 0x729; // bool
            public const IntPtr m_bIsKingPanda = 0x72A; // bool
            public const IntPtr m_bBotDisconnectTakeover = 0x72B; // bool
            public const IntPtr m_bInTeamChat = 0x72C; // bool
            public const IntPtr m_bInPartyChat = 0x72D; // bool
            public const IntPtr m_hHeroPawn = 0x730; // CHandle<C_CitadelPlayerPawn>
            public const IntPtr m_PlayerDataGlobal = 0x758; // PlayerDataGlobal_t
            public const IntPtr m_nDeathReplayAvailable = 0x930; // int8
            public const IntPtr m_unLobbyPlayerSlot = 0x931; // CitadelLobbyPlayerSlot_t
            public const IntPtr m_bHasCheckedFriendName = 0x932; // bool
            public const IntPtr m_sFriendName = 0x938; // CUtlString
        }
        // Parent: None
        public static class CGameSceneNode {
            public const IntPtr m_nodeToWorld = 0x10; // CTransform
            public const IntPtr m_pOwner = 0x30; // CEntityInstance*
            public const IntPtr m_pParent = 0x38; // CGameSceneNode*
            public const IntPtr m_pChild = 0x40; // CGameSceneNode*
            public const IntPtr m_pNextSibling = 0x48; // CGameSceneNode*
            public const IntPtr m_hParent = 0x78; // CGameSceneNodeHandle
            public const IntPtr m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
            public const IntPtr m_angRotation = 0xC0; // QAngle
            public const IntPtr m_flScale = 0xCC; // float32
            public const IntPtr m_vecAbsOrigin = 0xD0; // Vector
            public const IntPtr m_angAbsRotation = 0xDC; // QAngle
            public const IntPtr m_flAbsScale = 0xE8; // float32
            public const IntPtr m_nParentAttachmentOrBone = 0xEC; // int16
            public const IntPtr m_bDebugAbsOriginChanges = 0xEE; // bool
            public const IntPtr m_bDormant = 0xEF; // bool
            public const IntPtr m_bForceParentToBeNetworked = 0xF0; // bool
            public const IntPtr m_bDirtyHierarchy = 0x0; // bitfield:1
            public const IntPtr m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const IntPtr m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const IntPtr m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const IntPtr m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const IntPtr m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const IntPtr m_bBoneMergeFlex = 0x0; // bitfield:1
            public const IntPtr m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const IntPtr m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const IntPtr m_nHierarchicalDepth = 0xF3; // uint8
            public const IntPtr m_nHierarchyType = 0xF4; // uint8
            public const IntPtr m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5; // uint8
            public const IntPtr m_name = 0xF8; // CUtlStringToken
            public const IntPtr m_hierarchyAttachName = 0x138; // CUtlStringToken
            public const IntPtr m_flZOffset = 0x13C; // float32
            public const IntPtr m_flClientLocalScale = 0x140; // float32
            public const IntPtr m_vRenderOrigin = 0x144; // Vector
        }
    }
}
