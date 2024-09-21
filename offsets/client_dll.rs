// Thanks for https://github.com/a2x/ <3
// Чуть-чуть изменил и оптимизировал для deadlock
// 2024-09-20 16:34:28.518673900 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod client_dll {
    pub mod CBodyComponentSkeletonInstance {
        pub const m_skeletonInstance: usize = 0x50; // CSkeletonInstance
    }
    pub mod C_BaseModelEntity {
        pub const m_CRenderComponent: usize = 0x558; // CRenderComponent*
        pub const m_CHitboxComponent: usize = 0x560; // CHitboxComponent
        pub const m_bInitModelEffects: usize = 0x5A8; // bool
        pub const m_bIsStaticProp: usize = 0x5A9; // bool
        pub const m_nLastAddDecal: usize = 0x5AC; // int32
        pub const m_nDecalsAdded: usize = 0x5B0; // int32
        pub const m_iOldHealth: usize = 0x5B4; // int32
        pub const m_nRenderMode: usize = 0x5B8; // RenderMode_t
        pub const m_nRenderFX: usize = 0x5B9; // RenderFx_t
        pub const m_szAddModifier: usize = 0x5C0; // CUtlString
        pub const m_bAllowFadeInView: usize = 0x5C8; // bool
        pub const m_bHasCollision: usize = 0x5E8; // bool
        pub const m_vSupport: usize = 0x5EC; // Vector
        pub const m_clrRender: usize = 0x5F8; // Color
        pub const m_vecRenderAttributes: usize = 0x600; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
        pub const m_bRenderToCubemaps: usize = 0x668; // bool
        pub const m_bNoInterpolate: usize = 0x669; // bool
        pub const m_Collision: usize = 0x670; // CCollisionProperty
        pub const m_Glow: usize = 0x720; // CGlowProperty
        pub const m_flGlowBackfaceMult: usize = 0x778; // float32
        pub const m_fadeMinDist: usize = 0x77C; // float32
        pub const m_fadeMaxDist: usize = 0x780; // float32
        pub const m_flFadeScale: usize = 0x784; // float32
        pub const m_flShadowStrength: usize = 0x788; // float32
        pub const m_nObjectCulling: usize = 0x78C; // uint8
        pub const m_nAddDecal: usize = 0x790; // int32
        pub const m_vDecalPosition: usize = 0x794; // Vector
        pub const m_vDecalForwardAxis: usize = 0x7A0; // Vector
        pub const m_flDecalHealBloodRate: usize = 0x7AC; // float32
        pub const m_flDecalHealHeightRate: usize = 0x7B0; // float32
        pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0x7B8; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
        pub const m_vecViewOffset: usize = 0x7D0; // CNetworkViewOffsetVector
        pub const m_pClientAlphaProperty: usize = 0x800; // CClientAlphaProperty*
        pub const m_ClientOverrideTint: usize = 0x808; // Color
        pub const m_bUseClientOverrideTint: usize = 0x80C; // bool
    }
    pub mod CPlayer_CameraServices {
        pub const m_vecPunchAngle: usize = 0x40; // QAngle
        pub const m_vecPunchAngleVel: usize = 0x58; // QAngle
        pub const m_nPunchAngleJoltTickClientSide: usize = 0x70; // GameTick_t
        pub const m_nPunchAngleJoltTick: usize = 0x74; // GameTick_t
        pub const m_PlayerFog: usize = 0x78; // C_fogplayerparams_t
        pub const m_hColorCorrectionCtrl: usize = 0xB8; // CHandle<C_ColorCorrection>
        pub const m_hViewEntity: usize = 0xBC; // CHandle<C_BaseEntity>
        pub const m_hTonemapController: usize = 0xC0; // CHandle<C_TonemapController2>
        pub const m_audio: usize = 0xC8; // audioparams_t
        pub const m_PostProcessingVolumes: usize = 0x140; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
        pub const m_flOldPlayerZ: usize = 0x158; // float32
        pub const m_flOldPlayerViewOffsetZ: usize = 0x15C; // float32
        pub const m_CurrentFog: usize = 0x160; // fogparams_t
        pub const m_hOldFogController: usize = 0x1C8; // CHandle<C_FogController>
        pub const m_bOverrideFogColor: usize = 0x1CC; // bool[5]
        pub const m_OverrideFogColor: usize = 0x1D1; // Color[5]
        pub const m_bOverrideFogStartEnd: usize = 0x1E5; // bool[5]
        pub const m_fOverrideFogStart: usize = 0x1EC; // float32[5]
        pub const m_fOverrideFogEnd: usize = 0x200; // float32[5]
        pub const m_hActivePostProcessingVolume: usize = 0x214; // CHandle<C_PostProcessingVolume>
        pub const m_angDemoViewAngles: usize = 0x218; // QAngle
    }
    pub mod CBodyComponent {
        pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
        pub const __m_pChainEntity: usize = 0x20; // CNetworkVarChainer
    }
    pub mod CSkeletonInstance {
        pub const m_modelState: usize = 0x170; // CModelState
        pub const m_bIsAnimationEnabled: usize = 0x3D0; // bool
        pub const m_bUseParentRenderBounds: usize = 0x3D1; // bool
        pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x3D2; // bool
        pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
        pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
        pub const m_materialGroup: usize = 0x3D4; // CUtlStringToken
        pub const m_nHitboxSet: usize = 0x3D8; // uint8
    }
    pub mod CPlayer_MovementServices_Humanoid {
        pub const m_flStepSoundTime: usize = 0x1D8; // float32
        pub const m_flFallVelocity: usize = 0x1DC; // float32
        pub const m_bInCrouch: usize = 0x1E0; // bool
        pub const m_nCrouchState: usize = 0x1E4; // uint32
        pub const m_flCrouchTransitionStartTime: usize = 0x1E8; // GameTime_t
        pub const m_bDucked: usize = 0x1EC; // bool
        pub const m_bDucking: usize = 0x1ED; // bool
        pub const m_bInDuckJump: usize = 0x1EE; // bool
        pub const m_groundNormal: usize = 0x1F0; // Vector
        pub const m_flSurfaceFriction: usize = 0x1FC; // float32
        pub const m_surfaceProps: usize = 0x200; // CUtlStringToken
        pub const m_nStepside: usize = 0x210; // int32
    }
    pub mod C_Team {
        pub const m_aPlayerControllers: usize = 0x558; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
        pub const m_aPlayers: usize = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
        pub const m_iScore: usize = 0x588; // int32
        pub const m_szTeamname: usize = 0x58C; // char[129]
    }
    pub mod CBasePlayerController {
        pub const m_nFinalPredictedTick: usize = 0x560; // int32
        pub const m_CommandContext: usize = 0x568; // C_CommandContext
        pub const m_nInButtonsWhichAreToggles: usize = 0x600; // uint64
        pub const m_nTickBase: usize = 0x608; // uint32
        pub const m_hPawn: usize = 0x60C; // CHandle<C_BasePlayerPawn>
        pub const m_bKnownTeamMismatch: usize = 0x610; // bool
        pub const m_hPredictedPawn: usize = 0x614; // CHandle<C_BasePlayerPawn>
        pub const m_nSplitScreenSlot: usize = 0x618; // CSplitScreenSlot
        pub const m_hSplitOwner: usize = 0x61C; // CHandle<CBasePlayerController>
        pub const m_hSplitScreenPlayers: usize = 0x620; // CUtlVector<CHandle<CBasePlayerController>>
        pub const m_bIsHLTV: usize = 0x638; // bool
        pub const m_iConnected: usize = 0x63C; // PlayerConnectedState
        pub const m_iszPlayerName: usize = 0x640; // char[128]
        pub const m_steamID: usize = 0x6C8; // uint64
        pub const m_bIsLocalPlayerController: usize = 0x6D0; // bool
        pub const m_iDesiredFOV: usize = 0x6D4; // uint32
    }
    pub mod C_BasePlayerPawn {
        pub const m_pWeaponServices: usize = 0xD68; // CPlayer_WeaponServices*
        pub const m_pItemServices: usize = 0xD70; // CPlayer_ItemServices*
        pub const m_pAutoaimServices: usize = 0xD78; // CPlayer_AutoaimServices*
        pub const m_pObserverServices: usize = 0xD80; // CPlayer_ObserverServices*
        pub const m_pWaterServices: usize = 0xD88; // CPlayer_WaterServices*
        pub const m_pUseServices: usize = 0xD90; // CPlayer_UseServices*
        pub const m_pFlashlightServices: usize = 0xD98; // CPlayer_FlashlightServices*
        pub const m_pCameraServices: usize = 0xDA0; // CPlayer_CameraServices*
        pub const m_pMovementServices: usize = 0xDA8; // CPlayer_MovementServices*
        pub const m_ServerViewAngleChanges: usize = 0xDB8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
        pub const m_nHighestConsumedServerViewAngleChangeIndex: usize = 0xE08; // uint32
        pub const v_angle: usize = 0xE0C; // QAngle
        pub const v_anglePrevious: usize = 0xE18; // QAngle
        pub const m_iHideHUD: usize = 0xE24; // uint32
        pub const m_skybox3d: usize = 0xE28; // sky3dparams_t
        pub const m_flDeathTime: usize = 0xEB8; // GameTime_t
        pub const m_vecPredictionError: usize = 0xEBC; // Vector
        pub const m_flPredictionErrorTime: usize = 0xEC8; // GameTime_t
        pub const m_vecLastCameraSetupLocalOrigin: usize = 0xECC; // Vector
        pub const m_flLastCameraSetupTime: usize = 0xED8; // GameTime_t
        pub const m_flFOVSensitivityAdjust: usize = 0xEDC; // float32
        pub const m_flMouseSensitivity: usize = 0xEE0; // float32
        pub const m_vOldOrigin: usize = 0xEE4; // Vector
        pub const m_flOldSimulationTime: usize = 0xEF0; // float32
        pub const m_nLastExecutedCommandNumber: usize = 0xEF4; // int32
        pub const m_nLastExecutedCommandTick: usize = 0xEF8; // int32
        pub const m_hController: usize = 0xEFC; // CHandle<CBasePlayerController>
        pub const m_bIsSwappingToPredictableController: usize = 0xF00; // bool
    }
    pub mod C_CitadelPlayerPawn {
        pub const m_angEyeAngles: usize = 0xF80; // QAngle
        pub const m_angClientCamera: usize = 0xF98; // QAngle
        pub const m_eZipLineLaneColor: usize = 0xFA4; // CMsgLaneColor
        pub const m_nLevel: usize = 0xFA8; // int32
        pub const m_nCurrencies: usize = 0xFAC; // int32[4]
        pub const m_nSpentCurrencies: usize = 0xFBC; // int32[4]
        pub const m_flLastSpawnTime: usize = 0xFCC; // GameTime_t
        pub const m_flRespawnTime: usize = 0xFD0; // GameTime_t
        pub const m_bInRegenerationZone: usize = 0xFD4; // bool
        pub const m_bInItemShopZone: usize = 0xFD5; // bool
        pub const m_timeRevealedOnMinimapByNPC: usize = 0xFD8; // GameTime_t
        pub const m_vecFullSellPriceItems: usize = 0xFE0; // C_NetworkUtlVectorBase<CUtlStringToken>
        pub const m_vecFullSellPriceAbilityUpgrades: usize = 0xFF8; // C_NetworkUtlVectorBase<FullSellPriceAbilityUpgrades_t>
        pub const m_bNetworkDisconnected: usize = 0x1010; // bool
        pub const m_bHasIncomingThreats: usize = 0x1011; // bool
        pub const m_bLearningAbility: usize = 0x1012; // bool
        pub const m_nFlashStartTick: usize = 0x1014; // int32
        pub const m_nFlashMaxStartTick: usize = 0x1018; // int32
        pub const m_nFlashFadeStartTick: usize = 0x101C; // int32
        pub const m_nFlashEndTick: usize = 0x1020; // int32
        pub const m_nFlashMaxAlpha: usize = 0x1024; // int8
        pub const m_nDeducedLane: usize = 0x1028; // int32
        pub const m_bDismissedReportCard: usize = 0x102C; // bool
        pub const m_flCurrentHealingAmount: usize = 0x1030; // float32
        pub const m_angLockedEyeAngles: usize = 0x1034; // QAngle
        pub const m_CCitadelAbilityComponent: usize = 0x1040; // CCitadelAbilityComponent
        pub const m_CCitadelHeroComponent: usize = 0x11E0; // CCitadelHeroComponent
        pub const m_flRichPresenceUpdateInterval: usize = 0x12A0; // float32
        pub const m_bAnimGraphMovementClipped: usize = 0x1398; // bool
        pub const m_bAnimGraphMovementDisableGravity: usize = 0x1399; // bool
        pub const m_bAnimGraphMovementDirectAirControl: usize = 0x139A; // bool
        pub const m_bLastMoveWasAnimGraph: usize = 0x139B; // bool
        pub const m_flPredTimeSlowedStart: usize = 0x139C; // GameTime_t
        pub const m_flPredTimeSlowedEnd: usize = 0x13A0; // GameTime_t
        pub const m_flPredSlowSpeed: usize = 0x13A4; // float32
        pub const m_flTimeSlowedStart: usize = 0x13A8; // GameTime_t[4]
        pub const m_flTimeSlowedEnd: usize = 0x13B8; // GameTime_t[4]
        pub const m_flSlowSpeed: usize = 0x13C8; // float32[4]
        pub const m_flSprintAnimSuppressEndTime: usize = 0x13D8; // GameTime_t
        pub const m_iCurSlowSlot: usize = 0x13DC; // int32
        pub const m_vShootTestOffsetStanding: usize = 0x13E0; // Vector
        pub const m_vShootTestOffsetCrouching: usize = 0x13EC; // Vector
        pub const m_leanStartTime: usize = 0x13F8; // GameTime_t
    }
    pub mod PlayerDataGlobal_t {
        pub const m_iLevel: usize = 0x8; // int32
        pub const m_iMaxAmmo: usize = 0xC; // int32
        pub const m_iHealthMax: usize = 0x10; // int32
        pub const m_flHealthRegen: usize = 0x14; // float32
        pub const m_flRespawnTime: usize = 0x18; // GameTime_t
        pub const m_nHeroID: usize = 0x1C; // HeroID_t
        pub const m_iGoldNetWorth: usize = 0x20; // int32
        pub const m_iAPNetWorth: usize = 0x24; // int32
        pub const m_iCreepGold: usize = 0x28; // int32
        pub const m_iCreepGoldSoloBonus: usize = 0x2C; // int32
        pub const m_iCreepGoldKill: usize = 0x30; // int32
        pub const m_iCreepGoldAirOrb: usize = 0x34; // int32
        pub const m_iCreepGoldGroundOrb: usize = 0x38; // int32
        pub const m_iCreepGoldDeny: usize = 0x3C; // int32
        pub const m_iCreepGoldNeutral: usize = 0x40; // int32
        pub const m_iFarmBaseline: usize = 0x44; // int32
        pub const m_iHealth: usize = 0x48; // int32
        pub const m_iPlayerKills: usize = 0x4C; // int32
        pub const m_iPlayerAssists: usize = 0x50; // int32
        pub const m_iDeaths: usize = 0x54; // int32
        pub const m_iDenies: usize = 0x58; // int32
        pub const m_iLastHits: usize = 0x5C; // int32
        pub const m_bAlive: usize = 0x60; // bool
        pub const m_nHeroDraftPosition: usize = 0x64; // int32
        pub const m_bUltimateTrained: usize = 0x68; // bool
        pub const m_flUltimateCooldownStart: usize = 0x6C; // GameTime_t
        pub const m_flUltimateCooldownEnd: usize = 0x70; // GameTime_t
        pub const m_bHasRejuvenator: usize = 0x74; // bool
        pub const m_bHasRebirth: usize = 0x75; // bool
        pub const m_iHeroDamage: usize = 0x78; // int32
        pub const m_iHeroHealing: usize = 0x7C; // int32
        pub const m_iSelfHealing: usize = 0x80; // int32
        pub const m_iObjectiveDamage: usize = 0x84; // int32
        pub const m_nHeroAbilityUpgradeBits: usize = 0x88; // int32[4]
        pub const m_vecUpgrades: usize = 0x98; // C_NetworkUtlVectorBase<CUtlStringToken>
        pub const m_vecBonusCounterAbilities: usize = 0xB0; // C_NetworkUtlVectorBase<CUtlStringToken>
        pub const m_vecBonusCounterValues: usize = 0xC8; // C_NetworkUtlVectorBase<int32>
        pub const m_tHeldItem: usize = 0xE0; // CUtlStringToken
        pub const m_vecImbuements: usize = 0xE8; // C_UtlVectorEmbeddedNetworkVar<ItemImbuementPair_t>
        pub const m_vecDynamicAbilityValues: usize = 0x138; // C_UtlVectorEmbeddedNetworkVar<DynamicAbilityValues_t>
        pub const m_vecStatViewerModifierValues: usize = 0x188; // C_UtlVectorEmbeddedNetworkVar<StatViewerModifierValues_t>
    }
    pub mod CPlayer_ObserverServices {
        pub const m_iObserverMode: usize = 0x40; // uint8
        pub const m_hObserverTarget: usize = 0x44; // CHandle<C_BaseEntity>
        pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
        pub const m_bForcedObserverMode: usize = 0x4C; // bool
        pub const m_flObserverChaseDistance: usize = 0x50; // float32
        pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
    }
    pub mod CModelState {
        pub const m_hModel: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
        pub const m_ModelName: usize = 0xD8; // CUtlSymbolLarge
        pub const m_bClientClothCreationSuppressed: usize = 0x118; // bool
        pub const m_MeshGroupMask: usize = 0x1D0; // uint64
        pub const m_nIdealMotionType: usize = 0x252; // int8
        pub const m_nForceLOD: usize = 0x253; // int8
        pub const m_nClothUpdateFlags: usize = 0x254; // int8
    }
    pub mod CCitadelAbilityComponent {
        pub const m_vecAbilities: usize = 0x70; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
        pub const m_vecUniversalItems: usize = 0x88; // C_NetworkUtlVectorBase<CUtlStringToken>
        pub const m_arPendingAsyncAbilityReservationSlots: usize = 0xA0; // C_NetworkUtlVectorBase<int32>
        pub const m_arPendingAsyncAbilityReservationAbilityIDs: usize = 0xB8; // C_NetworkUtlVectorBase<int32>
        pub const m_hSelectedAbility: usize = 0xD0; // CHandle<C_BaseEntity>
        pub const m_hPreviouslySelectedAbility: usize = 0xD4; // CHandle<C_BaseEntity>
        pub const m_bPreviousAbilityQueued: usize = 0xD8; // bool
        pub const m_flTimeScale: usize = 0xDC; // float32
        pub const m_flParticleTimeScale: usize = 0xE0; // float32
        pub const m_bInInterruptState: usize = 0xE4; // bool
        pub const m_ResourceStamina: usize = 0xE8; // AbilityResource_t
        pub const m_ResourceAbility: usize = 0x108; // AbilityResource_t
        pub const m_nExecuteAbilityMask: usize = 0x170; // uint32
    }
    pub mod CPlayer_WeaponServices {
        pub const m_hMyWeapons: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
        pub const m_hActiveWeapon: usize = 0x58; // CHandle<C_BasePlayerWeapon>
        pub const m_hLastWeapon: usize = 0x5C; // CHandle<C_BasePlayerWeapon>
        pub const m_iAmmo: usize = 0x60; // uint16[32]
    }
    pub mod CBaseModifier {
        pub const m_nSerialNumber: usize = 0x28; // ModifierSerialNumber_t
        pub const m_flLastAppliedTime: usize = 0x2C; // GameTime_t
        pub const m_flCreationTime: usize = 0x30; // GameTime_t
        pub const m_flDuration: usize = 0x34; // float32
        pub const m_hCaster: usize = 0x38; // CHandle<C_BaseEntity>
        pub const m_hAbility: usize = 0x3C; // CHandle<C_BaseEntity>
        pub const m_hAuraProvider: usize = 0x40; // CModifierHandleBase
        pub const m_nAbilitySubclassID: usize = 0x58; // CUtlStringToken
        pub const m_iAttributes: usize = 0x5C; // uint8
        pub const m_iTeam: usize = 0x5D; // uint8
        pub const m_iStackCount: usize = 0x5E; // int16
        pub const m_iMaxStackCount: usize = 0x60; // int16
        pub const m_pVecStackDecayTimes: usize = 0x68; // CUtlVector<GameTime_t>*
        pub const m_eDestroyReason: usize = 0x70; // uint8
        pub const m_bDisabled: usize = 0x71; // bool
        pub const m_bSuppressSendModifier: usize = 0x72; // bool
        pub const m_flThinkInterval: usize = 0x74; // float32
        pub const m_flThinkIntervalStartTime: usize = 0x78; // GameTime_t
        pub const m_flTimeScale: usize = 0x7C; // float32
        pub const m_pVecTrackedObjects: usize = 0x80; // CUtlVector<IModifierTrackedObject*>*
        pub const m_hModifierListHandle: usize = 0x88; // ModifierRuntimeHandle_t
    }
    pub mod CCitadel_Ability_PrimaryWeapon {
        pub const m_flNextPrimaryAttack: usize = 0xC70; // GameTime_t
        pub const m_iClip: usize = 0xC74; // int32
        pub const m_iBonusClip: usize = 0xC78; // int32
        pub const m_flSpreadPenalty: usize = 0xC7C; // float32
        pub const m_flZoomTime: usize = 0xC80; // GameTime_t
        pub const m_flZoomOutTime: usize = 0xC84; // GameTime_t
        pub const m_iSpreadIndex: usize = 0xC88; // int8
        pub const m_nShotRecoilIndex: usize = 0xC8A; // int16
        pub const m_flNextShotRecoilRecoveryTime: usize = 0xC8C; // GameTime_t
        pub const m_bIsZoomed: usize = 0xC90; // bool
        pub const m_nBurstShotsRemaining: usize = 0xC91; // uint8
        pub const m_nShotNumber: usize = 0xC94; // uint32
        pub const m_bInReload: usize = 0xC98; // bool
        pub const m_bSingleShotReloadFirstBullet: usize = 0xC99; // bool
        pub const m_reloadQueuedStartTime: usize = 0xC9C; // GameTime_t
        pub const m_flReloadAvailableTime: usize = 0xCA0; // GameTime_t
        pub const m_bCanActiveReload: usize = 0xCA4; // bool
        pub const m_flLastAttackTime: usize = 0xCA8; // GameTime_t
        pub const m_flNextAttackDelayStartTime: usize = 0xCAC; // GameTime_t
        pub const m_flNextAttackDelayEndTime: usize = 0xCB0; // GameTime_t
        pub const m_flAttackDelayPauseTotalTime: usize = 0xCB4; // float32
        pub const m_flAttackDelayPauseEndTime: usize = 0xCB8; // GameTime_t
        pub const m_eNextAttackDelayReason: usize = 0xCBC; // ENextAttackDelayReason_t
        pub const m_bInputPressedWhileSelected: usize = 0xCC0; // bool
        pub const m_eActiveFireMode: usize = 0xCC4; // EFireMode_t
        pub const m_angRecoilAngles: usize = 0xCC8; // QAngle
        pub const m_angRecoilToAdd: usize = 0xCD4; // QAngle
        pub const m_angRecoilRecovery: usize = 0xCE0; // QAngle
        pub const m_flRecoilStartTime: usize = 0xCEC; // GameTime_t
        pub const m_flRecoilRecoverySpeed: usize = 0xCF0; // float32
        pub const m_flAddApproachSpeed: usize = 0xCF4; // float32
        pub const m_bFireBackwards: usize = 0xCF8; // bool
        pub const m_currentSpread: usize = 0xCFC; // float32
        pub const m_currentMaxSpread: usize = 0xD00; // float32
        pub const m_currentFireSpread: usize = 0xD04; // float32
        pub const m_flCurrentSpinRate: usize = 0xD08; // float32
        pub const m_fFireDuration: usize = 0xD10; // float32
        pub const m_bFireOnEmpty: usize = 0xD15; // bool
        pub const m_flNextDisarmSound: usize = 0xD18; // GameTime_t
    }
    pub mod C_BaseEntity {
        pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
        pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
        pub const m_nLastThinkTick: usize = 0x320; // GameTick_t
        pub const m_pGameSceneNode: usize = 0x328; // CGameSceneNode*
        pub const m_pRenderComponent: usize = 0x330; // CRenderComponent*
        pub const m_pCollision: usize = 0x338; // CCollisionProperty*
        pub const m_pModifierProp: usize = 0x340; // CModifierProperty*
        pub const m_iMaxHealth: usize = 0x348; // int32
        pub const m_iHealth: usize = 0x34C; // int32
        pub const m_lifeState: usize = 0x350; // uint8
        pub const m_bTakesDamage: usize = 0x351; // bool
        pub const m_nTakeDamageFlags: usize = 0x358; // TakeDamageFlags_t
        pub const m_nPlatformType: usize = 0x360; // EntityPlatformTypes_t
        pub const m_ubInterpolationFrame: usize = 0x361; // uint8
        pub const m_hSceneObjectController: usize = 0x364; // CHandle<C_BaseEntity>
        pub const m_nNoInterpolationTick: usize = 0x368; // int32
        pub const m_nVisibilityNoInterpolationTick: usize = 0x36C; // int32
        pub const m_flProxyRandomValue: usize = 0x370; // float32
        pub const m_iEFlags: usize = 0x374; // int32
        pub const m_nWaterType: usize = 0x378; // uint8
        pub const m_bInterpolateEvenWithNoModel: usize = 0x379; // bool
        pub const m_bPredictionEligible: usize = 0x37A; // bool
        pub const m_bApplyLayerMatchIDToModel: usize = 0x37B; // bool
        pub const m_tokLayerMatchID: usize = 0x37C; // CUtlStringToken
        pub const m_nSubclassID: usize = 0x380; // CUtlStringToken
        pub const m_nSimulationTick: usize = 0x390; // int32
        pub const m_iCurrentThinkContext: usize = 0x394; // int32
        pub const m_aThinkFunctions: usize = 0x398; // CUtlVector<thinkfunc_t>
        pub const m_bDisabledContextThinks: usize = 0x3B0; // bool
        pub const m_flAnimTime: usize = 0x3B4; // float32
        pub const m_flSimulationTime: usize = 0x3B8; // float32
        pub const m_nSceneObjectOverrideFlags: usize = 0x3BC; // uint8
        pub const m_bHasSuccessfullyInterpolated: usize = 0x3BD; // bool
        pub const m_bHasAddedVarsToInterpolation: usize = 0x3BE; // bool
        pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x3BF; // bool
        pub const m_nInterpolationLatchDirtyFlags: usize = 0x3C0; // int32[2]
        pub const m_ListEntry: usize = 0x3C8; // uint16[11]
        pub const m_flCreateTime: usize = 0x3E0; // GameTime_t
        pub const m_flSpeed: usize = 0x3E4; // float32
        pub const m_EntClientFlags: usize = 0x3E8; // uint16
        pub const m_bClientSideRagdoll: usize = 0x3EA; // bool
        pub const m_iTeamNum: usize = 0x3EB; // uint8
        pub const m_spawnflags: usize = 0x3EC; // uint32
        pub const m_nNextThinkTick: usize = 0x3F0; // GameTick_t
        pub const m_fFlags: usize = 0x3F4; // uint32
        pub const m_vecAbsVelocity: usize = 0x3F8; // Vector
        pub const m_vecVelocity: usize = 0x408; // CNetworkVelocityVector
        pub const m_hEffectEntity: usize = 0x438; // CHandle<C_BaseEntity>
        pub const m_hOwnerEntity: usize = 0x43C; // CHandle<C_BaseEntity>
        pub const m_MoveCollide: usize = 0x440; // MoveCollide_t
        pub const m_MoveType: usize = 0x441; // MoveType_t
        pub const m_nActualMoveType: usize = 0x442; // MoveType_t
        pub const m_flWaterLevel: usize = 0x444; // float32
        pub const m_fEffects: usize = 0x448; // uint32
        pub const m_hGroundEntity: usize = 0x44C; // CHandle<C_BaseEntity>
        pub const m_nGroundBodyIndex: usize = 0x450; // int32
        pub const m_flFriction: usize = 0x454; // float32
        pub const m_flElasticity: usize = 0x458; // float32
        pub const m_flGravityScale: usize = 0x45C; // float32
        pub const m_flTimeScale: usize = 0x460; // float32
        pub const m_bAnimatedEveryTick: usize = 0x464; // bool
        pub const m_flNavIgnoreUntilTime: usize = 0x468; // GameTime_t
        pub const m_hThink: usize = 0x46C; // uint16
        pub const m_fBBoxVisFlags: usize = 0x478; // uint8
        pub const m_bPredictable: usize = 0x479; // bool
        pub const m_bRenderWithViewModels: usize = 0x47A; // bool
        pub const m_nSplitUserPlayerPredictionSlot: usize = 0x47C; // CSplitScreenSlot
        pub const m_nFirstPredictableCommand: usize = 0x480; // int32
        pub const m_nLastPredictableCommand: usize = 0x484; // int32
        pub const m_hOldMoveParent: usize = 0x488; // CHandle<C_BaseEntity>
        pub const m_Particles: usize = 0x490; // CParticleProperty
        pub const m_vecPredictedScriptFloats: usize = 0x4B8; // CUtlVector<float32>
        pub const m_vecPredictedScriptFloatIDs: usize = 0x4D0; // CUtlVector<int32>
        pub const m_nNextScriptVarRecordID: usize = 0x500; // int32
        pub const m_vecAngVelocity: usize = 0x510; // QAngle
        pub const m_DataChangeEventRef: usize = 0x51C; // int32
        pub const m_dependencies: usize = 0x520; // CUtlVector<CEntityHandle>
        pub const m_nCreationTick: usize = 0x538; // int32
        pub const m_bAnimTimeChanged: usize = 0x545; // bool
        pub const m_bSimulationTimeChanged: usize = 0x546; // bool
        pub const m_sUniqueHammerID: usize = 0x550; // CUtlString
    }
    pub mod CEntityIdentity {
        pub const m_nameStringableIndex: usize = 0x14; // int32
        pub const m_name: usize = 0x18; // CUtlSymbolLarge
        pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
        pub const m_flags: usize = 0x30; // uint32
        pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
        pub const m_fDataObjectTypes: usize = 0x3C; // uint32
        pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
        pub const m_pPrev: usize = 0x58; // CEntityIdentity*
        pub const m_pNext: usize = 0x60; // CEntityIdentity*
        pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
        pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
    }
    pub mod CCitadelPlayerController {
        pub const m_ePlayState: usize = 0x6F0; // EPlayerPlayState
        pub const m_iGuidedBotMatchLastHits: usize = 0x6F4; // int32
        pub const m_iGuidedBotMatchOrbsSecured: usize = 0x6F8; // int32
        pub const m_iGuidedBotMatchOrbsDenied: usize = 0x6FC; // int32
        pub const m_iGuidedBotMatchDamageToGuardians: usize = 0x700; // int32
        pub const m_iGuidedBotMatchDamageToPlayers: usize = 0x704; // int32
        pub const m_iGuidedBotMatchDamageTaken: usize = 0x708; // int32
        pub const m_iGuidedBotMatchNetWorth: usize = 0x70C; // int32
        pub const m_iGuidedBotMatchModsPurchased: usize = 0x710; // int32
        pub const m_iGuidedBotMatchAbilityUpgrades: usize = 0x714; // int32
        pub const m_flGuideBotMatchLastTaskNagVO: usize = 0x718; // float32
        pub const m_flGuideBotLastTimeTaskCompleted: usize = 0x71C; // float32
        pub const m_eGuidedBotMatchObjective: usize = 0x720; // EGuidedBotMatchObjective
        pub const m_nAssignedLane: usize = 0x724; // int8
        pub const m_nOriginalLaneAssignment: usize = 0x725; // int8
        pub const m_bSwapCastModeAbility1: usize = 0x726; // bool
        pub const m_bSwapCastModeAbility2: usize = 0x727; // bool
        pub const m_bSwapCastModeAbility3: usize = 0x728; // bool
        pub const m_bSwapCastModeAbility4: usize = 0x729; // bool
        pub const m_bIsKingPanda: usize = 0x72A; // bool
        pub const m_bBotDisconnectTakeover: usize = 0x72B; // bool
        pub const m_bInTeamChat: usize = 0x72C; // bool
        pub const m_bInPartyChat: usize = 0x72D; // bool
        pub const m_hHeroPawn: usize = 0x730; // CHandle<C_CitadelPlayerPawn>
        pub const m_PlayerDataGlobal: usize = 0x758; // PlayerDataGlobal_t
        pub const m_nDeathReplayAvailable: usize = 0x930; // int8
        pub const m_unLobbyPlayerSlot: usize = 0x931; // CitadelLobbyPlayerSlot_t
        pub const m_bHasCheckedFriendName: usize = 0x932; // bool
        pub const m_sFriendName: usize = 0x938; // CUtlString
    }
    pub mod CGameSceneNode {
        pub const m_nodeToWorld: usize = 0x10; // CTransform
        pub const m_pOwner: usize = 0x30; // CEntityInstance*
        pub const m_pParent: usize = 0x38; // CGameSceneNode*
        pub const m_pChild: usize = 0x40; // CGameSceneNode*
        pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
        pub const m_hParent: usize = 0x78; // CGameSceneNodeHandle
        pub const m_vecOrigin: usize = 0x88; // CNetworkOriginCellCoordQuantizedVector
        pub const m_angRotation: usize = 0xC0; // QAngle
        pub const m_flScale: usize = 0xCC; // float32
        pub const m_vecAbsOrigin: usize = 0xD0; // Vector
        pub const m_angAbsRotation: usize = 0xDC; // QAngle
        pub const m_flAbsScale: usize = 0xE8; // float32
        pub const m_nParentAttachmentOrBone: usize = 0xEC; // int16
        pub const m_bDebugAbsOriginChanges: usize = 0xEE; // bool
        pub const m_bDormant: usize = 0xEF; // bool
        pub const m_bForceParentToBeNetworked: usize = 0xF0; // bool
        pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
        pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
        pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
        pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
        pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
        pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
        pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
        pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
        pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
        pub const m_nHierarchicalDepth: usize = 0xF3; // uint8
        pub const m_nHierarchyType: usize = 0xF4; // uint8
        pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xF5; // uint8
        pub const m_name: usize = 0xF8; // CUtlStringToken
        pub const m_hierarchyAttachName: usize = 0x138; // CUtlStringToken
        pub const m_flZOffset: usize = 0x13C; // float32
        pub const m_flClientLocalScale: usize = 0x140; // float32
        pub const m_vRenderOrigin: usize = 0x144; // Vector
    }
}
