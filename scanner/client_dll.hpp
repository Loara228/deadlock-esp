// Generated using https://github.com/a2x/cs2-dumper
// 2024-09-15 13:01:57.952711300 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 1813
        // Enum count: 10
        namespace client_dll {
            // Alignment: 4
            // Member count: 2
            enum class StartupBehavior_t : uint32_t {
                UNIT_STARTUP_BEHAVIOR_DEFAULT = 0x0,
                UNIT_STARTUP_BEHAVIOR_TAUNT = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class PortraitScale_t : uint32_t {
                PORTRAIT_SCALE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PORTRAIT_SCALE_LOADOUT = 0x0,
                PORTRAIT_SCALE_ALTERNATE_LOADOUT = 0x1,
                PORTRAIT_SCALE_WORLD = 0x2,
                PORTRAIT_SCALE_SPECTATOR_LOADOUT = 0x3,
                PORTRAIT_SCALE_VERSUS_LOADOUT = 0x4
            };
            // Alignment: 4
            // Member count: 102
            enum class EGCCitadelClientMessages : uint32_t {
                k_EMsgClientToGCStartMatchmaking = 0x2332,
                k_EMsgClientToGCStartMatchmakingResponse = 0x2333,
                k_EMsgClientToGCStopMatchmaking = 0x2334,
                k_EMsgClientToGCStopMatchmakingResponse = 0x2335,
                k_EMsgGCToClientMatchmakingStopped = 0x2336,
                k_EMsgClientToGCLeaveLobby = 0x2337,
                k_EMsgClientToGCLeaveLobbyResponse = 0x2338,
                k_EMsgClientToGCIsInMatchmaking = 0x2339,
                k_EMsgClientToGCIsInMatchmakingResponse = 0x233A,
                k_EMsgGCToClientDevPlaytestStatus = 0x233B,
                k_EMsgClientToGCDevSetMMBias = 0x233F,
                k_EMsgClientToGCGetProfileCard = 0x2340,
                k_EMsgClientToGCGetProfileCardResponse = 0x2341,
                k_EMsgClientToGCUpdateRoster = 0x2342,
                k_EMsgClientToGCUpdateRosterResponse = 0x2343,
                k_EMsgGCToClientProfileCardUpdated = 0x2344,
                k_EMsgGCToClientDevAnnouncements = 0x2345,
                k_EMsgClientToGCModifyDevAnnouncements = 0x2346,
                k_EMsgClientToGCModifyDevAnnouncementsResponse = 0x2347,
                k_EMsgGCToClientSDRTicket = 0x238C,
                k_EMsgClientToGCReplacementSDRTicket = 0x238D,
                k_EMsgClientToGCReplacementSDRTicketResponse = 0x238E,
                k_EMsgClientToGCSetServerConVar = 0x2393,
                k_EMsgClientToGCSetServerConVarResponse = 0x2394,
                k_EMsgClientToGCSpectateLobby = 0x2395,
                k_EMsgClientToGCSpectateLobbyResponse = 0x2396,
                k_EMsgClientToGCPostMatchSurveyResponse = 0x2397,
                k_EMsgClientToGCGetMatchHistory = 0x2398,
                k_EMsgClientToGCGetMatchHistoryResponse = 0x2399,
                k_EMsgClientToGCSpectateUser = 0x239C,
                k_EMsgClientToGCSpectateUserResponse = 0x239D,
                k_EMsgClientToGCPartyCreate = 0x23A3,
                k_EMsgClientToGCPartyCreateResponse = 0x23A4,
                k_EMsgClientToGCPartyLeave = 0x23A5,
                k_EMsgClientToGCPartyLeaveResponse = 0x23A6,
                k_EMsgClientToGCPartyJoin = 0x23A7,
                k_EMsgClientToGCPartyJoinResponse = 0x23A8,
                k_EMsgClientToGCPartyAction = 0x23A9,
                k_EMsgClientToGCPartyActionResponse = 0x23AA,
                k_EMsgClientToGCPartyStartMatch = 0x23AB,
                k_EMsgClientToGCPartyStartMatchResponse = 0x23AC,
                k_EMsgClientToGCPartyInviteUser = 0x23AD,
                k_EMsgClientToGCPartyInviteUserResponse = 0x23AE,
                k_EMsgGCToClientPartyEvent = 0x23AF,
                k_EMsgGCToClientCanRejoinParty = 0x23B1,
                k_EMsgClientToGCPartyJoinViaCode = 0x23B2,
                k_EMsgClientToGCPartyJoinViaCodeResponse = 0x23B3,
                k_EMsgClientToGCPartyUpdateRoster = 0x23B4,
                k_EMsgClientToGCPartyUpdateRosterResponse = 0x23B5,
                k_EMsgClientToGCPartySetReadyState = 0x23B6,
                k_EMsgClientToGCPartySetReadyStateResponse = 0x23B7,
                k_EMsgClientToGCGetAccountStats = 0x23CC,
                k_EMsgClientToGCGetAccountStatsResponse = 0x23CD,
                k_EMsgGCToClientAccountStatsUpdated = 0x23CE,
                k_EMsgClientToGCGetMatchMetaData = 0x23CF,
                k_EMsgClientToGCGetMatchMetaDataResponse = 0x23D0,
                k_EMsgClientToGCDevAction = 0x23D4,
                k_EMsgClientToGCDevActionResponse = 0x23D5,
                k_EMsgClientToGCRecordClientEvents = 0x23D6,
                k_EMsgClientToGCRecordClientEventsResponse = 0x23D7,
                k_EMsgClientToGCSetNewPlayerProgress = 0x23D8,
                k_EMsgClientToGCSetNewPlayerProgressResponse = 0x23D9,
                k_EMsgClientToGCUpdateAccountSync = 0x23DA,
                k_EMsgClientToGCUpdateAccountSyncResponse = 0x23DB,
                k_EMsgClientToGCGetHeroChoice = 0x23DC,
                k_EMsgClientToGCGetHeroChoiceResponse = 0x23DD,
                k_EMsgClientToGCUnlockHero = 0x23DE,
                k_EMsgClientToGCUnlockHeroResponse = 0x23DF,
                k_EMsgClientToGCBookUnlock = 0x23E0,
                k_EMsgClientToGCBookUnlockResponse = 0x23E1,
                k_EMsgClientToGCGetBook = 0x23E2,
                k_EMsgClientToGCGetBookResponse = 0x23E3,
                k_EMsgGCToClientBookUpdated = 0x23E4,
                k_EMsgClientToGCSubmitPlaytestUser = 0x23E5,
                k_EMsgClientToGCSubmitPlaytestUserResponse = 0x23E6,
                k_EMsgClientToGCUpdateHeroBuild = 0x23E9,
                k_EMsgClientToGCUpdateHeroBuildResponse = 0x23EA,
                k_EMsgClientToGCFindHeroBuilds = 0x23EB,
                k_EMsgClientToGCFindHeroBuildsResponse = 0x23EC,
                k_EMsgClientToGCReportPlayerFromMatch = 0x23ED,
                k_EMsgClientToGCReportPlayerFromMatchResponse = 0x23EE,
                k_EMsgClientToGCGetAccountMatchReports = 0x23EF,
                k_EMsgClientToGCGetAccountMatchReportsResponse = 0x23F0,
                k_EMsgClientToGCDeleteHeroBuild = 0x23F1,
                k_EMsgClientToGCDeleteHeroBuildResponse = 0x23F2,
                k_EMsgClientToGCGetActiveMatches = 0x23F3,
                k_EMsgClientToGCGetActiveMatchesResponse = 0x23F4,
                k_EMsgClientToGCGetDiscordLink = 0x23F5,
                k_EMsgClientToGCGetDiscordLinkResponse = 0x23F6,
                k_EMsgClientToGCPartySetMode = 0x23F7,
                k_EMsgClientToGCPartySetModeResponse = 0x23F8,
                k_EMsgClientToGCGrantForumAccess = 0x23F9,
                k_EMsgClientToGCGrantForumAccessResponse = 0x23FA,
                k_EMsgClientToGCModeratorRequest = 0x23FB,
                k_EMsgClientToGCModeratorRequestResponse = 0x23FC,
                k_EMsgClientToGCGetFriendGameStatus = 0x23FD,
                k_EMsgClientToGCGetFriendGameStatusResponse = 0x23FE,
                k_EMsgClientToGCUpdateHeroBuildPreference = 0x23FF,
                k_EMsgClientToGCUpdateHeroBuildPreferenceResponse = 0x2400,
                k_EMsgClientToGCGetOldHeroBuildData = 0x2401,
                k_EMsgClientToGCGetOldHeroBuildDataResponse = 0x2402,
                k_EMsgClientToGCUpdateSpectatorStatus = 0x2403
            };
            // Alignment: 4
            // Member count: 7
            enum class ECitadelPingWheelMessageType_t : uint32_t {
                CITADEL_PING_WHEEL_PREGAME = 0x0,
                CITADEL_PING_WHEEL_INPROGRESS = 0x1,
                CITADEL_PING_WHEEL_DISABLED_WHILE_DEAD = 0x2,
                CITADEL_PING_WHEEL_POSTGAME = 0x3,
                CITADEL_PING_WHEEL_CONTEXTUAL = 0x4,
                CITADEL_PING_WHEEL_SUBNAV = 0x5,
                CITADEL_PING_WHEEL_COUNT = 0x6
            };
            // Alignment: 4
            // Member count: 3
            enum class ECitadelNewPlayerProgressFlag : uint32_t {
                k_eNewPlayerProgress_GettingStarted = 0x1,
                k_eNewPlayerProgress_HeroTraining = 0x2,
                k_eNewPlayerProgress_LaneTraining = 0x3
            };
            // Alignment: 4
            // Member count: 55
            enum class ECitadelClientAccountEvent : uint32_t {
                k_eLaunchedHeroTest = 0x1,
                k_eViewedProfile = 0x2,
                k_eViewedSocial = 0x3,
                k_eViewedHeroes = 0x4,
                k_eViewedHeroDetails = 0x5,
                k_eViewedPatchNotes = 0x6,
                k_eViewedEvents = 0x7,
                k_eViewedGettingStarted = 0x8,
                k_eViewedGuidePage = 0x9,
                k_eLaunchedClient = 0xA,
                k_eEditRoster = 0xB,
                k_eViewedWatch = 0xC,
                k_eCreatedParty = 0xD,
                k_eCreatedPartyWithInvite = 0xE,
                k_eViewedSelfProfile = 0xF,
                k_eJoinedPartyCode = 0x10,
                k_eSentPartyInvite = 0x11,
                k_eAcceptPartyInvite = 0x12,
                k_eRejectPartyInvite = 0x13,
                k_eSpectateUser = 0x14,
                k_eSpectateMatch = 0x15,
                k_eEnteredMatchMaking = 0x16,
                k_eLeftMatchMaking = 0x17,
                k_eEnteredPartyMatchMaking = 0x18,
                k_eLeftPartyMatchMaking = 0x19,
                k_eDownloadedReplay = 0x1A,
                k_eWatchedReplay = 0x1B,
                k_eViewMatchDetails = 0x1C,
                k_eMatchDetailsTab = 0x1D,
                k_eDeleteReplay = 0x1E,
                k_eBotMatch_Guided = 0x1F,
                k_eBotMatch_Easy = 0x20,
                k_eBotMatch_Hard = 0x21,
                k_eLiveUpdatedRoster = 0x22,
                k_eMatchMakingIdle_Displayed = 0x23,
                k_eMatchMakingIdle_Stopped = 0x24,
                k_eConnectReacquireTicket = 0x25,
                k_eConnectAttemptReconnect = 0x26,
                k_eDisconnectPresentedPrompt = 0x27,
                k_eDisconnectConfirmed = 0x28,
                k_eViewedSettings_Options = 0x29,
                k_eViewedSettings_Video = 0x2A,
                k_eViewedSettings_Audio = 0x2B,
                k_eViewedSettings_HotKey = 0x2C,
                k_eViewedSettings_ChatWheel = 0x2D,
                k_eViewedSettings_About = 0x2E,
                k_eOpenedSubmitFeedback = 0x2F,
                k_eTutorialSkip_Pressed = 0x30,
                k_eTutorialSkip_Confirmed = 0x31,
                k_eViewedGuidePage_5s = 0x32,
                k_eViewedGuidePage_15s = 0x33,
                k_eViewedGuidePage_30s = 0x34,
                k_eViewedGuidePage_60s = 0x35,
                k_eOpenedBookTest = 0x36,
                k_eSandboxViaHeroPage = 0x37
            };
            // Alignment: 4
            // Member count: 3
            enum class EProfileCardSlotType : uint32_t {
                k_EProfileCardSlotType_Empty = 0x0,
                k_EProfileCardSlotType_Stat = 0x1,
                k_EProfileCardSlotType_Hero = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class PortraitDisplayMode_t : uint32_t {
                PORTRAIT_DISPLAY_MODE_INVALID = 0xFFFFFFFFFFFFFFFF,
                PORTRAIT_DISPLAY_MODE_LOADOUT = 0x0,
                PORTRAIT_DISPLAY_MODE_LOADOUT_DIRE = 0x1,
                PORTRAIT_DISPLAY_MODE_LOADOUT_SMALL = 0x2,
                PORTRAIT_DISPLAY_MODE_TREASURE_SMALL = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class ECitadelAccountPermissionFlag : uint32_t {
                k_eAccountPermission_PrivateBot = 0x1,
                k_eAccountPermission_CoopBot = 0x2,
                k_eAccountPermission_Unranked = 0x3
            };
            // Alignment: 4
            // Member count: 7
            enum class P2P_Messages : uint32_t {
                p2p_TextMessage = 0x100,
                p2p_Voice = 0x101,
                p2p_Ping = 0x102,
                p2p_VRAvatarPosition = 0x103,
                p2p_WatchSynchronization = 0x104,
                p2p_FightingGame_GameData = 0x105,
                p2p_FightingGame_Connection = 0x106
            };
            // Parent: C_PhysicsProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_eLootType (int)
            namespace C_ItemCrate {
                constexpr std::ptrdiff_t m_eLootType = 0xCD0; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CModifier_Synth_Grasp_BulletShield {
                constexpr std::ptrdiff_t m_fBulletShield = 0xC0; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_RadianceVData {
                constexpr std::ptrdiff_t m_RadianceFxParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_RadianceDamageParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ClientsideDamageParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDamageRecievedSound = 0x898; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_StatStealBase {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_TimeWall_Aura {
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_Rutger_ForceField_PushOut {
                constexpr std::ptrdiff_t m_vStart = 0xC0; // Vector
                constexpr std::ptrdiff_t m_vDest = 0xCC; // Vector
                constexpr std::ptrdiff_t m_vCenter = 0xD8; // Vector
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_SiphonBullets_VData {
                constexpr std::ptrdiff_t m_StealWatcherModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HealModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TracerParticle = 0x648; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x728; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x808; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_LingeringAssist {
            }
            // Parent: C_BaseToggle
            // Field count: 0
            namespace C_FuncMover {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 2
            namespace CInWorldItemPanel {
                constexpr std::ptrdiff_t m_hTrackedEntity = 0xA90; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nTrackedEntity = 0xA94; // int32
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_TriggerLerpObject {
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Rutger_ForceField_VData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_VictimPushModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x1548; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_strDomeCreated = 0x1558; // CSoundEventName
                constexpr std::ptrdiff_t m_strChargeUpSound = 0x1568; // CSoundEventName
                constexpr std::ptrdiff_t m_strPushAndDamage = 0x1578; // CSoundEventName
                constexpr std::ptrdiff_t m_ChronoSphereChargeParticle = 0x1588; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Tokamak_CrimsonCannonVData {
                constexpr std::ptrdiff_t m_LaserShot = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChargeParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CasterOnlyTargetParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyTargetedParticle = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strEnemyBeenTargetedSound = 0x18A8; // CSoundEventName
                constexpr std::ptrdiff_t m_strCasterTargetSelectedSound = 0x18B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strFireSound = 0x18C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strImpactSound = 0x18D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strBlockedSound = 0x18E8; // CSoundEventName
            }
            // Parent: CCitadel_Modifier_Base
            // Field count: 0
            namespace CCitadel_Modifier_MagicCarpet_Shields {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_HollowPoint_Proc {
                constexpr std::ptrdiff_t m_nStacksPerBullet = 0xC0; // int32
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TechOverflowProcWatcherVData {
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x628; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_ProcModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuildupSuccessEffect = 0x648; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: scale (int16)
            // NetworkVarNames: origin (Vector)
            // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
            // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
            // NetworkVarNames: fog (fogparams_t)
            // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iszSoundName (string_t)
            namespace C_TriggerItemShop {
                constexpr std::ptrdiff_t m_iszSoundName = 0x838; // CUtlSymbolLarge
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Kobun {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Disruptive_Charge {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_CloakingDevice_Active_Ambush_VData {
                constexpr std::ptrdiff_t m_InvisRevealedParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AmbushParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strActivateAmbushSound = 0x7B8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Tech_Defender_Shredders_Debuff {
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x618; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Synth_Blitz_VData {
                constexpr std::ptrdiff_t m_BlitzModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TechAmpModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strProcSound = 0x1628; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Dust_Storm {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_ImmobilizeTrap {
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ChainLightningVData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x728; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChainModifier = 0x808; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_MagicShield_SpiritBuff {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityMedicHealVData {
                constexpr std::ptrdiff_t m_HealBeamParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealTargetParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strHealCastSound = 0x16E8; // CSoundEventName
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace CCitadelSpectateNode {
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flTurnSolidTime (GameTime_t)
            namespace C_Citadel_Ice_Dome_Blocker {
                constexpr std::ptrdiff_t m_flTurnSolidTime = 0xB40; // GameTime_t
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ItemPickupAuraVData {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Thumper_BulletWatcherVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x6D8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Protection_RacketVData {
                constexpr std::ptrdiff_t m_CastOtherParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ArmorModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
            }
            // Parent: C_CitadelProjectile
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_tDieTime (GameTime_t)
            namespace C_Projectile_Stomp_Projectile {
                constexpr std::ptrdiff_t m_flWidth = 0x8B8; // float32
                constexpr std::ptrdiff_t m_tDieTime = 0x8BC; // GameTime_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hAbilityToTrigger (CHandle<CCitadelBaseAbility>)
            // NetworkVarNames: m_SwappedToTime (GameTime_t)
            namespace CCitadelBaseTriggerAbility {
                constexpr std::ptrdiff_t m_hAbilityToTrigger = 0xC70; // CHandle<C_CitadelBaseAbility>
                constexpr std::ptrdiff_t m_SwappedToTime = 0xC74; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Chomp_Grapple {
                constexpr std::ptrdiff_t m_hMoveToTarget = 0xC0; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bull_Leap_Boosting_Crash {
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityPowerSurgeVData {
                constexpr std::ptrdiff_t m_ChainParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastHitParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffModifier = 0x16E8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ChainModifier = 0x16F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_AfterburnWatcherVData {
                constexpr std::ptrdiff_t m_AfterburnDotModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x638; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x648; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
                constexpr std::ptrdiff_t m_flLastTickTime = 0xC0; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PowerSurge {
            }
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_PowerSurgeVData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WeaponFxParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strWeaponShootSound = 0x7B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strBulletWhizSound = 0x7C8; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0x7D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flTimeStartZipping (GameTime_t)
            // NetworkVarNames: m_flTimeForKnockdownProtection (GameTime_t)
            // NetworkVarNames: m_flTimeStopZipping (GameTime_t)
            // NetworkVarNames: m_flCasterSpeed (float)
            // NetworkVarNames: m_vecInitialVel (CNetworkVelocityVector)
            // NetworkVarNames: m_vecAttachPoint (Vector)
            // NetworkVarNames: m_pPrevNode (EHANDLE)
            // NetworkVarNames: m_pNextNode (EHANDLE)
            // NetworkVarNames: m_flTimeEnterState (GameTime_t)
            // NetworkVarNames: m_flLatchTime (GameTime_t)
            // NetworkVarNames: m_flDamagedTime (GameTime_t)
            // NetworkVarNames: m_eAttachState (EAttachState_t)
            // NetworkVarNames: m_iAttachedZipLineLane (int)
            // NetworkVarNames: m_bDroppedFromZipline (bool)
            // NetworkVarNames: m_vAttachZipLineOffset (Vector)
            namespace CCitadel_Ability_ZipLine {
                constexpr std::ptrdiff_t m_flActivatePressTime = 0x1148; // GameTime_t
                constexpr std::ptrdiff_t m_bThinking = 0x114C; // bool
                constexpr std::ptrdiff_t m_bMoveCollidedPushUp = 0x114D; // bool
                constexpr std::ptrdiff_t m_flTimeStartZipping = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeForKnockdownProtection = 0x1160; // GameTime_t
                constexpr std::ptrdiff_t m_flTimeStopZipping = 0x1164; // GameTime_t
                constexpr std::ptrdiff_t m_flCasterSpeed = 0x1168; // float32
                constexpr std::ptrdiff_t m_vecInitialVel = 0x116C; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecAttachPoint = 0x11A0; // Vector
                constexpr std::ptrdiff_t m_pPrevNode = 0x11AC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_pNextNode = 0x11B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flTimeEnterState = 0x11B4; // GameTime_t
                constexpr std::ptrdiff_t m_flLatchTime = 0x11B8; // GameTime_t
                constexpr std::ptrdiff_t m_flDamagedTime = 0x11BC; // GameTime_t
                constexpr std::ptrdiff_t m_eAttachState = 0x11C0; // EAttachState_t
                constexpr std::ptrdiff_t m_iAttachedZipLineLane = 0x11C4; // int32
                constexpr std::ptrdiff_t m_bDroppedFromZipline = 0x11C8; // bool
                constexpr std::ptrdiff_t m_hAttachZipLine = 0x11C9; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_vAttachZipLineOffset = 0x11CC; // Vector
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_SuperNeutralIncendiary {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TeamRelativeParticleVData {
                constexpr std::ptrdiff_t m_ParentViewParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_OtherPlayerViewParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FrenzyAuraVData {
                constexpr std::ptrdiff_t m_KillModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_Silenced
            // Field count: 0
            namespace CCitadel_Modifier_Targeted_Silence_Debuff {
            }
            // Parent: C_ParticleSystem
            // Field count: 4
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_iFriendlyEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_iEnemyEffectIndex (HParticleSystemDefinitionStrong)
            namespace C_TeamRelativeParticleSystem {
                constexpr std::ptrdiff_t m_iszFriendlyEffectName = 0xDF8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEnemyEffectName = 0xE00; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iFriendlyEffectIndex = 0xE08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_iEnemyEffectIndex = 0xE10; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BreakablePropCooldownReduction {
            }
            // Parent: C_BaseEntity
            // Field count: 35
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
            // NetworkVarNames: m_nRenderMode (RenderMode_t)
            // NetworkVarNames: m_nRenderFX (RenderFx_t)
            // NetworkVarNames: m_clrRender (Color)
            // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_bNoInterpolate (bool)
            // NetworkVarNames: m_Collision (CCollisionProperty)
            // NetworkVarNames: m_Glow (CGlowProperty)
            // NetworkVarNames: m_flGlowBackfaceMult (float)
            // NetworkVarNames: m_fadeMinDist (float32)
            // NetworkVarNames: m_fadeMaxDist (float32)
            // NetworkVarNames: m_flFadeScale (float32)
            // NetworkVarNames: m_flShadowStrength (float32)
            // NetworkVarNames: m_nObjectCulling (uint8)
            // NetworkVarNames: m_nAddDecal (int)
            // NetworkVarNames: m_vDecalPosition (Vector)
            // NetworkVarNames: m_vDecalForwardAxis (Vector)
            // NetworkVarNames: m_flDecalHealBloodRate (float)
            // NetworkVarNames: m_flDecalHealHeightRate (float)
            // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<C_BaseModelEntity>)
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
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_eType (EMiniMapMarkerType_t)
            namespace C_MiniMapMarker {
                constexpr std::ptrdiff_t m_eType = 0x558; // EMiniMapMarkerType_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierRapidFireChannelVData {
                constexpr std::ptrdiff_t m_flAirDrag = 0x5F8; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_BulletFlurryVData {
                constexpr std::ptrdiff_t m_ChannelParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BulletFlurryModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CGameModifier_SetModelScale {
                constexpr std::ptrdiff_t m_flOldModelScale = 0xC0; // float32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bIgnoreInput (bool)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDPI (float)
            // NetworkVarNames: m_flInteractDistance (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_unOwnerContext (uint32)
            // NetworkVarNames: m_unHorizontalAlign (uint32)
            // NetworkVarNames: m_unVerticalAlign (uint32)
            // NetworkVarNames: m_unOrientation (uint32)
            // NetworkVarNames: m_bAllowInteractionFromAllSceneWorlds (bool)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x868; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x9E8; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x9EC; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x9F0; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x9F4; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x9F8; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x9FC; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0xA00; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xA04; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xA08; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0xA0C; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xA10; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xA18; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Blitz_TechAmp_VData {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_WreckingBall_Debuff {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Puddle {
            }
            // Parent: CitadelItemVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_TechDamagePulseVData {
                constexpr std::ptrdiff_t m_PulseParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strPulseTickSound = 0x1730; // CSoundEventName
                constexpr std::ptrdiff_t m_iMaxTargets = 0x1740; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BulletArmorReduction {
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x830; // float32
                constexpr std::ptrdiff_t m_Radius = 0x834; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bolo_Leech {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_BulletFlurry {
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iLane (int)
            // NetworkVarNames: m_flFadeOutStart (GameTime_t)
            // NetworkVarNames: m_flFadeOutEnd (GameTime_t)
            // NetworkVarNames: m_hTargetedEnemy (EHANDLE)
            // NetworkVarNames: m_nElectricBeamCasts (int)
            namespace C_NPC_Boss_Tier2 {
                constexpr std::ptrdiff_t m_iLane = 0x1498; // int32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x149C; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeOutEnd = 0x14A0; // GameTime_t
                constexpr std::ptrdiff_t m_hTargetedEnemy = 0x14A4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecElectricBeamLookTarget = 0x14A8; // Vector
                constexpr std::ptrdiff_t m_nElectricBeamCasts = 0x14C0; // int32
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierAirLiftExplodeAuraVData {
                constexpr std::ptrdiff_t m_empWaveParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BreakablePropExtraGoldPickup {
            }
            // Parent: C_BaseEntity
            // Field count: 26
            //
            // Metadata:
            // NetworkVarNames: m_FOV (float)
            // NetworkVarNames: m_Resolution (float)
            // NetworkVarNames: m_bFogEnable (bool)
            // NetworkVarNames: m_FogColor (Color)
            // NetworkVarNames: m_flFogStart (float)
            // NetworkVarNames: m_flFogEnd (float)
            // NetworkVarNames: m_flFogMaxDensity (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bUseScreenAspectRatio (bool)
            // NetworkVarNames: m_flAspectRatio (float)
            // NetworkVarNames: m_bNoSky (bool)
            // NetworkVarNames: m_fBrightness (float)
            // NetworkVarNames: m_flZFar (float)
            // NetworkVarNames: m_flZNear (float)
            // NetworkVarNames: m_bCanHLTVUse (bool)
            // NetworkVarNames: m_bAlignWithParent (bool)
            // NetworkVarNames: m_bDofEnabled (bool)
            // NetworkVarNames: m_flDofNearBlurry (float)
            // NetworkVarNames: m_flDofNearCrisp (float)
            // NetworkVarNames: m_flDofFarCrisp (float)
            // NetworkVarNames: m_flDofFarBlurry (float)
            // NetworkVarNames: m_flDofTiltToGround (float)
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x558; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x55C; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x560; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x561; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x568; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x56C; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x570; // float32
                constexpr std::ptrdiff_t m_bActive = 0x574; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x575; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x578; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x57C; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x580; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x584; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x588; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x58C; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x58D; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x58E; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x590; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x594; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x598; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x59C; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5A0; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x5A4; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x5A8; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x5AC; // bool
                constexpr std::ptrdiff_t m_pNext = 0x5B0; // C_PointCamera*
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Rutger_Pulse {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierAerialAssaultWatcherVData {
                constexpr std::ptrdiff_t m_AssaultModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_ColdFrontVData {
                constexpr std::ptrdiff_t m_AOEModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PreventHealing {
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_WeaponUpgrade_HeadshotBooster {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CAbility_Mirage_DjinnsReach {
                constexpr std::ptrdiff_t m_ChannelParticle = 0xC70; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE_VData {
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierRapidFireAirJuggleVData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCrowdControlVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ProximityRitual_VData {
                constexpr std::ptrdiff_t m_UnitTargetParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PredatoryStatueModel = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_CatReappearParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CatDisappearParticle = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CatEyesParticle = 0x18A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CatSummonParticle = 0x1988; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strRecallSound = 0x1A68; // CSoundEventName
                constexpr std::ptrdiff_t m_strKilledSound = 0x1A78; // CSoundEventName
                constexpr std::ptrdiff_t m_PredatoryStatueModifier = 0x1A88; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flHeavyMeleeDmg = 0x1A98; // float32
                constexpr std::ptrdiff_t m_flLightMeleeDmg = 0x1A9C; // float32
                constexpr std::ptrdiff_t m_flAbilityDamageScale = 0x1AA0; // float32
                constexpr std::ptrdiff_t m_flNPCDamageMax = 0x1AA4; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bAirRaiding (bool)
            namespace CCitadel_Ability_PowerJump {
                constexpr std::ptrdiff_t m_nTargetingParticleIndex = 0xC74; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bAirRaiding = 0xC78; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierTier3BossLaserBeamVData {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_vTop (CNetworkOriginQuantizedVector)
            // NetworkVarNames: m_vBottom (CNetworkOriginQuantizedVector)
            // NetworkVarNames: m_bRequestStopClimbing (bool)
            // NetworkVarNames: m_bRequestJumpToRoof (bool)
            // NetworkVarNames: m_flLastMoveTime (GameTime_t)
            // NetworkVarNames: m_flMoveDownStartTime (GameTime_t)
            // NetworkVarNames: m_eClimbState (EClimbRopeState_t)
            namespace CCitadel_Ability_Climb_Rope {
                constexpr std::ptrdiff_t m_vTop = 0xC70; // CNetworkOriginQuantizedVector
                constexpr std::ptrdiff_t m_vBottom = 0xCA0; // CNetworkOriginQuantizedVector
                constexpr std::ptrdiff_t m_flActivatePressTime = 0xCD0; // GameTime_t
                constexpr std::ptrdiff_t m_flDisconnectTime = 0xCD4; // GameTime_t
                constexpr std::ptrdiff_t m_flClimbStartTime = 0xCD8; // GameTime_t
                constexpr std::ptrdiff_t m_vLastPos = 0xCDC; // Vector
                constexpr std::ptrdiff_t m_bRequestStopClimbing = 0xCF0; // bool
                constexpr std::ptrdiff_t m_bRequestJumpToRoof = 0xCF1; // bool
                constexpr std::ptrdiff_t m_flLastMoveTime = 0xCF4; // GameTime_t
                constexpr std::ptrdiff_t m_flMoveDownStartTime = 0xCF8; // GameTime_t
                constexpr std::ptrdiff_t m_eClimbState = 0xCFC; // EClimbRopeState_t
                constexpr std::ptrdiff_t m_ClimbCount = 0xD04; // int32
            }
            // Parent: C_Team
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPayload (EHANDLE)
            // NetworkVarNames: m_nBossesAlive (int)
            // NetworkVarNames: m_nBossesMax (int)
            // NetworkVarNames: m_nFlexSlotsUnlocked (EFlexSlotTypes_t)
            // NetworkVarNames: m_vecFOWEntities (STeamFOWEntity)
            namespace C_CitadelTeam {
                constexpr std::ptrdiff_t m_hPayload = 0x610; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nBossesAlive = 0x614; // int32
                constexpr std::ptrdiff_t m_nBossesMax = 0x618; // int32
                constexpr std::ptrdiff_t m_nFlexSlotsUnlocked = 0x61C; // EFlexSlotTypes_t
                constexpr std::ptrdiff_t m_vecFOWEntities = 0x620; // C_UtlVectorEmbeddedNetworkVar<STeamFOWEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x558; // C_EnvWindShared
            }
            // Parent: CCitadelModifier
            // Field count: 5
            namespace CCitadel_Modifier_Warden_RiotProtocol {
                constexpr std::ptrdiff_t m_mapEntToTimeHit = 0xC0; // CUtlOrderedMap<CHandle<C_BaseEntity>,GameTime_t>
                constexpr std::ptrdiff_t m_nNumPlayersAffected = 0xE8; // int32
                constexpr std::ptrdiff_t m_nNumPlayersKilled = 0xEC; // int32
                constexpr std::ptrdiff_t m_playerAngles = 0xF0; // QAngle
                constexpr std::ptrdiff_t m_ConeParticle = 0xFC; // ParticleIndex_t
            }
            // Parent: CAbilityMeleeVData
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHoldMelee_VData {
                constexpr std::ptrdiff_t m_mapAttacks = 0x1540; // CUtlOrderedMap<EMeleeHold_AttackType,AttackData_t>
                constexpr std::ptrdiff_t m_flNextAttackOnParry = 0x1568; // float32
                constexpr std::ptrdiff_t m_flParryWindow = 0x156C; // float32
                constexpr std::ptrdiff_t m_flParryStunTime = 0x1570; // float32
                constexpr std::ptrdiff_t m_flParryCooldown = 0x1574; // float32
                constexpr std::ptrdiff_t m_AirMeleeUpScale = 0x1578; // CRemapFloat
                constexpr std::ptrdiff_t m_HoldBeginEffect = 0x1588; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SuccessfulParryParticle = 0x1668; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ParryActivateParticle = 0x1748; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_cameraSequenceHoldStart = 0x1828; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceHitImpact = 0x18A8; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_strHoldBegin = 0x1928; // CSoundEventName
                constexpr std::ptrdiff_t m_strSuccessfulParrySound = 0x1938; // CSoundEventName
                constexpr std::ptrdiff_t m_ParryVictimModifier = 0x1948; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_Intrinsic_BaseVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ReinforcingCasingsVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SlowImmunity {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_VisibleDuration {
            }
            // Parent: CAI_CitadelNPCVData
            // Field count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAI_NPC_TrooperVData {
                constexpr std::ptrdiff_t m_TrooperType = 0xF58; // TrooperType_t
                constexpr std::ptrdiff_t m_flTrooperDamageResistPct = 0xF5C; // float32
                constexpr std::ptrdiff_t m_flT1BossDamageResistPct = 0xF60; // float32
                constexpr std::ptrdiff_t m_flT2BossDamageResistPct = 0xF64; // float32
                constexpr std::ptrdiff_t m_flBarrackGuardianDamageResistPct = 0xF68; // float32
                constexpr std::ptrdiff_t m_flNearDeathDuration = 0xF6C; // float32
                constexpr std::ptrdiff_t m_flFlySpeed = 0xF70; // float32
                constexpr std::ptrdiff_t m_flFlyHeight = 0xF74; // float32
                constexpr std::ptrdiff_t m_flMeleeDamage = 0xF78; // float32
                constexpr std::ptrdiff_t m_flMeleeDuration = 0xF7C; // float32
                constexpr std::ptrdiff_t m_flMeleeChargeRange = 0xF80; // float32
                constexpr std::ptrdiff_t m_flAttackT1BossMaxRange = 0xF84; // float32
                constexpr std::ptrdiff_t m_flAttackTrooperMaxRange = 0xF88; // float32
                constexpr std::ptrdiff_t m_flShieldDamageResistPct = 0xF8C; // float32
                constexpr std::ptrdiff_t m_flHealthBarOffsetDucking = 0xF90; // float32
                constexpr std::ptrdiff_t m_flTrooperDPS = 0xF94; // float32
                constexpr std::ptrdiff_t m_flPlayerDPS = 0xF98; // float32
                constexpr std::ptrdiff_t m_flT1BossDPS = 0xF9C; // float32
                constexpr std::ptrdiff_t m_flT2BossDPS = 0xFA0; // float32
                constexpr std::ptrdiff_t m_flT3BossDPS = 0xFA4; // float32
                constexpr std::ptrdiff_t m_flBarrackBossDPS = 0xFA8; // float32
                constexpr std::ptrdiff_t m_flGeneratorBossDPS = 0xFAC; // float32
                constexpr std::ptrdiff_t m_BossAttackParticle = 0xFB0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LastHitParticle = 0x1090; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetingLaserParticle = 0x1170; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetingEyeFlashParticle = 0x1250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sZiplineContainerBreakFromDamageParticle = 0x1330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sZiplineContainerBreakFromLandingParticle = 0x1410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MedicHealActiveParticle = 0x14F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sPlayerLastHitSound = 0x15D0; // CSoundEventName
                constexpr std::ptrdiff_t m_sCelebrationSound = 0x15E0; // CSoundEventName
                constexpr std::ptrdiff_t m_sZiplineContainerBreakSound = 0x15F0; // CSoundEventName
                constexpr std::ptrdiff_t m_NearDeathModifier = 0x1600; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TrooperBossInvulnModifier = 0x1610; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Mirage_SandPhantom_WhirlwindEvasion {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_LifeDrain {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_StaticChargeVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZapParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemRefresherVData {
                constexpr std::ptrdiff_t m_RefreshParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff {
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_AirLift_LandBuff {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ChargingGun {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemSmokeBombPreCastModifierVData {
                constexpr std::ptrdiff_t m_SmokeAreaParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CasterParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_TechBurst_Proc {
            }
            // Parent: C_BaseFlex
            // Field count: 6
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0xCD8; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0xCF0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0xCF1; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0xCF4; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0xCF8; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0xCFC; // float32
            }
            // Parent: CCitadelBaseTriggerAbility
            // Field count: 0
            namespace CCitadel_Ability_WreckingBallThrow {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BreakablePropFireRatePickupVData {
                constexpr std::ptrdiff_t m_flFireRate = 0x5F8; // float32
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x618; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Cadence_Crescendo {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SpilledBloodThinker {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Upgrade_StabilizingTripodVData {
                constexpr std::ptrdiff_t m_SelfDebuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelBulletTimeWarpVData {
                constexpr std::ptrdiff_t m_TimeWallHitParticle = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TimeWallHitTimerParticle = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierItemPickupAuraTargetVData {
                constexpr std::ptrdiff_t m_PickupTimer = 0x5F8; // float32
                constexpr std::ptrdiff_t m_PickupTimerModifier = 0x600; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_PointEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_bIsPlayingBack (bool)
            // NetworkVarNames: m_bPaused (bool)
            // NetworkVarNames: m_bMultiplayer (bool)
            // NetworkVarNames: m_bAutogenerated (bool)
            // NetworkVarNames: m_flForceClientTime (float32)
            // NetworkVarNames: m_nSceneStringIndex (uint16)
            // NetworkVarNames: m_hActorList (CHandle<C_BaseFlex>)
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x560; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x561; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x562; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x563; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x564; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x568; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x56A; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x56C; // CHandle<C_BaseFlex>
                constexpr std::ptrdiff_t m_hActorList = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x588; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x598; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x5B0; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Tokamak_DyingStarVData {
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlameAuraParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strInFlightAnimGraphParam = 0x16E8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_strExplodeSound = 0x16F0; // CSoundEventName
                constexpr std::ptrdiff_t m_InFlightModifier = 0x1700; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Ability_PrimaryWeaponVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_PrimaryWeapon_BebopVData {
                constexpr std::ptrdiff_t m_strWindupSound = 0x1570; // CSoundEventName
                constexpr std::ptrdiff_t m_strBeamStartSound = 0x1580; // CSoundEventName
                constexpr std::ptrdiff_t m_strBeamLoopSound1 = 0x1590; // CSoundEventName
                constexpr std::ptrdiff_t m_strBeamLoopSound2 = 0x15A0; // CSoundEventName
                constexpr std::ptrdiff_t m_strBeamStopSound = 0x15B0; // CSoundEventName
                constexpr std::ptrdiff_t m_szWeaponBeamParticle = 0x15C0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flWindupRepeatCycle = 0x16A0; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ProjectMindVData {
                constexpr std::ptrdiff_t m_TeleportStartParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportEndParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportModelParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShieldModifier = 0x978; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CModifier_SiphonBullets {
            }
            // Parent: CCitadel_Item_BubbleVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_Stasis_BombVData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x1670; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_nPunchAngleJoltTick (GameTick_t)
            // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
            // NetworkVarNames: m_hColorCorrectionCtrl (CHandle<CColorCorrection>)
            // NetworkVarNames: m_hViewEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hTonemapController (CHandle<CTonemapController2>)
            // NetworkVarNames: m_audio (audioparams_t)
            // NetworkVarNames: m_PostProcessingVolumes (CHandle<C_PostProcessingVolume>)
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
            // Parent: C_FuncBrush
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_targetCamera (CUtlString)
            // NetworkVarNames: m_nResolutionEnum (int)
            // NetworkVarNames: m_bRenderShadows (bool)
            // NetworkVarNames: m_bUseUniqueColorTarget (bool)
            // NetworkVarNames: m_brushModelName (CUtlString)
            // NetworkVarNames: m_hTargetCamera (EHANDLE)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bDraw3DSkybox (bool)
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0x830; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x838; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0x83C; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x83D; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0x840; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0x848; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0x84C; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x84D; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PowerGenerator {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Chrono_PulseGrenade_VData {
                constexpr std::ptrdiff_t m_PulseAreaModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strHitSound = 0x1538; // CSoundEventName
                constexpr std::ptrdiff_t m_strDebuffStatName = 0x1548; // CUtlString
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_Tier2Boss_Stomp {
            }
            // Parent: None
            // Field count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierVData_BaseAura {
                constexpr std::ptrdiff_t m_eAuraShapeType = 0x5F8; // eAuraShapeType
                constexpr std::ptrdiff_t m_flAuraRadius = 0x5FC; // CModifierLevelFloat
                constexpr std::ptrdiff_t m_flAuraEntityBoundsScale = 0x60C; // CModifierLevelFloat
                constexpr std::ptrdiff_t m_nAmbientParticleRadiusControlPoint = 0x61C; // int32
                constexpr std::ptrdiff_t m_modifierProvidedByAura = 0x620; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Pulse_Escape_VData {
                constexpr std::ptrdiff_t m_SatchelParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelAbilityTangoTetherVData {
                constexpr std::ptrdiff_t m_flJumpFallSpeedMax = 0x1528; // float32
                constexpr std::ptrdiff_t m_flJumpAirDrag = 0x152C; // float32
                constexpr std::ptrdiff_t m_flJumpAirSpeedMax = 0x1530; // float32
                constexpr std::ptrdiff_t m_flJumpSpeed = 0x1534; // float32
                constexpr std::ptrdiff_t m_flJumpPitch = 0x1538; // float32
                constexpr std::ptrdiff_t m_flDashSpeed = 0x153C; // float32
                constexpr std::ptrdiff_t m_flDashCloseEnoughToTarget = 0x1540; // float32
                constexpr std::ptrdiff_t m_flDashLockOntoTargetDist = 0x1544; // float32
                constexpr std::ptrdiff_t m_flVelocityTurnSpringStrength = 0x1548; // float32
                constexpr std::ptrdiff_t m_flAngleToSpeedScale = 0x154C; // CRemapFloat
                constexpr std::ptrdiff_t m_flBackswingDuration = 0x155C; // float32
                constexpr std::ptrdiff_t m_flAnimToStrikePointTime = 0x1560; // float32
                constexpr std::ptrdiff_t m_flGrappleShotFloatTime = 0x1564; // float32
                constexpr std::ptrdiff_t m_flGrappleShotDelayToFlyOnHit = 0x1568; // float32
                constexpr std::ptrdiff_t m_flGrappleSpeed = 0x156C; // float32
                constexpr std::ptrdiff_t m_TetherModifier = 0x1570; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_GrappleTargetModifier = 0x1580; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_LeapParticle = 0x1590; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1670; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SlashParticle = 0x1750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BulletGrappleTracerParticle = 0x1830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyGrappleParticle = 0x1910; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDamageTarget = 0x19F0; // CSoundEventName
                constexpr std::ptrdiff_t m_strStartDash = 0x1A00; // CSoundEventName
                constexpr std::ptrdiff_t m_strStartAttack = 0x1A10; // CSoundEventName
                constexpr std::ptrdiff_t m_strGrappleHitTarget = 0x1A20; // CSoundEventName
                constexpr std::ptrdiff_t m_strGrappleHitWorld = 0x1A30; // CSoundEventName
                constexpr std::ptrdiff_t m_strGrappleHitNothing = 0x1A40; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSequenceFlying = 0x1A50; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceAttacking = 0x1AD0; // CitadelCameraOperationsSequence_t
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_BansheeSlugs_VData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TechDefenderShreddersProcVData {
                constexpr std::ptrdiff_t m_TechDebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DivinersKevlarBuff_VData {
                constexpr std::ptrdiff_t m_KevlarChannelParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseShield
            // Field count: 0
            namespace CCitadel_Modifier_RegeneratingTechShield {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItem_Infuser_VData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CastParticle = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CEntityComponent
            // Field count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Upgrade_OverdriveClip {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            namespace CCitadelModelEntity {
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x580; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_VoidSphere_Buff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_StunnedVData {
                constexpr std::ptrdiff_t m_StunnedParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_EscalatingExposure {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ItemPickupAuraTarget {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_BreakablePropClipSizePickup {
                constexpr std::ptrdiff_t nClipRemaining = 0xC0; // int32
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_nHorizontalSize (uint32)
            // NetworkVarNames: m_nVerticalSize (uint32)
            // NetworkVarNames: m_nMinDist (uint32)
            // NetworkVarNames: m_nMaxDist (uint32)
            // NetworkVarNames: m_nOuterMaxDist (uint32)
            // NetworkVarNames: m_flGlowProxySize (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            namespace C_LightGlow {
                constexpr std::ptrdiff_t m_nHorizontalSize = 0x830; // uint32
                constexpr std::ptrdiff_t m_nVerticalSize = 0x834; // uint32
                constexpr std::ptrdiff_t m_nMinDist = 0x838; // uint32
                constexpr std::ptrdiff_t m_nMaxDist = 0x83C; // uint32
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0x840; // uint32
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x844; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x848; // float32
                constexpr std::ptrdiff_t m_GlowOverlay = 0x850; // C_LightGlowOverlay
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Wrecker_Salvage {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Charged_Bomb {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SlowingTech_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 1
            namespace CCitadel_Modifier_CharmedWraps {
                constexpr std::ptrdiff_t m_fLastPrimingLightAttackTime = 0x168; // GameTime_t
            }
            // Parent: CitadelItemVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemPhantomStrike_VData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CasterModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x1590; // CSoundEventName
                constexpr std::ptrdiff_t m_CastParticle = 0x15A0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1680; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffParticle = 0x1760; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flTeleportDistance = 0x1840; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityMantleVData {
                constexpr std::ptrdiff_t m_vecMantleTypes = 0x1528; // CUtlVector<MantleType_t>
            }
            // Parent: CCitadelModifier
            // Field count: 5
            namespace CCitadel_Modifier_Basic_RangedArmorBonus {
                constexpr std::ptrdiff_t m_flBulletResistancePctMin = 0xC0; // float32
                constexpr std::ptrdiff_t m_flBulletResistancePctMax = 0xC4; // float32
                constexpr std::ptrdiff_t m_flRangeMin = 0xC8; // float32
                constexpr std::ptrdiff_t m_flRangeMax = 0xCC; // float32
                constexpr std::ptrdiff_t m_flInvulnRange = 0xD0; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_ConditionalCollidable {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            namespace CCitadel_Ability_Thumper_1 {
                constexpr std::ptrdiff_t m_vecAimPos = 0xC70; // Vector
                constexpr std::ptrdiff_t m_vecAimNormal = 0xC7C; // Vector
                constexpr std::ptrdiff_t m_flPushForce = 0xC88; // float32
            }
            // Parent: CCitadel_Modifier_Sleep
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_Sleeping {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Running_Decoy {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_PoisonBullet_ShotWatcher {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_PuddleVData {
                constexpr std::ptrdiff_t m_PuddleModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_IceDome_AuraModifierBase
            // Field count: 0
            namespace CCitadel_Modifier_IceDomeFriendly {
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 3
            namespace CCitadel_Modifier_NapalmProjectile {
                constexpr std::ptrdiff_t m_vInitialCastPosition = 0x1A0; // Vector
                constexpr std::ptrdiff_t m_flProjectileSpeed = 0x1AC; // float32
                constexpr std::ptrdiff_t m_iParticleEffect = 0x1B0; // ParticleIndex_t
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_DPS_Aura_VData {
                constexpr std::ptrdiff_t m_AOECastParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ActiveModifier = 0x1650; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Upgrade_OverdriveClip {
                constexpr std::ptrdiff_t m_nBonusMaxClipSize = 0xC0; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Berserker {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BerserkerDamageStackVData {
                constexpr std::ptrdiff_t m_BuffStatusParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffStatusParticleEnemy = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CBaseAnimGraph
            // Field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0xB40; // bool
                constexpr std::ptrdiff_t m_bImportant = 0xB41; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0xB44; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0xB48; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0xB4C; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0xB50; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0xB54; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0xB58; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xB5C; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xB5D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0xB5E; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0xB60; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xB88; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xBB0; // GameTime_t[10]
            }
            // Parent: CCitadel_Item_TrackingProjectileApplyModifier
            // Field count: 0
            namespace CCitadel_Item_Containment {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flDomeStartTime (GameTime_t)
            // NetworkVarNames: m_flDomeEndTime (GameTime_t)
            namespace CCitadel_Ability_IceDome {
                constexpr std::ptrdiff_t m_flDomeStartTime = 0xCA8; // GameTime_t
                constexpr std::ptrdiff_t m_flDomeEndTime = 0xCAC; // GameTime_t
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_DetentionAmmo {
            }
            // Parent: CGameSceneNode
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
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
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 0
            namespace C_Citadel_RestorativeGooCube {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_WeaponUpgrade_Ricochet {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityKobunVData {
                constexpr std::ptrdiff_t m_vSummonFollowOffset = 0x1528; // Vector
                constexpr std::ptrdiff_t m_CloneModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Tengu_UrnVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AuraModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x1618; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ThrowSandVData {
                constexpr std::ptrdiff_t m_SandDebuff = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SilenceDebuff = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_RescueBeamVData {
                constexpr std::ptrdiff_t m_DispelAndHealModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PullModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flProgress (float)
            // NetworkVarNames: m_nNumPushers (int)
            namespace C_CitadelPayload {
                constexpr std::ptrdiff_t m_flProgress = 0xB48; // float32
                constexpr std::ptrdiff_t m_nNumPushers = 0xB4C; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_RapidFire_AirJuggle {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItem_FleetfootBoots_VData {
                constexpr std::ptrdiff_t m_FleetfootBootsModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_FleetfootBootsBonusClipModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Item_TrackingProjectileApplyModifier
            // Field count: 0
            namespace CItem_WitheringWhip {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BreakablePropExtraStamina {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Haze_StackingDamage {
                constexpr std::ptrdiff_t m_nTotalProcs = 0x168; // int32
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_ModDisruptorVData {
                constexpr std::ptrdiff_t m_DetonateParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DisruptModifier = 0x1650; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flWaveSpeed = 0x1660; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_UnstoppableVData {
                constexpr std::ptrdiff_t m_ShieldParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PlayerShieldParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_PreMatchWait {
                constexpr std::ptrdiff_t m_vSpawnPoint = 0xC0; // Vector
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x4C0; // CBaseAnimGraphController
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Ability_Shield {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_Savior {
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Intimidate {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_ProximityRitual {
                constexpr std::ptrdiff_t m_vLaunchPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_qLaunchAngle = 0xC7C; // QAngle
            }
            // Parent: CCitadel_Modifier_ChainLightning
            // Field count: 0
            namespace CCitadel_Modifier_Galvanic_Storm {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_GalvanicStormTechShieldVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x5F8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flExplodeSpeed = 0x6E8; // float32
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 26
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierVData {
                constexpr std::ptrdiff_t m_flDuration = 0x28; // CModifierLevelFloat
                constexpr std::ptrdiff_t m_bKeepMaximumDurationOnRefresh = 0x38; // bool
                constexpr std::ptrdiff_t m_strParticleEffect = 0x40; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strParticleEffectConfig = 0x120; // CUtlString
                constexpr std::ptrdiff_t m_strParticleStatusEffect = 0x128; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strParticleStatusEffectConfig = 0x208; // CUtlString
                constexpr std::ptrdiff_t m_strScreenParticleEffect = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strScreenParticleEffectConfig = 0x2F0; // CUtlString
                constexpr std::ptrdiff_t m_nStatusEffectPriority = 0x2F8; // int32
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x300; // CUtlVector<ModifierRenderAttribute_t>
                constexpr std::ptrdiff_t m_sStartSound = 0x318; // CSoundEventName
                constexpr std::ptrdiff_t m_sAmbientLoopingSound = 0x328; // CSoundEventName
                constexpr std::ptrdiff_t m_nAmbientLoopingSoundRecipients = 0x338; // ModifierSoundRecipients_t
                constexpr std::ptrdiff_t m_sEndSound = 0x340; // CSoundEventName
                constexpr std::ptrdiff_t m_nEnabledStateMask = 0x350; // CBitVecEnum<EModifierState>
                constexpr std::ptrdiff_t m_nDisabledStateMask = 0x368; // CBitVecEnum<EModifierState>
                constexpr std::ptrdiff_t m_nAttributes = 0x380; // ModifierAttribute_t
                constexpr std::ptrdiff_t m_vecScriptValues = 0x388; // CUtlVector<ModifierScriptValue_t>
                constexpr std::ptrdiff_t m_vecScriptEventHandlers = 0x3A0; // CUtlVector<ModifierScriptedEventHandler_t>
                constexpr std::ptrdiff_t m_nDisableGroupsMask = 0x3B8; // ModifierDisableGroup_t
                constexpr std::ptrdiff_t m_bPrivateAccess = 0x3BC; // bool
                constexpr std::ptrdiff_t m_bIsHidden = 0x3BD; // bool
                constexpr std::ptrdiff_t m_eHiddenType = 0x3C0; // ModifierHiddenType_t
                constexpr std::ptrdiff_t m_sLocalizationName = 0x3C8; // CUtlString
                constexpr std::ptrdiff_t m_eDebuffType = 0x3D0; // ModifierDebuffType_t
                constexpr std::ptrdiff_t m_bAutomaticallyDecayStacks = 0x3D4; // bool
            }
            // Parent: C_NPC_FlyingDrone
            // Field count: 0
            namespace C_NPC_SurveillanceDrone {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_LockDown {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Uppercutted {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_angFacing (QAngle)
            namespace CCitadel_Ability_Bounce_Pad {
                constexpr std::ptrdiff_t m_vForward = 0xC70; // Vector
                constexpr std::ptrdiff_t m_bShouldDeploy = 0xC7C; // bool
                constexpr std::ptrdiff_t m_bAnglesSet = 0xC7D; // bool
                constexpr std::ptrdiff_t m_bCanCancel = 0xC7E; // bool
                constexpr std::ptrdiff_t m_angFacing = 0xD98; // QAngle
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemPowerShardVData {
                constexpr std::ptrdiff_t m_RefreshParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Tier2Boss_RocketBarrageVData {
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_RocketFireSound = 0x1618; // CSoundEventName
                constexpr std::ptrdiff_t m_AuraModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace CNPC_YakuzaGangster {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CAbility_Mirage_SandPhantom {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ThrowSandDebuffVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_BasePlayerPawn
            // Field count: 0
            namespace CCitadelPlayerPawnBase {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_ItemFlare {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_ReturnFire {
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 7
            namespace CCitadel_Modifier_Knockdown {
                constexpr std::ptrdiff_t m_angStunAngles = 0xC8; // QAngle
                constexpr std::ptrdiff_t m_ePreferredKnockdownType = 0xD4; // EKnockDownTypes
                constexpr std::ptrdiff_t m_bForceTakePreferred = 0xD8; // bool
                constexpr std::ptrdiff_t m_flGetUpAnimTime = 0xDC; // GameTime_t
                constexpr std::ptrdiff_t m_bGetUpCamSeqStarted = 0xE0; // bool
                constexpr std::ptrdiff_t m_bOnGroundDuration = 0xE1; // bool
                constexpr std::ptrdiff_t m_satIndex = 0xE4; // SatVolumeIndex_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityLashVData {
                constexpr std::ptrdiff_t m_LashParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strVictimCastSound = 0x1618; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ChargedBombVData {
                constexpr std::ptrdiff_t m_ChargeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strBeepSound = 0x6D8; // CSoundEventName
            }
            // Parent: C_CitadelProjectile
            // Field count: 3
            namespace C_Citadel_Projectile_Viscous_GooGrenade {
                constexpr std::ptrdiff_t m_nBounces = 0x8B8; // int32
                constexpr std::ptrdiff_t m_tNextDetonateTime = 0x8BC; // GameTime_t
                constexpr std::ptrdiff_t m_vecProjectileHitTargets = 0x8C0; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Thumper_EnemyPulled {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_RapidFire {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_CatAnimatingVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_cGlowColor = 0x108; // Color
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flSelfCastEndTime (GameTime_t)
            namespace CCitadel_Ability_RestorativeGoo {
                constexpr std::ptrdiff_t m_flSelfCastEndTime = 0xC70; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Idol_Return {
            }
            // Parent: C_RagdollProp
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xBB8; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xBBC; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xBC0; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xBCC; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0xBD8; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0xBE4; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0xBE8; // bool
            }
            // Parent: C_BaseToggle
            // Field count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0x830; // bool
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0x831; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHighAlertVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ZiplineBoost {
                constexpr std::ptrdiff_t m_bIsBoosting = 0xC0; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BreakablePropSpeedPickupVData {
                constexpr std::ptrdiff_t m_flSpeedBoost = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flSprintBoost = 0x5FC; // float32
            }
            // Parent: None
            // Field count: 3
            namespace C_EconEntity__AttachedParticleInfo_t {
                constexpr std::ptrdiff_t m_nAttachedParticleIndex = 0x0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_customType = 0x4; // CUtlStringToken
                constexpr std::ptrdiff_t m_bShouldDestroyImmediately = 0x8; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BoloVData {
                constexpr std::ptrdiff_t m_TrapModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ReverseLeechModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_bWantsSlow (bool)
            // NetworkVarNames: m_flLatchedTimeScaleFracChangeTime (GameTime_t)
            // NetworkVarNames: m_flLatchedTimeScaleFrac (float)
            // NetworkVarNames: m_flSpeedBoostEndTime (GameTime_t)
            // NetworkVarNames: m_flShotTimeScaleEndTime (GameTime_t)
            namespace CCitadel_Ability_Chrono_KineticCarbine {
                constexpr std::ptrdiff_t m_bWantsSlow = 0xC70; // bool
                constexpr std::ptrdiff_t m_flLatchedTimeScaleFracChangeTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_flLatchedTimeScaleFrac = 0xC78; // float32
                constexpr std::ptrdiff_t m_flSpeedBoostEndTime = 0xC7C; // GameTime_t
                constexpr std::ptrdiff_t m_flShotTimeScaleEndTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_flStoredPowerPct = 0xC88; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_DeathTaxTechAmp {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_BaseProjectileAOEModifierVData {
                constexpr std::ptrdiff_t m_AOEModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ColossusActive {
                constexpr std::ptrdiff_t m_flOriginalModelScale = 0xC0; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentResistValue (int)
            namespace CCitadel_ArmorUpgrade_AblativeCoat {
                constexpr std::ptrdiff_t m_iCurrentResistValue = 0xC88; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_PermanentPickupVData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Mirage_SandPhantom_VData {
                constexpr std::ptrdiff_t m_WhirlwindEvasionModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SandPhantomModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Cadence_GrandFinale {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_LockDown_Debuff {
                constexpr std::ptrdiff_t m_vEscapeTarget = 0x1D8; // Vector
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_bAirCast (bool)
            // NetworkVarNames: m_vBeamAimPos (Vector)
            namespace CCitadel_Ability_Bebop_LaserBeam {
                constexpr std::ptrdiff_t m_bZoomed = 0xDC0; // bool
                constexpr std::ptrdiff_t m_bAirCast = 0xDC1; // bool
                constexpr std::ptrdiff_t m_vBeamAimPos = 0xDC4; // Vector
                constexpr std::ptrdiff_t m_angBeamAngles = 0xDD0; // QAngle
                constexpr std::ptrdiff_t m_bNeedsBeamReset = 0xDE8; // bool
            }
            // Parent: CCitadel_Modifier_Base_Buildup
            // Field count: 1
            namespace CCitadel_Modifier_IceBeam_Stacking_Slow {
                constexpr std::ptrdiff_t m_flCurrBuildup = 0x220; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Shield {
                constexpr std::ptrdiff_t m_hShieldEntity = 0xC0; // CHandle<C_Citadel_Shield>
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_BurstFireVData {
                constexpr std::ptrdiff_t m_ActivationSound = 0x1570; // CSoundEventName
                constexpr std::ptrdiff_t m_BuffModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Basic_HealthRegen {
                constexpr std::ptrdiff_t m_flHealthRegen = 0xC0; // float32
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_vOrigin (Vector)
            // NetworkVarNames: m_vStart (Vector)
            // NetworkVarNames: m_vNormal (Vector)
            // NetworkVarNames: m_vAngles (QAngle)
            // NetworkVarNames: m_hEntity (CEntityHandle)
            // NetworkVarNames: m_hOtherEntity (CEntityHandle)
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flMagnitude (float32)
            // NetworkVarNames: m_flRadius (float32)
            // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
            // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
            // NetworkVarNames: m_nDamageType (uint32)
            // NetworkVarNames: m_nPenetrate (uint8)
            // NetworkVarNames: m_nMaterial (uint16)
            // NetworkVarNames: m_nHitBox (uint16)
            // NetworkVarNames: m_nColor (uint8)
            // NetworkVarNames: m_fFlags (uint8)
            // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
            // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
            // NetworkVarNames: m_iEffectName (uint16)
            // NetworkVarNames: m_nExplosionType (uint8)
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
                constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierSleepBombAuraVData {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Slork_Ambush {
            }
            // Parent: CCitadel_Modifier_Burning
            // Field count: 0
            namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT {
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySummonGangsterVData {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MagicCarpet_SummonVData {
                constexpr std::ptrdiff_t m_SummonParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_SuperNeutralShield {
            }
            // Parent: CCitadelPlayerPawnBase
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            namespace C_CitadelObserverPawn {
            }
            // Parent: CitadelAbilityVData
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ZipLine_VData {
                constexpr std::ptrdiff_t m_flMinButtonHoldTimeToActivate = 0x1528; // float32
                constexpr std::ptrdiff_t m_flCrouchDropSpeedFraction = 0x152C; // float32
                constexpr std::ptrdiff_t m_flCrouchDropAirDragSuppressDuration = 0x1530; // float32
                constexpr std::ptrdiff_t m_flDetachDisallowedTime = 0x1534; // float32
                constexpr std::ptrdiff_t m_flCameraWobbleIntensity = 0x1538; // float32
                constexpr std::ptrdiff_t m_DOFWhileZiplining = 0x153C; // DOFDesc_t
                constexpr std::ptrdiff_t m_ZipLinePreviewParticle = 0x1550; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineSpeedParticle = 0x1630; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineTetherParticle = 0x1710; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineTetherAttachParticle = 0x17F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineEnemyKnockdownProtectionParticle = 0x18D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineSelfKnockdownProtectionParticle = 0x19B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineKnockdownProtectionStatusParticle = 0x1A90; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strZipLineSummonSound = 0x1B70; // CSoundEventName
                constexpr std::ptrdiff_t m_strZipLineLatchedSound = 0x1B80; // CSoundEventName
                constexpr std::ptrdiff_t m_strZipLineStartSound = 0x1B90; // CSoundEventName
                constexpr std::ptrdiff_t m_RidingZipLineModifier = 0x1BA0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_KnockedOffSlowModifier = 0x1BB0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ZipLineIntroModifier = 0x1BC0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ZipLineKnockdownImmuneModifier = 0x1BD0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ZipLineSlowModifier = 0x1BE0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_cameraSequenceAwaitingTether = 0x1BF0; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceLatched = 0x1C70; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceAttached = 0x1CF0; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceClear = 0x1D70; // CitadelCameraOperationsSequence_t
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_Colossus_VData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Out_Of_Combat_Health_Regen {
                constexpr std::ptrdiff_t m_LastDamageTaken = 0xC0; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierGlitchVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace CItemExplosiveBarrel {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Stomp {
            }
            // Parent: CCitadelModifierVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FissureWallVData {
                constexpr std::ptrdiff_t m_DebrisParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SpikeParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WallSpawnSound = 0x7B8; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0x7C8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_EnemyVisionModifier = 0x7D8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x7E8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Stunned {
                constexpr std::ptrdiff_t m_bEnabled = 0xC0; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0xC1; // bool
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_EscalatingExposureProcWatcherVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_Tier2Boss_LaserBeam {
            }
            // Parent: C_NPC_Trooper
            // Field count: 0
            namespace C_NPC_SuperTrooper {
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_Item_PowerShard {
                constexpr std::ptrdiff_t m_hLastSignatureToActivate = 0xC88; // CHandle<C_CitadelBaseAbility>
            }
            // Parent: C_BaseToggle
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0x830; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x834; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x838; // CUtlSymbolLarge
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CModifier_Synth_Pulse_BulletShield {
                constexpr std::ptrdiff_t m_fBulletShield = 0xC0; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bAirCast (bool)
            namespace CCitadel_Ability_Tokamak_CrimsonCannon {
                constexpr std::ptrdiff_t m_bAirCast = 0xC70; // bool
                constexpr std::ptrdiff_t m_bIsZoomed = 0xE38; // bool
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_GrandFinaleAOE {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_Wrecker_Teleport {
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flCastStartTime (GameTime_t)
            namespace CCitadel_Ability_Mirage_FireBeetles {
                constexpr std::ptrdiff_t m_vLaunchPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_qLaunchAngle = 0xC7C; // QAngle
                constexpr std::ptrdiff_t m_flCastStartTime = 0xC88; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_LightningBall {
                constexpr std::ptrdiff_t m_hProjectile = 0x168; // CHandle<C_BaseEntity>
            }
            // Parent: CPlayer_MovementServices
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_flFallVelocity (float32)
            // NetworkVarNames: m_bInCrouch (bool)
            // NetworkVarNames: m_nCrouchState (uint32)
            // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
            // NetworkVarNames: m_bDucked (bool)
            // NetworkVarNames: m_bDucking (bool)
            // NetworkVarNames: m_bInDuckJump (bool)
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
            // Parent: C_NPC_SimpleAnimatingAI
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_CCitadelAbilityComponent (CCitadelAbilityComponent::Storage_t)
            // NetworkVarNames: m_flAttackRange (float)
            // NetworkVarNames: m_flAimPitch (float)
            namespace C_NPC_ShieldedSentry {
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xB48; // CCitadelAbilityComponent
                constexpr std::ptrdiff_t m_flAttackRange = 0xCEC; // float32
                constexpr std::ptrdiff_t m_flAimPitch = 0xCF0; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_ColdFront {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_BaseHeldItem {
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_bIgnoreInput (bool)
            // NetworkVarNames: m_bLit (bool)
            // NetworkVarNames: m_bFollowPlayerAcrossTeleport (bool)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDPI (float)
            // NetworkVarNames: m_flInteractDistance (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_unOwnerContext (uint32)
            // NetworkVarNames: m_unHorizontalAlign (uint32)
            // NetworkVarNames: m_unVerticalAlign (uint32)
            // NetworkVarNames: m_unOrientation (uint32)
            // NetworkVarNames: m_bAllowInteractionFromAllSceneWorlds (bool)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            // NetworkVarNames: m_bOpaque (bool)
            // NetworkVarNames: m_bNoDepth (bool)
            // NetworkVarNames: m_bRenderBackface (bool)
            // NetworkVarNames: m_bUseOffScreenIndicator (bool)
            // NetworkVarNames: m_bExcludeFromSaveGames (bool)
            // NetworkVarNames: m_bGrabbable (bool)
            // NetworkVarNames: m_bOnlyRenderToTexture (bool)
            // NetworkVarNames: m_bDisableMipGen (bool)
            // NetworkVarNames: m_nExplicitImageLayout (int32)
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x868; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0x869; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x86A; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0x870; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xA08; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xA30; // bool
                constexpr std::ptrdiff_t m_bLit = 0xA31; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xA32; // bool
                constexpr std::ptrdiff_t m_flWidth = 0xA34; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xA38; // float32
                constexpr std::ptrdiff_t m_flDPI = 0xA3C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0xA40; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xA44; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0xA48; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xA4C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xA50; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0xA54; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xA58; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xA60; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0xA78; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0xA79; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0xA7A; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xA7B; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xA7C; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0xA7D; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xA7E; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0xA7F; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xA80; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Synth_PlasmaFlux_VData {
                constexpr std::ptrdiff_t m_WeaponDamageBonusModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strCasterLoopingSound = 0x16F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strProjectileExpireSound = 0x1708; // CSoundEventName
                constexpr std::ptrdiff_t m_strImpactSound = 0x1718; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSequenceTeleport = 0x1728; // CitadelCameraOperationsSequence_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_hBall (CHandle<CCitadelViscousBall>)
            // NetworkVarNames: m_eRollingState (EViscousBowlingBallState_t)
            // NetworkVarNames: m_flNextStateTime (GameTime_t)
            // NetworkVarNames: m_flNextWallCheck (GameTime_t)
            // NetworkVarNames: m_flRollStartTime (GameTime_t)
            // NetworkVarNames: m_flWallExitTime (GameTime_t)
            // NetworkVarNames: m_vecWallExitVelocity (Vector)
            namespace CCitadel_Ability_GooBowlingBall {
                constexpr std::ptrdiff_t m_bHasAirJumped = 0xFB8; // bool
                constexpr std::ptrdiff_t m_bIsShowingBall = 0xFB9; // bool
                constexpr std::ptrdiff_t m_hBall = 0xFBC; // CHandle<C_CitadelViscousBall>
                constexpr std::ptrdiff_t m_eRollingState = 0xFC0; // EViscousBowlingBallState_t
                constexpr std::ptrdiff_t m_flNextStateTime = 0xFC4; // GameTime_t
                constexpr std::ptrdiff_t m_flNextWallCheck = 0xFC8; // GameTime_t
                constexpr std::ptrdiff_t m_flRollStartTime = 0xFCC; // GameTime_t
                constexpr std::ptrdiff_t m_flWallExitTime = 0xFD0; // GameTime_t
                constexpr std::ptrdiff_t m_vecWallExitVelocity = 0xFD4; // Vector
                constexpr std::ptrdiff_t m_nDirectionParticleIndex = 0xFE8; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierAerialAssaultVData {
                constexpr std::ptrdiff_t m_FireRateModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TracerParticle = 0x6E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x7C8; // CSoundEventName
                constexpr std::ptrdiff_t m_flAirDrag = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flAirSpeed = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flFallSpeed = 0x7E0; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SlowingBullets_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData {
                constexpr std::ptrdiff_t m_SpiritStealParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ClimbRopeSpeed {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
                constexpr std::ptrdiff_t m_speedToPitchRemap = 0x5F8; // CRemapFloat
            }
            // Parent: C_NPC_SimpleAnimatingAI
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flAttackRange (float)
            // NetworkVarNames: m_flAimPitch (float)
            namespace C_NPC_FieldSentry {
                constexpr std::ptrdiff_t m_flAttackRange = 0xB4C; // float32
                constexpr std::ptrdiff_t m_flAimPitch = 0xB50; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_ComboBreaker {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Astro_Shotgun_Toggle {
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 0
            namespace CCitadel_Modifier_WeaponEaterStack {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
            }
            // Parent: C_BasePropDoor
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x558; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x588; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x58C; // char[129]
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bPreparing (bool)
            // NetworkVarNames: m_bTackling (bool)
            // NetworkVarNames: m_flTackleStartTime (GameTime_t)
            // NetworkVarNames: m_flPrepareStartTime (GameTime_t)
            // NetworkVarNames: m_vecTackleDir (Vector)
            namespace CCitadel_Ability_ChargedTackle {
                constexpr std::ptrdiff_t m_bPreparing = 0xE68; // bool
                constexpr std::ptrdiff_t m_bTackling = 0xE69; // bool
                constexpr std::ptrdiff_t m_flTackleStartTime = 0xE6C; // GameTime_t
                constexpr std::ptrdiff_t m_flPrepareStartTime = 0xE70; // GameTime_t
                constexpr std::ptrdiff_t m_vecTackleDir = 0xE74; // Vector
                constexpr std::ptrdiff_t m_vecLastPosition = 0xE80; // Vector
                constexpr std::ptrdiff_t m_nStuckFramesCount = 0xE8C; // int32
                constexpr std::ptrdiff_t m_vecHitEnemies = 0xE90; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nDistancePreview = 0xEA8; // ParticleIndex_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelAbilityChargedBombVData {
                constexpr std::ptrdiff_t m_ChargeBombModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x1618; // CSoundEventName
                constexpr std::ptrdiff_t m_flChargeForMaxDamage = 0x1628; // float32
                constexpr std::ptrdiff_t m_flMinDamagePercent = 0x162C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Aerial_Assault_Watcher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_GlowToTeammates {
            }
            // Parent: CCitadelModifierAura
            // Field count: 3
            namespace CCitadel_Modifier_AirLift_ExplodeAura {
                constexpr std::ptrdiff_t m_flStartRadius = 0xE0; // float32
                constexpr std::ptrdiff_t m_flEndRadius = 0xE4; // float32
                constexpr std::ptrdiff_t m_flSpreadDuration = 0xE8; // float32
            }
            // Parent: CAI_CitadelNPCVData
            // Field count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_Boss_Tier2VData {
                constexpr std::ptrdiff_t m_flPlayerInitialSightRange = 0xF58; // float32
                constexpr std::ptrdiff_t m_strWIPModelName = 0xF60; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_vecWeakPoints = 0x1040; // CUtlVector<WeakPointParams_t>
                constexpr std::ptrdiff_t m_BeamChargingEffect = 0x1058; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BeamPreviewEffect = 0x1138; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BeamActiveEffect = 0x1218; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StompImpactEffect = 0x12F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flTossSpeed = 0x13D8; // float32
                constexpr std::ptrdiff_t m_flStompDamage = 0x13DC; // float32
                constexpr std::ptrdiff_t m_flStompTossUpMagnitude = 0x13E0; // float32
                constexpr std::ptrdiff_t m_flStunDuration = 0x13E4; // float32
                constexpr std::ptrdiff_t m_flStompImpactRadius = 0x13E8; // float32
                constexpr std::ptrdiff_t m_flStompImpactHeight = 0x13EC; // float32
                constexpr std::ptrdiff_t m_flSweepRadius = 0x13F0; // float32
                constexpr std::ptrdiff_t m_flSweepSpeed = 0x13F4; // float32
                constexpr std::ptrdiff_t m_flSweepZScale = 0x13F8; // float32
                constexpr std::ptrdiff_t m_flSweepMaxAngle = 0x13FC; // float32
                constexpr std::ptrdiff_t m_flSweepMaxRange = 0x1400; // float32
                constexpr std::ptrdiff_t m_flSweepAdjustSpeed = 0x1404; // float32
                constexpr std::ptrdiff_t m_flBurstDuration = 0x1408; // float32
                constexpr std::ptrdiff_t m_flBurstCooldown = 0x140C; // float32
                constexpr std::ptrdiff_t m_BackdoorProtectionModifier = 0x1410; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_InvulModifier = 0x1420; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flInvulModifierRange = 0x1430; // float32
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x580; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x58C; // Vector
            }
            // Parent: CCitadel_Ability_PrimaryWeapon_BeamWeapon
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flStartWindUpTime (GameTime_t)
            // NetworkVarNames: m_flStartFiringTime (GameTime_t)
            // NetworkVarNames: m_bFiring (bool)
            namespace CCitadel_Ability_PrimaryWeapon_Bebop {
                constexpr std::ptrdiff_t m_flStartWindUpTime = 0xFF0; // GameTime_t
                constexpr std::ptrdiff_t m_flStartFiringTime = 0xFF4; // GameTime_t
                constexpr std::ptrdiff_t m_bFiring = 0xFF8; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_SiphonBullets_HealthLoss {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierDelayedStunVData {
                constexpr std::ptrdiff_t m_HitParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 0
            namespace C_Citadel_CatAnimating {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_bLoop (bool)
            // NetworkVarNames: m_flFPS (float)
            // NetworkVarNames: m_hPositionKeys (HRenderTextureStrong)
            // NetworkVarNames: m_hRotationKeys (HRenderTextureStrong)
            // NetworkVarNames: m_vAnimationBoundsMin (Vector)
            // NetworkVarNames: m_vAnimationBoundsMax (Vector)
            // NetworkVarNames: m_flStartTime (float)
            // NetworkVarNames: m_flStartFrame (float)
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x830; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x834; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x838; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x840; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x848; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x854; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x860; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x864; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_IdolReturnTimer {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Targetdummy_2 {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierRiotProtocolBuffVData {
                constexpr std::ptrdiff_t m_LaserParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PulseHitEnemyParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyDebuffModifier = 0x7B8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierCrowdControlDebuffVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_AirRaid {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ZipLine_Mastery {
                constexpr std::ptrdiff_t m_nFXIndex = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierIdolReturnTimerVData {
                constexpr std::ptrdiff_t m_ChannelParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_IcePath_TechPowerLinger {
                constexpr std::ptrdiff_t m_nBonusSpirit = 0xC0; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_VeilWalkerWatcherVData {
                constexpr std::ptrdiff_t m_InvisModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_VeilWalkerTriggeredModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_VeilWalkerMovespeed = 0x618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flTraceLengthMin = 0x628; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_MeleeTarget {
            }
            // Parent: CNPC_TrooperNeutralVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_TrooperNeutralNodeMoverVData {
                constexpr std::ptrdiff_t m_bEnableMovementToNodes = 0x12C0; // bool
                constexpr std::ptrdiff_t m_flExposedDuration = 0x12C4; // CRangeFloat
                constexpr std::ptrdiff_t m_flHideDuration = 0x12CC; // CRangeFloat
                constexpr std::ptrdiff_t m_HidingModifier = 0x12D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_NPC_TrooperNeutral
            // Field count: 0
            namespace C_NPC_MidBossHeroTest {
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightOrthoEntity {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PermanentPickup {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Slork_Raging_Current_CountdownVData {
                constexpr std::ptrdiff_t m_TorrentModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_WaterAuraParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Mirage_Tornado_Aura_Apply_VData {
                constexpr std::ptrdiff_t m_TossModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_LiftModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityThumper3VData {
                constexpr std::ptrdiff_t m_DroneModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ShakedownPulseVData {
                constexpr std::ptrdiff_t m_strFireSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_ShakeParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChainParticle = 0x6E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_WreckerScrapBlastDebuff {
                constexpr std::ptrdiff_t m_flEnemyMoveSlow = 0xC0; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_HealingPulse_Tracker {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_TechCleaveVData {
                constexpr std::ptrdiff_t m_TechCleaveModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_sCleaveProcSound = 0x1580; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_RescueBeam {
                constexpr std::ptrdiff_t m_flHealthPerTick = 0x1A0; // float32
                constexpr std::ptrdiff_t m_nBeamIndex = 0x1A4; // ParticleIndex_t
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x558; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x55C; // CHandle<C_SkyCamera>
            }
            // Parent: C_TonemapController2
            // Field count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierAura_ConeVData {
                constexpr std::ptrdiff_t m_flAuraTargetingConeHalfWidth = 0x638; // float32
                constexpr std::ptrdiff_t m_flAuraTargetingConeAngle = 0x63C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ControlPointCapturerAuraTarget {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Dust_Storm_Thrown {
            }
            // Parent: CitadelItemVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_PersonalRejuvenatorVData {
                constexpr std::ptrdiff_t m_DeployParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_RespawnParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sDeploySound = 0x1730; // CSoundEventName
                constexpr std::ptrdiff_t m_sRespawnSound = 0x1740; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 18
            namespace CCitadel_Modifier_Tier2Boss_LaserBeam {
                constexpr std::ptrdiff_t m_bPreview = 0x130; // bool
                constexpr std::ptrdiff_t m_flSoundStartTime = 0x13C; // GameTime_t
                constexpr std::ptrdiff_t m_vStart = 0x144; // Vector
                constexpr std::ptrdiff_t m_vEnd = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrevEnd = 0x15C; // Vector
                constexpr std::ptrdiff_t m_flAngleBetweenTrace = 0x168; // float32
                constexpr std::ptrdiff_t m_flDamagePerTick = 0x16C; // float32
                constexpr std::ptrdiff_t m_flCreepDamagePerTick = 0x170; // float32
                constexpr std::ptrdiff_t m_flNextDamageTick = 0x174; // GameTime_t
                constexpr std::ptrdiff_t m_vecEntitiesHit = 0x178; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flDamageTickRate = 0x190; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x194; // GameTime_t
                constexpr std::ptrdiff_t m_bSweepRightFirst = 0x198; // bool
                constexpr std::ptrdiff_t m_angBeamAim = 0x19C; // QAngle
                constexpr std::ptrdiff_t m_vecBeamTarget = 0x1A8; // Vector
                constexpr std::ptrdiff_t m_flLastBeamUpdateTime = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_flTargetingTaskStartTime = 0x1D0; // GameTime_t
                constexpr std::ptrdiff_t m_flTrackVel = 0x1D4; // float32
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_hTargetEntity (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bState (bool)
            // NetworkVarNames: m_bAlwaysUpdate (bool)
            // NetworkVarNames: m_flLightFOV (float32)
            // NetworkVarNames: m_bEnableShadows (bool)
            // NetworkVarNames: m_bSimpleProjection (bool)
            // NetworkVarNames: m_bLightOnlyTarget (bool)
            // NetworkVarNames: m_bLightWorld (bool)
            // NetworkVarNames: m_bCameraSpace (bool)
            // NetworkVarNames: m_flBrightnessScale (float32)
            // NetworkVarNames: m_LightColor (Color)
            // NetworkVarNames: m_flIntensity (float32)
            // NetworkVarNames: m_flLinearAttenuation (float32)
            // NetworkVarNames: m_flQuadraticAttenuation (float32)
            // NetworkVarNames: m_bVolumetric (bool)
            // NetworkVarNames: m_flVolumetricIntensity (float32)
            // NetworkVarNames: m_flNoiseStrength (float32)
            // NetworkVarNames: m_flFlashlightTime (float32)
            // NetworkVarNames: m_nNumPlanes (uint32)
            // NetworkVarNames: m_flPlaneOffset (float32)
            // NetworkVarNames: m_flColorTransitionTime (float32)
            // NetworkVarNames: m_flAmbient (float32)
            // NetworkVarNames: m_SpotlightTextureName (char)
            // NetworkVarNames: m_nSpotlightTextureFrame (int32)
            // NetworkVarNames: m_nShadowQuality (uint32)
            // NetworkVarNames: m_flNearZ (float32)
            // NetworkVarNames: m_flFarZ (float32)
            // NetworkVarNames: m_flProjectionSize (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_bFlipHorizontal (bool)
            namespace CProjectedTextureBase {
                constexpr std::ptrdiff_t m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bState = 0x10; // bool
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11; // bool
                constexpr std::ptrdiff_t m_flLightFOV = 0x14; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x18; // bool
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x19; // bool
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A; // bool
                constexpr std::ptrdiff_t m_bLightWorld = 0x1B; // bool
                constexpr std::ptrdiff_t m_bCameraSpace = 0x1C; // bool
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x20; // float32
                constexpr std::ptrdiff_t m_LightColor = 0x24; // Color
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // float32
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C; // float32
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30; // float32
                constexpr std::ptrdiff_t m_bVolumetric = 0x34; // bool
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38; // float32
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x40; // float32
                constexpr std::ptrdiff_t m_nNumPlanes = 0x44; // uint32
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x48; // float32
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_flAmbient = 0x50; // float32
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54; // char[512]
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254; // int32
                constexpr std::ptrdiff_t m_nShadowQuality = 0x258; // uint32
                constexpr std::ptrdiff_t m_flNearZ = 0x25C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x260; // float32
                constexpr std::ptrdiff_t m_flProjectionSize = 0x264; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x268; // float32
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C; // bool
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_SleepAOE {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_WeaponUpgrade_FireRateAura {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_AirLiftExplodingAllyVData {
                constexpr std::ptrdiff_t m_strExplodeEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AOEModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Bebop_LaserBeamVData {
                constexpr std::ptrdiff_t m_LaserModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ChargeParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_Invis
            // Field count: 1
            namespace CCitadel_Modifier_Camouflage_Invis {
                constexpr std::ptrdiff_t m_vCastPosition = 0x268; // Vector
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_TrooperGrenade {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BaseShield {
            }
            // Parent: C_NPC_TrooperNeutral
            // Field count: 0
            namespace C_NPC_TrooperNeutralNodeMover {
            }
            // Parent: CAttributeManager
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace CAttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x68; // C_EconItemView
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Lash_Flog_Debuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FlameDashVData {
                constexpr std::ptrdiff_t m_GroundAuraModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ProgressModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_FlameDashParticle = 0x618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlameAuraParticle = 0x6F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Stabilizing_Tripod {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_VexBarrierVData {
                constexpr std::ptrdiff_t m_ShieldModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_HollowPoint_Stack {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_SlowImmunity {
            }
            // Parent: C_PathParticleRope
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 0
            namespace CCitadel_Modifier_MagicStormWatcher {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DiscordVData {
                constexpr std::ptrdiff_t m_ImpactParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TechRangeClamp {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_VData {
                constexpr std::ptrdiff_t m_PassiveVictimModifier = 0x728; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x738; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x818; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Grasp_Caster_VData {
                constexpr std::ptrdiff_t m_CastParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityRestorativeGooVData {
                constexpr std::ptrdiff_t m_RestorativeGooParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_RestorativeGooModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            namespace CCitadel_Ability_Teleport {
                constexpr std::ptrdiff_t m_bTeleportingToTarget = 0xC70; // bool
                constexpr std::ptrdiff_t m_vTargetPosition = 0xC74; // Vector
                constexpr std::ptrdiff_t m_vTargetAngles = 0xC80; // QAngle
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BulletArmorReductionVData {
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1558; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1564; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1570; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1574; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1578; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x157C; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1580; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1584; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1588; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x158C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1590; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1594; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x15A1; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGenericPerson4VData {
            }
            // Parent: CCitadel_Modifier_Sleep
            // Field count: 0
            namespace CCitadel_Modifier_SleepDagger_Asleep {
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_Chrono_KineticCarbine {
                constexpr std::ptrdiff_t m_nBulletCount = 0xC0; // int32
                constexpr std::ptrdiff_t m_flElapsedPct = 0xC4; // float32
                constexpr std::ptrdiff_t m_hTimeWarp = 0xC8; // CHandle<CCitadelBulletTimeWarp>
                constexpr std::ptrdiff_t m_nFullyChargedParticle = 0xCC; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_HealthSwapPrecastVData {
                constexpr std::ptrdiff_t m_strTargetParticleEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strTargetEnemyParticleEffect = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strTargetScreenParticleEffect = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_LifeDrainVData {
                constexpr std::ptrdiff_t m_SilenceModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DrainParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BeltFed_MagazineVData {
                constexpr std::ptrdiff_t m_SpinUpSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_SpinDownSound = 0x608; // CSoundEventName
                constexpr std::ptrdiff_t m_SpinLoopSound = 0x618; // CSoundEventName
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemStimPakVData {
                constexpr std::ptrdiff_t m_StimPakModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CastParticle = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_TriggerPush {
                constexpr std::ptrdiff_t m_vPush = 0xC0; // Vector
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nEntIndex (CEntityIndex)
            // NetworkVarNames: m_nTeam (int)
            // NetworkVarNames: m_eClass (Class_T)
            // NetworkVarNames: m_iLane (int)
            // NetworkVarNames: m_eHeight (EMinimapHeight)
            // NetworkVarNames: m_bVisibleOnMap (bool)
            // NetworkVarNames: m_bBackdoorProtectionActive (bool)
            // NetworkVarNames: m_nTickHidden (GameTick_t)
            // NetworkVarNames: m_strEntityName (CUtlString)
            // NetworkVarNames: m_nHealthPercent (uint8)
            // NetworkVarNames: m_nPositionX (uint8)
            // NetworkVarNames: m_nPositionY (uint8)
            namespace STeamFOWEntity {
                constexpr std::ptrdiff_t m_nEntIndex = 0x30; // CEntityIndex
                constexpr std::ptrdiff_t m_nTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_eClass = 0x38; // Class_T
                constexpr std::ptrdiff_t m_iLane = 0x3C; // int32
                constexpr std::ptrdiff_t m_eHeight = 0x40; // EMinimapHeight
                constexpr std::ptrdiff_t m_bVisibleOnMap = 0x41; // bool
                constexpr std::ptrdiff_t m_bBackdoorProtectionActive = 0x42; // bool
                constexpr std::ptrdiff_t m_nTickHidden = 0x44; // GameTick_t
                constexpr std::ptrdiff_t m_strEntityName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nHealthPercent = 0x50; // uint8
                constexpr std::ptrdiff_t m_nPositionX = 0x51; // uint8
                constexpr std::ptrdiff_t m_nPositionY = 0x52; // uint8
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_Mirage_DjinnBomb {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ThermalDetonator_ThinkerVData {
                constexpr std::ptrdiff_t m_GroundParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Hook_Shield {
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_FireBomb {
                constexpr std::ptrdiff_t m_flSideMoveSpeed = 0x130; // float32
                constexpr std::ptrdiff_t m_vReturnPosition = 0x134; // Vector
                constexpr std::ptrdiff_t m_vReturnAngles = 0x140; // QAngle
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Item_AOESilence_Target {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TechBurst_ProcVData {
                constexpr std::ptrdiff_t m_ProcParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_RespawnCredit {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_HealthRegenAura {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_CitadelTrackedProjectile {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_Crescendo_InAOE_VData {
                constexpr std::ptrdiff_t m_PostAOEModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_VeilWalkerMovespeed {
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 1
            namespace CCitadel_Modifier_ReinforcingCasings {
                constexpr std::ptrdiff_t m_LastHitShotID = 0xC0; // ShotID_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Upgrade_OverdriveClip_VData {
                constexpr std::ptrdiff_t m_BuffEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TracerParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DisarmProcWatcherVData {
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x628; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_DisarmProcModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImmunityModifier = 0x648; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TracerParticle = 0x658; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_DiminishingSlow {
                constexpr std::ptrdiff_t m_flSlowPercent = 0xC0; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_UtilityUpgrade_DebuffImmunity {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Mirage_DjinnBomb {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Rutger_CheatDeath_VData {
                constexpr std::ptrdiff_t m_ModifierCheatDeathActivated = 0x1528; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierFealtyTargetVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_Arcane_Eater_Proc {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemMetalSkinVData {
                constexpr std::ptrdiff_t m_MetalSkinModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Upgrade_AmmoScavenger_VData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ShieldTracker_BaseVData {
                constexpr std::ptrdiff_t m_flShieldImpactEffectDuration = 0x5F8; // float32
                constexpr std::ptrdiff_t m_ShieldImpactParticle = 0x600; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShieldImpactModifier = 0x6E0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t eShieldType = 0x6F0; // EShieldType_t
                constexpr std::ptrdiff_t flCooldownOnDamage = 0x6F4; // float32
                constexpr std::ptrdiff_t flCooldownOnBreak = 0x6F8; // float32
                constexpr std::ptrdiff_t flRegenDuration = 0x6FC; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_bTimerPaused (bool)
            // NetworkVarNames: m_flTimeRemaining (float)
            // NetworkVarNames: m_flTimerEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDisabled (bool)
            // NetworkVarNames: m_bShowInHUD (bool)
            // NetworkVarNames: m_nTimerLength (int)
            // NetworkVarNames: m_nTimerInitialLength (int)
            // NetworkVarNames: m_nTimerMaxLength (int)
            // NetworkVarNames: m_bAutoCountdown (bool)
            // NetworkVarNames: m_nSetupTimeLength (int)
            // NetworkVarNames: m_nState (int)
            // NetworkVarNames: m_bStartPaused (bool)
            // NetworkVarNames: m_bInCaptureWatchState (bool)
            // NetworkVarNames: m_flTotalTime (float)
            // NetworkVarNames: m_bStopWatchTimer (bool)
            namespace C_TeamRoundTimer {
                constexpr std::ptrdiff_t m_bTimerPaused = 0x558; // bool
                constexpr std::ptrdiff_t m_flTimeRemaining = 0x55C; // float32
                constexpr std::ptrdiff_t m_flTimerEndTime = 0x560; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDisabled = 0x564; // bool
                constexpr std::ptrdiff_t m_bShowInHUD = 0x565; // bool
                constexpr std::ptrdiff_t m_nTimerLength = 0x568; // int32
                constexpr std::ptrdiff_t m_nTimerInitialLength = 0x56C; // int32
                constexpr std::ptrdiff_t m_nTimerMaxLength = 0x570; // int32
                constexpr std::ptrdiff_t m_bAutoCountdown = 0x574; // bool
                constexpr std::ptrdiff_t m_nSetupTimeLength = 0x578; // int32
                constexpr std::ptrdiff_t m_nState = 0x57C; // int32
                constexpr std::ptrdiff_t m_bStartPaused = 0x580; // bool
                constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x581; // bool
                constexpr std::ptrdiff_t m_flTotalTime = 0x584; // float32
                constexpr std::ptrdiff_t m_bStopWatchTimer = 0x588; // bool
                constexpr std::ptrdiff_t m_bFireFinished = 0x589; // bool
                constexpr std::ptrdiff_t m_bFire5MinRemain = 0x58A; // bool
                constexpr std::ptrdiff_t m_bFire4MinRemain = 0x58B; // bool
                constexpr std::ptrdiff_t m_bFire3MinRemain = 0x58C; // bool
                constexpr std::ptrdiff_t m_bFire2MinRemain = 0x58D; // bool
                constexpr std::ptrdiff_t m_bFire1MinRemain = 0x58E; // bool
                constexpr std::ptrdiff_t m_bFire30SecRemain = 0x58F; // bool
                constexpr std::ptrdiff_t m_bFire10SecRemain = 0x590; // bool
                constexpr std::ptrdiff_t m_bFire5SecRemain = 0x591; // bool
                constexpr std::ptrdiff_t m_bFire4SecRemain = 0x592; // bool
                constexpr std::ptrdiff_t m_bFire3SecRemain = 0x593; // bool
                constexpr std::ptrdiff_t m_bFire2SecRemain = 0x594; // bool
                constexpr std::ptrdiff_t m_bFire1SecRemain = 0x595; // bool
                constexpr std::ptrdiff_t m_nOldTimerLength = 0x598; // int32
                constexpr std::ptrdiff_t m_nOldTimerState = 0x59C; // int32
            }
            // Parent: CCitadelModelEntity
            // Field count: 1
            namespace C_LaneNode {
                constexpr std::ptrdiff_t m_nPlayerTeamEventIndex = 0x868; // int32
            }
            // Parent: CCitadelModelEntity
            // Field count: 1
            namespace C_CitadelViscousBall {
                constexpr std::ptrdiff_t m_hAbility = 0x838; // CHandle<C_CitadelBaseAbility>
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_RagingCurrentVData {
                constexpr std::ptrdiff_t m_TorrentParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TorrentModifier = 0x7B8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityThumper2VData {
                constexpr std::ptrdiff_t m_StompParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStompExplosionSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_BuffModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BarbedWireAuraModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_ExplosiveBarrel {
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityVacuumVData {
                constexpr std::ptrdiff_t m_VacuumAuraModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1538; // float32
                constexpr std::ptrdiff_t m_flFallSpeedMax = 0x153C; // float32
                constexpr std::ptrdiff_t m_flAirDrag = 0x1540; // float32
                constexpr std::ptrdiff_t m_flMaxMovespeed = 0x1544; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierBullChargingVData {
                constexpr std::ptrdiff_t m_ChargeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySprintVData {
                constexpr std::ptrdiff_t m_SprintParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strSprintSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_flInCombatDuration = 0x1618; // float32
                constexpr std::ptrdiff_t m_flSprintAccMS = 0x161C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ZiplineSpeed {
                constexpr std::ptrdiff_t m_iLane = 0xC0; // int32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CAbility_Synth_Affliction {
                constexpr std::ptrdiff_t m_hAOEParticle = 0xCE0; // ParticleIndex_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Tenacity {
            }
            // Parent: CCitadelYamatoBaseVData
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_InfinitySlashVData {
                constexpr std::ptrdiff_t m_flRiseSpeed = 0x1530; // float32
                constexpr std::ptrdiff_t m_flRiseDuration = 0x1534; // float32
                constexpr std::ptrdiff_t m_flSpeedDecayScale = 0x1538; // float32
                constexpr std::ptrdiff_t m_flExplodeHoldTime = 0x153C; // float32
                constexpr std::ptrdiff_t m_flExplosionShakeAmplitude = 0x1540; // float32
                constexpr std::ptrdiff_t m_flExplosionShakeFrequency = 0x1544; // float32
                constexpr std::ptrdiff_t m_flExplosionShakeDuration = 0x1548; // float32
                constexpr std::ptrdiff_t m_AOERangeEffect = 0x1550; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AnimCastEffect = 0x1630; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_cameraSequenceExplosion = 0x1710; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_BuffModifier = 0x1790; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffTimerModifier = 0x17A0; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_vecCastStartPos (Vector)
            // NetworkVarNames: m_vecDashStartPos (Vector)
            // NetworkVarNames: m_vecDashEndPos (Vector)
            // NetworkVarNames: m_angDashStartAng (QAngle)
            // NetworkVarNames: m_flDashStartTime (GameTime_t)
            // NetworkVarNames: m_flGrappleStartTime (GameTime_t)
            // NetworkVarNames: m_flGrappleArriveTime (GameTime_t)
            // NetworkVarNames: m_hTarget (EHANDLE)
            // NetworkVarNames: m_flGrappleShotAttackTime (GameTime_t)
            // NetworkVarNames: m_rgTargetPos (Vector)
            // NetworkVarNames: m_rgTargetPosTime (GameTime_t)
            namespace CCitadel_Ability_TangoTether {
                constexpr std::ptrdiff_t m_desatVolIdx = 0xC70; // SatVolumeIndex_t
                constexpr std::ptrdiff_t m_vecCastStartPos = 0xC74; // Vector
                constexpr std::ptrdiff_t m_vecDashStartPos = 0xC80; // Vector
                constexpr std::ptrdiff_t m_vecDashEndPos = 0xC8C; // Vector
                constexpr std::ptrdiff_t m_angDashStartAng = 0xC98; // QAngle
                constexpr std::ptrdiff_t m_flDashStartTime = 0xCA4; // GameTime_t
                constexpr std::ptrdiff_t m_flGrappleStartTime = 0xCA8; // GameTime_t
                constexpr std::ptrdiff_t m_flGrappleArriveTime = 0xCAC; // GameTime_t
                constexpr std::ptrdiff_t m_hTarget = 0xCB0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flVelSpring = 0xCB4; // float32
                constexpr std::ptrdiff_t m_flGrappleShotAttackTime = 0xCB8; // GameTime_t
                constexpr std::ptrdiff_t m_nTicksNotMoving = 0xCBC; // int32
                constexpr std::ptrdiff_t m_vecPrevPos = 0xCC0; // Vector
                constexpr std::ptrdiff_t m_rgTargetPos = 0xCCC; // Vector[20]
                constexpr std::ptrdiff_t m_rgTargetPosTime = 0xDBC; // GameTime_t[20]
                constexpr std::ptrdiff_t m_nGrappleTravelEffect = 0xE0C; // ParticleIndex_t
            }
            // Parent: CCitadelBaseShivAbility
            // Field count: 1
            namespace CCitadel_Ability_ShivDagger {
                constexpr std::ptrdiff_t m_bIsInRicochet = 0xC70; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Puddle {
            }
            // Parent: CitadelAbilityVData
            // Field count: 21
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Bull_LeapVData {
                constexpr std::ptrdiff_t m_CrashSpeedScaleCurve = 0x1528; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_BoostModifier = 0x1568; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CrashModifier = 0x1578; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImmunityModifier = 0x1588; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_LandingBonusesModifier = 0x1598; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TakeOffParticle = 0x15A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1688; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1768; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nHoverParticle = 0x1848; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strCrashingSound = 0x1928; // CSoundEventName
                constexpr std::ptrdiff_t m_strImpactSound = 0x1938; // CSoundEventName
                constexpr std::ptrdiff_t m_flStartupTime = 0x1948; // float32
                constexpr std::ptrdiff_t m_flForwardBoostSpeed = 0x194C; // float32
                constexpr std::ptrdiff_t m_flUpBoostSpeed = 0x1950; // float32
                constexpr std::ptrdiff_t m_flBoostTurnRate = 0x1954; // float32
                constexpr std::ptrdiff_t m_flHoverTime = 0x1958; // float32
                constexpr std::ptrdiff_t m_flMinAimAngle = 0x195C; // float32
                constexpr std::ptrdiff_t m_flBoostGain = 0x1960; // float32
                constexpr std::ptrdiff_t m_flBoostTime = 0x1964; // float32
                constexpr std::ptrdiff_t m_flLandingTime = 0x1968; // float32
                constexpr std::ptrdiff_t m_flCrashSpeed = 0x196C; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 30
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkOverride
            // NetworkVarNames: m_bChanneling (bool)
            // NetworkVarNames: m_bInCastDelay (bool)
            // NetworkVarNames: m_vecImbuedByAbilitiyIDs (EntitySubclassID_t)
            // NetworkVarNames: m_nUpgradeBits (int)
            // NetworkVarNames: m_iBucketID (int)
            // NetworkVarNames: m_bToggleState (bool)
            // NetworkVarNames: m_flToggledTime (GameTime_t)
            // NetworkVarNames: m_flCooldownStart (GameTime_t)
            // NetworkVarNames: m_flCooldownEnd (GameTime_t)
            // NetworkVarNames: m_flCastCompletedTime (GameTime_t)
            // NetworkVarNames: m_flChannelStartTime (GameTime_t)
            // NetworkVarNames: m_flCastDelayStartTime (GameTime_t)
            // NetworkVarNames: m_eAbilitySlot (EAbilitySlots_t)
            // NetworkVarNames: m_flPostCastDelayEndTime (GameTime_t)
            // NetworkVarNames: m_iRemainingCharges (int)
            // NetworkVarNames: m_flChargeRechargeStart (GameTime_t)
            // NetworkVarNames: m_flChargeRechargeEnd (GameTime_t)
            // NetworkVarNames: m_flMovementControlActiveTime (GameTime_t)
            // NetworkVarNames: m_flSelectedChangedTime (GameTime_t)
            // NetworkVarNames: m_flAltCastHoldStartTime (GameTime_t)
            // NetworkVarNames: m_flAltCastDoubleTapStartTime (GameTime_t)
            // NetworkVarNames: m_nImbuedAbilityID (AbilityID_t)
            // NetworkVarNames: m_bSelectionModeIsAltMode (bool)
            namespace C_CitadelBaseAbility {
                constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x620; // CUtlVector<CModifierHandleTyped<CCitadelModifier>>
                constexpr std::ptrdiff_t m_pCastDelayAutoModifier = 0x638; // CModifierHandleTyped<CCitadelModifier>
                constexpr std::ptrdiff_t m_pChannelAutoModifier = 0x650; // CModifierHandleTyped<CCitadelModifier>
                constexpr std::ptrdiff_t m_strUsedCastGraphParam = 0x668; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nCastParamNeedsResetTick = 0x670; // int32
                constexpr std::ptrdiff_t m_bIsCoolingDownInternal = 0x674; // bool
                constexpr std::ptrdiff_t m_flCancelLockoutTime = 0x678; // GameTime_t
                constexpr std::ptrdiff_t m_bChanneling = 0x698; // bool
                constexpr std::ptrdiff_t m_bInCastDelay = 0x699; // bool
                constexpr std::ptrdiff_t m_vecImbuedByAbilitiyIDs = 0x6A0; // C_NetworkUtlVectorBase<CUtlStringToken>
                constexpr std::ptrdiff_t m_nUpgradeBits = 0x6B8; // int32
                constexpr std::ptrdiff_t m_iBucketID = 0x6BC; // int32
                constexpr std::ptrdiff_t m_bToggleState = 0x6C0; // bool
                constexpr std::ptrdiff_t m_flToggledTime = 0x6C4; // GameTime_t
                constexpr std::ptrdiff_t m_flCooldownStart = 0x6C8; // GameTime_t
                constexpr std::ptrdiff_t m_flCooldownEnd = 0x6CC; // GameTime_t
                constexpr std::ptrdiff_t m_flCastCompletedTime = 0x6D0; // GameTime_t
                constexpr std::ptrdiff_t m_flChannelStartTime = 0x6D4; // GameTime_t
                constexpr std::ptrdiff_t m_flCastDelayStartTime = 0x6D8; // GameTime_t
                constexpr std::ptrdiff_t m_eAbilitySlot = 0x6DC; // EAbilitySlots_t
                constexpr std::ptrdiff_t m_flPostCastDelayEndTime = 0x6E0; // GameTime_t
                constexpr std::ptrdiff_t m_iRemainingCharges = 0x6E4; // int32
                constexpr std::ptrdiff_t m_flChargeRechargeStart = 0x6E8; // GameTime_t
                constexpr std::ptrdiff_t m_flChargeRechargeEnd = 0x6EC; // GameTime_t
                constexpr std::ptrdiff_t m_flMovementControlActiveTime = 0x6F0; // GameTime_t
                constexpr std::ptrdiff_t m_flSelectedChangedTime = 0x6F4; // GameTime_t
                constexpr std::ptrdiff_t m_flAltCastHoldStartTime = 0x6F8; // GameTime_t
                constexpr std::ptrdiff_t m_flAltCastDoubleTapStartTime = 0x6FC; // GameTime_t
                constexpr std::ptrdiff_t m_nImbuedAbilityID = 0x700; // CUtlStringToken
                constexpr std::ptrdiff_t m_bSelectionModeIsAltMode = 0x704; // bool
            }
            // Parent: C_NPC_SimpleAnimatingAI
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CCitadelAbilityComponent (CCitadelAbilityComponent::Storage_t)
            namespace C_NPC_TeslaCoil {
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xB48; // CCitadelAbilityComponent
            }
            // Parent: C_ModelPointEntity
            // Field count: 0
            namespace C_EnvProjectedTexture {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pathString (CUtlString)
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_pathString = 0x5B0; // CUtlString
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 1
            namespace CCitadel_Modifier_UltCombo_Target {
                constexpr std::ptrdiff_t m_angles = 0xC8; // QAngle
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_WreckingBall_AutoThrow {
            }
            // Parent: CCitadelModifier
            // Field count: 7
            namespace CCitadel_Modifier_Bebop_LaserBeam {
                constexpr std::ptrdiff_t m_flSoundStartTime = 0x330; // GameTime_t
                constexpr std::ptrdiff_t m_vStart = 0x338; // Vector
                constexpr std::ptrdiff_t m_vEnd = 0x344; // Vector
                constexpr std::ptrdiff_t m_vPrevEnd = 0x350; // Vector
                constexpr std::ptrdiff_t m_flAngleBetweenTrace = 0x35C; // float32
                constexpr std::ptrdiff_t m_flDamagePerTick = 0x360; // float32
                constexpr std::ptrdiff_t m_flNextDamageTick = 0x364; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Astro_Rifle_SelfVData {
                constexpr std::ptrdiff_t m_WeaponFxParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Kelvin_Frozen {
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Chrono_KineticCarbineVData {
                constexpr std::ptrdiff_t m_flShotTimeScaleLingerDuration = 0x1528; // float32
                constexpr std::ptrdiff_t m_ChargingModifier = 0x1530; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1540; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_cameraKineticCarbineShotFired = 0x1550; // CitadelCameraOperationsSequence_t
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_DivinersKevlar_VData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PrecastSpiritBuffModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Item
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bFlying (bool)
            // NetworkVarNames: m_bSummoning (bool)
            namespace CCitadel_Upgrade_MagicCarpet {
                constexpr std::ptrdiff_t m_flFlyingStartTime = 0xC88; // GameTime_t
                constexpr std::ptrdiff_t m_bFlying = 0xD38; // bool
                constexpr std::ptrdiff_t m_bSummoning = 0xD39; // bool
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0xA90; // bool
                constexpr std::ptrdiff_t m_bHide = 0xA91; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0xA94; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0xA98; // C_PointClientUIWorldPanel*
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_Shakedown_Target {
                constexpr std::ptrdiff_t m_hShadowdownAbility = 0xC70; // CHandle<CCitadel_Ability_Yakuza_Shakedown>
                constexpr std::ptrdiff_t m_AimPos = 0xC74; // Vector
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Bounce_PadVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_IdleParticle = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BounceParticle = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DestroyParticle = 0x2C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strCasterBounceSound = 0x3A8; // CSoundEventName
                constexpr std::ptrdiff_t m_strOtherHeroBounceSound = 0x3B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strBarrelBounceSound = 0x3C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strExpiredSound = 0x3D8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_SmokeBombVData {
                constexpr std::ptrdiff_t m_InvisModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PurgeParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_ZiplineMasteryVData {
                constexpr std::ptrdiff_t m_JumpBonusModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 12
            namespace CCitadel_Modifier_BurstFire_Actuator {
                constexpr std::ptrdiff_t m_bLastShotInFlight = 0xC0; // bool
                constexpr std::ptrdiff_t m_bBonusTracked = 0xC1; // bool
                constexpr std::ptrdiff_t m_nHitCounter = 0xC4; // int32
                constexpr std::ptrdiff_t m_nTotalBurstFireShots = 0xC8; // int32
                constexpr std::ptrdiff_t m_nInitialzedClipSize = 0xCC; // int32
                constexpr std::ptrdiff_t m_nBonusPitch = 0xD0; // int32
                constexpr std::ptrdiff_t m_bInitialized = 0xD4; // bool
                constexpr std::ptrdiff_t m_nIncreasedBurstShotCount = 0xD8; // int32
                constexpr std::ptrdiff_t m_flIntraBurstCycleTime = 0xDC; // float32
                constexpr std::ptrdiff_t m_flCycleTimePct = 0xE0; // float32
                constexpr std::ptrdiff_t m_flMaxCycleTimeOverride = 0xE4; // float32
                constexpr std::ptrdiff_t m_flMaxBurstFireCooldownOverride = 0xE8; // float32
            }
            // Parent: CCitadel_Modifier_StatStealBaseVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Siphon_Bullets_WatcherVData {
                constexpr std::ptrdiff_t m_HealModifier = 0x618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Upgrade_Magic_Storm {
            }
            // Parent: CPlayer_MovementServices
            // Field count: 2
            namespace CCitadelObserver_MovementServices {
                constexpr std::ptrdiff_t m_flRoamingSpeed = 0x1D8; // float32
                constexpr std::ptrdiff_t m_bHasFreeCursor = 0x1DC; // bool
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_IceDome_AuraModifierBase {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TechCleave {
            }
            // Parent: None
            // Field count: 77
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataAssociatedFile
            // MVDataOverlayType
            namespace CitadelHeroData_t {
                constexpr std::ptrdiff_t m_vecAnimGraphDefaultValueOverrides = 0x8; // CUtlVector<HeroAnimGraphDefaultValueOverride_t>
                constexpr std::ptrdiff_t m_HeroID = 0x28; // HeroID_t
                constexpr std::ptrdiff_t m_hDamageTakenParticle = 0x30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_hGroundDamageTakenParticle = 0x110; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_hDeathParticle = 0x1F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_hLowHealthParticle = 0x2D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strSelectionImage = 0x3B0; // CPanoramaImageName
                constexpr std::ptrdiff_t m_strIconImageSmall = 0x3C0; // CPanoramaImageName
                constexpr std::ptrdiff_t m_strIconHeroCard = 0x3D0; // CPanoramaImageName
                constexpr std::ptrdiff_t m_strMinimapImage = 0x3E0; // CPanoramaImageName
                constexpr std::ptrdiff_t m_strTopBarImage = 0x3F0; // CPanoramaImageName
                constexpr std::ptrdiff_t m_strTopBarVertical = 0x400; // CPanoramaImageName
                constexpr std::ptrdiff_t m_hRespawnParticle = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_colorUI = 0x4F0; // Color
                constexpr std::ptrdiff_t m_hAmbientParticle = 0x4F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_vecAmbientParticleSettings = 0x5D8; // CUtlVector<AmbientParticleSettings_t>
                constexpr std::ptrdiff_t m_colorGlowFriendly = 0x5F0; // Color
                constexpr std::ptrdiff_t m_colorGlowEnemy = 0x5F4; // Color
                constexpr std::ptrdiff_t m_colorGlowTeam1 = 0x5F8; // Color
                constexpr std::ptrdiff_t m_colorGlowTeam2 = 0x5FC; // Color
                constexpr std::ptrdiff_t m_strModelName = 0x600; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_nModelSkin = 0x6E0; // int32
                constexpr std::ptrdiff_t m_strPublicModelName = 0x6E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_strWIPModelName = 0x7C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_strUIAnimGraph = 0x8A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIAnimGraphModelBinding>>
                constexpr std::ptrdiff_t m_strUIShopAnimGraph = 0x988; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIAnimGraphModelBinding>>
                constexpr std::ptrdiff_t m_strUIPortraitMap = 0xA68; // CUtlString
                constexpr std::ptrdiff_t m_strUIShoppingMap = 0xA70; // CUtlString
                constexpr std::ptrdiff_t m_heroStatsUI = 0xA78; // HeroStatsUI_t
                constexpr std::ptrdiff_t m_heroStatsDisplay = 0xAA8; // HeroStatsDisplay_t
                constexpr std::ptrdiff_t m_ShopStatDisplay = 0xB38; // CitadelStatsDisplay_t
                constexpr std::ptrdiff_t m_strDeathSound = 0xBE0; // CSoundEventName
                constexpr std::ptrdiff_t m_strLastHitSound = 0xBF0; // CSoundEventName
                constexpr std::ptrdiff_t m_strRosterSelectedSound = 0xC00; // CSoundEventName
                constexpr std::ptrdiff_t m_strRosterRemovedSound = 0xC10; // CSoundEventName
                constexpr std::ptrdiff_t m_strFootstepSoundEventDefault = 0xC20; // CSoundEventName
                constexpr std::ptrdiff_t m_strLowHealthSound = 0xC30; // CSoundEventName
                constexpr std::ptrdiff_t m_strHeroSpecificLowHealthSound = 0xC40; // CSoundEventName
                constexpr std::ptrdiff_t m_strMovementLoop = 0xC50; // CSoundEventName
                constexpr std::ptrdiff_t m_hFootstepSounds = 0xC60; // CFootstepTableHandle
                constexpr std::ptrdiff_t m_hGameSoundEventScript = 0xC68; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCVSoundEventScriptList>>
                constexpr std::ptrdiff_t m_hGeneratedVOEventScript = 0xD48; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCVSoundEventScriptList>>
                constexpr std::ptrdiff_t m_flFootstepSoundTravelDistanceMeters = 0xE28; // float32
                constexpr std::ptrdiff_t m_flStealthSpeedMetersPerSecond = 0xE2C; // float32
                constexpr std::ptrdiff_t m_flStepSoundTime = 0xE30; // float32
                constexpr std::ptrdiff_t m_flStepSoundTimeSprinting = 0xE34; // float32
                constexpr std::ptrdiff_t m_flCollisionRadius = 0xE38; // float32
                constexpr std::ptrdiff_t m_flCollisionHeight = 0xE3C; // float32
                constexpr std::ptrdiff_t m_flStepHeight = 0xE40; // float32
                constexpr std::ptrdiff_t m_bInDevelopment = 0xE44; // bool
                constexpr std::ptrdiff_t m_bAssignedPlayersOnly = 0xE45; // bool
                constexpr std::ptrdiff_t m_bBotSelectable = 0xE46; // bool
                constexpr std::ptrdiff_t m_bNewPlayerRecommended = 0xE47; // bool
                constexpr std::ptrdiff_t m_bLaneTestingRecommended = 0xE48; // bool
                constexpr std::ptrdiff_t m_bNeedsTesting = 0xE49; // bool
                constexpr std::ptrdiff_t m_bLimitedTesting = 0xE4A; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0xE4B; // bool
                constexpr std::ptrdiff_t m_bPlayerSelectable = 0xE4C; // bool
                constexpr std::ptrdiff_t m_nComplexity = 0xE50; // int32
                constexpr std::ptrdiff_t m_nReadability = 0xE54; // int32
                constexpr std::ptrdiff_t m_flMinLowHealthPercentage = 0xE58; // float32
                constexpr std::ptrdiff_t m_flMaxLowHealthPercentage = 0xE5C; // float32
                constexpr std::ptrdiff_t m_flMinMidHealthPercentage = 0xE60; // float32
                constexpr std::ptrdiff_t m_flMaxMidHealthPercentage = 0xE64; // float32
                constexpr std::ptrdiff_t m_flMinHealthForThreshold = 0xE68; // float32
                constexpr std::ptrdiff_t m_flMaxHealthForThreshold = 0xE6C; // float32
                constexpr std::ptrdiff_t m_mapStartingStats = 0xE70; // CUtlOrderedMap<EStatsType,float32>
                constexpr std::ptrdiff_t m_mapScalingStats = 0xE98; // CUtlOrderedMap<EStatsType,HeroScalingStat_t>
                constexpr std::ptrdiff_t m_mapBoundAbilities = 0xED8; // CUtlOrderedMap<EAbilitySlots_t,CSubclassName<4>>
                constexpr std::ptrdiff_t m_mapWIPAbilities = 0xF00; // CUtlOrderedMap<EAbilitySlots_t,CSubclassName<4>>
                constexpr std::ptrdiff_t m_mapItemSlotInfo = 0xF28; // CUtlOrderedMap<EItemSlotTypes_t,ItemSlotInfo_t>
                constexpr std::ptrdiff_t m_RecommendedUpgrades = 0xF50; // CUtlVector<CSubclassName<4>>
                constexpr std::ptrdiff_t m_RecommendedAbilityOrder = 0xFD8; // CUtlVector<CSubclassName<4>>
                constexpr std::ptrdiff_t m_eAbilityResourceType = 0x1008; // EAbilityResourceType
                constexpr std::ptrdiff_t m_mapStandardLevelUpUpgrades = 0x1028; // CUtlOrderedMap<EModifierValue,float32>
                constexpr std::ptrdiff_t m_mapLevelInfo = 0x1050; // CUtlOrderedMap<int32,HeroLevel_t>
                constexpr std::ptrdiff_t m_mapPurchaseBonuses = 0x1078; // CUtlOrderedMap<EItemSlotTypes_t,CUtlVector<HeroPurchaseBonus_t>>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x558; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x5E8; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x5EC; // bool
                constexpr std::ptrdiff_t m_pNext = 0x5F0; // C_SkyCamera*
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_World {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierVacuumAuraVData {
                constexpr std::ptrdiff_t m_FinishParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AlliedParticle = 0x718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyParticle = 0x7F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0x8D8; // CSoundEventName
            }
            // Parent: C_CitadelProjectile
            // Field count: 1
            namespace C_CitadelProjectile_ImmobilizeTrap {
                constexpr std::ptrdiff_t m_bShouldDraw = 0x8B8; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flFadeInStart (float32)
            // NetworkVarNames: m_flFadeInLength (float32)
            // NetworkVarNames: m_flFadeOutModelStart (float32)
            // NetworkVarNames: m_flFadeOutModelLength (float32)
            // NetworkVarNames: m_flFadeOutStart (float32)
            // NetworkVarNames: m_flFadeOutLength (float32)
            // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
            // NetworkVarNames: m_vDissolverOrigin (Vector)
            // NetworkVarNames: m_nMagnitude (uint32)
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0x838; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0x83C; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x840; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x844; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x848; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x84C; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x850; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0x854; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0x858; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x85C; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0x868; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0x86C; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0x86D; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CAbility_Mirage_Tornado {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierRiotProtocolEnemyDebuffVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Wrecker_UltimateThrowEnemyVData {
                constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyHeroGrabEffect = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ExplosiveBulletsVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x728; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x808; // CSoundEventName
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
            namespace C_fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
                constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
                constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_CitadelIdolReturnTrigger {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_CitadelClimbRopeTrigger {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_Refresher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_KnockbackAura {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelItemPickupRejuvVData {
                constexpr std::ptrdiff_t m_AbilityProjectile = 0x28; // CSubclassName<4>
                constexpr std::ptrdiff_t m_RejuvModifier = 0x38; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PunchPickupModifier = 0x48; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_IsDroppingParticle = 0x58; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iWindSeed (uint32)
            // NetworkVarNames: m_iMinWind (uint16)
            // NetworkVarNames: m_iMaxWind (uint16)
            // NetworkVarNames: m_windRadius (int32)
            // NetworkVarNames: m_iMinGust (uint16)
            // NetworkVarNames: m_iMaxGust (uint16)
            // NetworkVarNames: m_flMinGustDelay (float32)
            // NetworkVarNames: m_flMaxGustDelay (float32)
            // NetworkVarNames: m_flGustDuration (float32)
            // NetworkVarNames: m_iGustDirChange (uint16)
            // NetworkVarNames: m_location (Vector)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            namespace C_EnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_flVariationTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flSwayTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_flSimTime = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_flSwitchTime = 0x7C; // GameTime_t
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80; // float32
                constexpr std::ptrdiff_t m_bGusting = 0x84; // bool
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C; // float32
                constexpr std::ptrdiff_t m_hEntOwner = 0x90; // CHandle<C_BaseEntity>
            }
            // Parent: C_NPC_HeroCloneTrooper
            // Field count: 0
            namespace C_NPC_HeroDecoy {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hPostSettings (HPostProcessingStrong)
            // NetworkVarNames: m_flFadeDuration (float)
            // NetworkVarNames: m_flMinLogExposure (float)
            // NetworkVarNames: m_flMaxLogExposure (float)
            // NetworkVarNames: m_flMinExposure (float)
            // NetworkVarNames: m_flMaxExposure (float)
            // NetworkVarNames: m_flExposureCompensation (float)
            // NetworkVarNames: m_flExposureFadeSpeedUp (float)
            // NetworkVarNames: m_flExposureFadeSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bExposureControl (bool)
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x848; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x850; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x854; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x858; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x85C; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x860; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x864; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x868; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x86C; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x870; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x874; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x875; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BullCharging {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_LightningBall {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Passive_CloakVData {
                constexpr std::ptrdiff_t m_InvisModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_InShopTunnel {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_IcePath {
                constexpr std::ptrdiff_t m_iShardCount = 0x2F0; // int32
                constexpr std::ptrdiff_t m_vLastShardPosition = 0x2F4; // Vector
                constexpr std::ptrdiff_t m_hSurfShard = 0x300; // CHandle<C_BaseModelEntity>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_ChronoSwap {
                constexpr std::ptrdiff_t m_bHitTarget = 0xC70; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCardTossVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SummonedCard = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strCardTossSound = 0x16E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strCardSummonSound = 0x16F8; // CSoundEventName
                constexpr std::ptrdiff_t m_flSummonedCardStartSideOffset = 0x1708; // float32
                constexpr std::ptrdiff_t m_flSummonedCardSideOffsetStep = 0x170C; // float32
                constexpr std::ptrdiff_t m_flSummonedCardForwardOffset = 0x1710; // float32
                constexpr std::ptrdiff_t m_flSummonedCardVerticalOffset = 0x1714; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_TriggerTower {
            }
            // Parent: C_PhysicsProp
            // Field count: 0
            namespace C_ItemParachute {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace C_FuncRotating {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Mirage_Tornado_Aura_Apply {
            }
            // Parent: CCitadel_Modifier_Base
            // Field count: 0
            namespace CModifier_Synth_Blitz_TechAmp {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierFlyingStrikeTargetVData {
                constexpr std::ptrdiff_t m_GrappleRopeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Nano_PredatoryStatueVData {
                constexpr std::ptrdiff_t m_AOEParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnabledParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DrainParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strEnabledSound = 0x898; // CSoundEventName
                constexpr std::ptrdiff_t m_strEnabledLoopSound = 0x8A8; // CSoundEventName
                constexpr std::ptrdiff_t m_strDisabledSound = 0x8B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserHitSound = 0x8C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserStartSound = 0x8D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserLoopSound = 0x8E8; // CSoundEventName
                constexpr std::ptrdiff_t m_TargetModifier = 0x8F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_SleepBomb {
                constexpr std::ptrdiff_t m_vecOrigin = 0x210; // Vector
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierStackingDamageVData {
                constexpr std::ptrdiff_t m_SlowModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_BloodBomb {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierStimPakVData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_MagicShock_Proc {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_bSprinting (bool)
            // NetworkVarNames: m_flInCombatStartTime (GameTime_t)
            // NetworkVarNames: m_flInCombatEndTime (GameTime_t)
            // NetworkVarNames: m_flSprintStartTime (GameTime_t)
            namespace CCitadel_Ability_Sprint {
                constexpr std::ptrdiff_t m_nSprintParticle = 0xC70; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bSprinting = 0xC74; // bool
                constexpr std::ptrdiff_t m_flInCombatStartTime = 0xC78; // GameTime_t
                constexpr std::ptrdiff_t m_flInCombatEndTime = 0xC7C; // GameTime_t
                constexpr std::ptrdiff_t m_flSprintStartTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_bInCombat = 0xC84; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_DamageResistance {
                constexpr std::ptrdiff_t m_flShieldHealth = 0xC0; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Healing_Disabled {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float)
            // NetworkVarNames: m_nFlags (uint32)
            namespace C_BaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x558; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x55C; // float32
                constexpr std::ptrdiff_t m_flScaleTime = 0x560; // float32
                constexpr std::ptrdiff_t m_nFlags = 0x564; // uint32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_DebuffReducer {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Empty {
            }
            // Parent: C_CitadelTrackedProjectile
            // Field count: 1
            namespace C_CitadelPositionHomingProjectile {
                constexpr std::ptrdiff_t m_vecHomingPosition = 0x8B8; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CGameModifier_FireUserEntityIO {
            }
            // Parent: C_BaseEntity
            // Field count: 16
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_nTickBase (uint32)
            // NetworkVarNames: m_hPawn (CHandle<CBasePlayerPawn>)
            // NetworkVarNames: m_bKnownTeamMismatch (bool)
            // NetworkVarNames: m_iConnected (PlayerConnectedState)
            // NetworkVarNames: m_iszPlayerName (char)
            // NetworkVarNames: m_steamID (uint64)
            // NetworkVarNames: m_iDesiredFOV (uint32)
            // MNetworkReplayCompatField
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
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_GenericPerson_3 {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_HealthSwapVData {
                constexpr std::ptrdiff_t m_BloodExchangeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Muted {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Silenced {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_TechBleed_Proc {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ApplyDebuff_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CBaseModifier
            // Field count: 0
            namespace CCitadelModifier {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CPointTemplateAPI {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Mirage_DjinnsReach_Debuff_VData {
                constexpr std::ptrdiff_t m_ChainModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Synth_Affliction_Debuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierGangActivityAbilitySwapVData {
                constexpr std::ptrdiff_t m_SummonGangster = 0x5F8; // CSubclassName<4>
                constexpr std::ptrdiff_t m_TeleportToGangster = 0x608; // CSubclassName<4>
                constexpr std::ptrdiff_t m_Cancel = 0x618; // CSubclassName<4>
                constexpr std::ptrdiff_t m_ReplaceWithSummonGangster = 0x628; // CSubclassName<4>
                constexpr std::ptrdiff_t m_ReplaceWithTeleportToGangster = 0x638; // CSubclassName<4>
                constexpr std::ptrdiff_t m_ReplaceWithCancel = 0x648; // CSubclassName<4>
            }
            // Parent: CCitadelModifierVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierRestorativeGooVData {
                constexpr std::ptrdiff_t m_RestorativeGooEndParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flDistanceCameraOffsetLerpTime = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flDistanceCameraOffsetBias = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flDistanceCameraOffset = 0x6E0; // float32
                constexpr std::ptrdiff_t m_BreakoutProgressBarModifier = 0x6E8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PostCubeBuffModifier = 0x6F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_NonTargetLoopingSound = 0x708; // CSoundEventName
                constexpr std::ptrdiff_t m_TargetLoopingSound = 0x718; // CSoundEventName
                constexpr std::ptrdiff_t m_LightMeleeImpact = 0x728; // CSoundEventName
                constexpr std::ptrdiff_t m_HeavyMeleeImpact = 0x738; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Chrono_PulseGrenade_Debuff {
            }
            // Parent: CCitadelModifier
            // Field count: 5
            namespace CCitadel_Modifier_BeltFed_Magazine {
                constexpr std::ptrdiff_t m_bInitialized = 0xC0; // bool
                constexpr std::ptrdiff_t m_flSpinUpRateOverride = 0xC4; // float32
                constexpr std::ptrdiff_t m_flSpinUpDecayOverride = 0xC8; // float32
                constexpr std::ptrdiff_t m_flMaxCycleTimeOverride = 0xCC; // float32
                constexpr std::ptrdiff_t m_flMaxBurstFireCooldownOverride = 0xD0; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ItemWalkBack {
            }
            // Parent: CSkeletonAnimationController
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x14B0; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x14B4; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B8; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14BC; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14D3; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D4; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flPostCastHoldEndTime (GameTime_t)
            namespace CCitadel_Ability_HealthSwap {
                constexpr std::ptrdiff_t m_nFXIndex = 0xC70; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flHealthToCaster = 0xC74; // float32
                constexpr std::ptrdiff_t m_flTargetHealthLost = 0xC78; // float32
                constexpr std::ptrdiff_t m_flPostCastHoldEndTime = 0xD98; // GameTime_t
            }
            // Parent: CCitadel_Modifier_ChainLightningVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Galvanic_Storm_VData {
                constexpr std::ptrdiff_t m_TechShieldModifier = 0x818; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_Push {
                constexpr std::ptrdiff_t m_vPushForce = 0xC0; // Vector
                constexpr std::ptrdiff_t m_flDecayRate = 0xCC; // float32
                constexpr std::ptrdiff_t m_TimeDestroy = 0xD0; // GameTime_t
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Hero_Testing_Damage_Aura {
            }
            // Parent: CModifierVData_BaseAura
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierAuraVData {
                constexpr std::ptrdiff_t m_iAuraSearchType = 0x630; // CITADEL_UNIT_TARGET_TYPE
                constexpr std::ptrdiff_t m_iAuraSearchFlags = 0x634; // CITADEL_UNIT_TARGET_FLAGS
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Synth_Barrage_VData {
                constexpr std::ptrdiff_t m_BarrageCasterModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AmpModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ShootParticle = 0x1558; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChannelParticle = 0x1718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strProjectileLaunchSound = 0x17F8; // CSoundEventName
                constexpr std::ptrdiff_t m_flAttackInterval = 0x1808; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierUppercuttedVData {
                constexpr std::ptrdiff_t m_StunParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStunSound = 0x6D8; // CSoundEventName
                constexpr std::ptrdiff_t m_NoExplodeModifier = 0x6E8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flEnemyNoAirDashDuration = 0x6F8; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_PsychicDagger {
            }
            // Parent: C_BaseModelEntity
            // Field count: 14
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
            // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
            // NetworkVarNames: m_vecForce (Vector)
            // NetworkVarNames: m_nForceBone (int32)
            // NetworkVarNames: m_RagdollPose (PhysicsRagdollPose_t)
            // NetworkVarNames: m_bRagdollClientSide (bool)
            // NetworkVarNames: m_animGraph2SerializeData (uint8)
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x8A8; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0x8AA; // bool
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x8B8; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x8BC; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x8C0; // Vector
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x8CC; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x8D0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0x8DC; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0x8E0; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0x8E8; // bool
                constexpr std::ptrdiff_t m_RagdollPose = 0x900; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x948; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0x958; // bool
                constexpr std::ptrdiff_t m_animGraph2SerializeData = 0xAA0; // C_NetworkUtlVectorBase<uint8>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
                constexpr std::ptrdiff_t m_sAfterburnParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sAfterburnExplodeParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CAbilityMeleeVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityUppercutVData {
                constexpr std::ptrdiff_t m_UppercutAttackData = 0x1540; // AttackData_t
                constexpr std::ptrdiff_t m_UppercutModifier = 0x1A60; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1A70; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ClipModifier = 0x1A80; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flMaxPitchUp = 0x1A90; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Gravity_Lasso {
            }
            // Parent: CCitadelModifierVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_IceDomeVData {
                constexpr std::ptrdiff_t m_BlockerModel = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_DomeParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FriendlyAuraModifier = 0x7B8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_EnemyAuraModifier = 0x7C8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strDomeEndSound = 0x7D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strTargetLoopingSound = 0x7E8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ImmobilizeTrapDOT_Thinker {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_HealthSwapPrecast {
                constexpr std::ptrdiff_t m_hTarget = 0xC0; // CHandle<C_BaseEntity>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_StaticChargeVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StaticChargeModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_MeleeDamageOnly {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CModifier_Mirage_Tornado_Aura {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_MobileResupplyAura {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_Guided_Arrow {
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PointEntity {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_IceDomeVData {
                constexpr std::ptrdiff_t m_IceDomeModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierLashFlogDebuffVData {
                constexpr std::ptrdiff_t m_FlogDebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_GameRules
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_ControlPointBlockerAura {
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_Item_WarpStone {
                constexpr std::ptrdiff_t m_nCastDelayParticleIndex = 0xC88; // ParticleIndex_t
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iStacks (int)
            namespace CCitadel_WeaponUpgrade_SiphonBullets {
                constexpr std::ptrdiff_t m_iStacks = 0xC88; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flParticleSpacing (float)
            // NetworkVarNames: m_flSlack (float)
            // NetworkVarNames: m_flRadius (float)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_nEffectState (int)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_PathNodes_Position (Vector)
            // NetworkVarNames: m_PathNodes_TangentIn (Vector)
            // NetworkVarNames: m_PathNodes_TangentOut (Vector)
            // NetworkVarNames: m_PathNodes_Color (Vector)
            // NetworkVarNames: m_PathNodes_PinEnabled (bool)
            // NetworkVarNames: m_PathNodes_RadiusScale (float)
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x560; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x564; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x570; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x588; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x58C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x590; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x594; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x598; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x5A0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x5A8; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x5C0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x5D8; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x5F0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x608; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x620; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_RapidFire {
                constexpr std::ptrdiff_t m_flNextAttackTime = 0x210; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ThrownShiv_Slow_Debuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SilencedVData {
                constexpr std::ptrdiff_t m_EmpParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EmpPlayerParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EmpStatusParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_BulletShieldImpact {
                constexpr std::ptrdiff_t m_AmbientEffect = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Backdoor_Protection {
            }
            // Parent: CAI_CitadelNPCVData
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_TrooperNeutralVData {
                constexpr std::ptrdiff_t m_eTrooperType = 0xF58; // ENeutralTrooperType
                constexpr std::ptrdiff_t m_flGoldReward = 0xF5C; // float32
                constexpr std::ptrdiff_t m_flGoldRewardBonusPercentPerMinute = 0xF60; // float32
                constexpr std::ptrdiff_t m_bGiveGoldOnHit = 0xF64; // bool
                constexpr std::ptrdiff_t m_bOrbDropper = 0xF65; // bool
                constexpr std::ptrdiff_t m_bCapSimultanousAttackers = 0xF66; // bool
                constexpr std::ptrdiff_t m_flShieldReactivateDelay = 0xF68; // float32
                constexpr std::ptrdiff_t m_flDyingDuration = 0xF6C; // float32
                constexpr std::ptrdiff_t m_bDamagedByBullets = 0xF70; // bool
                constexpr std::ptrdiff_t m_bDamagedByMelee = 0xF71; // bool
                constexpr std::ptrdiff_t m_bDamagedByAbilities = 0xF72; // bool
                constexpr std::ptrdiff_t m_bFixedMeleeDamage = 0xF73; // bool
                constexpr std::ptrdiff_t m_ShieldParticle = 0xF78; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flRetaliateDamage = 0x1058; // float32
                constexpr std::ptrdiff_t m_flRetaliateCooldown = 0x105C; // float32
                constexpr std::ptrdiff_t m_retaliateParticle = 0x1060; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_bHasAOEAttack = 0x1140; // bool
                constexpr std::ptrdiff_t m_flAOERadius = 0x1144; // float32
                constexpr std::ptrdiff_t m_flAOEDamage = 0x1148; // float32
                constexpr std::ptrdiff_t m_flAOEAttackCooldown = 0x114C; // float32
                constexpr std::ptrdiff_t m_AOEParticle = 0x1150; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AOEDebuffToApply = 0x1230; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AOEInitiateSound = 0x1240; // CSoundEventName
                constexpr std::ptrdiff_t m_AOESound = 0x1250; // CSoundEventName
                constexpr std::ptrdiff_t m_AOEDebuffDuration = 0x1260; // float32
                constexpr std::ptrdiff_t m_vecRandomBodyGroup = 0x1268; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_vecRandomSkin = 0x1280; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_flHullCapsuleRadius = 0x1298; // float32
                constexpr std::ptrdiff_t m_flHullCapsuleHeight = 0x129C; // float32
                constexpr std::ptrdiff_t m_bFaceEnemyWhileIdle = 0x12A0; // bool
                constexpr std::ptrdiff_t m_IdleLoopSound = 0x12A8; // CSoundEventName
                constexpr std::ptrdiff_t m_MoveType = 0x12B8; // MoveType_t
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace CCitadel_Projectile_RocketLauncher_Rocket {
            }
            // Parent: CCitadel_Ability_BaseHeldItem
            // Field count: 0
            namespace CCitadel_Ability_GoldenIdol {
            }
            // Parent: C_BaseModelEntity
            // Field count: 17
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_abilityID (AbilityID_t)
            // NetworkVarNames: m_hThrower (EHANDLE)
            // NetworkVarNames: m_sParticleName (string_t)
            // NetworkVarNames: m_vecSpawnPosition (Vector)
            // NetworkVarNames: m_flProjectileSpeed (float)
            // NetworkVarNames: m_flMaxLifetime (float)
            namespace C_CitadelProjectile {
                constexpr std::ptrdiff_t m_hTarget = 0x83C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaxDistance = 0x840; // float32
                constexpr std::ptrdiff_t m_flArmingTime = 0x844; // float32
                constexpr std::ptrdiff_t m_flChargeAmount = 0x848; // float32
                constexpr std::ptrdiff_t m_bCollideWithThrower = 0x84C; // bool
                constexpr std::ptrdiff_t m_bNewCollideWithThrower = 0x84D; // bool
                constexpr std::ptrdiff_t m_flTickSoundInterval = 0x858; // float32
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x860; // Vector
                constexpr std::ptrdiff_t m_vInitialPosition = 0x86C; // Vector
                constexpr std::ptrdiff_t m_abilityID = 0x878; // CUtlStringToken
                constexpr std::ptrdiff_t m_hThrower = 0x87C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_sParticleName = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vecSpawnPosition = 0x888; // Vector
                constexpr std::ptrdiff_t m_flProjectileSpeed = 0x894; // float32
                constexpr std::ptrdiff_t m_flMaxLifetime = 0x898; // float32
                constexpr std::ptrdiff_t m_flParticleRadius = 0x8A0; // float32
                constexpr std::ptrdiff_t m_flPreviousTimeScale = 0x8B0; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Targetdummy_3 {
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_StaticCharge {
                constexpr std::ptrdiff_t m_hRingEffect = 0xC0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flRadius = 0x138; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Upgrade_KineticSash {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_CloakingDevice {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_RegenerativeArmor {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x618; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x624; // Vector
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Mirage_DjinnBomb_VData {
                constexpr std::ptrdiff_t m_DetonateParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDetonateSound = 0x1608; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Citadel_Bull_Leap_LandingBonuses_VData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityDashVData {
                constexpr std::ptrdiff_t m_DashParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DownDashParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strArriveSound = 0x16E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strStaminaDrainedSound = 0x16F8; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSequenceGroundDashActivate = 0x1708; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceAirDashActivate = 0x1788; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_flMaxAngDiff = 0x1808; // float32
                constexpr std::ptrdiff_t m_flDurationScaleForSpeed = 0x180C; // float32
                constexpr std::ptrdiff_t m_flSlideEarlyOutWindow = 0x1810; // float32
                constexpr std::ptrdiff_t m_flSlideLockoutTime = 0x1814; // float32
                constexpr std::ptrdiff_t m_flGroundDashAirbornDrag = 0x1818; // float32
                constexpr std::ptrdiff_t m_flGroundDashAirbornSpeedClamp = 0x181C; // float32
                constexpr std::ptrdiff_t m_strGroundDashActivate = 0x1820; // CSoundEventName
                constexpr std::ptrdiff_t m_curvePosition = 0x1830; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_flGroundDashDuration = 0x1870; // float32
                constexpr std::ptrdiff_t m_flGroundDashDistanceInMeters = 0x1874; // float32
                constexpr std::ptrdiff_t m_flAirDashEndVelocityScale = 0x1878; // float32
                constexpr std::ptrdiff_t m_flAirDashAccPct = 0x187C; // float32
                constexpr std::ptrdiff_t m_flDuringDrag = 0x1880; // float32
                constexpr std::ptrdiff_t m_flPostDrag = 0x1884; // float32
                constexpr std::ptrdiff_t m_flPostDragDuration = 0x1888; // float32
                constexpr std::ptrdiff_t m_flDownwardAirDashSpeed = 0x188C; // float32
                constexpr std::ptrdiff_t m_strDashActivate = 0x1890; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_DebuffImmunity {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ConsumedProtectionRacketVData {
                constexpr std::ptrdiff_t m_strShieldBreakSound = 0x5F8; // CSoundEventName
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 1
            namespace CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy {
                constexpr std::ptrdiff_t m_vThrowVelocity = 0xC8; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_WreckerSalvage_Buff {
                constexpr std::ptrdiff_t m_nBuffParticle = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_StickyBombAttached {
                constexpr std::ptrdiff_t m_bDetonateSoundStarted = 0xC0; // bool
                constexpr std::ptrdiff_t m_flDamage = 0xCC; // float32
                constexpr std::ptrdiff_t m_nParticleIndex = 0xD0; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ViscousBallVData {
                constexpr std::ptrdiff_t m_TrailParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DirectionParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityNikumanVData {
                constexpr std::ptrdiff_t m_NikumanModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SelfBuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItem_ActiveReload_VData {
                constexpr std::ptrdiff_t m_SuccessModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strSuccessSound = 0x1580; // CSoundEventName
                constexpr std::ptrdiff_t m_strFailureSound = 0x1590; // CSoundEventName
                constexpr std::ptrdiff_t m_SuccessParticle = 0x15A0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FailureParticle = 0x1680; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flGraceTime = 0x1760; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CitadelItemVData {
                constexpr std::ptrdiff_t m_iItemTier = 0x152C; // EModTier_t
                constexpr std::ptrdiff_t m_nUpgradeSlotCost = 0x152D; // int8
                constexpr std::ptrdiff_t m_bWarnIfNoAffectedAbilities = 0x152E; // bool
                constexpr std::ptrdiff_t m_bRequiresChargedAbility = 0x152F; // bool
                constexpr std::ptrdiff_t m_bRequiresChanelledAbility = 0x1530; // bool
                constexpr std::ptrdiff_t m_vecComponentItems = 0x1538; // CUtlVector<CSubclassName<4>>
                constexpr std::ptrdiff_t m_bShowTextDescription = 0x1550; // bool
                constexpr std::ptrdiff_t m_bIsDefensiveItem = 0x1551; // bool
                constexpr std::ptrdiff_t m_eShopFilters = 0x1552; // EShopFilters_t
                constexpr std::ptrdiff_t m_vecTooltipSectionInfo = 0x1558; // CUtlVector<ItemSectionInfo_t>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Near_Climbable_RopeVData {
                constexpr std::ptrdiff_t m_flEnableStateTime = 0x5F8; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hLocalPortalLink (EHANDLE)
            // NetworkVarNames: m_hRemotePortalLink (EHANDLE)
            // NetworkVarNames: m_brushModelName (CUtlString)
            // NetworkVarNames: m_flFadeStartDist (float)
            // NetworkVarNames: m_flFadeEndDist (float)
            // NetworkVarNames: m_flFadeStartAngle (float)
            // NetworkVarNames: m_flFadeEndAngle (float)
            // NetworkVarNames: m_fadeToColor (Color)
            namespace C_RenderPortal {
                constexpr std::ptrdiff_t m_hLocalPortalLink = 0x830; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemotePortalLink = 0x834; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_brushModelName = 0x838; // CUtlString
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x840; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x844; // float32
                constexpr std::ptrdiff_t m_flFadeStartAngle = 0x848; // float32
                constexpr std::ptrdiff_t m_flFadeEndAngle = 0x84C; // float32
                constexpr std::ptrdiff_t m_fadeToColor = 0x850; // Color
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FlameDashGroundAuraVData {
                constexpr std::ptrdiff_t m_GroundParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flHeight = 0x718; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_QuickSilver {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_AOE_Tech_Shield {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CGameModifier_SetMoveType {
                constexpr std::ptrdiff_t m_nMoveType = 0xC0; // MoveType_t
            }
            // Parent: CCitadel_Modifier_Base
            // Field count: 0
            namespace CCitadel_Modifier_TangoTetherTarget {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PristineEmblem {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Objective_Bullet_Resist {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Tokamak_AllySmokeAOE {
            }
            // Parent: CCitadel_Item_TrackingProjectileApplyModifier
            // Field count: 0
            namespace CCitadel_Item_Disarm {
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Barrage_Caster_VData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGangActivityCancelVData {
                constexpr std::ptrdiff_t m_AbilitySwap = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 5
            namespace CCitadel_Modifier_HookTarget {
                constexpr std::ptrdiff_t m_flCurrentVerticalSpeed = 0xC4; // float32
                constexpr std::ptrdiff_t m_bSuccess = 0xC8; // bool
                constexpr std::ptrdiff_t m_bSameTeam = 0xC9; // bool
                constexpr std::ptrdiff_t m_bPlayedApproachingWhoosh = 0xCA; // bool
                constexpr std::ptrdiff_t m_flInitialTravelDistance = 0xCC; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySleepDaggerVData {
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SleepModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DrowsyModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SleepBombModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityLashFlogVData {
                constexpr std::ptrdiff_t m_FlogParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlogLifeLeachParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlogDebuffModifier = 0x16E8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_BoxingGlove {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Inhibitor_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProc
            // Field count: 1
            namespace CCitadel_Modifier_ChainLightning {
                constexpr std::ptrdiff_t m_flNextProcTime = 0x1C0; // GameTime_t
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_nNextPrimaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextPrimaryAttackTickRatio (float32)
            // NetworkVarNames: m_nNextSecondaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextSecondaryAttackTickRatio (float32)
            // NetworkVarNames: m_iClip1 (int32)
            // NetworkVarNames: m_iClip2 (int32)
            // NetworkVarNames: m_pReserveAmmo (int)
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xB40; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xB44; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xB48; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xB4C; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0xB50; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0xB54; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xB58; // int32[2]
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_UtilityUpgrade_HealthNova {
            }
            // Parent: CCitadelYamatoBaseVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelAbilityHealingSlashVData {
                constexpr std::ptrdiff_t m_flEffectSize = 0x1530; // float32
                constexpr std::ptrdiff_t m_flMaxAttackAngle = 0x1534; // float32
                constexpr std::ptrdiff_t m_remapAngleToTime = 0x1538; // CRemapFloat
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1548; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1558; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealingSlashParticle = 0x1638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealingSlashSwordGlow = 0x1718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x17F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDamageTarget = 0x18D8; // CSoundEventName
            }
            // Parent: None
            // Field count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szClassName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_szWorldModel = 0x18; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0xF8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1D8; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1D9; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1E0; // CAttachmentNameSymbolWithStorage
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x200; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x2E0; // bool
                constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x2E8; // CUtlVector<CEmbeddedSubclass<CCitadelModifier>>
                constexpr std::ptrdiff_t m_iFlags = 0x300; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x301; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x302; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x304; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x308; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x30C; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x310; // int32
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x314; // bool
                constexpr std::ptrdiff_t m_iWeight = 0x318; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x31C; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x31D; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x320; // RumbleEffect_t
                constexpr std::ptrdiff_t m_iSlot = 0x324; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x328; // int32
                constexpr std::ptrdiff_t m_aShootSounds = 0x330; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: CBaseAnimGraph
            // Field count: 23
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_poolOrigin (Vector)
            // NetworkVarNames: m_waterLevel (float32)
            // NetworkVarNames: m_x (float32)
            // NetworkVarNames: m_y (float32)
            // NetworkVarNames: m_z (float32)
            // NetworkVarNames: m_angle (float32)
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0xB40; // Vector
                constexpr std::ptrdiff_t m_vel = 0xB4C; // Vector
                constexpr std::ptrdiff_t m_angles = 0xB58; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0xB64; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0xB68; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0xB6C; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0xB70; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0xB78; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0xB90; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0xB94; // float32
                constexpr std::ptrdiff_t m_actualPos = 0xB98; // Vector
                constexpr std::ptrdiff_t m_actualAngles = 0xBA4; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0xBB0; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0xBBC; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0xBC0; // bool
                constexpr std::ptrdiff_t m_x = 0xBC4; // float32
                constexpr std::ptrdiff_t m_y = 0xBC8; // float32
                constexpr std::ptrdiff_t m_z = 0xBCC; // float32
                constexpr std::ptrdiff_t m_angle = 0xBD0; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0xBD4; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0xC24; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0xC28; // int32
                constexpr std::ptrdiff_t m_averageError = 0xC2C; // float32
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_Archer_ChargedShot {
            }
            // Parent: CCitadelModifierAura
            // Field count: 3
            namespace CCitadel_Modifier_Item_AOESilence {
                constexpr std::ptrdiff_t m_flStartRadius = 0xE0; // float32
                constexpr std::ptrdiff_t m_flEndRadius = 0xE4; // float32
                constexpr std::ptrdiff_t m_flSpreadDuration = 0xE8; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Shiv_KillingBlow_Leap {
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityLightningBallVData {
                constexpr std::ptrdiff_t m_ZapModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strHitSound = 0x1538; // CSoundEventName
                constexpr std::ptrdiff_t m_strProjectileLoopingSound = 0x1548; // CSoundEventName
                constexpr std::ptrdiff_t m_ZapParticle = 0x1558; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CScaleFunctionVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CScaleFunctionAbilityPropertySingleStatVData {
            }
            // Parent: IntervalTimer
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flValues (float)
            // NetworkVarNames: m_nValueCounts (int)
            // NetworkVarNames: m_nBucketCount (int)
            // NetworkVarNames: m_flInterval (float)
            // NetworkVarNames: m_flFinalValue (float)
            // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
            // NetworkVarNames: m_bStopped (bool)
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_Citadel_DeployablePreview {
            }
            // Parent: CCitadelModifierAura
            // Field count: 1
            namespace CCitadel_Item_StasisBomb_Aura {
                constexpr std::ptrdiff_t m_AuraRadius = 0xE0; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Targetdummy_1 {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SettingSunThinker {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierHighAlertBuffVData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTrappersBoloVData {
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TrapModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_DisarmProcWatcher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_RevealTarget {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace CPathAccompany {
                constexpr std::ptrdiff_t m_vecNodes = 0x558; // CUtlVector<PathAccompanyNode_t>
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 28
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pWeaponServices (CPlayer_WeaponServices*)
            // NetworkVarNames: m_pItemServices (CPlayer_ItemServices*)
            // NetworkVarNames: m_pAutoaimServices (CPlayer_AutoaimServices*)
            // NetworkVarNames: m_pObserverServices (CPlayer_ObserverServices*)
            // NetworkVarNames: m_pWaterServices (CPlayer_WaterServices*)
            // NetworkVarNames: m_pUseServices (CPlayer_UseServices*)
            // NetworkVarNames: m_pFlashlightServices (CPlayer_FlashlightServices*)
            // NetworkVarNames: m_pCameraServices (CPlayer_CameraServices*)
            // NetworkVarNames: m_pMovementServices (CPlayer_MovementServices*)
            // NetworkVarNames: m_ServerViewAngleChanges (ViewAngleServerChange_t)
            // NetworkVarNames: m_iHideHUD (uint32)
            // NetworkVarNames: m_skybox3d (sky3dparams_t)
            // NetworkVarNames: m_flDeathTime (GameTime_t)
            // NetworkVarNames: m_hController (CHandle<CBasePlayerController>)
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xD60; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0xD68; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xD70; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0xD78; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0xD80; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0xD88; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xD90; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0xD98; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0xDA0; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xDB0; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0xE00; // uint32
                constexpr std::ptrdiff_t v_angle = 0xE04; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0xE10; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0xE1C; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0xE20; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0xEB0; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0xEB4; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0xEC0; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0xEC4; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0xED0; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0xED4; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0xED8; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0xEDC; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0xEE8; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0xEEC; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0xEF0; // int32
                constexpr std::ptrdiff_t m_hController = 0xEF4; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0xEF8; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_Receivers = 0x20; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x38; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x3C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x40; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x44; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x48; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityDistruptiveChargeVData {
                constexpr std::ptrdiff_t m_Particle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_HornetSting {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MutedVData {
                constexpr std::ptrdiff_t m_MutedParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MutedPlayerParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MutedStatusParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_TurnCameraToTarget {
                constexpr std::ptrdiff_t m_hTarget = 0xC0; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace CLogicalEntity {
            }
            // Parent: None
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_PredNetBoolVariables (uint32)
            // NetworkVarNames: m_PredNetByteVariables (byte)
            // NetworkVarNames: m_PredNetUInt16Variables (uint16)
            // NetworkVarNames: m_PredNetIntVariables (int32)
            // NetworkVarNames: m_PredNetUInt32Variables (uint32)
            // NetworkVarNames: m_PredNetUInt64Variables (uint64)
            // NetworkVarNames: m_PredNetFloatVariables (float)
            // NetworkVarNames: m_PredNetVectorVariables (Vector)
            // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
            // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
            // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
            // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
            // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
            // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
            // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
            // NetworkVarNames: m_nBoolVariablesCount (int)
            // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
            // NetworkVarNames: m_nRandomSeedOffset (int)
            // NetworkVarNames: m_flLastTeleportTime (float)
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 41
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_flScrollSpeed (float32)
            // NetworkVarNames: m_RopeFlags (uint16)
            // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
            // NetworkVarNames: m_nSegments (uint8)
            // NetworkVarNames: m_hStartPoint (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_hEndPoint (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_Subdiv (uint8)
            // NetworkVarNames: m_RopeLength (int16)
            // NetworkVarNames: m_Slack (int16)
            // NetworkVarNames: m_TextureScale (float32)
            // NetworkVarNames: m_fLockedPoints (uint8)
            // NetworkVarNames: m_nChangeCount (uint8)
            // NetworkVarNames: m_Width (float32)
            // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0x838; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0x83C; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0x840; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0x844; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0x848; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0x84C; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0x850; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0x868; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x86C; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0x870; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x878; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_LightValues = 0xAF0; // Vector[10]
                constexpr std::ptrdiff_t m_nSegments = 0xB68; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0xB6C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0xB70; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0xB74; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0xB75; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0xB76; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0xB78; // int16
                constexpr std::ptrdiff_t m_Slack = 0xB7A; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0xB7C; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0xB80; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0xB81; // uint8
                constexpr std::ptrdiff_t m_Width = 0xB84; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0xB88; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0xB98; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0xBA0; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0xBA4; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0xBB0; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0xBBC; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0xBC0; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0xBC4; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0xBC8; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0xBD4; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0xBE0; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0xBF8; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0xC10; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Trappers_Bolo {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Nano_PredatoryStatueTarget {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_SlowingBullets_Proc {
            }
            // Parent: C_BaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_hGradientFogTexture (HRenderTextureStrong)
            // NetworkVarNames: m_flFogStartDistance (float)
            // NetworkVarNames: m_flFogEndDistance (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogStartHeight (float)
            // NetworkVarNames: m_flFogEndHeight (float)
            // NetworkVarNames: m_flFarZ (float)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_flFogVerticalExponent (float)
            // NetworkVarNames: m_fogColor (Color)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x558; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x560; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x564; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x568; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x56C; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x570; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x574; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x578; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x57C; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x580; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x584; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x588; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x58C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x590; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x591; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x592; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Slork_Gun_Poison {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Mirage_FireBeetles_Buff_VData {
                constexpr std::ptrdiff_t m_CasterBuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_GenericPerson_4 {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityWreckerScrapBlastVData {
                constexpr std::ptrdiff_t m_SprayParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChannelStartParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x16E8; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData {
                constexpr std::ptrdiff_t m_BleedModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x638; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_BulletImpactParticle = 0x648; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Stimpak_regen {
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_BlastPush {
                constexpr std::ptrdiff_t m_vPush = 0xC0; // Vector
                constexpr std::ptrdiff_t m_flPushVelocity = 0xCC; // float32
                constexpr std::ptrdiff_t m_flMaxPushVelocity = 0xD0; // float32
                constexpr std::ptrdiff_t m_flMaxPushVelocitySqr = 0xD4; // float32
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityProperty_WeaponDamage {
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CCitadelPlayerClipComponent {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemAOESilenceAuraVData {
                constexpr std::ptrdiff_t m_empWaveParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Disruptive_Charge {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TargetPracticeDebuffVData {
                constexpr std::ptrdiff_t m_SlowModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BulletResistModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_EMPModifier = 0x618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_vecStartPos (Vector)
            // NetworkVarNames: m_vecPosition (Vector)
            // NetworkVarNames: m_vecInitialPosition (Vector)
            // NetworkVarNames: m_CastTime (GameTime_t)
            // NetworkVarNames: m_vecDirection (Vector)
            // NetworkVarNames: m_vecLeft (Vector)
            // NetworkVarNames: m_Length (float)
            // NetworkVarNames: m_bTraveling (bool)
            // NetworkVarNames: m_bPreview (bool)
            namespace CCitadel_Ability_FissureWall {
                constexpr std::ptrdiff_t m_vecWallPreviewParticles = 0xC80; // CUtlVector<ParticleIndex_t>
                constexpr std::ptrdiff_t m_vecStartPos = 0xD40; // Vector
                constexpr std::ptrdiff_t m_vecPosition = 0xD4C; // Vector
                constexpr std::ptrdiff_t m_vecInitialPosition = 0xD58; // Vector
                constexpr std::ptrdiff_t m_CastTime = 0xD64; // GameTime_t
                constexpr std::ptrdiff_t m_vecDirection = 0xD68; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0xD74; // Vector
                constexpr std::ptrdiff_t m_Length = 0xD80; // float32
                constexpr std::ptrdiff_t m_bTraveling = 0xD84; // bool
                constexpr std::ptrdiff_t m_bPreview = 0xD85; // bool
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_LifestrikeGauntlets {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_CheatDeathImmunityVData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffPlayerParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StatusEffect = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_StatStealBaseVData {
                constexpr std::ptrdiff_t m_StatStolenDebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_StatStolenBuffModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelBaseShivAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flTotalPendingDamage (float)
            namespace CCitadel_Ability_Shiv_Defer_Damage {
                constexpr std::ptrdiff_t m_flTotalPendingDamage = 0xD50; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_IceBeamVData {
                constexpr std::ptrdiff_t m_BeamParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SlowModifier = 0x16E8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuildupModifier = 0x16F8; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_BuildupProcModifier = 0x1708; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BeamStartSound = 0x1718; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamStopSound = 0x1728; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamPointStartLoopSound = 0x1738; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamPointEndLoopSound = 0x1748; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamPointClosestLoopSound = 0x1758; // CSoundEventName
            }
            // Parent: C_NPC_TrooperBoss
            // Field count: 0
            namespace C_NPC_TrooperBarrackBoss {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_ChargeState (EViscousChargedGunState)
            // NetworkVarNames: m_nClipConsumed (float)
            // NetworkVarNames: m_bIsCharging (bool)
            // NetworkVarNames: m_bIsToggled (bool)
            namespace CCitadel_Ability_ViscousWeapon_Alt {
                constexpr std::ptrdiff_t m_ChargeState = 0xC70; // EViscousChargedGunState
                constexpr std::ptrdiff_t m_nClipConsumed = 0xC74; // float32
                constexpr std::ptrdiff_t m_bIsCharging = 0xC78; // bool
                constexpr std::ptrdiff_t m_bIsToggled = 0xC79; // bool
                constexpr std::ptrdiff_t m_fxChargingParticle = 0xC7C; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flLastBulletConsumedTime = 0xC88; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ColdFrontAOE {
                constexpr std::ptrdiff_t m_hAOEEffect = 0x1A0; // ParticleIndex_t
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 20
            namespace C_PortraitWorldUnit {
                constexpr std::ptrdiff_t m_bSuppressIntroEffects = 0xD60; // bool
                constexpr std::ptrdiff_t m_bIsAlternateLoadout = 0xD61; // bool
                constexpr std::ptrdiff_t m_bSpawnBackgroundModels = 0xD62; // bool
                constexpr std::ptrdiff_t m_bDeferredPortrait = 0xD63; // bool
                constexpr std::ptrdiff_t m_bShowParticleAssetModifiers = 0xD64; // bool
                constexpr std::ptrdiff_t m_bIgnorePortraitInfo = 0xD65; // bool
                constexpr std::ptrdiff_t m_bFlyingCourier = 0xD66; // bool
                constexpr std::ptrdiff_t m_nEffigyStatusEffect = 0xD68; // int32
                constexpr std::ptrdiff_t m_effigySequenceName = 0xD70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flStartingAnimationCycle = 0xD78; // float32
                constexpr std::ptrdiff_t m_flRareLoadoutAnimChance = 0xD7C; // float32
                constexpr std::ptrdiff_t m_environment = 0xD90; // CitadelPortraitEnvironmentType_t
                constexpr std::ptrdiff_t m_nStartupBehavior = 0xD94; // StartupBehavior_t
                constexpr std::ptrdiff_t m_cameraName = 0xF08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPortraitParticle = 0xF40; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nAmbientParticle = 0xF44; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nCourierType = 0xF48; // int32
                constexpr std::ptrdiff_t m_heroID = 0xF4C; // HeroID_t
                constexpr std::ptrdiff_t m_heroAnimGraphEnumName = 0xF50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_heroShopAnimGraphEnumName = 0xF58; // CUtlSymbolLarge
            }
            // Parent: C_EconEntity
            // Field count: 0
            namespace C_EconWearable {
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flBulletTimeScale (float)
            // NetworkVarNames: m_flProjectileTimeScale (float)
            // NetworkVarNames: m_flExpireTime (GameTime_t)
            // NetworkVarNames: m_flStopDuration (float)
            namespace CCitadelBulletTimeWarp {
                constexpr std::ptrdiff_t m_flBulletTimeScale = 0x830; // float32
                constexpr std::ptrdiff_t m_flProjectileTimeScale = 0x834; // float32
                constexpr std::ptrdiff_t m_flExpireTime = 0x838; // GameTime_t
                constexpr std::ptrdiff_t m_flStopDuration = 0x83C; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityRiptideVData {
                constexpr std::ptrdiff_t m_TossModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Slork_Invis {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierChargedTackleActiveVData {
                constexpr std::ptrdiff_t m_TackleParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PullEnemiesParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_AfterburnWatcher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TriggerTowerRegen {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Item_HealthNova {
                constexpr std::ptrdiff_t m_flAmountPerSecond = 0xC0; // float32
            }
            // Parent: CCitadel_Modifier_Intrinsic_BaseVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MagicClarityWatcherVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_TossUp {
                constexpr std::ptrdiff_t m_bForceApplied = 0xC0; // bool
                constexpr std::ptrdiff_t m_bLandedOnGround = 0xC1; // bool
                constexpr std::ptrdiff_t m_vTossUpForce = 0xC4; // Vector
                constexpr std::ptrdiff_t m_flCurrentVelocityScale = 0xD0; // float32
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_ProjectileRiptide {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_AbilityLifeSteal {
            }
            // Parent: CCitadel_Item_TrackingProjectileApplyModifier
            // Field count: 0
            namespace CCitadel_Item_RejuvTrackingProjectile {
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ItemPickupPunchableVData {
                constexpr std::ptrdiff_t m_flPhysicsRadius = 0x5F8; // float32
                constexpr std::ptrdiff_t m_IsDroppingParticle = 0x600; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_IsPunchableParticle = 0x6E0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_NearRejuvAuraModifier = 0x7C0; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Astro_Rifle_Debuff {
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 4
            namespace CCitadel_Modifier_LashGrappleEnemy_Debuff {
                constexpr std::ptrdiff_t m_vCrashDir = 0xC8; // Vector
                constexpr std::ptrdiff_t m_vLiftTarget = 0xD4; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0xE0; // GameTime_t
                constexpr std::ptrdiff_t m_bCrashingDown = 0xE4; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Healbane_Debuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_RespawnCreditVData {
                constexpr std::ptrdiff_t m_eRespawnMechanic = 0x5F8; // ERejuvenatorRespawnMechanic
                constexpr std::ptrdiff_t m_flRespawnDelay = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flPercentOfNormalRespawn = 0x600; // float32
                constexpr std::ptrdiff_t m_flBonusClipSize = 0x604; // float32
                constexpr std::ptrdiff_t m_flBonusFirerate = 0x608; // float32
                constexpr std::ptrdiff_t m_flBonusHealth = 0x60C; // float32
                constexpr std::ptrdiff_t m_flBonusMoveSpeedMeterPerSecond = 0x610; // float32
                constexpr std::ptrdiff_t m_sExpireSound = 0x618; // CSoundEventName
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CItem_FleetfootBoots {
            }
            // Parent: CCitadel_Modifier_Silenced
            // Field count: 2
            namespace CCitadel_Modifier_Bubble {
                constexpr std::ptrdiff_t m_flDampingFactor = 0xC0; // float32
                constexpr std::ptrdiff_t m_ParticleIndex = 0x1E0; // ParticleIndex_t
            }
            // Parent: C_BaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            // NetworkVarNames: m_flHeightFogDepth (float)
            // NetworkVarNames: m_fHeightFogEdgeWidth (float)
            // NetworkVarNames: m_fIndirectLightStrength (float)
            // NetworkVarNames: m_fSunLightStrength (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_bOverrideIndirectLightStrength (bool)
            // NetworkVarNames: m_bOverrideSunLightStrength (bool)
            // NetworkVarNames: m_bOverrideNoiseStrength (bool)
            // NetworkVarNames: m_bAllowLPVIndirect (bool)
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x558; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x55C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x568; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x574; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x578; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x57C; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x580; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x584; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x588; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x58C; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x590; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x594; // float32
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x598; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x599; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x59A; // bool
                constexpr std::ptrdiff_t m_bAllowLPVIndirect = 0x59B; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_WreckerSalvage {
            }
            // Parent: CCitadelModifierVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TargetPracticeEnemyVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuildupCompleteModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuildupModifier = 0x618; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_TargetParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HeadParticle = 0x7E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strTargetHitSound = 0x8C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strTargetHeadShotHitSound = 0x8D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strTargetCompleteSound = 0x8E8; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_Lash_Flog {
                constexpr std::ptrdiff_t m_SandEffect = 0xD88; // ParticleIndex_t
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_SiphonBulletsVData {
                constexpr std::ptrdiff_t m_PermanentHealthLoss = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_ChainLightningEffectVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Galvanic_Storm_EffectVData {
                constexpr std::ptrdiff_t m_BuffChainParticle = 0x6F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: CCitadel_Modifier_InvisVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Nano_ShadowVData {
                constexpr std::ptrdiff_t m_SilenceModifier = 0x8B0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ArmorDebuff = 0x8C0; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_WarpStone_Caster {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Succor_MoveVData {
                constexpr std::ptrdiff_t m_PullSound = 0x5F8; // CSoundEventName
            }
            // Parent: CCitadelPlayerPawnBase
            // Field count: 43
            //
            // Metadata:
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // NetworkVarNames: m_angClientCamera (QAngle)
            // NetworkVarNames: m_eZipLineLaneColor (CMsgLaneColor)
            // NetworkVarNames: m_nLevel (int32)
            // NetworkVarNames: m_nCurrencies (int32)
            // NetworkVarNames: m_nSpentCurrencies (int32)
            // NetworkVarNames: m_flLastSpawnTime (GameTime_t)
            // NetworkVarNames: m_flRespawnTime (GameTime_t)
            // NetworkVarNames: m_bInRegenerationZone (bool)
            // NetworkVarNames: m_bInItemShopZone (bool)
            // NetworkVarNames: m_timeRevealedOnMinimapByNPC (GameTime_t)
            // NetworkVarNames: m_vecFullSellPriceItems (EntitySubclassID_t)
            // NetworkVarNames: m_vecFullSellPriceAbilityUpgrades (FullSellPriceAbilityUpgrades_t)
            // NetworkVarNames: m_bNetworkDisconnected (bool)
            // NetworkVarNames: m_bHasIncomingThreats (bool)
            // NetworkVarNames: m_bLearningAbility (bool)
            // NetworkVarNames: m_nFlashStartTick (int)
            // NetworkVarNames: m_nFlashMaxStartTick (int)
            // NetworkVarNames: m_nFlashFadeStartTick (int)
            // NetworkVarNames: m_nFlashEndTick (int)
            // NetworkVarNames: m_nFlashMaxAlpha (int8)
            // NetworkVarNames: m_nDeducedLane (int32)
            // NetworkVarNames: m_bDismissedReportCard (bool)
            // NetworkVarNames: m_flCurrentHealingAmount (float)
            // NetworkVarNames: m_angLockedEyeAngles (QAngle)
            // NetworkVarNames: m_CCitadelAbilityComponent (CCitadelAbilityComponent::Storage_t)
            // NetworkVarNames: m_CCitadelHeroComponent (CCitadelHeroComponent::Storage_t)
            // NetworkVarNames: m_bAnimGraphMovementClipped (bool)
            // NetworkVarNames: m_bAnimGraphMovementDisableGravity (bool)
            // NetworkVarNames: m_bAnimGraphMovementDirectAirControl (bool)
            // NetworkVarNames: m_flPredTimeSlowedStart (GameTime_t)
            // NetworkVarNames: m_flPredTimeSlowedEnd (GameTime_t)
            // NetworkVarNames: m_flPredSlowSpeed (float32)
            // NetworkVarNames: m_flTimeSlowedStart (GameTime_t)
            // NetworkVarNames: m_flTimeSlowedEnd (GameTime_t)
            // NetworkVarNames: m_flSlowSpeed (float32)
            // NetworkVarNames: m_flSprintAnimSuppressEndTime (GameTime_t)
            namespace C_CitadelPlayerPawn {
                constexpr std::ptrdiff_t m_angEyeAngles = 0xF78; // QAngle
                constexpr std::ptrdiff_t m_angClientCamera = 0xF90; // QAngle
                constexpr std::ptrdiff_t m_eZipLineLaneColor = 0xF9C; // CMsgLaneColor
                constexpr std::ptrdiff_t m_nLevel = 0xFA0; // int32
                constexpr std::ptrdiff_t m_nCurrencies = 0xFA4; // int32[4]
                constexpr std::ptrdiff_t m_nSpentCurrencies = 0xFB4; // int32[4]
                constexpr std::ptrdiff_t m_flLastSpawnTime = 0xFC4; // GameTime_t
                constexpr std::ptrdiff_t m_flRespawnTime = 0xFC8; // GameTime_t
                constexpr std::ptrdiff_t m_bInRegenerationZone = 0xFCC; // bool
                constexpr std::ptrdiff_t m_bInItemShopZone = 0xFCD; // bool
                constexpr std::ptrdiff_t m_timeRevealedOnMinimapByNPC = 0xFD0; // GameTime_t
                constexpr std::ptrdiff_t m_vecFullSellPriceItems = 0xFD8; // C_NetworkUtlVectorBase<CUtlStringToken>
                constexpr std::ptrdiff_t m_vecFullSellPriceAbilityUpgrades = 0xFF0; // C_NetworkUtlVectorBase<FullSellPriceAbilityUpgrades_t>
                constexpr std::ptrdiff_t m_bNetworkDisconnected = 0x1008; // bool
                constexpr std::ptrdiff_t m_bHasIncomingThreats = 0x1009; // bool
                constexpr std::ptrdiff_t m_bLearningAbility = 0x100A; // bool
                constexpr std::ptrdiff_t m_nFlashStartTick = 0x100C; // int32
                constexpr std::ptrdiff_t m_nFlashMaxStartTick = 0x1010; // int32
                constexpr std::ptrdiff_t m_nFlashFadeStartTick = 0x1014; // int32
                constexpr std::ptrdiff_t m_nFlashEndTick = 0x1018; // int32
                constexpr std::ptrdiff_t m_nFlashMaxAlpha = 0x101C; // int8
                constexpr std::ptrdiff_t m_nDeducedLane = 0x1020; // int32
                constexpr std::ptrdiff_t m_bDismissedReportCard = 0x1024; // bool
                constexpr std::ptrdiff_t m_flCurrentHealingAmount = 0x1028; // float32
                constexpr std::ptrdiff_t m_angLockedEyeAngles = 0x102C; // QAngle
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0x1038; // CCitadelAbilityComponent
                constexpr std::ptrdiff_t m_CCitadelHeroComponent = 0x11D8; // CCitadelHeroComponent
                constexpr std::ptrdiff_t m_flRichPresenceUpdateInterval = 0x1298; // float32
                constexpr std::ptrdiff_t m_bAnimGraphMovementClipped = 0x1390; // bool
                constexpr std::ptrdiff_t m_bAnimGraphMovementDisableGravity = 0x1391; // bool
                constexpr std::ptrdiff_t m_bAnimGraphMovementDirectAirControl = 0x1392; // bool
                constexpr std::ptrdiff_t m_bLastMoveWasAnimGraph = 0x1393; // bool
                constexpr std::ptrdiff_t m_flPredTimeSlowedStart = 0x1394; // GameTime_t
                constexpr std::ptrdiff_t m_flPredTimeSlowedEnd = 0x1398; // GameTime_t
                constexpr std::ptrdiff_t m_flPredSlowSpeed = 0x139C; // float32
                constexpr std::ptrdiff_t m_flTimeSlowedStart = 0x13A0; // GameTime_t[4]
                constexpr std::ptrdiff_t m_flTimeSlowedEnd = 0x13B0; // GameTime_t[4]
                constexpr std::ptrdiff_t m_flSlowSpeed = 0x13C0; // float32[4]
                constexpr std::ptrdiff_t m_flSprintAnimSuppressEndTime = 0x13D0; // GameTime_t
                constexpr std::ptrdiff_t m_iCurSlowSlot = 0x13D4; // int32
                constexpr std::ptrdiff_t m_vShootTestOffsetStanding = 0x13D8; // Vector
                constexpr std::ptrdiff_t m_vShootTestOffsetCrouching = 0x13E4; // Vector
                constexpr std::ptrdiff_t m_leanStartTime = 0x13F0; // GameTime_t
            }
            // Parent: CCitadel_Ability_ZipLine
            // Field count: 0
            namespace CCitadel_Ability_TrooperZipLine {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Upgrade_Headhunter_HeadshotBuff {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DetentionAmmoVData {
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x628; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImmunityModifier = 0x648; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TracerParticle = 0x658; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityPropertySingleStat {
            }
            // Parent: C_BaseFire
            // Field count: 13
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace C_FireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x568; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x56C; // int32
                constexpr std::ptrdiff_t m_flScaleRegister = 0x570; // float32
                constexpr std::ptrdiff_t m_flScaleStart = 0x574; // float32
                constexpr std::ptrdiff_t m_flScaleEnd = 0x578; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x57C; // GameTime_t
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x580; // GameTime_t
                constexpr std::ptrdiff_t m_flChildFlameSpread = 0x584; // float32
                constexpr std::ptrdiff_t m_flClipPerc = 0x598; // float32
                constexpr std::ptrdiff_t m_bClipTested = 0x59C; // bool
                constexpr std::ptrdiff_t m_bFadingOut = 0x59D; // bool
                constexpr std::ptrdiff_t m_tParticleSpawn = 0x5A0; // TimedEvent
                constexpr std::ptrdiff_t m_pFireOverlay = 0x5A8; // CFireOverlay*
            }
            // Parent: C_Sprite
            // Field count: 0
            namespace C_FireFromAboveSprite {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_UtilityUpgrade_AOESmokeBomb {
            }
            // Parent: C_BaseEntity
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_Entity_Color (Color)
            // NetworkVarNames: m_Entity_flBrightness (float)
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x15B8; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x15BC; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x15C8; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x15F0; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x15FC; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1608; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x160C; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x1610; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1614; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1618; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x161C; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1620; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x162C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1630; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1634; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1638; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x163C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1640; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1659; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_SleepDagger {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_FlameDash {
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityProperty_KineticCarbine {
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Mirage_Tornado_Lift_VData {
                constexpr std::ptrdiff_t m_HoldInPlaceModifier = 0x5F8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_LiftParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_Fealty {
                constexpr std::ptrdiff_t m_hTarget = 0xC70; // CHandle<C_BaseEntity>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_SummonGangster {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bull_Leap_Boosting {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_ZipLine_Boost {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Thumper_2_Aura {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierIntimidatedVData {
                constexpr std::ptrdiff_t m_EffectParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Upgrade_AerialAssualtVData {
                constexpr std::ptrdiff_t m_WatcherModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_LaunchParticle = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Unstoppable {
                constexpr std::ptrdiff_t m_vecCheckedModifiers = 0xC0; // CUtlVector<CCitadelModifier*>
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierVData_SetMoveType {
                constexpr std::ptrdiff_t m_nMoveType = 0x5F8; // MoveType_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_nPlayersHit (int)
            namespace CCitadel_Ability_StickyBomb {
                constexpr std::ptrdiff_t m_nPlayersHit = 0xC78; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_LightningBullet {
            }
            // Parent: CCitadel_UtilityUpgrade_RocketBootsVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_UtilityUpgrade_RocketBoosterVData {
                constexpr std::ptrdiff_t m_LandingParticle = 0x1660; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1740; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DropDownStartParticle = 0x1820; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DropDownStartSound = 0x1900; // CSoundEventName
                constexpr std::ptrdiff_t m_LandingSound = 0x1910; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1920; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flSlamEnabledTime = 0x1930; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Magic_Clarity_BuffVData {
                constexpr std::ptrdiff_t m_VisualModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_AcolytesGlove_VData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_SwingParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 41
            //
            // Metadata:
            // NetworkVarNames: m_iLevel (int32)
            // NetworkVarNames: m_iMaxAmmo (int32)
            // NetworkVarNames: m_iHealthMax (int32)
            // NetworkVarNames: m_flHealthRegen (float)
            // NetworkVarNames: m_flRespawnTime (GameTime_t)
            // NetworkVarNames: m_nHeroID (HeroID_t)
            // NetworkVarNames: m_iGoldNetWorth (int32)
            // NetworkVarNames: m_iAPNetWorth (int32)
            // NetworkVarNames: m_iCreepGold (int32)
            // NetworkVarNames: m_iCreepGoldSoloBonus (int32)
            // NetworkVarNames: m_iCreepGoldKill (int32)
            // NetworkVarNames: m_iCreepGoldAirOrb (int32)
            // NetworkVarNames: m_iCreepGoldGroundOrb (int32)
            // NetworkVarNames: m_iCreepGoldDeny (int32)
            // NetworkVarNames: m_iCreepGoldNeutral (int32)
            // NetworkVarNames: m_iFarmBaseline (int32)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_iPlayerKills (int32)
            // NetworkVarNames: m_iPlayerAssists (int32)
            // NetworkVarNames: m_iDeaths (int32)
            // NetworkVarNames: m_iDenies (int32)
            // NetworkVarNames: m_iLastHits (int32)
            // NetworkVarNames: m_bAlive (bool)
            // NetworkVarNames: m_nHeroDraftPosition (int32)
            // NetworkVarNames: m_bUltimateTrained (bool)
            // NetworkVarNames: m_flUltimateCooldownStart (GameTime_t)
            // NetworkVarNames: m_flUltimateCooldownEnd (GameTime_t)
            // NetworkVarNames: m_bHasRejuvenator (bool)
            // NetworkVarNames: m_bHasRebirth (bool)
            // NetworkVarNames: m_iHeroDamage (int32)
            // NetworkVarNames: m_iHeroHealing (int32)
            // NetworkVarNames: m_iSelfHealing (int32)
            // NetworkVarNames: m_iObjectiveDamage (int32)
            // NetworkVarNames: m_nHeroAbilityUpgradeBits (int32)
            // NetworkVarNames: m_vecUpgrades (EntitySubclassID_t)
            // NetworkVarNames: m_vecBonusCounterAbilities (EntitySubclassID_t)
            // NetworkVarNames: m_vecBonusCounterValues (int32)
            // NetworkVarNames: m_tHeldItem (AbilityID_t)
            // NetworkVarNames: m_vecImbuements (ItemImbuementPair_t)
            // NetworkVarNames: m_vecDynamicAbilityValues (DynamicAbilityValues_t)
            // NetworkVarNames: m_vecStatViewerModifierValues (StatViewerModifierValues_t)
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
            // Parent: CLogicalEntity
            // Field count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnTrigger = 0x558; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnSpawn = 0x580; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x5A8; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x5A9; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x5AA; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x5AB; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x5AC; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Mirage_Tornado_VData {
                constexpr std::ptrdiff_t m_TornadoCastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TornadoAura = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_GrenadeTrailModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelBaseYamatoAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nPowerLevel (int)
            namespace CCitadel_Ability_PowerSlash {
                constexpr std::ptrdiff_t m_nPowerLevel = 0xC84; // int32
                constexpr std::ptrdiff_t m_nCastParticle = 0xC88; // ParticleIndex_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Bomber_Ability02 {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_HealthSwap {
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CTier3BossAbility {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Base {
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_nFastFireEndTime (GameTime_t)
            namespace CCitadel_WeaponUpgrade_BurstFire {
                constexpr std::ptrdiff_t m_nFastFireEndTime = 0xC88; // GameTime_t
            }
            // Parent: C_PointCamera
            // Field count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x5B8; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Synth_Barrage_Caster {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CAbility_Synth_Pulse {
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_VacuumAuraTargetModifierVData {
                constexpr std::ptrdiff_t m_flOuterSpeedScale = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flSpeedScaleBias = 0x6DC; // float32
                constexpr std::ptrdiff_t m_TargetLoopingSound = 0x6E0; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Chrono_KineticCarbine_Slow {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PowerJump {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CModifier_Upgrade_ArcaneMedallion {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vExitOrigin (Vector)
            namespace C_CitadelTeleportTrigger {
                constexpr std::ptrdiff_t m_vExitOrigin = 0x838; // Vector
            }
            // Parent: C_BaseModelEntity
            // Field count: 73
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_nColorMode (int)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flColorTemperature (float)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_nLuminaireShape (int)
            // NetworkVarNames: m_flLuminaireSize (float)
            // NetworkVarNames: m_flLuminaireAnisotropy (float)
            // NetworkVarNames: m_LightStyleString (CUtlString)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_QueuedLightStyleStrings (CUtlString)
            // NetworkVarNames: m_LightStyleEvents (CUtlString)
            // NetworkVarNames: m_LightStyleTargets (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_flShape (float)
            // NetworkVarNames: m_flSoftX (float)
            // NetworkVarNames: m_flSoftY (float)
            // NetworkVarNames: m_flSkirt (float)
            // NetworkVarNames: m_flSkirtNear (float)
            // NetworkVarNames: m_vSizeParams (Vector)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_vShear (Vector)
            // NetworkVarNames: m_nBakeSpecularToCubemaps (int)
            // NetworkVarNames: m_vBakeSpecularToCubemapsSize (Vector)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowMapSize (int)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_bContactShadow (bool)
            // NetworkVarNames: m_nBounceLight (int)
            // NetworkVarNames: m_flBounceScale (float)
            // NetworkVarNames: m_flMinRoughness (float)
            // NetworkVarNames: m_vAlternateColor (Vector)
            // NetworkVarNames: m_fAlternateColorBrightness (float)
            // NetworkVarNames: m_nFog (int)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_nFogShadows (int)
            // NetworkVarNames: m_flFogScale (float)
            // NetworkVarNames: m_bFogMixedShadows (bool)
            // NetworkVarNames: m_flFadeSizeStart (float)
            // NetworkVarNames: m_flFadeSizeEnd (float)
            // NetworkVarNames: m_flShadowFadeSizeStart (float)
            // NetworkVarNames: m_flShadowFadeSizeEnd (float)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_nPrecomputedSubFrusta (int)
            // NetworkVarNames: m_vPrecomputedOBBOrigin0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles0 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles1 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles2 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles3 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles4 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin5 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles5 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent5 (Vector)
            // NetworkVarNames: m_VisClusters (uint16)
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x830; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x834; // int32
                constexpr std::ptrdiff_t m_Color = 0x838; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0x83C; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0x840; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x844; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0x848; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x84C; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x850; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x854; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x858; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0x860; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x868; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x870; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x888; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x8A0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x8B8; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x958; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x960; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x964; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x968; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x96C; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x970; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x974; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x980; // float32
                constexpr std::ptrdiff_t m_vShear = 0x984; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x990; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x994; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0x9A0; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x9A4; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x9A8; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x9AC; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x9B0; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x9B4; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x9B8; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x9BC; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x9C8; // float32
                constexpr std::ptrdiff_t m_nFog = 0x9CC; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x9D0; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x9D4; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x9D8; // float32
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x9DC; // bool
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x9E0; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x9E4; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x9E8; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x9EC; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x9F0; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x9F4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xA00; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xA0C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xA18; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xA24; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0xA30; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0xA34; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0xA40; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0xA4C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0xA58; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0xA64; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0xA70; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0xA7C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0xA88; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0xA94; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0xAA0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0xAAC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0xAB8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0xAC4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0xAD0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0xADC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xAE8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xAF4; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xB00; // Vector
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0xB50; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0xB58; // C_NetworkUtlVectorBase<uint16>
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x558; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x55C; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x560; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x564; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x568; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x56C; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x570; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x574; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SpinVData {
                constexpr std::ptrdiff_t m_AoEParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SlowModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityIntimidateVData {
                constexpr std::ptrdiff_t m_EnemyModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AoEPlayerParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AoEParticle = 0x1628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hAbility (CHandle<CCitadelBaseAbility>)
            // NetworkVarNames: m_bFloating (bool)
            namespace CCitadel_MobileResupply {
                constexpr std::ptrdiff_t m_hAbility = 0xB48; // CHandle<C_CitadelBaseAbility>
                constexpr std::ptrdiff_t m_bFloating = 0xB4C; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Wraith_RapidFireVData {
                constexpr std::ptrdiff_t m_RapidFireParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_HornetLeap {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SilenceProcWatcherVData {
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x628; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_SilenceProcModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SilenceActiveModifier = 0x648; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImmunityModifier = 0x658; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_sInstantProcIfCasterHasModifier = 0x668; // CUtlString
                constexpr std::ptrdiff_t m_TracerParticle = 0x670; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 78
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            namespace CitadelAbilityVData {
                constexpr std::ptrdiff_t m_eAbilityType = 0x28; // EAbilityType_t
                constexpr std::ptrdiff_t m_eItemSlotType = 0x29; // EItemSlotTypes_t
                constexpr std::ptrdiff_t m_bDisabled = 0x2A; // bool
                constexpr std::ptrdiff_t m_bInDevelopment = 0x2B; // bool
                constexpr std::ptrdiff_t m_bStartTrained = 0x2C; // bool
                constexpr std::ptrdiff_t m_iMaxLevel = 0x30; // int32
                constexpr std::ptrdiff_t m_nAbilityPointsCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nAbillityUnlocksCost = 0x38; // int32
                constexpr std::ptrdiff_t m_iUpdateTime = 0x40; // uint64
                constexpr std::ptrdiff_t m_nAbilityBehaviors = 0x50; // EAbilityBehavior_t
                constexpr std::ptrdiff_t m_eAbilityTargetingLocation = 0x58; // EAbilityTargetingLocation_t
                constexpr std::ptrdiff_t m_eAbilityTargetingShape = 0x5C; // EAbilityTargetingShape_t
                constexpr std::ptrdiff_t m_flTargetingConeAngle = 0x60; // float32
                constexpr std::ptrdiff_t m_flTargetingConeHalfWidth = 0x64; // float32
                constexpr std::ptrdiff_t m_bIncludeExtra2DCone = 0x68; // bool
                constexpr std::ptrdiff_t m_eAbilityActivation = 0x6C; // EAbilityActivation_t
                constexpr std::ptrdiff_t m_TriggerButtonPreReqButton = 0x70; // InputBitMask_t
                constexpr std::ptrdiff_t m_TriggerButtonOverride = 0x78; // InputBitMask_t
                constexpr std::ptrdiff_t m_eAbilitySpectatePriority = 0x80; // EAbilitySpectatePriority
                constexpr std::ptrdiff_t m_bitsInterruptingStates = 0x84; // CBitVecEnum<EModifierState>
                constexpr std::ptrdiff_t m_IncompatibleFilter = 0xA0; // IncompatibleFilter_t
                constexpr std::ptrdiff_t m_nAbilityTargetTypes = 0xB0; // CITADEL_UNIT_TARGET_TYPE
                constexpr std::ptrdiff_t m_nAbilityTargetFlags = 0xB4; // CITADEL_UNIT_TARGET_FLAGS
                constexpr std::ptrdiff_t m_bitsPostCastEnabledStateMask = 0xB8; // CBitVecEnum<EModifierState>
                constexpr std::ptrdiff_t m_TargetAbilityEffectsToApply = 0xD0; // ECitadelTargetAbilityEffects
                constexpr std::ptrdiff_t m_bShowTargetingPreviewWhileChanneling = 0xD4; // bool
                constexpr std::ptrdiff_t m_bShowTargetingPreviewWhileCasting = 0xD5; // bool
                constexpr std::ptrdiff_t m_WeaponInfo = 0xD8; // CCitadelWeaponInfo
                constexpr std::ptrdiff_t m_projectileInfo = 0x748; // ProjectileInfo_t
                constexpr std::ptrdiff_t m_deploymentInfo = 0xAC8; // DeploymentInfo_t
                constexpr std::ptrdiff_t m_mapAbilityProperties = 0xCA8; // CUtlOrderedMap<CUtlString,CitadelAbilityProperty_t>
                constexpr std::ptrdiff_t m_vecDependentAbilities = 0xCD0; // CUtlVector<CSubclassName<4>>
                constexpr std::ptrdiff_t m_vecAbilityUpgrades = 0xCE8; // CUtlVector<AbilityUpgrade_t>
                constexpr std::ptrdiff_t m_strCastAnimGraphParam = 0xD20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_strSelectionNameOverride = 0xD28; // CUtlString
                constexpr std::ptrdiff_t m_strCastAnimSequenceName = 0xD30; // CUtlString
                constexpr std::ptrdiff_t m_AbilityTooltipDetails = 0xD38; // AbilityTooltipDetails_t
                constexpr std::ptrdiff_t m_strCSSClass = 0xD68; // CUtlString
                constexpr std::ptrdiff_t m_strAbilityImage = 0xD70; // CPanoramaImageName
                constexpr std::ptrdiff_t m_strMoviePreviewPath = 0xD80; // CUtlString
                constexpr std::ptrdiff_t m_HUDPanel = 0xD88; // CitadelAbilityHUDPanel_t
                constexpr std::ptrdiff_t m_bShowInPassiveItemsArea = 0xDC0; // bool
                constexpr std::ptrdiff_t m_bForceShowHUDPanel = 0xDC1; // bool
                constexpr std::ptrdiff_t m_additionalAbilities = 0xDC8; // AdditionalAbilities_t
                constexpr std::ptrdiff_t m_strCancelAbilityKey = 0xDE8; // CUtlString
                constexpr std::ptrdiff_t m_strSecondaryStatName = 0xDF0; // CUtlString
                constexpr std::ptrdiff_t m_strCastButtonLocToken = 0xDF8; // CUtlString
                constexpr std::ptrdiff_t m_strAltCastButtonLocToken = 0xE00; // CUtlString
                constexpr std::ptrdiff_t m_cameraSequenceCastStart = 0xE08; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_bEndCastStartSequenceOnCastComplete = 0xE88; // bool
                constexpr std::ptrdiff_t m_cameraSequenceCastComplete = 0xE90; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceChannelStart = 0xF10; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_bEndChannelStartSequenceOnChannelComplete = 0xF90; // bool
                constexpr std::ptrdiff_t m_flCameraPreviewOffset = 0xF94; // float32
                constexpr std::ptrdiff_t m_flCameraPreviewDistance = 0xF98; // float32
                constexpr std::ptrdiff_t m_flCameraPreviewSpeed = 0xF9C; // float32
                constexpr std::ptrdiff_t m_previewParticle = 0xFA0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PreviewPathParticle = 0x1080; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_mapCastEventParticles = 0x1160; // CUtlOrderedMap<AbilityCastEvent_t,CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>>
                constexpr std::ptrdiff_t m_skillshotHitParticle = 0x1188; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_skillshotMissParticle = 0x1268; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetingPreviewParticle = 0x1348; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strSelectedSound = 0x1428; // CSoundEventName
                constexpr std::ptrdiff_t m_strUnselectedSound = 0x1438; // CSoundEventName
                constexpr std::ptrdiff_t m_strSelectedLoopSound = 0x1448; // CSoundEventName
                constexpr std::ptrdiff_t m_strCastSound = 0x1458; // CSoundEventName
                constexpr std::ptrdiff_t m_strChannelSound = 0x1468; // CSoundEventName
                constexpr std::ptrdiff_t m_strChannelLoopSound = 0x1478; // CSoundEventName
                constexpr std::ptrdiff_t m_strCastDelaySound = 0x1488; // CSoundEventName
                constexpr std::ptrdiff_t m_strCastDelayLoopSound = 0x1498; // CSoundEventName
                constexpr std::ptrdiff_t m_strHitConfirmationSound = 0x14A8; // CSoundEventName
                constexpr std::ptrdiff_t m_strDamageTakenSound = 0x14B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strAbilityOffCooldownSound = 0x14C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strAbilityChargeReadySound = 0x14D8; // CSoundEventName
                constexpr std::ptrdiff_t m_bPlayMeepMop = 0x14E8; // bool
                constexpr std::ptrdiff_t m_AutoChannelModifier = 0x14F0; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_AutoCastDelayModifier = 0x1500; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_AutoIntrinsicModifiers = 0x1510; // CUtlVector<CEmbeddedSubclass<CBaseModifier>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TrooperDisabledInvulnerabilityFX {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: CCitadel_UtilityUpgrade_RocketBoots
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flCastTime (GameTime_t)
            // NetworkVarNames: m_bCrashingDown (bool)
            // NetworkVarNames: m_bImpulseApplied (bool)
            // NetworkVarNames: m_vecCrashPosition (Vector)
            // NetworkVarNames: m_vecCrashDirection (Vector)
            namespace CCitadel_UtilityUpgrade_RocketBooster {
                constexpr std::ptrdiff_t m_nTargetingParticleIndex = 0xCFC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flCastTime = 0xD00; // GameTime_t
                constexpr std::ptrdiff_t m_bCrashingDown = 0xD04; // bool
                constexpr std::ptrdiff_t m_bImpulseApplied = 0xD05; // bool
                constexpr std::ptrdiff_t m_vecCrashPosition = 0xD08; // Vector
                constexpr std::ptrdiff_t m_vecCrashDirection = 0xD14; // Vector
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_SelfBuffModifier {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Cadence_Anthem {
            }
            // Parent: CCitadelYamatoBaseVData
            // Field count: 21
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityPowerSlashVData {
                constexpr std::ptrdiff_t m_flAirDrag = 0x1530; // float32
                constexpr std::ptrdiff_t m_flMaxPowerPadding = 0x1534; // float32
                constexpr std::ptrdiff_t m_flEffectGroundTrace = 0x1538; // float32
                constexpr std::ptrdiff_t m_flWhizbyMaxRange = 0x153C; // float32
                constexpr std::ptrdiff_t m_flStartPosTestCapsuleLength = 0x1540; // float32
                constexpr std::ptrdiff_t m_vecLongEffectOffset = 0x1544; // Vector
                constexpr std::ptrdiff_t m_PowerSlashParticle = 0x1550; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PowerSlashFullParticle = 0x1630; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1710; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x17F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PowerUpParticle = 0x18D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStartSound = 0x19B0; // CSoundEventName
                constexpr std::ptrdiff_t m_strDamageImpactSound = 0x19C0; // CSoundEventName
                constexpr std::ptrdiff_t m_strDamageImpactVictimSound = 0x19D0; // CSoundEventName
                constexpr std::ptrdiff_t m_strPowerUp1Sounds = 0x19E0; // CSoundEventName
                constexpr std::ptrdiff_t m_strPowerUp2Sounds = 0x19F0; // CSoundEventName
                constexpr std::ptrdiff_t m_strPowerUp3Sounds = 0x1A00; // CSoundEventName
                constexpr std::ptrdiff_t m_strWhizbySound = 0x1A10; // CSoundEventName
                constexpr std::ptrdiff_t m_strSlashSound = 0x1A20; // CSoundEventName
                constexpr std::ptrdiff_t m_strSlashFullSound = 0x1A30; // CSoundEventName
                constexpr std::ptrdiff_t m_SlowModifier = 0x1A40; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_IceGrenadeVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_IceGrenadeSlowModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1618; // CSoundEventName
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_ReturnFireVData {
                constexpr std::ptrdiff_t m_ReactiveArmorModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_TechShieldImpact {
                constexpr std::ptrdiff_t m_AmbientEffect = 0xC0; // ParticleIndex_t
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace C_NPC_PestilenceDrone {
            }
            // Parent: C_BaseFlex
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_AttributeManager = 0xCE8; // CAttributeContainer
                constexpr std::ptrdiff_t m_bClientside = 0xE28; // bool
                constexpr std::ptrdiff_t m_nDisableMode = 0xE2C; // EconEntityParticleDisableMode_t
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0xE30; // bool
                constexpr std::ptrdiff_t m_bForceDestroyAttachedParticlesImmediately = 0xE31; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0xE38; // CUtlVector<C_EconEntity::AttachedParticleInfo_t>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0xE50; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0xE54; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0xE58; // bool
                constexpr std::ptrdiff_t m_iOldStyle = 0xE59; // style_index_t
                constexpr std::ptrdiff_t m_hOldProvidee = 0xE5C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0xE60; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_DustStorm {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_WeaponUpgrade_SurgingPower {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_SmokeBomb {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_ChargedShot {
                constexpr std::ptrdiff_t m_ChannelParticle = 0xC70; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff {
            }
            // Parent: C_BarnLight
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xB78; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCadenceAnthemVData {
                constexpr std::ptrdiff_t m_AnthemAOEModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CModifier_FleetfootBoots_BonusClip {
                constexpr std::ptrdiff_t m_nBonusClip = 0xC0; // int32
            }
            // Parent: CCitadel_Modifier_StatStealBase
            // Field count: 0
            namespace CCitadel_Modifier_Siphon_Bullets_Watcher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Glitch {
            }
            // Parent: CCitadel_Modifier_Disarmed
            // Field count: 0
            namespace CCitadel_Modifier_DisarmProc {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_VexBarrier {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_szSnapshotFileName (char)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bFrozen (bool)
            // NetworkVarNames: m_flFreezeTransitionDuration (float)
            // NetworkVarNames: m_nStopType (int)
            // NetworkVarNames: m_bAnimateDuringGameplayPause (bool)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flPreSimTime (float32)
            // NetworkVarNames: m_vServerControlPoints (Vector)
            // NetworkVarNames: m_iServerControlPointAssignments (uint8)
            // NetworkVarNames: m_hControlPointEnts (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bNoSave (bool)
            // NetworkVarNames: m_bNoFreeze (bool)
            // NetworkVarNames: m_bNoRamp (bool)
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x830; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0xA30; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0xA31; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xA34; // float32
                constexpr std::ptrdiff_t m_nStopType = 0xA38; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xA3C; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0xA48; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0xA4C; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0xA50; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xA80; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xA84; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xB84; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xB85; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xB86; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xB87; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xB88; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xB90; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0xD90; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xD94; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0xDA0; // int32
                constexpr std::ptrdiff_t m_clrTint = 0xDA4; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0xDC8; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0xDC9; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Wrecker_UltimateVData {
                constexpr std::ptrdiff_t m_EnemyGrabModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_EnemyThrowModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_EnemyDamageModifier = 0x618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_InvincibleModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_StartSound = 0x638; // CSoundEventName
                constexpr std::ptrdiff_t m_AmbientLoopingSound = 0x648; // CSoundEventName
                constexpr std::ptrdiff_t m_GrabSound = 0x658; // CSoundEventName
                constexpr std::ptrdiff_t m_ThrowSound = 0x668; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Low_Health_Glow {
                constexpr std::ptrdiff_t m_nFXIndex = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Magic_Clarity_Buff {
                constexpr std::ptrdiff_t m_bAbilityLocked = 0xF8; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BreakablePropExtraStaminaVData {
                constexpr std::ptrdiff_t m_nExtraStamina = 0x5F8; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Thumper_3 {
            }
            // Parent: CCitadelModifierVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_StickyBombAttachedVData {
                constexpr std::ptrdiff_t m_BombAttachedParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StunAttachedParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BombAttachedVictimTeamParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x978; // CSoundEventName
                constexpr std::ptrdiff_t m_strTickTockSound = 0x988; // CSoundEventName
                constexpr std::ptrdiff_t m_strTickTockFastSound = 0x998; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0x9A8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DetonateWarningTime = 0x9B8; // float32
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierLashGrappleEnemyDebuffVData {
                constexpr std::ptrdiff_t m_GrappleParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaunchParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_RopeParticle = 0x978; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactSound = 0xA58; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0xA68; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SpeedBoost {
            }
            // Parent: CBaseLockonAbilityVData
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityLashUltimateVData {
                constexpr std::ptrdiff_t m_TargetPreviewParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaunchParticle = 0x1628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_UltimateCastParticle = 0x1708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_UltimateCastEnemyParticle = 0x17E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strThrowEnemyAnimGraphParam = 0x18C8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_GrappleEnemyModifier = 0x18D0; // CEmbeddedSubclass<CCitadel_Modifier_LashGrappleEnemy_Debuff>
                constexpr std::ptrdiff_t m_GrabSound = 0x18E0; // CSoundEventName
                constexpr std::ptrdiff_t m_MissSound = 0x18F0; // CSoundEventName
                constexpr std::ptrdiff_t m_ThrowSound = 0x1900; // CSoundEventName
                constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1910; // float32
                constexpr std::ptrdiff_t m_flFallSpeedMax = 0x1914; // float32
                constexpr std::ptrdiff_t m_flAirDrag = 0x1918; // float32
                constexpr std::ptrdiff_t m_flMaxPitchRangeScale = 0x191C; // float32
                constexpr std::ptrdiff_t m_flThrowAnimTossPoint = 0x1920; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_LastBreath {
                constexpr std::ptrdiff_t m_flDamageToAbsorb = 0x168; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Bomber_Ability03 {
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityProperty_NanoTechRoundsDamage {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_Stimpak {
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 2
            namespace CCitadel_Modifier_Knockback {
                constexpr std::ptrdiff_t m_flForce = 0xC8; // float32
                constexpr std::ptrdiff_t m_bKnockedBack = 0xCC; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CAbility_Synth_Grasp {
                constexpr std::ptrdiff_t m_vecTetheredEnemies = 0xC70; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
            }
            // Parent: CCitadelBaseTriggerAbility
            // Field count: 1
            namespace CCitadel_Ability_TangoTether_Trigger {
                constexpr std::ptrdiff_t m_hBaseAbility = 0xC84; // CHandle<C_CitadelBaseAbility>
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_iLane (int)
            namespace C_AssignedLaneParticle {
                constexpr std::ptrdiff_t m_iLane = 0x850; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityThumper4VData {
                constexpr std::ptrdiff_t m_PullAOEModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Bounce_Pad_Stomp {
                constexpr std::ptrdiff_t m_bStomped = 0x2F0; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ChargedBomb {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_IncendiaryThinker {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hAbility (CHandle<CCitadelBaseAbility>)
            namespace C_Citadel_Nano_Predatory_Statue {
                constexpr std::ptrdiff_t m_hAbility = 0xB50; // CHandle<C_CitadelBaseAbility>
                constexpr std::ptrdiff_t m_flLifetime = 0xB54; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadelBaseYamatoAbility {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SleepDagger_Drowsy {
            }
            // Parent: CCitadel_Modifier_ShieldTracker_Base
            // Field count: 0
            namespace CCitadel_Modifier_ShieldTracker_Magic {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_CanDamageTier3Phase2 {
            }
            // Parent: CCitadelBaseDashCastAbility
            // Field count: 0
            namespace CCitadel_Ability_Cadence_SilenceContraptions {
            }
            // Parent: CitadelAbilityVData
            // Field count: 26
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityLashDownStrikeVData {
                constexpr std::ptrdiff_t m_TargetPreviewParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strGroundCastAnimGraphParam = 0x1608; // CGlobalSymbol
                constexpr std::ptrdiff_t m_strAirCastAnimGraphParam = 0x1610; // CGlobalSymbol
                constexpr std::ptrdiff_t m_StompParticle = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StompLineParticle = 0x16F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StompLineObstructedParticle = 0x17D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StompImpactParticle = 0x18B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StompExplosionSound = 0x1998; // CSoundEventName
                constexpr std::ptrdiff_t m_StompEnemyImpactSound = 0x19A8; // CSoundEventName
                constexpr std::ptrdiff_t m_DownStrikeModifier = 0x19B8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ImpactModifier = 0x19C8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_flHeightUILingerTime = 0x19D8; // float32
                constexpr std::ptrdiff_t m_flDamageFrustumHalfWidth = 0x19DC; // float32
                constexpr std::ptrdiff_t m_flDamageFrustumAngle = 0x19E0; // float32
                constexpr std::ptrdiff_t m_flDamageWaveSpeed = 0x19E4; // float32
                constexpr std::ptrdiff_t m_flDamageTraceProbeDamageRadius = 0x19E8; // float32
                constexpr std::ptrdiff_t m_flDamageTraceProbeWorldRadius = 0x19EC; // float32
                constexpr std::ptrdiff_t m_flDamageTraceProbeStepUpHeight = 0x19F0; // float32
                constexpr std::ptrdiff_t m_flDamageTraceProbeStepDownHeight = 0x19F4; // float32
                constexpr std::ptrdiff_t m_flDamageTraceProbeDropDownRate = 0x19F8; // float32
                constexpr std::ptrdiff_t m_flInitialDamageRadiusInMeters = 0x19FC; // float32
                constexpr std::ptrdiff_t m_nGroundCrackGap = 0x1A00; // int32
                constexpr std::ptrdiff_t m_flGroupLengthTolerance = 0x1A04; // float32
                constexpr std::ptrdiff_t m_flDamageEffectScaleMin = 0x1A08; // float32
                constexpr std::ptrdiff_t m_flDamageEffectScaleMax = 0x1A0C; // float32
                constexpr std::ptrdiff_t m_flTrackAmount = 0x1A10; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ProjectMindVData {
                constexpr std::ptrdiff_t m_ProjectMindModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_AcolytesGlove {
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_BubbleVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastTargetSound = 0x1650; // CSoundEventName
                constexpr std::ptrdiff_t m_BubbleModifier = 0x1660; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierHoldingGoldenIdolVData {
                constexpr std::ptrdiff_t m_IdolParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: C_PathParticleRope
            // Field count: 1
            namespace C_CitadelZiplinePath {
                constexpr std::ptrdiff_t m_iLaneNumber = 0x668; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_BaseHeldItemVData {
                constexpr std::ptrdiff_t m_ItemModel = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCadenceGrandFinaleVData {
                constexpr std::ptrdiff_t m_StageModel = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flStageModelHeight = 0x1608; // float32
                constexpr std::ptrdiff_t m_flStageModelWidth = 0x160C; // float32
                constexpr std::ptrdiff_t m_flStageModelLength = 0x1610; // float32
                constexpr std::ptrdiff_t m_flStageModelScale = 0x1614; // float32
                constexpr std::ptrdiff_t m_GrandFinaleAOEModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 1
            namespace CCitadel_Modifier_Gravity_Lasso_Enemy {
                constexpr std::ptrdiff_t m_eHoldPosition = 0xC8; // ELassoHoldPosition
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_flBoostYaw (float)
            // NetworkVarNames: m_vecCrashPosition (Vector)
            // NetworkVarNames: m_vecCrashDirection (Vector)
            // NetworkVarNames: m_eLeapState (ELeapState_t)
            // NetworkVarNames: m_flStateEnterTime (GameTime_t)
            // NetworkVarNames: m_flNextStateTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flBoostEndTime (CCitadelAutoScaledTime)
            namespace CCitadel_Ability_Bull_Leap {
                constexpr std::ptrdiff_t m_flBoostYaw = 0xC70; // float32
                constexpr std::ptrdiff_t m_vecCrashPosition = 0xC74; // Vector
                constexpr std::ptrdiff_t m_vecCrashDirection = 0xC80; // Vector
                constexpr std::ptrdiff_t m_eLeapState = 0xC8C; // ELeapState_t
                constexpr std::ptrdiff_t m_flStateEnterTime = 0xC90; // GameTime_t
                constexpr std::ptrdiff_t m_flNextStateTime = 0xC98; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flBoostEndTime = 0xCB0; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_vecLastVel = 0xE20; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Infuser {
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 1
            namespace CCitadel_Ability_Tier2Boss_RocketBarrage {
                constexpr std::ptrdiff_t m_nGrenadesLeft = 0xC70; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CPointModifierThinker {
                constexpr std::ptrdiff_t m_hModifier = 0x558; // CModifierHandleTyped<CCitadelModifier>
                constexpr std::ptrdiff_t m_bSendToClients = 0x570; // bool
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_ZiplineMastery {
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_hDecalMaterial (HMaterialStrong)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDepth (float)
            // NetworkVarNames: m_nRenderOrder (uint32)
            // NetworkVarNames: m_bProjectOnWorld (bool)
            // NetworkVarNames: m_bProjectOnCharacters (bool)
            // NetworkVarNames: m_bProjectOnWater (bool)
            // NetworkVarNames: m_flDepthSortBias (float)
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x830; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0x838; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x83C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x840; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0x844; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x848; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x849; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x84A; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x84C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Mirage_Tornado_HoldInPlace {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityLockDownVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_NearbyEnemyBoostVData {
                constexpr std::ptrdiff_t m_BerserkerSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_BuffModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x558; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x564; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x568; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x56C; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x570; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x574; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x578; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x57C; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x77C; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x77D; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x77E; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x77F; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x780; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x784; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x788; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x78C; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x790; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x794; // float32[1]
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 3
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_NPCState (NPC_STATE)
            // NetworkVarNames: m_bFadeCorpse (bool)
            // NetworkVarNames: m_bImportantRagdoll (bool)
            namespace C_AI_BaseNPC {
                constexpr std::ptrdiff_t m_NPCState = 0xD60; // NPC_STATE
                constexpr std::ptrdiff_t m_bFadeCorpse = 0xD64; // bool
                constexpr std::ptrdiff_t m_bImportantRagdoll = 0xD65; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
                constexpr std::ptrdiff_t m_flEnemyMoveSlow = 0xC0; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_ProjectMind {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Bomber_ULT {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Upgrade_OverdriveClip_VData {
                constexpr std::ptrdiff_t m_OverdriveClipModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ReloadModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ChainLightningEffectVData {
                constexpr std::ptrdiff_t m_ChainParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChainSound = 0x6D8; // CSoundEventName
                constexpr std::ptrdiff_t m_VictimSound = 0x6E8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Passive_Camouflage {
                constexpr std::ptrdiff_t m_flRate = 0xC0; // float32
                constexpr std::ptrdiff_t m_vLastPosition = 0xC4; // Vector
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_ThermalDetonator_Thinker {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flNextShootTime (GameTime_t)
            namespace CAbility_Synth_Barrage {
                constexpr std::ptrdiff_t m_nProjectilesScheduled = 0xED8; // int32
                constexpr std::ptrdiff_t m_ChannelParticle = 0xEDC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flNextShootTime = 0xEE0; // GameTime_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityWreckerUltimateVData {
                constexpr std::ptrdiff_t m_BeamParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChargeParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ActiveModifier = 0x16E8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProc
            // Field count: 0
            namespace CCitadel_Modifier_MedicBullets {
            }
            // Parent: CCitadelModifierVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BaseEventProcVData {
                constexpr std::ptrdiff_t m_bProcChanceAffectedByEffectiveness = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bShouldApplyAbilityCooldown = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bCanProcMultipleTimesOnOneTarget = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bCanProcByOtherObjects = 0x5FB; // bool
                constexpr std::ptrdiff_t m_nAbilityTargetTypes = 0x5FC; // CITADEL_UNIT_TARGET_TYPE
                constexpr std::ptrdiff_t m_nAbilityTargetFlags = 0x600; // CITADEL_UNIT_TARGET_FLAGS
                constexpr std::ptrdiff_t m_vecProcDamageTypes = 0x608; // CUtlVector<ECitadelDamageType>
                constexpr std::ptrdiff_t m_nRequiredDamageFlags = 0x620; // TakeDamageFlags_t
            }
            // Parent: CScaleFunctionVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CScaleFunctionAbilityPropertyMultiStatsVData {
                constexpr std::ptrdiff_t m_vecScalingStats = 0x40; // CUtlVector<EStatsType>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x118; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x1D0; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x252; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x253; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x254; // int8
            }
            // Parent: CBaseModifierAura
            // Field count: 0
            namespace CCitadelModifierAura {
            }
            // Parent: C_FuncBrush
            // Field count: 0
            namespace C_CitadelSpawnBlocker {
            }
            // Parent: None
            // Field count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Mirage_FireBeetles_Debuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierThumper_3VData {
                constexpr std::ptrdiff_t m_DroneParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LoopSound = 0x6D8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCadenceCrescendoVData {
                constexpr std::ptrdiff_t m_CrescendoAOEModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifierAura>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_SleepBomb {
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Thumper_EnemyPulled_VData {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_iBonusHealth (int)
            // NetworkVarNames: m_hTarget (CHandle<CBaseEntity>)
            namespace CCitadel_Ability_UltCombo {
                constexpr std::ptrdiff_t m_flLastAttackTime = 0xC70; // GameTime_t
                constexpr std::ptrdiff_t m_nAttackNum = 0xC74; // int32
                constexpr std::ptrdiff_t m_iBonusHealth = 0xD20; // int32
                constexpr std::ptrdiff_t m_hTarget = 0xD24; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Forge_MiniTurret_InnateModifier {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_PowerSurge {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_DivinersKevlarBuff {
            }
            // Parent: CTier3BossAbility
            // Field count: 0
            namespace CCitadel_Ability_Tier3Boss_LaserBeam {
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_InvisVData {
                constexpr std::ptrdiff_t m_InvisLoopParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_InvisDetectRadiusParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_InvisRevealedParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strInvisRevealedSound = 0x898; // CSoundEventName
                constexpr std::ptrdiff_t m_bFadeInsteadOfRemoveOnBulletFire = 0x8A8; // bool
                constexpr std::ptrdiff_t m_bFadeInsteadOfRemoveOnAbilityUse = 0x8A9; // bool
                constexpr std::ptrdiff_t m_bFadeToVisibleAtEndOfDuration = 0x8AA; // bool
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 27
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_BreakablePropVData {
                constexpr std::ptrdiff_t m_bBreakOnDodgeTouch = 0x28; // bool
                constexpr std::ptrdiff_t m_bRenderAfterDeath = 0x29; // bool
                constexpr std::ptrdiff_t m_bSolidAfterDeath = 0x2A; // bool
                constexpr std::ptrdiff_t m_bIsPermanent = 0x2B; // bool
                constexpr std::ptrdiff_t m_bDamagedByBullets = 0x2C; // bool
                constexpr std::ptrdiff_t m_bDamagedByMelee = 0x2D; // bool
                constexpr std::ptrdiff_t m_bDamagedByAbilities = 0x2E; // bool
                constexpr std::ptrdiff_t m_hModel = 0x30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sAnimgraphParamDamageReceived = 0x110; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sAnimgraphParamOnHit = 0x118; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sAnimgraphParamOnRespawn = 0x120; // CGlobalSymbol
                constexpr std::ptrdiff_t m_sBreakSound = 0x128; // CSoundEventName
                constexpr std::ptrdiff_t m_sDamageSound = 0x138; // CSoundEventName
                constexpr std::ptrdiff_t m_sHeavyDamageSound = 0x148; // CSoundEventName
                constexpr std::ptrdiff_t m_sHitIndicatorSound = 0x158; // CSoundEventName
                constexpr std::ptrdiff_t m_iHealth = 0x168; // int32
                constexpr std::ptrdiff_t m_flInitialSpawnTime = 0x16C; // float32
                constexpr std::ptrdiff_t m_flRespawnTime = 0x170; // float32
                constexpr std::ptrdiff_t m_flInitialSpawnTimeTest = 0x174; // float32
                constexpr std::ptrdiff_t m_flRespawnTimeTest = 0x178; // float32
                constexpr std::ptrdiff_t m_bIsMantleable = 0x17C; // bool
                constexpr std::ptrdiff_t m_flPrimaryDropChance = 0x180; // float32
                constexpr std::ptrdiff_t m_eRollType = 0x184; // ECitadelRandomRollTypes
                constexpr std::ptrdiff_t m_vecPrimaryPickups = 0x188; // CUtlVector<BreakablePowerupDropDefinition_t>
                constexpr std::ptrdiff_t m_iMatchTimeMinsForLevel2Pickups = 0x1A0; // int32
                constexpr std::ptrdiff_t m_vecPickups_lv2 = 0x1A8; // CUtlVector<BreakablePowerupDropDefinition_t>
                constexpr std::ptrdiff_t m_iLootListDeckSize = 0x1C0; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (C_EconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<C_EconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
            }
            // Parent: CCitadel_Ability_PrimaryWeaponVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCadencePrimaryWeaponVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_CrowdControl {
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_RestorativeGoo {
                constexpr std::ptrdiff_t m_flEarliestBreakoutTime = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_hGooCube = 0x3A0; // CHandle<C_Citadel_RestorativeGooCube>
                constexpr std::ptrdiff_t m_flBreakoutPercentage = 0x3A4; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Upgrade_KineticSashTriggered_VData {
                constexpr std::ptrdiff_t m_TriggeredSound = 0x5F8; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Tech_BleedVData {
                constexpr std::ptrdiff_t m_DamageParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_SelfBuffModifierVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_MultiplayRules
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: C_CitadelProjectile
            // Field count: 1
            namespace C_CitadelBoomerangProjectile {
                constexpr std::ptrdiff_t m_bReturning = 0x8B8; // bool
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Upgrade_StabilizingTripod {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_RegeneratingBulletShield {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ItemPickupTimer {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CModifier_Upgrade_KineticSashTriggered {
                constexpr std::ptrdiff_t m_nBonusClip = 0xC0; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DamageResistanceVData {
                constexpr std::ptrdiff_t m_flDamageResistancePerSecond = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flTickInterval = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flDamageResistanceBonusPerGameMinute = 0x600; // float32
            }
            // Parent: C_BaseToggle
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0x830; // bool
            }
            // Parent: CCitadelBaseTriggerAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flActiveRadius (float)
            namespace CCitadelNanoPredatoryStatueTrigger {
                constexpr std::ptrdiff_t m_flActiveRadius = 0xC80; // float32
            }
            // Parent: C_CitadelProjectile
            // Field count: 1
            namespace C_Citadel_Projectile_Bebop_Hook {
                constexpr std::ptrdiff_t m_iChainEffect = 0x8B8; // ParticleIndex_t
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_nKillsEarned (int)
            namespace CCitadel_WeaponUpgrade_GlassCannon {
                constexpr std::ptrdiff_t m_nKillsEarned = 0xC88; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x860; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x864; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTargetdummy1VData {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hHookVictim (EHANDLE)
            // NetworkVarNames: m_hProjectile (EHANDLE)
            // NetworkVarNames: m_vecHookTargetStartPos (Vector)
            namespace CCitadel_Ability_Hook {
                constexpr std::ptrdiff_t m_hHookVictim = 0xC70; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hProjectile = 0xC74; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecHookTargetStartPos = 0xC78; // Vector
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_VoidSphere {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Bull_Heal {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_WeaponPowerForHealthVData {
                constexpr std::ptrdiff_t m_ActiveBuff = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SuperNeutralChargeActive {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_InvisFading {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Rutger_Pulse_Aura_VData {
                constexpr std::ptrdiff_t m_empWaveParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_CProjectile_Rutger_Rocket {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ControlPointBlockerAuraTarget {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x558; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_ShieldedSentry {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_AblativeCoatResistBuffVData {
                constexpr std::ptrdiff_t m_ResistBuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ReloadSpeed {
                constexpr std::ptrdiff_t m_flReloadSpeed = 0xC0; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_TechCleave {
            }
            // Parent: C_BaseModelEntity
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_vecConnections (CHandle<CCitadelZipLineNode>)
            // NetworkVarNames: m_eCaptureState (int16)
            // NetworkVarNames: m_iPrimaryLane (int16)
            // NetworkVarNames: m_nRopesParity (int16)
            // NetworkVarNames: m_bCornerNode (bool)
            // NetworkVarNames: m_bCapturable (bool)
            // NetworkVarNames: m_bAlwaysUsable (bool)
            // NetworkVarNames: m_bOneWay (bool)
            // NetworkVarNames: m_bDisableZippingToByPlayers (bool)
            // NetworkVarNames: m_bUseForMinimapDrawing (bool)
            // NetworkVarNames: m_hGuardingBoss (EHANDLE)
            // NetworkVarNames: m_flRopeRadius (float)
            // NetworkVarNames: m_bEnabled (bool)
            namespace CCitadelZipLineNode {
                constexpr std::ptrdiff_t m_vecConnections = 0x870; // C_NetworkUtlVectorBase<CHandle<CCitadelZipLineNode>>
                constexpr std::ptrdiff_t m_eCaptureState = 0x888; // int16
                constexpr std::ptrdiff_t m_iPrimaryLane = 0x88A; // int16
                constexpr std::ptrdiff_t m_nRopesParity = 0x88C; // int16
                constexpr std::ptrdiff_t m_bCornerNode = 0x88E; // bool
                constexpr std::ptrdiff_t m_bCapturable = 0x88F; // bool
                constexpr std::ptrdiff_t m_bAlwaysUsable = 0x890; // bool
                constexpr std::ptrdiff_t m_bOneWay = 0x891; // bool
                constexpr std::ptrdiff_t m_bDisableZippingToByPlayers = 0x892; // bool
                constexpr std::ptrdiff_t m_bUseForMinimapDrawing = 0x893; // bool
                constexpr std::ptrdiff_t m_hGuardingBoss = 0x894; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flRopeRadius = 0x898; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x89C; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CBaseModifierAura {
                constexpr std::ptrdiff_t m_hAuraUnits = 0xC0; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_hAmbientEffect = 0xD8; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierChompHobbledVData {
                constexpr std::ptrdiff_t m_LassoEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ConsumeSound = 0x6D8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Synth_Affliction_VData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AoEParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flDissipationRate (float)
            // NetworkVarNames: m_flDissipationTime (GameTime_t)
            // NetworkVarNames: m_flHeatTime (GameTime_t)
            // NetworkVarNames: m_flOverheatSoundTime (GameTime_t)
            // NetworkVarNames: m_bOverheating (bool)
            namespace CCitadel_Ability_Tokamak_HeatSinks_Inherent {
                constexpr std::ptrdiff_t m_nIntervalsElapsed = 0xC70; // int32
                constexpr std::ptrdiff_t m_NextShotTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_flDissipationRate = 0xC78; // float32
                constexpr std::ptrdiff_t m_flDissipationTime = 0xC7C; // GameTime_t
                constexpr std::ptrdiff_t m_flHeatTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_flOverheatSoundTime = 0xC84; // GameTime_t
                constexpr std::ptrdiff_t m_bOverheating = 0xC88; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_VoidSphereBuffVData {
                constexpr std::ptrdiff_t m_RapidFireParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Surging_Power {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_CQC_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Tier3_DamagePulseVData {
                constexpr std::ptrdiff_t m_TargetParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strPulseTickSound = 0x6D8; // CSoundEventName
                constexpr std::ptrdiff_t m_iMaxTargets = 0x6E8; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flDamagePerPulse = 0x6F0; // float32
                constexpr std::ptrdiff_t m_flTickRate = 0x6F4; // float32
            }
            // Parent: CEntityComponent
            // Field count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0; // bool
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x618; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x624; // Vector
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 7
            namespace CCitadel_Ability_Tokamak_HotShot {
                constexpr std::ptrdiff_t m_flDPS = 0xDE8; // float32
                constexpr std::ptrdiff_t m_flNextDamageTick = 0xDEC; // GameTime_t
                constexpr std::ptrdiff_t m_vStart = 0xDF0; // Vector
                constexpr std::ptrdiff_t m_vEnd = 0xDFC; // Vector
                constexpr std::ptrdiff_t m_vecEntitiesHit = 0xE08; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_angBeamAngles = 0xE20; // QAngle
                constexpr std::ptrdiff_t m_bNeedsBeamReset = 0xE38; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_WreckerScrapBlastDebuffVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 6
            namespace CCitadel_Modifier_IceDome {
                constexpr std::ptrdiff_t m_hBlocker = 0xC0; // CHandle<C_Citadel_Ice_Dome_Blocker>
                constexpr std::ptrdiff_t m_hFriendlyAura = 0xC4; // CHandle<CPointModifierThinker>
                constexpr std::ptrdiff_t m_hEnemyAura = 0xC8; // CHandle<CPointModifierThinker>
                constexpr std::ptrdiff_t m_nParticleIndex = 0xCC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flStartTime = 0xD0; // GameTime_t
                constexpr std::ptrdiff_t m_vOrigin = 0x1B8; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Parry {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemAOESilenceModifierVData {
                constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_SilenceModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_UtilityUpgrade_AOESmokeBombVData {
                constexpr std::ptrdiff_t m_CastCompleteParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strBuffGainedSound = 0x1650; // CSoundEventName
                constexpr std::ptrdiff_t m_InvisModifier = 0x1660; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItem_WarpStone_VData {
                constexpr std::ptrdiff_t m_CasterModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CasterDebuffModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x1590; // CSoundEventName
                constexpr std::ptrdiff_t m_CastDelayParticle = 0x15A0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x1680; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flTeleportDistance = 0x1760; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_flLatchedValue (float)
            // NetworkVarNames: m_flLatchedTime (GameTime_t)
            // NetworkVarNames: m_eLockonState (ELockonState)
            // NetworkVarNames: m_hTarget (EHANDLE)
            namespace LockonTarget_t {
                constexpr std::ptrdiff_t m_flGainRate = 0x30; // float32
                constexpr std::ptrdiff_t m_flDrainRate = 0x34; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nPrevFullStacks = 0x3C; // int32
                constexpr std::ptrdiff_t m_flLatchedValue = 0x40; // float32
                constexpr std::ptrdiff_t m_flLatchedTime = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_eLockonState = 0x48; // ELockonState
                constexpr std::ptrdiff_t m_hTarget = 0x4C; // CHandle<C_BaseEntity>
            }
            // Parent: CEntityComponent
            // Field count: 66
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_SecondaryColor (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_flBrightnessMult (float)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_flFalloff (float)
            // NetworkVarNames: m_flAttenuation0 (float)
            // NetworkVarNames: m_flAttenuation1 (float)
            // NetworkVarNames: m_flAttenuation2 (float)
            // NetworkVarNames: m_flTheta (float)
            // NetworkVarNames: m_flPhi (float)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_nCascades (int)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowWidth (int)
            // NetworkVarNames: m_nShadowHeight (int)
            // NetworkVarNames: m_bRenderDiffuse (bool)
            // NetworkVarNames: m_nRenderSpecular (int)
            // NetworkVarNames: m_bRenderTransmissive (bool)
            // NetworkVarNames: m_flOrthoLightWidth (float)
            // NetworkVarNames: m_flOrthoLightHeight (float)
            // NetworkVarNames: m_nStyle (int)
            // NetworkVarNames: m_Pattern (CUtlString)
            // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
            // NetworkVarNames: m_flShadowCascadeCrossFade (float)
            // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
            // NetworkVarNames: m_flShadowCascadeDistance0 (float)
            // NetworkVarNames: m_flShadowCascadeDistance1 (float)
            // NetworkVarNames: m_flShadowCascadeDistance2 (float)
            // NetworkVarNames: m_flShadowCascadeDistance3 (float)
            // NetworkVarNames: m_nShadowCascadeResolution0 (int)
            // NetworkVarNames: m_nShadowCascadeResolution1 (int)
            // NetworkVarNames: m_nShadowCascadeResolution2 (int)
            // NetworkVarNames: m_nShadowCascadeResolution3 (int)
            // NetworkVarNames: m_bUsesBakedShadowing (bool)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nIndirectLight (int)
            // NetworkVarNames: m_flFadeMinDist (float)
            // NetworkVarNames: m_flFadeMaxDist (float)
            // NetworkVarNames: m_flShadowFadeMinDist (float)
            // NetworkVarNames: m_flShadowFadeMaxDist (float)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFlicker (bool)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_flPrecomputedMaxRange (float)
            // NetworkVarNames: m_nFogLightingMode (int)
            // NetworkVarNames: m_flFogContributionStength (float)
            // NetworkVarNames: m_flNearClipPlane (float)
            // NetworkVarNames: m_SkyColor (Color)
            // NetworkVarNames: m_flSkyIntensity (float)
            // NetworkVarNames: m_SkyAmbientBounce (Color)
            // NetworkVarNames: m_bUseSecondaryColor (bool)
            // NetworkVarNames: m_bMixedShadows (bool)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_flCapsuleLength (float)
            // NetworkVarNames: m_flMinRoughness (float)
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x75; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x80; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88; // float32
                constexpr std::ptrdiff_t m_flRange = 0x8C; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xA0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xA4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xB0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xD4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x134; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x135; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x184; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_GooGrenade {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_IcePath_Buff {
            }
            // Parent: CCitadelModifier
            // Field count: 7
            namespace CCitadel_Modifier_ProjectMind {
                constexpr std::ptrdiff_t m_particleStart = 0xC0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_particleEnd = 0xC4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_particleTrail = 0xC8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_vecEndLocation = 0xCC; // Vector
                constexpr std::ptrdiff_t m_vecStartPosition = 0xD8; // Vector
                constexpr std::ptrdiff_t m_flStartDelay = 0xE4; // float32
                constexpr std::ptrdiff_t m_vecApplyOffset = 0xE8; // Vector
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MetalSkinVData {
                constexpr std::ptrdiff_t m_BuffStartParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffEndParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CTier3BossAbility
            // Field count: 0
            namespace CCitadel_Ability_Tier3Boss_DamagePulse {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Core_PushTarget {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: IEconItemInterface
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_iItemDefinitionIndex (item_definition_index_t)
            // NetworkVarNames: m_iEntityQuality (int)
            // NetworkVarNames: m_iEntityLevel (uint32)
            // NetworkVarNames: m_iItemID (itemid_t)
            // NetworkVarNames: m_iAccountID (uint32)
            // NetworkVarNames: m_iInventoryPosition (uint32)
            // NetworkVarNames: m_bInitialized (bool)
            // NetworkVarNames: m_nOverrideStyle (style_index_t)
            // NetworkVarNames: m_AttributeList (CAttributeList)
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x8; // item_definition_index_t
                constexpr std::ptrdiff_t m_iEntityQuality = 0xC; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x10; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x18; // itemid_t
                constexpr std::ptrdiff_t m_iAccountID = 0x20; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x24; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x30; // bool
                constexpr std::ptrdiff_t m_nOverrideStyle = 0x31; // style_index_t
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x32; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x33; // bool
                constexpr std::ptrdiff_t m_bHasComputedAttachedParticles = 0x34; // bool
                constexpr std::ptrdiff_t m_bHasAttachedParticles = 0x35; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x38; // int32
                constexpr std::ptrdiff_t m_unClientFlags = 0x3C; // uint8
                constexpr std::ptrdiff_t m_unOverrideOrigin = 0x40; // eEconItemOrigin
                constexpr std::ptrdiff_t m_AttributeList = 0x58; // CAttributeList
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifer_Viscous_Goo_Aura_VData {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x558; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x55C; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTokamakHotShotVData {
                constexpr std::ptrdiff_t m_LaserModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strLaserStartSound = 0x1538; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserEndSound = 0x1548; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserLoopSound = 0x1558; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserHitSound = 0x1568; // CSoundEventName
                constexpr std::ptrdiff_t m_ChargeParticle = 0x1578; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BeamParticle = 0x1658; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x1738; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GroundParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_tDrainLifeStopTime (GameTime_t)
            namespace CCitadel_Ability_LifeDrain {
                constexpr std::ptrdiff_t m_tDrainLifeStopTime = 0xC70; // GameTime_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_StormCloud {
                constexpr std::ptrdiff_t m_bApplyingVerticalAirDrag = 0xC70; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x558; // C_EnvWindShared
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Rutger_ForceField_Aura {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_Chrono_PulseGrenade {
                constexpr std::ptrdiff_t m_vLaunchPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_qLaunchAngle = 0xC7C; // QAngle
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Hornet_Sting {
                constexpr std::ptrdiff_t m_flLastTickTime = 0xC0; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_VeilWalkerWatcher {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierNikumanVData {
                constexpr std::ptrdiff_t m_SelfParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AOEFriendParticle = 0x718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0x7F8; // CSoundEventName
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0xA90; // char[512]
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Thumper_4 {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_SilenceContraptions {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bInGround (bool)
            // NetworkVarNames: m_SpinEndTime (GameTime_t)
            namespace CCitadel_Ability_Burrow {
                constexpr std::ptrdiff_t m_bInGround = 0xD50; // bool
                constexpr std::ptrdiff_t m_SpinEndTime = 0xD54; // GameTime_t
                constexpr std::ptrdiff_t m_nBurrowEffect = 0xD58; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Citadel_Bull_Leap_LandingBonuses {
            }
            // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_Disarm_VData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1670; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1680; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityProperty_BaseWeaponDamage {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            namespace CUnitStatusOverlay {
                constexpr std::ptrdiff_t m_flUIScale = 0xAD0; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_nWeaponPower (int)
            namespace CCitadel_WeaponUpgrade_WeaponEater {
                constexpr std::ptrdiff_t m_nWeaponPower = 0xD68; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_FireRateAura {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ComboBreakerHeal {
                constexpr std::ptrdiff_t m_flAmountPerSecond = 0xC0; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BonusDamagePercent {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flLatchTime (GameTime_t)
            // NetworkVarNames: m_flLatchValue (float)
            namespace AbilityResource_t {
                constexpr std::ptrdiff_t m_flCurrentValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flPrevRegenRate = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x10; // float32
                constexpr std::ptrdiff_t m_flLatchTime = 0x14; // GameTime_t
                constexpr std::ptrdiff_t m_flLatchValue = 0x18; // float32
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_AnthemAOEVData {
                constexpr std::ptrdiff_t m_AuraParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_BulletArmorReductionAura {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flScopeStartTime (GameTime_t)
            namespace CCitadel_Ability_Hornet_Snipe {
                constexpr std::ptrdiff_t m_flScopeStartTime = 0xEB4; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_HornetMark {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FlameDashBurnVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Near_Climbable_Rope {
            }
            // Parent: CCitadelModifierVData
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Backdoor_ProtectionVData {
                constexpr std::ptrdiff_t m_flBackdoorProtectionNearbyTrooperRange = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flBackdoorProtectionNearbyTrooperThinkInterval = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flBackdoorProtectionNearbyTrooperRemovalDuration = 0x600; // float32
                constexpr std::ptrdiff_t m_flBackdoorProtectionDamageMitigationFromPlayers = 0x604; // float32
                constexpr std::ptrdiff_t m_flHealthPerSecondRegen = 0x608; // float32
                constexpr std::ptrdiff_t m_flOutOfCombatHealthRegen = 0x60C; // float32
                constexpr std::ptrdiff_t m_flOutOfCombatRegenDelay = 0x610; // float32
                constexpr std::ptrdiff_t m_flEffectsLingerTime = 0x614; // float32
                constexpr std::ptrdiff_t m_ShieldImpactParticle = 0x618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShieldActiveParticle = 0x6F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strActiveEffectConfigName = 0x7D8; // CUtlString
                constexpr std::ptrdiff_t flShieldImpactDirectionOffset = 0x7E0; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_RootVData {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierKnockdownVData {
                constexpr std::ptrdiff_t m_flSatVolumeRadius = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flSatVolumeFadeOut = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flGetUpSeqDuration = 0x6E0; // float32
                constexpr std::ptrdiff_t m_cameraSequenceGetUp = 0x6E8; // CitadelCameraOperationsSequence_t
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 2
            namespace CCitadel_Ability_PrimaryWeapon_Slork {
                constexpr std::ptrdiff_t m_angAimAngles = 0xEE0; // QAngle
                constexpr std::ptrdiff_t m_bNeedAimAngleReset = 0xF10; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Mirage_FireBeetles_Debuff_VData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TangoTether_TetherReceiver {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_IncendiaryThinkerVData {
                constexpr std::ptrdiff_t m_GroundParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Tier3Boss_Base {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x108; // CUtlVector<CEmbeddedSubclass<CCitadelModifier>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x120; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x130; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x140; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x150; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x160; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x170; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x174; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x178; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x17C; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x180; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x184; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x188; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x18C; // float32
            }
            // Parent: CCitadelBaseShivAbility
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_hCurrentTarget (EHANDLE)
            // NetworkVarNames: m_vStartPosition (Vector)
            // NetworkVarNames: m_vDeparturePosition (Vector)
            // NetworkVarNames: m_flDepartureTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flArrivalTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flDrainSuppressEndTime (GameTime_t)
            namespace CCitadel_Ability_Shiv_KillingBlow {
                constexpr std::ptrdiff_t m_bActive = 0xE30; // bool
                constexpr std::ptrdiff_t m_hCurrentTarget = 0xE34; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vStartPosition = 0xE38; // Vector
                constexpr std::ptrdiff_t m_vDeparturePosition = 0xE44; // Vector
                constexpr std::ptrdiff_t m_flDepartureTime = 0xE50; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flArrivalTime = 0xE68; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_vLastKnownSafePos = 0xE80; // Vector
                constexpr std::ptrdiff_t m_flDrainSuppressEndTime = 0xE90; // GameTime_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityWreckerSalvageVData {
                constexpr std::ptrdiff_t m_SalvageEnemyModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_StunEnemyModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Chrono_TimeWall_EffectVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffParticle = 0x6E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDamageSound = 0x7C8; // CSoundEventName
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TechBleed_ProcVData {
                constexpr std::ptrdiff_t m_BleedModifier = 0x628; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x638; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            namespace CCitadel_Ability_RocketBarrage {
                constexpr std::ptrdiff_t m_flCurrentTimeScale = 0xE68; // float32
                constexpr std::ptrdiff_t m_vecAimPos = 0xE6C; // Vector
                constexpr std::ptrdiff_t m_vecAimVel = 0xE78; // Vector
                constexpr std::ptrdiff_t m_flLastUpdateTime = 0xE84; // GameTime_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityBloodShardsVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Upgrade_KineticSash_VData {
                constexpr std::ptrdiff_t m_KineticSashTriggeredModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ClimbRopeSpeedVData {
                constexpr std::ptrdiff_t m_flRampUpTime = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flPercentageMultiplierStart = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flPercentageMultiplierEnd = 0x600; // float32
            }
            // Parent: CEntityComponent
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_vecAbilities (EHANDLE)
            // NetworkVarNames: m_vecUniversalItems (EntitySubclassID_t)
            // NetworkVarNames: m_arPendingAsyncAbilityReservationSlots (int32)
            // NetworkVarNames: m_arPendingAsyncAbilityReservationAbilityIDs (int32)
            // NetworkVarNames: m_hSelectedAbility (EHANDLE)
            // NetworkVarNames: m_hPreviouslySelectedAbility (EHANDLE)
            // NetworkVarNames: m_bPreviousAbilityQueued (bool)
            // NetworkVarNames: m_flTimeScale (float)
            // NetworkVarNames: m_flParticleTimeScale (float)
            // NetworkVarNames: m_bInInterruptState (bool)
            // NetworkVarNames: m_ResourceStamina (AbilityResource_t)
            // NetworkVarNames: m_ResourceAbility (AbilityResource_t)
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
            // Parent: None
            // Field count: 2
            namespace C_EnvWindShared__WindVariationEvent_t {
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_WeaponUpgrade_InstantReload {
                constexpr std::ptrdiff_t m_bIsManualReloading = 0xC88; // bool
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadelModifierAura_Cone {
            }
            // Parent: C_Sprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTokamakBreachVData {
                constexpr std::ptrdiff_t m_AllySmokeAOEModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_EnemySmokeAOEModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PurgeParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTokamakHeatSinksVData {
                constexpr std::ptrdiff_t m_HeatDotModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_GrandFinale_Buff {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ThrownShiv_Damage_Debuff {
                constexpr std::ptrdiff_t m_nNumTicksRemaining = 0xC0; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_FlameDashVData {
                constexpr std::ptrdiff_t m_FlameDashModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DashBurstSound = 0x1538; // CSoundEventName
                constexpr std::ptrdiff_t m_ChargeHitSound = 0x1548; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSpeedBoost = 0x1558; // CitadelCameraOperationsSequence_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_PrimaryWeaponVData {
                constexpr std::ptrdiff_t m_DOFWhileZoomed = 0x1528; // DOFDesc_t
                constexpr std::ptrdiff_t m_bDOFFarSettingsAreOffsetByGunRange = 0x1538; // bool
                constexpr std::ptrdiff_t m_sDisarmedSound = 0x1540; // CSoundEventName
                constexpr std::ptrdiff_t m_flMinDisarmedSoundInterval = 0x1550; // float32
                constexpr std::ptrdiff_t m_sObstructedShotSound = 0x1558; // CSoundEventName
                constexpr std::ptrdiff_t m_flActionReloadTimingStart = 0x1568; // float32
                constexpr std::ptrdiff_t m_flActionReloadTimingDuration = 0x156C; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_Tech_Defender_Shredders_Proc {
            }
            // Parent: CCitadel_Modifier_Out_Of_Combat_Health_Regen
            // Field count: 1
            namespace CCitadel_Modifier_Apex_Watcher {
                constexpr std::ptrdiff_t m_bShouldEnableBuff = 0x138; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ColdFrontAOE_VData {
                constexpr std::ptrdiff_t m_TargetModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ReloadSpeedVData {
                constexpr std::ptrdiff_t m_flReloadSpeedPercent = 0x5F8; // float32
                constexpr std::ptrdiff_t m_bDestroyAfterReload = 0x5FC; // bool
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flRadiusScale (float32)
            // NetworkVarNames: m_flSelfIllumScale (float32)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0xDE0; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0xDE4; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0xDE8; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0xDEC; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0xDF0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x558; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x559; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x55A; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x55B; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x55C; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x560; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x578; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x5A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x5C8; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x608; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x60C; // int32
                constexpr std::ptrdiff_t m_bClientSideOnly = 0x0; // bitfield:1
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_SettingSun {
                constexpr std::ptrdiff_t m_TargetPreviews = 0xC70; // CUtlVector<ParticleIndex_t>
                constexpr std::ptrdiff_t m_bWasSelected = 0xD38; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SilenceProc_Immunity {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_RegenerativeArmorVData {
                constexpr std::ptrdiff_t m_RegenModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 1
            namespace CCitadel_Modifier_QuickSilver_Watcher {
                constexpr std::ptrdiff_t m_bProcNextHit = 0x210; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_BaseEventProc {
                constexpr std::ptrdiff_t m_vecProcdUnitsThisShot = 0xC0; // CUtlVector<C_BaseEntity*>
                constexpr std::ptrdiff_t m_vecTrackedUnitsThisFrame = 0xD8; // CUtlVector<C_BaseEntity*>
                constexpr std::ptrdiff_t m_nLastShotId = 0xF0; // ShotID_t
            }
            // Parent: CAI_BaseNPCVData
            // Field count: 48
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CAI_CitadelNPCVData {
                constexpr std::ptrdiff_t m_sAG2VariationName = 0x230; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmGraphVariation>>
                constexpr std::ptrdiff_t m_mapBoundAbilities = 0x310; // CUtlOrderedMap<EAbilitySlots_t,CSubclassName<4>>
                constexpr std::ptrdiff_t m_flSightRangePlayers = 0x338; // float32
                constexpr std::ptrdiff_t m_flSightRangeNPCs = 0x33C; // float32
                constexpr std::ptrdiff_t m_MeleeAnimName = 0x340; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flMeleeAttemptRange = 0x348; // float32
                constexpr std::ptrdiff_t m_flMeleeHitRange = 0x34C; // float32
                constexpr std::ptrdiff_t m_MeleeAttackPoints = 0x350; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flMaxHealthBarDrawDistance = 0x368; // float32
                constexpr std::ptrdiff_t m_flWalkSpeed = 0x36C; // float32
                constexpr std::ptrdiff_t m_flRunSpeed = 0x370; // float32
                constexpr std::ptrdiff_t m_flTurnRate = 0x374; // float32
                constexpr std::ptrdiff_t m_flAcceleration = 0x378; // float32
                constexpr std::ptrdiff_t m_flStepHeight = 0x37C; // float32
                constexpr std::ptrdiff_t m_navHull = 0x380; // int8
                constexpr std::ptrdiff_t m_bFaceTargetEvenWhenMoving = 0x381; // bool
                constexpr std::ptrdiff_t m_BeamStartSound = 0x388; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamStopSound = 0x398; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamPointStartLoopSound = 0x3A8; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamPointEndLoopSound = 0x3B8; // CSoundEventName
                constexpr std::ptrdiff_t m_BeamPointClosestLoopSound = 0x3C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strAmbientLoopSound = 0x3D8; // CSoundEventName
                constexpr std::ptrdiff_t m_DeathSound = 0x3E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLastHitSound = 0x3F8; // CSoundEventName
                constexpr std::ptrdiff_t m_bPlayLastHitSound = 0x408; // bool
                constexpr std::ptrdiff_t m_MeleeHitSound = 0x410; // CSoundEventName
                constexpr std::ptrdiff_t m_MeleeHitPlayerSound = 0x420; // CSoundEventName
                constexpr std::ptrdiff_t m_sDefaultMaterialGroupName = 0x430; // CUtlString
                constexpr std::ptrdiff_t m_sEnemyMaterialGroupName = 0x438; // CUtlString
                constexpr std::ptrdiff_t m_sTeam1MaterialGroupName = 0x440; // CUtlString
                constexpr std::ptrdiff_t m_sTeam2MaterialGroupName = 0x448; // CUtlString
                constexpr std::ptrdiff_t m_MeleeSwingParticle = 0x450; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MeleeActivateParticle = 0x530; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flModelScale = 0x610; // float32
                constexpr std::ptrdiff_t m_DeathParticle = 0x618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealthBarParticle = 0x6F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sHealthBarAttachment = 0x7D8; // CUtlString
                constexpr std::ptrdiff_t m_HealthBarColorFriend = 0x7E0; // Color
                constexpr std::ptrdiff_t m_HealthBarColorEnemy = 0x7E4; // Color
                constexpr std::ptrdiff_t m_HealthBarColorTeam1 = 0x7E8; // Color
                constexpr std::ptrdiff_t m_HealthBarColorTeam2 = 0x7EC; // Color
                constexpr std::ptrdiff_t m_HealthBarColorTeamNeutral = 0x7F0; // Color
                constexpr std::ptrdiff_t m_flHealthBarOffset = 0x7F4; // float32
                constexpr std::ptrdiff_t m_flBeamWeaponWidth = 0x7F8; // float32
                constexpr std::ptrdiff_t m_flBeamTurnRate = 0x7FC; // float32
                constexpr std::ptrdiff_t m_BeamWeaponParticle = 0x800; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flPhysicsImpulseMultiplier = 0x8E0; // float32
                constexpr std::ptrdiff_t m_WeaponInfo = 0x8E8; // CCitadelWeaponInfo
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_Crescendo_AOE_VData {
                constexpr std::ptrdiff_t m_AuraParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Burrow {
                constexpr std::ptrdiff_t m_nSatVolumeIndex = 0xC0; // SatVolumeIndex_t
                constexpr std::ptrdiff_t m_flLastDamageTime = 0xC4; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierLashGrappleTargetVData {
                constexpr std::ptrdiff_t m_LockingOnParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LockedOnParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_HornetMark {
                constexpr std::ptrdiff_t m_nFXIndex = 0xC70; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DebuffImmunityVData {
                constexpr std::ptrdiff_t m_ShieldParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PlayerShieldParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CNPC_SimpleAnimatingAIVData
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_ShieldedSentryVData {
                constexpr std::ptrdiff_t m_flZShootPostionOffset = 0x108; // float32
                constexpr std::ptrdiff_t m_LaserSightParticle = 0x110; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_KillExplosionParticle = 0x1F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DeployProgressModifier = 0x2D0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_NearDeathModifier = 0x2E0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_IntrinsicModifier = 0x2F0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_sSpawnSound = 0x300; // CSoundEventName
                constexpr std::ptrdiff_t m_sKillExplosionSound = 0x310; // CSoundEventName
                constexpr std::ptrdiff_t m_sTargetAcquiredLocalSound = 0x320; // CSoundEventName
                constexpr std::ptrdiff_t m_sTargetAcquiredSound = 0x330; // CSoundEventName
                constexpr std::ptrdiff_t m_flIdleTurnSpeed = 0x340; // float32
                constexpr std::ptrdiff_t m_flIdleTurnAngles = 0x344; // float32
                constexpr std::ptrdiff_t m_flTrooperTakeDamageMult = 0x348; // float32
                constexpr std::ptrdiff_t m_flNeutralTakeDamageMulti = 0x34C; // float32
                constexpr std::ptrdiff_t m_flNotifyEventTime = 0x350; // float32
                constexpr std::ptrdiff_t m_flNearDeathDuration = 0x354; // float32
                constexpr std::ptrdiff_t m_flMinimapRevealTime = 0x358; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SleepDaggerAsleepVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PostSleepModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityImmobilizeTrapVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PreviewRingParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TrapHighlightParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ArmedParticle = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strTripSound = 0x18A8; // CSoundEventName
                constexpr std::ptrdiff_t m_strExplodeSound = 0x18B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strExpiredSound = 0x18C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strImmobilizeTargetSound = 0x18D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strArmingSound = 0x18E8; // CSoundEventName
                constexpr std::ptrdiff_t m_TrapModifier = 0x18F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1908; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DotModifier = 0x1918; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x1928; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flDetonateTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            namespace CCitadel_Ability_FireBomb {
                constexpr std::ptrdiff_t m_flDetonateTime = 0xCE8; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flStartTime = 0xD00; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Item_SmokeBomb_PreCast {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MagicShock_ProcVData {
                constexpr std::ptrdiff_t m_ProcParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_hDamageTrackModifier = 0x708; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: C_BaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_iszEffectName (string_t)
            // NetworkVarNames: m_iszSSEffectName (string_t)
            // NetworkVarNames: m_clrOverlay (Color)
            // NetworkVarNames: m_bOn (bool)
            // NetworkVarNames: m_bmaxColor (bool)
            // NetworkVarNames: m_flSize (float32)
            // NetworkVarNames: m_flHazeScale (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_flAlphaHaze (float32)
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flAlphaHdr (float32)
            // NetworkVarNames: m_flFarZScale (float32)
            namespace C_Sun {
                constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0x830; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0x834; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fdistNormalize = 0x838; // float32
                constexpr std::ptrdiff_t m_vSunPos = 0x83C; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x848; // Vector
                constexpr std::ptrdiff_t m_iszEffectName = 0x858; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSSEffectName = 0x860; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_clrOverlay = 0x868; // Color
                constexpr std::ptrdiff_t m_bOn = 0x86C; // bool
                constexpr std::ptrdiff_t m_bmaxColor = 0x86D; // bool
                constexpr std::ptrdiff_t m_flSize = 0x870; // float32
                constexpr std::ptrdiff_t m_flHazeScale = 0x874; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x878; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x87C; // float32
                constexpr std::ptrdiff_t m_flAlphaHaze = 0x880; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0x884; // float32
                constexpr std::ptrdiff_t m_flAlphaHdr = 0x888; // float32
                constexpr std::ptrdiff_t m_flFarZScale = 0x88C; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Shiv_KillingBlowVData {
                constexpr std::ptrdiff_t m_LeapModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ActiveBuff = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_KillableModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AttackParticle = 0x1558; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlashParticle = 0x1718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_KillingBlowCastParticle = 0x17F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChargeUpSound = 0x18D8; // CSoundEventName
                constexpr std::ptrdiff_t m_OnKillSound = 0x18E8; // CSoundEventName
                constexpr std::ptrdiff_t m_flPreArrivalAttackStartTime = 0x18F8; // float32
                constexpr std::ptrdiff_t m_flKillableGlowRange = 0x18FC; // float32
                constexpr std::ptrdiff_t m_flGlowMinTime = 0x1900; // float32
            }
            // Parent: CCitadelBaseShivAbility
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_vStartPosition (Vector)
            // NetworkVarNames: m_vDashDirection (Vector)
            // NetworkVarNames: m_bIsDashing (bool)
            // NetworkVarNames: m_bStartedInAir (bool)
            namespace CCitadel_Ability_ShivDash {
                constexpr std::ptrdiff_t m_vStartPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_vDashDirection = 0xC7C; // Vector
                constexpr std::ptrdiff_t m_bIsDashing = 0xC88; // bool
                constexpr std::ptrdiff_t m_bStartedInAir = 0xC89; // bool
                constexpr std::ptrdiff_t m_vecHitEnemies = 0xC90; // CUtlVector<CEntityIndex>
                constexpr std::ptrdiff_t m_vecLastPosition = 0xCA8; // Vector
                constexpr std::ptrdiff_t m_nReductionsLeft = 0xCB4; // int32
                constexpr std::ptrdiff_t m_flStuckTime = 0xEE8; // GameTime_t
            }
            // Parent: CCitadel_Ability_TrooperGrenade
            // Field count: 0
            namespace CCitadel_Ability_TrooperNeutralGrenade {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PlayerPinged {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_TrackingProjectileApplyModifier {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Rutger_Pulse_Target {
                constexpr std::ptrdiff_t m_vAuraCenter = 0x1A0; // Vector
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGenericPerson3VData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityPsychicLiftVData {
                constexpr std::ptrdiff_t m_LiftModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TargetParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetCastSound = 0x1618; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ColossusActive_VData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x5F8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ShieldParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Discord_Enemy {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_BulletArmorShredder_Proc {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bullet_Shield {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BonusDamagePercentVData {
                constexpr std::ptrdiff_t m_bSelfish = 0x5F8; // bool
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_MaxWeight (float)
            // NetworkVarNames: m_FadeDuration (float)
            // NetworkVarNames: m_Weight (float)
            // NetworkVarNames: m_lookupFilename (char)
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0x838; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0x83C; // float32
                constexpr std::ptrdiff_t m_LastExitWeight = 0x840; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0x844; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x848; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x84C; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x850; // float32
                constexpr std::ptrdiff_t m_Weight = 0x854; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x858; // char[512]
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_Gun_Spikes {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_vBeamAimPos (Vector)
            namespace CCitadel_Ability_IceBeam {
                constexpr std::ptrdiff_t m_flNextDamageTick = 0x1288; // GameTime_t
                constexpr std::ptrdiff_t m_vStart = 0x128C; // Vector
                constexpr std::ptrdiff_t m_vEnd = 0x1298; // Vector
                constexpr std::ptrdiff_t m_vecEntitiesHit = 0x12E0; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_vBeamAimPos = 0x12F8; // Vector
                constexpr std::ptrdiff_t m_angBeamAngles = 0x1308; // QAngle
                constexpr std::ptrdiff_t m_bNeedsBeamReset = 0x1320; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Sleep {
            }
            // Parent: CModifierVData
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCitadelModifierVData {
                constexpr std::ptrdiff_t m_bIsBuildup = 0x3E8; // bool
                constexpr std::ptrdiff_t m_bNetworkValuesForStatsPreview = 0x3E9; // bool
                constexpr std::ptrdiff_t m_vecAutoRegisterModifierValueFromAbilityPropertyName = 0x3F0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bCasterCountsAsAssister = 0x408; // bool
                constexpr std::ptrdiff_t m_flLingeringAssistWindow = 0x40C; // float32
                constexpr std::ptrdiff_t m_bDurationCanBeTimeScaled = 0x410; // bool
                constexpr std::ptrdiff_t m_bDurationReducible = 0x411; // bool
                constexpr std::ptrdiff_t m_eTimeScaleSource = 0x414; // ModifierTimeScaleSource_t
                constexpr std::ptrdiff_t m_bDurationAffectedByEffectiveness = 0x418; // bool
                constexpr std::ptrdiff_t m_vecSetAndTrackedAnimGraphParams = 0x420; // CUtlVector<CCitadelTrackedAnimGraphModifierState_t>
                constexpr std::ptrdiff_t m_vecSetAndTrackedBodyGroups = 0x438; // CUtlVector<CCitadelTrackedBodygroupModifierState_t>
                constexpr std::ptrdiff_t m_eDrawOverheadStatus = 0x450; // ModifierOverheadDrawType_t
                constexpr std::ptrdiff_t m_bReverseHudProgressBar = 0x454; // bool
                constexpr std::ptrdiff_t m_strSmallIconCssClass = 0x458; // CUtlString
                constexpr std::ptrdiff_t m_strHintText = 0x460; // CUtlString
                constexpr std::ptrdiff_t m_strHudIcon = 0x468; // CPanoramaImageName
                constexpr std::ptrdiff_t m_eHudDisplayLocation = 0x478; // HudDisplayLocation_t
                constexpr std::ptrdiff_t m_strHudMessageText = 0x480; // CUtlString
                constexpr std::ptrdiff_t m_bIsHiddenOverhead = 0x488; // bool
                constexpr std::ptrdiff_t m_vecAlwaysShowInStatModifierUI = 0x490; // CUtlVector<EModifierValue>
                constexpr std::ptrdiff_t m_OnCreateResponse = 0x4A8; // CCitadelModifierResponseRules_t
                constexpr std::ptrdiff_t m_cameraSequenceCreated = 0x4E0; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_bEndCreatedSequenceOnRemove = 0x560; // bool
                constexpr std::ptrdiff_t m_cameraSequenceRemoved = 0x568; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_sExpiredSound = 0x5E8; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierLockDownDebuffVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AOEParticleCaster = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AOEParticleEnemy = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AOEParticleOthers = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strFollowLoop = 0x978; // CSoundEventName
                constexpr std::ptrdiff_t m_strExplodeSound = 0x988; // CSoundEventName
                constexpr std::ptrdiff_t m_strEscapedSound = 0x998; // CSoundEventName
                constexpr std::ptrdiff_t m_RootModifier = 0x9A8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BulletResistModifier = 0x9B8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bounce_Pad_Ally {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierAirRaidVData {
                constexpr std::ptrdiff_t m_SlowModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strWeaponShootSound = 0x638; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Bull_HealVData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Passive_Cloak {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_ComboBreakerVData {
                constexpr std::ptrdiff_t m_ComboBreakerModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HealModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SettingSunThinker_VData {
                constexpr std::ptrdiff_t m_TargetParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LingerParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LayerParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x978; // CSoundEventName
                constexpr std::ptrdiff_t m_strTargetingCompletedSound = 0x988; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_PsychicDagger_MakeDaggers_VData {
                constexpr std::ptrdiff_t m_flDesatAmount = 0x5F8; // float32
                constexpr std::ptrdiff_t m_DesatTint = 0x5FC; // Color
                constexpr std::ptrdiff_t m_SatTint = 0x600; // Color
                constexpr std::ptrdiff_t m_Outline = 0x604; // Color
                constexpr std::ptrdiff_t m_DaggerShot = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerSpawn = 0x6E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerAoE = 0x7C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerTargetPreview = 0x8A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerShotFail = 0x988; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerFireSound = 0xA68; // CSoundEventName
                constexpr std::ptrdiff_t m_DaggerMissSound = 0xA78; // CSoundEventName
                constexpr std::ptrdiff_t m_LastDaggerMissSound = 0xA88; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_GhostBloodShard {
                constexpr std::ptrdiff_t m_flMinSlowAmount = 0xC0; // float32
                constexpr std::ptrdiff_t m_flMoveSpeedPenaltyPerStack = 0xC4; // float32
                constexpr std::ptrdiff_t m_flSlowDuration = 0xC8; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_LifestrikeGauntlets_VData {
                constexpr std::ptrdiff_t m_SwingParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_AmmoScavenger {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Objective_RegenVData {
                constexpr std::ptrdiff_t m_flOutOfCombatHealthRegen = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flOutOfCombatRegenDelay = 0x5FC; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_ApplyDebuff_Proc {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_Citadel_PickupItemSpawner {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CCitadel_HeroTestOrbSpawner {
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_Item_RescueBeam {
                constexpr std::ptrdiff_t m_bCanPull = 0xC88; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCadenceLullabyVData {
                constexpr std::ptrdiff_t m_SleepAOEModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Chrono_TimeWall_Effect {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_SurgingPowerVData {
                constexpr std::ptrdiff_t m_ModifierSurgingPower = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CastTargetEffect = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FireRateAuraVData {
                constexpr std::ptrdiff_t m_FireRateAuraSourceParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 0
            namespace CCitadel_Modifier_MagicClarityWatcher {
            }
            // Parent: CCitadelModelEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bAllowRotatingUp (bool)
            // NetworkVarNames: m_bFixedPosition (bool)
            // NetworkVarNames: m_flShieldOffset (float)
            namespace C_Citadel_Shield {
                constexpr std::ptrdiff_t m_bAllowRotatingUp = 0x838; // bool
                constexpr std::ptrdiff_t m_bFixedPosition = 0x839; // bool
                constexpr std::ptrdiff_t m_flShieldOffset = 0x83C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Metal {
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 0
            namespace CCitadel_Modifier_Slork_Raging_Current_Damp {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGangActivityVData {
                constexpr std::ptrdiff_t m_AbilitySwap = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_SettingSun_VData {
                constexpr std::ptrdiff_t m_BeamTargetParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_UnitTargetParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SettingSunThinkerModifier = 0x16E8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_flSSCameraPreviewOffset = 0x16F8; // float32
                constexpr std::ptrdiff_t m_flSSCameraPreviewSpeed = 0x16FC; // float32
                constexpr std::ptrdiff_t m_flSSCameraPreviewDistance = 0x1700; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Burrow_VData {
                constexpr std::ptrdiff_t m_BurrowPlayerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flDesatAmount = 0x6D8; // float32
                constexpr std::ptrdiff_t m_DesatTint = 0x6DC; // Color
                constexpr std::ptrdiff_t m_SatTint = 0x6E0; // Color
                constexpr std::ptrdiff_t m_Outline = 0x6E4; // Color
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_BansheeSlugs_Headshot {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ReturnFire {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BulletResistReductionStack {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuncFoliageVData {
                constexpr std::ptrdiff_t m_BulletImpactParticle = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BulletExitParticle = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Arcane_Eater_Debuff {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 2
            namespace CCitadel_Modifier_BaseBulletPreRollProc {
                constexpr std::ptrdiff_t m_nSuppressProcShotID = 0x168; // ShotID_t
                constexpr std::ptrdiff_t m_vecProcdBulletIDs = 0x170; // CUtlVector<BulletID_t>
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_vPositionDeltaVelocity (CNetworkVelocityVector)
            namespace CCitadelPlayer_MovementServices {
                constexpr std::ptrdiff_t m_vPositionDeltaVelocity = 0x218; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecPogoVelocity = 0x248; // Vector
                constexpr std::ptrdiff_t m_vecSupport = 0x254; // Vector
                constexpr std::ptrdiff_t m_bColliding = 0x260; // bool
                constexpr std::ptrdiff_t m_bLandedOnGround = 0x261; // bool
                constexpr std::ptrdiff_t m_bHasFreeCursor = 0x262; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityWreckingBallVData {
                constexpr std::ptrdiff_t m_SummonParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SummonReadyParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SummonParticleAttachment = 0x16E8; // CUtlString
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x16F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AutoThrowModifier = 0x17D0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HoldingBallLoop = 0x17E0; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Gravity_Lasso_Self {
                constexpr std::ptrdiff_t m_bHasUsedBouncePad = 0xC0; // bool
                constexpr std::ptrdiff_t m_vCastTargets = 0xC8; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_PsychicLift {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Burning {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_InFountain {
            }
            // Parent: C_BarnLight
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xB78; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0xB7C; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0xB80; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierSlorkAmbushVData {
                constexpr std::ptrdiff_t m_strAmbushEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_Invis
            // Field count: 1
            namespace CCitadel_Modifier_Slork_Invis {
                constexpr std::ptrdiff_t m_bHasGoneFullyInvis = 0x2D8; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ChargedTackleActive {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_MobileResupply {
            }
            // Parent: CCitadel_Modifier_Base
            // Field count: 0
            namespace CCitadel_Modifier_MagicCarpet_Summon {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_RescueBeamVData {
                constexpr std::ptrdiff_t m_BeamParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            namespace C_NPC_HornetDrone {
            }
            // Parent: CCitadelModifier
            // Field count: 6
            namespace CModifier_Mirage_SandPhantom {
                constexpr std::ptrdiff_t m_particleStart = 0xC0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_particleEnd = 0xC4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_particleTrail = 0xC8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_vecStartPosition = 0xCC; // Vector
                constexpr std::ptrdiff_t m_flStartDelay = 0xD8; // float32
                constexpr std::ptrdiff_t m_vecApplyOffset = 0xDC; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CModifier_Synth_Grasp_Victim {
                constexpr std::ptrdiff_t m_vecOrigin = 0xC0; // Vector
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Cadence_Lullaby {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_GangActivity {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ShieldedSentry_VData {
                constexpr std::ptrdiff_t m_InnateModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1538; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_flDamageFalloffEndScale = 0x1548; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Hornet_Snipe {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadelBaseAbilityServerOnly {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOverlayType
            namespace CScaleFunctionVData {
                constexpr std::ptrdiff_t m_eSpecificStatScaleType = 0x28; // EStatsType
                constexpr std::ptrdiff_t m_flStatScale = 0x2C; // float32
                constexpr std::ptrdiff_t m_bFunctionDisabled = 0x30; // bool
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Thumper_2_AuraVData {
                constexpr std::ptrdiff_t m_AoEParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ItemWalkBackVData {
                constexpr std::ptrdiff_t m_flStopDistance = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flMaxSpeedDistance = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flSlowSpeed = 0x600; // float32
                constexpr std::ptrdiff_t m_flFastSpeed = 0x604; // float32
                constexpr std::ptrdiff_t m_flVerticalOffset = 0x608; // float32
                constexpr std::ptrdiff_t m_flTolerance = 0x60C; // float32
                constexpr std::ptrdiff_t m_flRepathTime = 0x610; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hActiveProjectile (EHANDLE)
            namespace CAbility_Synth_PlasmaFlux {
                constexpr std::ptrdiff_t m_bTeleported = 0xC78; // bool
                constexpr std::ptrdiff_t m_flProjectileLaunchTime = 0xC7C; // GameTime_t
                constexpr std::ptrdiff_t m_flProjectileExpireTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_hActiveProjectile = 0xC84; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadel_Ability_PrimaryWeaponVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ShivWeapon_VData {
                constexpr std::ptrdiff_t m_flPushForce = 0x1570; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_Nano_PredatoryStatue {
                constexpr std::ptrdiff_t m_GameTimeEnabled = 0x100; // GameTime_t
                constexpr std::ptrdiff_t m_LastCatInAreaTime = 0x104; // GameTime_t
                constexpr std::ptrdiff_t m_bIsAttacking = 0x108; // bool
                constexpr std::ptrdiff_t m_iTargetID = 0x10C; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Guiding_ArrowVData {
                constexpr std::ptrdiff_t m_GlowEnemeyModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_DeathTax {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Low_Health_GlowVData {
                constexpr std::ptrdiff_t m_GlowParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ParriedStun {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_HunterAuraTarget {
                constexpr std::ptrdiff_t m_flDebuffScale = 0x168; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_CQC_Proc {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_SlowImmunityVData {
                constexpr std::ptrdiff_t m_ImmunityModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Discord_Friendly {
                constexpr std::ptrdiff_t m_flHealPerSecond = 0xC0; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierObscuredVData {
                constexpr std::ptrdiff_t m_flHideDuration = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flRevealDuration = 0x5FC; // float32
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_HeldItemPickupAuraVData {
                constexpr std::ptrdiff_t m_strFilterAbilityName = 0x638; // CSubclassName<4>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_DamageRecycler {
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTargetdummy2VData {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Wrecker_Ultimate {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BulletArmorShredder_ProcVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Obscured {
                constexpr std::ptrdiff_t m_flStartObscuredAmount = 0xC0; // float32
                constexpr std::ptrdiff_t m_AmbientParticles = 0xC8; // CUtlVectorFixedGrowable<ParticleIndex_t,3>
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_ItemPickupAura {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Thumper_PullAOE {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_Camouflage {
            }
            // Parent: CAI_NPC_TrooperVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_TrooperBossVData {
                constexpr std::ptrdiff_t m_bMitigateDamageFromPlayers = 0x1620; // bool
                constexpr std::ptrdiff_t m_bBarracksGuardian = 0x1621; // bool
                constexpr std::ptrdiff_t m_flPlayerAutoAttackRange = 0x1624; // float32
                constexpr std::ptrdiff_t m_flMinMeleeAttackTime = 0x1628; // float32
                constexpr std::ptrdiff_t m_BackdoorProtectionModifier = 0x1630; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BackdoorBulletResistModifier = 0x1640; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ObjectiveRegen = 0x1650; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_sAngryStart = 0x1660; // CSoundEventName
                constexpr std::ptrdiff_t m_sAngryLoop = 0x1670; // CSoundEventName
                constexpr std::ptrdiff_t m_sAngryStop = 0x1680; // CSoundEventName
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
            // NetworkVarNames: m_flValue (float)
            namespace C_EconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // attrib_definition_index_t
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTokamakRadianceVData {
                constexpr std::ptrdiff_t m_RadianceModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hActiveProjectile (EHANDLE)
            namespace CCitadel_Ability_Perched_Predator {
                constexpr std::ptrdiff_t m_hActiveProjectile = 0xC70; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector)
            // NetworkVarNames: m_flThickness (float)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace ice_path_shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_vecPanelSize = 0xC; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x18; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_flThickness = 0x30; // float32
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x34; // CUtlStringToken
            }
            // Parent: CCitadel_Modifier_Root
            // Field count: 0
            namespace CCitadel_Modifier_ImmobilizeTrap_Immobilize {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Projectile_Synth_Barrage {
            }
            // Parent: CCitadelModifierAura_Cone
            // Field count: 2
            namespace CCitadel_Modifier_Bull_Heal_Aura {
                constexpr std::ptrdiff_t m_playerAngles = 0xE0; // QAngle
                constexpr std::ptrdiff_t m_ConeParticle = 0xEC; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Slork_Scald {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Nano_Shadow_Debuff {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_WreckerScrapBlast {
            }
            // Parent: CitadelAbilityVData
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityMeleeParryVData {
                constexpr std::ptrdiff_t m_flWhiffDuration = 0x1528; // float32
                constexpr std::ptrdiff_t m_flMovementRestrictionTime = 0x152C; // float32
                constexpr std::ptrdiff_t m_flActiveTime = 0x1530; // float32
                constexpr std::ptrdiff_t m_flParryEndVisualTime = 0x1534; // float32
                constexpr std::ptrdiff_t m_flSuccessActiveTime = 0x1538; // float32
                constexpr std::ptrdiff_t m_flBossVictimNoMeleeTime = 0x153C; // float32
                constexpr std::ptrdiff_t m_flBossVictimCalmTime = 0x1540; // float32
                constexpr std::ptrdiff_t m_SuccessfulParryParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strSuccessfulParrySound = 0x1628; // CSoundEventName
                constexpr std::ptrdiff_t m_ParryActiveModifier = 0x1638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ParryVictimModifier = 0x1648; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ParryCooldownModifier = 0x1658; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ParryEndVisualModifier = 0x1668; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ParryBossVictimNoMeleeModifier = 0x1678; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ParryBossVictimCalmModifier = 0x1688; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_nHitIndex (int)
            namespace C_Citadel_BreakableProp {
                constexpr std::ptrdiff_t m_nHitIndex = 0xB40; // int32
            }
            // Parent: CCitadelBaseYamatoAbility
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_bShadowFormCast (bool)
            // NetworkVarNames: m_vecCastStartPos (Vector)
            // NetworkVarNames: m_vecDashStartPos (Vector)
            // NetworkVarNames: m_angDashStartAng (QAngle)
            // NetworkVarNames: m_flDashStartTime (GameTime_t)
            // NetworkVarNames: m_flEndAttackTime (GameTime_t)
            // NetworkVarNames: m_flGrappleStartTime (GameTime_t)
            // NetworkVarNames: m_flGrappleArriveTime (GameTime_t)
            // NetworkVarNames: m_hTarget (EHANDLE)
            // NetworkVarNames: m_flGrappleShotAttackTime (GameTime_t)
            // NetworkVarNames: m_rgTargetPos (Vector)
            // NetworkVarNames: m_rgTargetPosTime (GameTime_t)
            namespace CCitadel_Ability_FlyingStrike {
                constexpr std::ptrdiff_t m_desatVolIdx = 0xC78; // SatVolumeIndex_t
                constexpr std::ptrdiff_t m_bShadowFormCast = 0xC7C; // bool
                constexpr std::ptrdiff_t m_vecCastStartPos = 0xC80; // Vector
                constexpr std::ptrdiff_t m_vecDashStartPos = 0xC8C; // Vector
                constexpr std::ptrdiff_t m_angDashStartAng = 0xC98; // QAngle
                constexpr std::ptrdiff_t m_flDashStartTime = 0xCA4; // GameTime_t
                constexpr std::ptrdiff_t m_flEndAttackTime = 0xCA8; // GameTime_t
                constexpr std::ptrdiff_t m_flGrappleStartTime = 0xCAC; // GameTime_t
                constexpr std::ptrdiff_t m_flGrappleArriveTime = 0xCB0; // GameTime_t
                constexpr std::ptrdiff_t m_hTarget = 0xCB4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flGrappleShotAttackTime = 0xCB8; // GameTime_t
                constexpr std::ptrdiff_t m_flVelSpring = 0xCBC; // float32
                constexpr std::ptrdiff_t m_nTicksNotMoving = 0xCC0; // int32
                constexpr std::ptrdiff_t m_vecPrevPos = 0xCC4; // Vector
                constexpr std::ptrdiff_t m_rgTargetPos = 0xCD4; // Vector[20]
                constexpr std::ptrdiff_t m_rgTargetPosTime = 0xDC4; // GameTime_t[20]
                constexpr std::ptrdiff_t m_nGrappleTravelEffect = 0xEC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ShivDash {
                constexpr std::ptrdiff_t m_bUseTrail = 0xF8; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TargetPracticeSelfVData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strWeaponShootSound = 0x6D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strBulletWhizSound = 0x6E8; // CSoundEventName
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_SleepAOEVData {
                constexpr std::ptrdiff_t m_AuraParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Slork_Raging_Current {
                constexpr std::ptrdiff_t m_bUnitTarget = 0x168; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_Crescendo_InAOE {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Astro_ShotgunBuffVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Bull_Heal_TargetVData {
                constexpr std::ptrdiff_t m_DrainParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_Intrinsic_BaseVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_NapalmProjectileVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_WeaponEaterVData {
                constexpr std::ptrdiff_t m_WeaponEaterTracker = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_ChainLightningEffect
            // Field count: 0
            namespace CCitadel_Modifier_Galvanic_Storm_Effect {
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemAOERootVData {
                constexpr std::ptrdiff_t m_AOEParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strRootTargetSound = 0x1650; // CSoundEventName
                constexpr std::ptrdiff_t m_TetherModifier = 0x1660; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_TrackingProjectileApplyModifierVData {
                constexpr std::ptrdiff_t m_ProjectileImpactParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetModifier = 0x1650; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_FriendlyOnlyModifier = 0x1660; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Rutger_CheatDeath_Activated_VData {
                constexpr std::ptrdiff_t m_ActivatedParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadelBaseShivAbility {
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ReturnFireVData {
                constexpr std::ptrdiff_t m_AttackerHitFx = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SpiritReflectTracerReplacement = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAttackerHitSound = 0x898; // CSoundEventName
            }
            // Parent: None
            // Field count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_SettingSun {
            }
            // Parent: CCitadel_Modifier_SilencedVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BubbleVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x978; // CSoundEventName
                constexpr std::ptrdiff_t m_BuffModifier = 0x988; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CNPC_SimpleAnimatingAIVData
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_FieldSentryVData {
                constexpr std::ptrdiff_t m_LaserSightParticle = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_KillExplosionParticle = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DeployProgressModifier = 0x2C8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_sSpawnSound = 0x2D8; // CSoundEventName
                constexpr std::ptrdiff_t m_sKillExplosionSound = 0x2E8; // CSoundEventName
                constexpr std::ptrdiff_t m_sTargetAcquiredLocalSound = 0x2F8; // CSoundEventName
                constexpr std::ptrdiff_t m_sTargetAcquiredSound = 0x308; // CSoundEventName
                constexpr std::ptrdiff_t m_flIdleTurnSpeed = 0x318; // float32
                constexpr std::ptrdiff_t m_flIdleTurnAngles = 0x31C; // float32
                constexpr std::ptrdiff_t m_flTrooperTakeDamageMult = 0x320; // float32
                constexpr std::ptrdiff_t m_flNeutralTakeDamageMulti = 0x324; // float32
                constexpr std::ptrdiff_t m_flNotifyEventTime = 0x328; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_HookSelf {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_VoidSphereVData {
                constexpr std::ptrdiff_t m_BubbleModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_strCastEffect = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAllyPositionPreview = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ExplosiveShots {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Upgrade_AerialAssault {
            }
            // Parent: C_BaseTrigger
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_vLaunchTarget (Vector)
            // NetworkVarNames: m_flLaunchSpeed (float)
            namespace CCitadelCatapultTrigger {
                constexpr std::ptrdiff_t m_vLaunchTarget = 0x838; // Vector
                constexpr std::ptrdiff_t m_flLaunchSpeed = 0x844; // float32
                constexpr std::ptrdiff_t m_nameTarget = 0x848; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x830; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0x840; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0x858; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x864; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x870; // Vector
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x87C; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x880; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x881; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x882; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Affliction_Debuff_VData {
                constexpr std::ptrdiff_t m_EffectParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_SilenceContraptionsVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_TangoTether_Tether {
                constexpr std::ptrdiff_t m_fHealingSoundBuildup = 0xF8; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_MeleeCharge {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Fervor_Bonuses_VData {
                constexpr std::ptrdiff_t m_BonusesParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ActivateBonusesSound = 0x6D8; // CSoundEventName
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SilencerProcActiveVData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SilencerActiveParticle = 0x708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SilenceActiveModifier = 0x7E8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle<C_BasePlayerWeapon>)
            // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Bolo {
                constexpr std::ptrdiff_t m_hRingEffect = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierDustStormAuraApplyVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BulletFlurryWindup {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            namespace CCitadelAnimatingModelEntity {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TargetPracticeDebuff {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Chrono_PulseGrenade_PulseArea {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Wraith_ProjectMind_Shield {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_FlameDashBurn {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ZipLineBoost_VData {
                constexpr std::ptrdiff_t m_ZipboostModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flTimeToActivate = 0x1538; // float32
                constexpr std::ptrdiff_t m_flTimeForHint = 0x153C; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bPreparing (bool)
            // NetworkVarNames: m_bTackling (bool)
            // NetworkVarNames: m_flTackleStartTime (GameTime_t)
            // NetworkVarNames: m_flTackleDuration (float)
            // NetworkVarNames: m_vecTackleDir (Vector)
            namespace CCitadel_Ability_SuperNeutralCharge {
                constexpr std::ptrdiff_t m_bPreparing = 0xE30; // bool
                constexpr std::ptrdiff_t m_bTackling = 0xE31; // bool
                constexpr std::ptrdiff_t m_flTackleStartTime = 0xE34; // GameTime_t
                constexpr std::ptrdiff_t m_flTackleDuration = 0xE38; // float32
                constexpr std::ptrdiff_t m_vecTackleDir = 0xE3C; // Vector
                constexpr std::ptrdiff_t m_vecLastPosition = 0xE48; // Vector
                constexpr std::ptrdiff_t m_nStuckFramesCount = 0xE54; // int32
                constexpr std::ptrdiff_t m_vecHitEnemies = 0xE58; // CUtlVector<CEntityIndex>
                constexpr std::ptrdiff_t m_flPrepareStartTime = 0xE70; // GameTime_t
                constexpr std::ptrdiff_t m_nDistancePreview = 0xE74; // ParticleIndex_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nEntIndex (CEntityIndex)
            // NetworkVarNames: m_nTeam (int8)
            // NetworkVarNames: m_nPositionXY (uint16)
            namespace STrooperFOWEntity {
                constexpr std::ptrdiff_t m_nEntIndex = 0x30; // CEntityIndex
                constexpr std::ptrdiff_t m_nTeam = 0x34; // int8
                constexpr std::ptrdiff_t m_nPositionXY = 0x36; // uint16
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nInteractsAs (uint64)
            // NetworkVarNames: m_nInteractsWith (uint64)
            // NetworkVarNames: m_nInteractsExclude (uint64)
            // NetworkVarNames: m_nEntityId (uint32)
            // NetworkVarNames: m_nOwnerId (uint32)
            // NetworkVarNames: m_nHierarchyId (uint16)
            // NetworkVarNames: m_nCollisionGroup (uint8)
            // NetworkVarNames: m_nCollisionFunctionMask (uint8)
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_HeldItemPickupAura {
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flEndTime (GameTime_t)
            namespace CCitadel_Item_Bubble {
                constexpr std::ptrdiff_t m_flEndTime = 0xC88; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Field count: 34
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nVolumeDepth (int)
            // NetworkVarNames: m_fFirstVolumeSliceThickness (float)
            // NetworkVarNames: m_nIndirectTextureDimX (int)
            // NetworkVarNames: m_nIndirectTextureDimY (int)
            // NetworkVarNames: m_nIndirectTextureDimZ (int)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
            // NetworkVarNames: m_flStartScatterTime (GameTime_t)
            // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
            // NetworkVarNames: m_flStartAnisotropy (float)
            // NetworkVarNames: m_flStartScattering (float)
            // NetworkVarNames: m_flStartDrawDistance (float)
            // NetworkVarNames: m_flDefaultAnisotropy (float)
            // NetworkVarNames: m_flDefaultScattering (float)
            // NetworkVarNames: m_flDefaultDrawDistance (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bEnableIndirect (bool)
            // NetworkVarNames: m_bIndirectUseLPVs (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            // NetworkVarNames: m_fNoiseSpeed (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_vNoiseScale (Vector)
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x558; // float32
                constexpr std::ptrdiff_t m_flAnisotropy = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x560; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x564; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x568; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x56C; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x570; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x574; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x578; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x57C; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x580; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x584; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x588; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x594; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x5A0; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x5A4; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x5A8; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x5AC; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x5B0; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x5B4; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x5B8; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x5BC; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x5C0; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x5C4; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x5C8; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x5C9; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x5CA; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x5CB; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x5D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x5D8; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x5DC; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x5E0; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x5E4; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x5F0; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bHoldingBall (bool)
            namespace CCitadel_Ability_WreckingBall {
                constexpr std::ptrdiff_t m_bHoldingBall = 0xCA8; // bool
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 0
            namespace CCitadel_Ability_PrimaryWeapon_BeamWeapon {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ArcaneEaterProcVData {
                constexpr std::ptrdiff_t m_StealWatcherModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_SuperNeutralChargePrepare {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            namespace CCitadel_Modifier_BaseBulletPreRollProcVData {
                constexpr std::ptrdiff_t m_bRollOnceForAllBulletsInAShot = 0x628; // bool
                constexpr std::ptrdiff_t m_flMaxBulletsToProcInShot = 0x62C; // float32
                constexpr std::ptrdiff_t m_bCanProcMultipleTimesFromSameShot = 0x630; // bool
                constexpr std::ptrdiff_t m_bRequiresTargetFilter = 0x631; // bool
                constexpr std::ptrdiff_t m_TracerAdditionParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_OnBulletRolledProcSound = 0x718; // CSoundEventName
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_WreckingBall {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierTangoTetherTargetVData {
                constexpr std::ptrdiff_t m_GrappleRopeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
                constexpr std::ptrdiff_t m_AuraParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_ActiveReload {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierTier3BossInvulnVData {
                constexpr std::ptrdiff_t m_ShieldParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flShieldRadius = 0x6D8; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CAbility_Rutger_RocketLauncher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ChargedTacklePrepare {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_QuickSilverBuffVData {
                constexpr std::ptrdiff_t m_RapidFireParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityPropertyBase {
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_hOverrideObserverTarget (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iOverrideObserverMode (ObserverMode_t)
            // NetworkVarNames: m_iSecondsAfterDeathToAllowObserving (int32)
            namespace CCitadelPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_nLastLocalPlayerObservedTeam = 0x58; // int32
                constexpr std::ptrdiff_t m_nLastObservedTeam = 0x5C; // int32
                constexpr std::ptrdiff_t m_nCurrentObservedTeam = 0x60; // int32
                constexpr std::ptrdiff_t m_hLastObserverTarget = 0x64; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hPreviousTeamTarget = 0x68; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOverrideObserverTarget = 0x6C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iOverrideObserverMode = 0x70; // ObserverMode_t
                constexpr std::ptrdiff_t m_iSecondsAfterDeathToAllowObserving = 0x74; // int32
                constexpr std::ptrdiff_t m_angTargetCamera = 0x78; // QAngle
                constexpr std::ptrdiff_t m_vTargetCameraPos = 0x90; // Vector
            }
            // Parent: CBaseAnimGraph
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flStartTimeInCommentary (float32)
            // NetworkVarNames: m_iszCommentaryFile (string_t)
            // NetworkVarNames: m_iszTitle (string_t)
            // NetworkVarNames: m_iszSpeakers (string_t)
            // NetworkVarNames: m_iNodeNumber (int)
            // NetworkVarNames: m_iNodeNumberMax (int)
            // NetworkVarNames: m_bListenedTo (bool)
            // NetworkVarNames: m_hViewPosition (CHandle<C_BaseEntity>)
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0xB48; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0xB49; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0xB4C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0xB50; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xB54; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xB58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0xB60; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xB68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xB70; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xB74; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xB78; // bool
                constexpr std::ptrdiff_t m_hViewPosition = 0xB88; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xB8C; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_AnthemBuff {
            }
            // Parent: CCitadelModifier
            // Field count: 8
            namespace CCitadel_Modifier_StormCloud {
                constexpr std::ptrdiff_t m_flNextRandomLightningStrike = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0xC4; // GameTime_t
                constexpr std::ptrdiff_t m_flRadiusIncrementPerSecond = 0xC8; // float32
                constexpr std::ptrdiff_t m_vCastPosition = 0xCC; // Vector
                constexpr std::ptrdiff_t m_bFiredEndingSoonSound = 0xD8; // bool
                constexpr std::ptrdiff_t m_nLastTickForLightningCenterCalc = 0xDC; // int32
                constexpr std::ptrdiff_t m_vecLightningCenter = 0xE0; // Vector
                constexpr std::ptrdiff_t m_nSatVolumeIndex = 0xEC; // SatVolumeIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_LightningBallVData {
                constexpr std::ptrdiff_t m_ZapParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetScreenParticleEffect = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_Burning
            // Field count: 0
            namespace CCitadel_Modifier_Afterburn_DOT {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_IncendiaryProjectile {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Disarmed {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Thumper_2 {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_GangActivity_AbilitySwap {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_UltCombo_Self {
                constexpr std::ptrdiff_t m_angles = 0xC0; // QAngle
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PoisonBullet_PoisonBuildup {
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Upgrade_ArcaneMedallion_VData {
                constexpr std::ptrdiff_t m_TriggeredModifier = 0x628; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_flDashAngle (float)
            // NetworkVarNames: m_nLastGroundDashTick (int)
            // NetworkVarNames: m_flGroundDashCastTime (GameTime_t)
            // NetworkVarNames: m_flGroundDashEndTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flAirDashCastTime (GameTime_t)
            // NetworkVarNames: m_flAirDashDragStartTime (GameTime_t)
            // NetworkVarNames: m_nConsecutiveAirDashes (int8)
            // NetworkVarNames: m_nConsecutiveDownDashes (int8)
            // NetworkVarNames: m_bDownAirDash (bool)
            namespace CCitadel_Ability_Dash {
                constexpr std::ptrdiff_t m_flDashAngle = 0xC70; // float32
                constexpr std::ptrdiff_t m_GroundDashExecuteTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_nLastGroundDashTick = 0xC78; // int32
                constexpr std::ptrdiff_t m_flGroundDashCastTime = 0xC7C; // GameTime_t
                constexpr std::ptrdiff_t m_bTagCanActivateGroundDash = 0xC80; // bool
                constexpr std::ptrdiff_t m_flGroundDashEndTime = 0xC88; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flAirDashCastTime = 0xCA0; // GameTime_t
                constexpr std::ptrdiff_t m_flAirDashDragStartTime = 0xCA4; // GameTime_t
                constexpr std::ptrdiff_t m_nConsecutiveAirDashes = 0xCA8; // int8
                constexpr std::ptrdiff_t m_nConsecutiveDownDashes = 0xCA9; // int8
                constexpr std::ptrdiff_t m_bDownAirDash = 0xCAA; // bool
                constexpr std::ptrdiff_t m_hJumpAbility = 0xE60; // CHandle<CCitadel_Ability_Jump>
            }
            // Parent: CCitadel_Modifier_Bullet_Shield
            // Field count: 0
            namespace CCitadel_Modifier_Tech_Shield {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 21
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAI_BaseNPCVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_hFootstepSounds = 0x108; // CFootstepTableHandle
                constexpr std::ptrdiff_t m_vecNavLinkMovementNames = 0x110; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nMaxHealth = 0x128; // int32
                constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x130; // CUtlVector<CEmbeddedSubclass<CCitadelModifier>>
                constexpr std::ptrdiff_t m_statusEffectMap = 0x148; // NPCStatusEffectMap_t
                constexpr std::ptrdiff_t m_vecAttachments = 0x150; // CUtlVector<NPCAttachmentDesc_t>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x168; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x178; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x188; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x198; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x1A8; // CSkillFloat
                constexpr std::ptrdiff_t m_nMaxAdditionalAmmoBalancingShots = 0x1B8; // CSkillInt
                constexpr std::ptrdiff_t m_bTakesDamage = 0x1C8; // bool
                constexpr std::ptrdiff_t m_DestructiblePartsDataByHitGroup = 0x1D0; // CUtlOrderedMap<HitGroup_t,CAI_BaseNPC_DestructiblePartHitGroupInfoAndData>
                constexpr std::ptrdiff_t m_bAllowNonZUpMovement = 0x1F8; // bool
                constexpr std::ptrdiff_t m_bRequestCapsuleCollision = 0x1F9; // bool
                constexpr std::ptrdiff_t m_flCapsuleRadiusOverride = 0x1FC; // float32
                constexpr std::ptrdiff_t m_flCapsuleHeightOverride = 0x200; // float32
                constexpr std::ptrdiff_t m_vecActionDesiredShared = 0x208; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_sPlayerKilledNpcSound = 0x220; // CSoundEventName
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_BaseProjectileAOEModifier {
            }
            // Parent: CCitadelBaseYamatoAbility
            // Field count: 0
            namespace CCitadel_Ability_HealingSlash {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_DebugIsVisibleToEnemyTeam {
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace C_NPC_MortarSentry {
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            namespace C_NPC_FlyingDrone {
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_Item_DivinersKevlar {
                constexpr std::ptrdiff_t m_bExecuted = 0xC88; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Synth_Pulse_Escape {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Rutger_RocketLauncher_VData {
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShootParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Radiance {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_TeleportToGangster {
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 0
            namespace CCitadel_Ability_ShivWeapon {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_PsychicDaggerVData {
                constexpr std::ptrdiff_t m_MakeDaggersModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierPowerJumpVData {
                constexpr std::ptrdiff_t m_FloatParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flAirDrag = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flVerticalCameraOffset = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flVerticalCameraOffsetLerpTime = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flVerticalCameraOffsetBias = 0x6E4; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_anglesCharging (QAngle)
            // NetworkVarNames: m_flChargeStartTime (GameTime_t)
            // NetworkVarNames: m_flFastChargeEndTime (GameTime_t)
            // NetworkVarNames: bHitAnEnemy (bool)
            namespace CCitadel_Ability_Bull_Charge {
                constexpr std::ptrdiff_t m_anglesCharging = 0xED8; // QAngle
                constexpr std::ptrdiff_t m_flChargeStartTime = 0xEE4; // GameTime_t
                constexpr std::ptrdiff_t m_flFastChargeEndTime = 0xEE8; // GameTime_t
                constexpr std::ptrdiff_t bHitAnEnemy = 0xEEC; // bool
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 0
            namespace CCitadel_Ability_PrimaryWeapon_Empty {
            }
            // Parent: CitadelAbilityVData
            // Field count: 56
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySlideVData {
                constexpr std::ptrdiff_t m_flMinAngleToConsiderASlope = 0x1528; // float32
                constexpr std::ptrdiff_t m_flSlideMaxSlopeMaxAccSpeed = 0x152C; // float32
                constexpr std::ptrdiff_t m_flSlideMinSlopeMaxAccSpeed = 0x1530; // float32
                constexpr std::ptrdiff_t m_flButtonPressWindow = 0x1534; // float32
                constexpr std::ptrdiff_t m_flTurnSpeed = 0x1538; // float32
                constexpr std::ptrdiff_t m_flSlideMinSlopeAcceleration = 0x153C; // float32
                constexpr std::ptrdiff_t m_flSlideMaxSlopeAcceleration = 0x1540; // float32
                constexpr std::ptrdiff_t m_flTurnMinAngDiff = 0x1544; // float32
                constexpr std::ptrdiff_t m_flTurnMaxAngDiff = 0x1548; // float32
                constexpr std::ptrdiff_t m_flLandedFlatGroundFrictionGraceTime = 0x154C; // float32
                constexpr std::ptrdiff_t m_flFlatGroundFrictionGraceTime = 0x1550; // float32
                constexpr std::ptrdiff_t m_flFrictionFlatGroundGrace = 0x1554; // float32
                constexpr std::ptrdiff_t m_flFrictionFlatGround = 0x1558; // float32
                constexpr std::ptrdiff_t m_flFrictionMinSlope = 0x155C; // float32
                constexpr std::ptrdiff_t m_flFrictionMaxSlope = 0x1560; // float32
                constexpr std::ptrdiff_t m_flFrictionUphillMinSlope = 0x1564; // float32
                constexpr std::ptrdiff_t m_flFrictionUphillMaxSlope = 0x1568; // float32
                constexpr std::ptrdiff_t m_flLandingSlopeScaleBias = 0x156C; // float32
                constexpr std::ptrdiff_t m_flBoostMinTriggerSpeed = 0x1570; // float32
                constexpr std::ptrdiff_t m_flBoostMaxTriggerSpeed = 0x1574; // float32
                constexpr std::ptrdiff_t m_flBoostMinSpeed = 0x1578; // float32
                constexpr std::ptrdiff_t m_flBoostMaxSpeed = 0x157C; // float32
                constexpr std::ptrdiff_t m_flMinActivationSpeed = 0x1580; // float32
                constexpr std::ptrdiff_t m_flMinSustainSpeed = 0x1584; // float32
                constexpr std::ptrdiff_t m_flSprintBoostSpeed = 0x1588; // float32
                constexpr std::ptrdiff_t m_flDashSlideStartTime = 0x158C; // float32
                constexpr std::ptrdiff_t m_flDashSlideSpeed = 0x1590; // float32
                constexpr std::ptrdiff_t m_flDashSlideFailSpeed = 0x1594; // float32
                constexpr std::ptrdiff_t m_strDashSlideActivate = 0x1598; // CSoundEventName
                constexpr std::ptrdiff_t m_flDashSlideFrictionTime = 0x15A8; // float32
                constexpr std::ptrdiff_t m_flDashSlideFriction = 0x15AC; // float32
                constexpr std::ptrdiff_t m_flDashMinActivationSpeed = 0x15B0; // float32
                constexpr std::ptrdiff_t m_flAccMinSlopeDeg = 0x15B4; // float32
                constexpr std::ptrdiff_t m_flAccMaxSlopeDeg = 0x15B8; // float32
                constexpr std::ptrdiff_t m_flAccMinSlopeScale = 0x15BC; // float32
                constexpr std::ptrdiff_t m_flSlideProbeForwardOffset = 0x15C0; // float32
                constexpr std::ptrdiff_t m_flSlideActivationProbeForwardOffset = 0x15C4; // float32
                constexpr std::ptrdiff_t m_flMaxDistanceBetweenProbeSamples = 0x15C8; // float32
                constexpr std::ptrdiff_t m_flInitialSlideUseForwardProbeTime = 0x15CC; // float32
                constexpr std::ptrdiff_t m_flCurrentSlopeSampleDistance = 0x15D0; // float32
                constexpr std::ptrdiff_t m_flSampleVelDiffStdDevScaleCutoff = 0x15D4; // float32
                constexpr std::ptrdiff_t m_flSlopeFacingAngleToActivate = 0x15D8; // float32
                constexpr std::ptrdiff_t m_flAirDragAfterJump = 0x15DC; // float32
                constexpr std::ptrdiff_t m_flAirDragAfterJumpTime = 0x15E0; // float32
                constexpr std::ptrdiff_t m_flAirDragMaxAngle = 0x15E4; // float32
                constexpr std::ptrdiff_t m_flAirDragResetTime = 0x15E8; // float32
                constexpr std::ptrdiff_t m_flLateSlideJumpWindow = 0x15EC; // float32
                constexpr std::ptrdiff_t m_SlideEffectRemap = 0x15F0; // CRemapFloat
                constexpr std::ptrdiff_t m_GetupSpeedCurve = 0x1600; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_flGetupBusyDuration = 0x1640; // float32
                constexpr std::ptrdiff_t m_cameraSequenceStartSliding = 0x1648; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceEndSliding = 0x16C8; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_SlideParticle = 0x1748; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStartSound = 0x1828; // CSoundEventName
                constexpr std::ptrdiff_t m_strLoopingSound = 0x1838; // CSoundEventName
                constexpr std::ptrdiff_t m_strStopSound = 0x1848; // CSoundEventName
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x55C; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x560; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x56C; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Targetdummy_4 {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTargetPracticeVData {
                constexpr std::ptrdiff_t m_TargetPracticeSelfModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TargetPracticeEnemyModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Afterburn {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_MetalSkin {
            }
            // Parent: CCitadel_Ability_TrooperGrenade
            // Field count: 0
            namespace CCitadel_Ability_TrooperBossGrenade {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hStableHandle (uint64)
            namespace CModifierHandleBase {
                constexpr std::ptrdiff_t m_hStableHandle = 0x8; // uint64
            }
            // Parent: C_AI_BaseNPC
            // Field count: 7
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkOverride
            // NetworkVarNames: m_bBeamActive (bool)
            // NetworkVarNames: m_vecWeakPoints (WeakPoint_t)
            // NetworkVarNames: m_bMinion (bool)
            // NetworkVarNames: m_hLookTarget (EHANDLE)
            // NetworkVarNames: m_CCitadelAbilityComponent (CCitadelAbilityComponent::Storage_t)
            namespace C_AI_CitadelNPC {
                constexpr std::ptrdiff_t m_bBeamActive = 0xD84; // bool
                constexpr std::ptrdiff_t m_vEyeBeamTarget = 0xD88; // Vector
                constexpr std::ptrdiff_t m_nPlayerTeamEvent = 0x1248; // int32
                constexpr std::ptrdiff_t m_vecWeakPoints = 0x1298; // C_UtlVectorEmbeddedNetworkVar<WeakPoint_t>
                constexpr std::ptrdiff_t m_bMinion = 0x12E8; // bool
                constexpr std::ptrdiff_t m_hLookTarget = 0x12EC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0x12F0; // CCitadelAbilityComponent
            }
            // Parent: C_Sprite
            // Field count: 2
            namespace C_FireSprite {
                constexpr std::ptrdiff_t m_vecMoveDir = 0x940; // Vector
                constexpr std::ptrdiff_t m_bFadeFromAbove = 0x94C; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Killing_Blow_Glow {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Nano_ShadowVData {
                constexpr std::ptrdiff_t m_ShadowModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PurgeModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_FissureWallVData {
                constexpr std::ptrdiff_t m_FriendlyWallParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyWallParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WallTravelSoundLoop = 0x16E8; // CSoundEventName
                constexpr std::ptrdiff_t m_WallModifier = 0x16F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Upgrade_WeaponPowerForHealthVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_HollowPoint_ProcVData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ParticleModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_DamageOnHitGround {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_SourceItemID (AbilityID_t)
            // NetworkVarNames: m_TargetAbilityID (AbilityID_t)
            namespace ItemImbuementPair_t {
                constexpr std::ptrdiff_t m_SourceItemID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_TargetAbilityID = 0x34; // CUtlStringToken
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_Upgrade_AmmoScavenger {
                constexpr std::ptrdiff_t m_hLastOrbTarget = 0xC88; // CHandle<C_BaseEntity>
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTeleportToGangsterVData {
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_MedicHeal {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Intrinsic_Base {
            }
            // Parent: C_BaseTrigger
            // Field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0x838; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x848; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x850; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x878; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x880; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x881; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x882; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x884; // int32
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_RegeneratingBulletShieldVData {
                constexpr std::ptrdiff_t m_ActiveModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_QuickSilverVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ProcParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_SimpleAnimatingAIVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_TrackedProjectile_Synth_PlasmaFlux {
            }
            // Parent: CBaseDashCastAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityCadenceSilenceContraptionsVData {
                constexpr std::ptrdiff_t m_SilenceContraptionsModifier = 0x15B0; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_Tengu_Urn {
                constexpr std::ptrdiff_t m_vLaunchPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_qLaunchAngle = 0xC7C; // QAngle
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Killing_Blow_GlowVData {
                constexpr std::ptrdiff_t m_ShivOnlyDeathStatus = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShivOnlyDeathTrail = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strShivOnlyActivateSound = 0x7B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strShivOnlyLoopSound = 0x7C8; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Astro_Rifle {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Decoy_Tracker {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
                constexpr std::ptrdiff_t m_TempShieldModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FullSpectrumVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BonusDamageModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 0
            namespace CCitadel_Modifier_OneVsOne {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_ControlPointCapturerAura {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_AccuracyTracker {
                constexpr std::ptrdiff_t m_flProgress = 0xC0; // float32
            }
            // Parent: CCitadel_Modifier_InvisVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Slork_Invis_VData {
                constexpr std::ptrdiff_t m_AmbushModifier = 0x8B0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_VisibleModifier = 0x8C0; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_GenericPerson_1 {
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGenericPerson1VData {
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_PerchedPredatorDrag {
                constexpr std::ptrdiff_t m_qRelativeOffset = 0x130; // QAngle
                constexpr std::ptrdiff_t m_flRelativeDist = 0x13C; // float32
                constexpr std::ptrdiff_t m_vecOffsetDir = 0x140; // Vector
                constexpr std::ptrdiff_t m_hFollowEnt = 0x14C; // CHandle<C_BaseEntity>
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityPsychicPulseVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_PulseParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flCastEffectLifetime = 0x1618; // float32
                constexpr std::ptrdiff_t m_flConeAngle = 0x161C; // float32
                constexpr std::ptrdiff_t m_flConeHalfWidth = 0x1620; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Hornet_Chain_Connection {
                constexpr std::ptrdiff_t m_vecOrigin = 0xC0; // Vector
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_Savior_VData {
                constexpr std::ptrdiff_t m_SaviorModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CastParticle = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 11
            namespace CCitadel_Modifier_BulletFlurry {
                constexpr std::ptrdiff_t m_flRadius = 0x1A0; // float32
                constexpr std::ptrdiff_t m_vecShootTargets = 0x1A8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nNumPlayersKilled = 0x1C0; // int32
                constexpr std::ptrdiff_t m_nShootIndex = 0x1C4; // int32
                constexpr std::ptrdiff_t m_nShootIndexNPC = 0x1C8; // int32
                constexpr std::ptrdiff_t m_nBurstShots = 0x1CC; // int32
                constexpr std::ptrdiff_t m_flNextAttackTime = 0x1D0; // GameTime_t
                constexpr std::ptrdiff_t m_nSatVolumeIndex = 0x1D4; // SatVolumeIndex_t
                constexpr std::ptrdiff_t m_nEffectId = 0x1D8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flNextSequenceChange = 0x1DC; // GameTime_t
                constexpr std::ptrdiff_t m_nCurrentPose = 0x1E0; // int32
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MedicBulletsVData {
                constexpr std::ptrdiff_t m_ImpactParticle = 0x728; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 6
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x38; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x68; // CUtlVector<float32>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_Aura_Base {
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0x838; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0x850; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0x830; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x834; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0x838; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_Mirage_SandPhantom_Proc {
                constexpr std::ptrdiff_t m_nSuppressProcShotID = 0xC0; // ShotID_t
                constexpr std::ptrdiff_t m_nProcReadyParticleIndex = 0xC4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flLastProcTime = 0xC8; // GameTime_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySleepBombVData {
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AuraModifier = 0x1608; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_RocketLauncher {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_HighAlert {
            }
            // Parent: CCitadelModifierVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Bebop_LaserBeamVData {
                constexpr std::ptrdiff_t m_SlowModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BeamParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BeamParticleLocal = 0x6E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BeamHitParticle = 0x7C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strLaserStartSound = 0x8A8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserEndSound = 0x8B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserLoopSound = 0x8C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserHitSound = 0x8D8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Wraith_RapidFire {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Bull_Heal_Target {
                constexpr std::ptrdiff_t m_flTetherRangeSquared = 0x1D8; // float32
            }
            // Parent: CPlayer_CameraServices
            // Field count: 1
            namespace CCitadelPlayer_CameraServices {
                constexpr std::ptrdiff_t m_hPrevPostProcessingVolume = 0x230; // CHandle<C_PostProcessingVolume>
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_iLane (int)
            // NetworkVarNames: m_hTargetedEnemy (EHANDLE)
            // NetworkVarNames: m_flHealingChargeParticlePct (float)
            namespace C_NPC_Trooper {
                constexpr std::ptrdiff_t m_iLane = 0x1490; // int32
                constexpr std::ptrdiff_t m_hTargetedEnemy = 0x1494; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flHealingChargeParticlePct = 0x1498; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_WreckerSalvageBuffVData {
                constexpr std::ptrdiff_t m_WeaponBuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Astro_ShotgunBuff {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityAstroRifleVData {
                constexpr std::ptrdiff_t m_SelfModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_vStrikeVel (Vector)
            // NetworkVarNames: m_flStartHeight (float)
            namespace CCitadel_Ability_LashDownStrike {
                constexpr std::ptrdiff_t m_ImpactTime = 0xD18; // GameTime_t
                constexpr std::ptrdiff_t m_vDamagePos = 0xD1C; // Vector
                constexpr std::ptrdiff_t m_PreviewEffect = 0xD2C; // ParticleIndex_t
                constexpr std::ptrdiff_t m_vStrikeVel = 0xEF0; // Vector
                constexpr std::ptrdiff_t m_flStartHeight = 0xEFC; // float32
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierPsychicLiftVData {
                constexpr std::ptrdiff_t m_LiftParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStartSound = 0x7B8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityMeleeVData {
                constexpr std::ptrdiff_t m_flMeleeInputBufferTime = 0x1528; // float32
                constexpr std::ptrdiff_t m_flCollisionDistance = 0x152C; // float32
                constexpr std::ptrdiff_t m_flHeavyAttackRequiredHoldTime = 0x1530; // float32
                constexpr std::ptrdiff_t m_flLightAttackMaxHoldTime = 0x1534; // float32
                constexpr std::ptrdiff_t m_MeleeDamageFlags = 0x1538; // TakeDamageFlags_t
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterialBase (HMaterialStrong)
            // NetworkVarNames: m_hMaterialDamageOverlay (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_vInitialPanelVertices (Vector4D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
            }
            // Parent: None
            // Field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_eLootType (int32)
            // NetworkVarNames: m_nCurrencyValue (int32)
            // NetworkVarNames: m_iszModelName (string_t)
            // NetworkVarNames: m_flModelScale (float)
            // NetworkVarNames: m_hTargetPlayer (EHANDLE)
            // NetworkVarNames: m_flFallRate (float)
            namespace C_CitadelItemPickup {
                constexpr std::ptrdiff_t m_eLootType = 0xB50; // int32
                constexpr std::ptrdiff_t m_nCurrencyValue = 0xB54; // int32
                constexpr std::ptrdiff_t m_iszModelName = 0xB58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flModelScale = 0xB60; // float32
                constexpr std::ptrdiff_t m_hTargetPlayer = 0xB64; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flFallRate = 0xB68; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xB40; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0xB44; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xB48; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xB4C; // matrix3x4_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BreakablePropSpeedPickup {
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 2
            namespace CCitadel_Modifier_ThrowSandProjectile {
                constexpr std::ptrdiff_t m_vInitialCastPosition = 0x130; // Vector
                constexpr std::ptrdiff_t m_iParticleEffect = 0x13C; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_PuddleVData {
                constexpr std::ptrdiff_t m_puddleAoeDamageFx = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetDamageFx = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHornetStingVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HitParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierStormCloudVData {
                constexpr std::ptrdiff_t m_ZapFriendly = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DrawFriendly = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AoEFriendly = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZapEnemy = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DrawEnemy = 0x978; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AoEEnemy = 0xA58; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strChannelEndingSoonSound = 0xB38; // CSoundEventName
                constexpr std::ptrdiff_t m_strChannelFinishedSound = 0xB48; // CSoundEventName
                constexpr std::ptrdiff_t m_strDamageRecievedSound = 0xB58; // CSoundEventName
                constexpr std::ptrdiff_t m_strAmbientZapSound = 0xB68; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_MidBossAggroEnemy {
            }
            // Parent: None
            // Field count: 21
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
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Guiding_Arrow {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_QuickSilver_Buff {
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_timeLaunch (GameTime_t)
            namespace CItemXP {
                constexpr std::ptrdiff_t m_timeLaunch = 0x850; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Grasp_Victim_VData {
                constexpr std::ptrdiff_t m_strVictimTetheredSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_GraspVictimParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityRapidFireVData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityRiotProtocolVData {
                constexpr std::ptrdiff_t m_ChargeUpParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastDelayModifier = 0x16E8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_WardenBuffModifier = 0x16F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Chrono_KineticCarbineVData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FullyChargedParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strFullyCharged = 0x7B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strShotSound = 0x7C8; // CSoundEventName
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CitadelMinimapBoundary {
            }
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 5
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_CCitadelAbilityComponent (CCitadelAbilityComponent::Storage_t)
            // NetworkVarNames: m_vecWeakPoints (WeakPoint_t)
            // NetworkVarNames: m_bDestroyed (bool)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bFinal (bool)
            namespace C_Citadel_Destroyable_Building {
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xB48; // CCitadelAbilityComponent
                constexpr std::ptrdiff_t m_vecWeakPoints = 0xCE8; // C_UtlVectorEmbeddedNetworkVar<WeakPoint_t>
                constexpr std::ptrdiff_t m_bDestroyed = 0xD38; // bool
                constexpr std::ptrdiff_t m_bActive = 0xD39; // bool
                constexpr std::ptrdiff_t m_bFinal = 0xD3A; // bool
            }
            // Parent: CCitadel_Item
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_nNumStacks (int)
            namespace CItem_RestorativeLocket {
                constexpr std::ptrdiff_t m_nNumStacks = 0xD30; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x560; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x570; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x574; // bool
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x578; // CEntityIOOutput
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x5A0; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x5A4; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x5A8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x5C0; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x5D8; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x5E0; // HSCRIPT
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityFealtyVData {
                constexpr std::ptrdiff_t m_TargetModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadel_Modifier_Disarmed
            // Field count: 0
            namespace CCitadel_Modifier_ThrowSandDebuff {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Decoy_Self_Buff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_HornetSnipeVData {
                constexpr std::ptrdiff_t m_GlowEnemeyModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_WingBlast {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_LifeDrainVData {
                constexpr std::ptrdiff_t m_LifeDrainTargetModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_LifeDrainCasterModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BoxingGloveVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SwingParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_Item_Bleeding_Bullets_Active {
            }
            // Parent: CCitadel_Modifier_Silenced
            // Field count: 0
            namespace CCitadel_Modifier_ModDisruptor {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_CloakingDeviceActive {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Chomp_LowHealth_Glow {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Slork_Chomp {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Haze_StackingDamage {
            }
            // Parent: CitadelAbilityVData
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Viscous_TelepunchVData {
                constexpr std::ptrdiff_t m_PortalParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PunchParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WallPunchParticle = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CeilingPunchParticle = 0x18A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyPortalSound = 0x1988; // CSoundEventName
                constexpr std::ptrdiff_t m_SelfPortalSound = 0x1998; // CSoundEventName
                constexpr std::ptrdiff_t m_WindupSound = 0x19A8; // CSoundEventName
                constexpr std::ptrdiff_t m_PunchSound = 0x19B8; // CSoundEventName
                constexpr std::ptrdiff_t m_PunchRollSlowModifier = 0x19C8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImpactModifier = 0x19D8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flEnemyPortalTelegraphTime = 0x19E8; // float32
                constexpr std::ptrdiff_t m_flSelfPortalTelegraphTime = 0x19EC; // float32
                constexpr std::ptrdiff_t m_flWindupTime = 0x19F0; // float32
                constexpr std::ptrdiff_t m_flAttackTime = 0x19F4; // float32
                constexpr std::ptrdiff_t m_flGroundTraceOnPlayerHitDistance = 0x19F8; // float32
                constexpr std::ptrdiff_t m_flPlayerCheckSphereRadius = 0x19FC; // float32
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightCapsuleEntity {
            }
            // Parent: C_PointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x558; // bool
                constexpr std::ptrdiff_t m_flRange = 0x55C; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x560; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x564; // int32
                constexpr std::ptrdiff_t m_hLight = 0x568; // CHandle<C_BaseEntity>
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Slork_InvisVData {
                constexpr std::ptrdiff_t m_InvisModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PreventHealingModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AmbushExplosionParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AmbushExplosionSound = 0x1628; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nFastFireBulletsLeft (int)
            // NetworkVarNames: m_flBlitzEndTime (CCitadelAutoScaledTime)
            namespace CAbility_Synth_Blitz {
                constexpr std::ptrdiff_t m_vecSpecialShots = 0xC70; // CUtlVector<ShotID_t>
                constexpr std::ptrdiff_t m_nFastFireBulletsLeft = 0xC88; // int32
                constexpr std::ptrdiff_t m_flBlitzEndTime = 0xC90; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_bCanApplyTechAmp = 0xCA8; // bool
                constexpr std::ptrdiff_t m_bCanLifesteal = 0xCA9; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ConsumedProtectionRacket {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_TargetPractice {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CTakeDamageInfoAPI {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_BaseEntityAPI {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_HighImpactArmor {
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Synth_Pulse_VData {
                constexpr std::ptrdiff_t m_EscapeModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AoEParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EffectParticle = 0x1628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChannelParticle = 0x1708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x17E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExpireSound = 0x18C8; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSequenceInSatchel = 0x18D8; // CitadelCameraOperationsSequence_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Thumper_3 {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_RocketBarrageVolleyVData {
                constexpr std::ptrdiff_t m_strFireSound = 0x5F8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ZiplineKnockdownImmune {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierContainmentVictimVData {
                constexpr std::ptrdiff_t m_AreaParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChainedParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Slow {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_iGlowType (int32)
            // NetworkVarNames: m_iGlowTeam (int32)
            // NetworkVarNames: m_nGlowRange (int32)
            // NetworkVarNames: m_nGlowRangeMin (int32)
            // NetworkVarNames: m_glowColorOverride (Color)
            // NetworkVarNames: m_bFlashing (bool)
            // NetworkVarNames: m_flGlowTime (float)
            // NetworkVarNames: m_flGlowStartTime (float)
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bGlowing = 0x50; // bool
            }
            // Parent: C_BaseTrigger
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_gravityScale (float)
            // NetworkVarNames: m_linearLimit (float)
            // NetworkVarNames: m_linearDamping (float)
            // NetworkVarNames: m_angularLimit (float)
            // NetworkVarNames: m_angularDamping (float)
            // NetworkVarNames: m_linearForce (float)
            // NetworkVarNames: m_flFrequency (float)
            // NetworkVarNames: m_flDampingRatio (float)
            // NetworkVarNames: m_vecLinearForcePointAt (Vector)
            // NetworkVarNames: m_bCollapseToForcePoint (bool)
            // NetworkVarNames: m_vecLinearForcePointAtWorld (Vector)
            // NetworkVarNames: m_vecLinearForceDirection (Vector)
            // NetworkVarNames: m_bConvertToDebrisWhenPossible (bool)
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x838; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x83C; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x840; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x844; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x848; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x84C; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x850; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x854; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x858; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x864; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x868; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x874; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x880; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_Mirage_DjinnsReach_Debuff {
                constexpr std::ptrdiff_t m_bAppliesSlow = 0xC0; // bool
                constexpr std::ptrdiff_t m_hFirstPartner = 0xC4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hSecondPartner = 0xC8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecPartners = 0xD0; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_HookTargetVData {
                constexpr std::ptrdiff_t m_flApproachingWhooshAnticipationTime = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flCloseEnoughDistance = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flTossUpSpeed = 0x600; // float32
                constexpr std::ptrdiff_t m_SlowModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HookRetrieveParticle = 0x618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strRetractSound = 0x6F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strRetractSoundEnd = 0x708; // CSoundEventName
                constexpr std::ptrdiff_t m_strApproachingWhooshSound = 0x718; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TargetPracticeSelf {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_SilencerProcActive {
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItem_RestorativeLocket_VData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TrailParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_CharmedWraps_VData {
                constexpr std::ptrdiff_t m_SwingParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_SleepBomb_Aura {
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_flInfluenceRadius (float)
            // NetworkVarNames: m_Entity_vBoxProjectMins (Vector)
            // NetworkVarNames: m_Entity_vBoxProjectMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_flDiffuseScale (float)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_bDefaultEnvMap (bool)
            // NetworkVarNames: m_Entity_bDefaultSpecEnvMap (bool)
            // NetworkVarNames: m_Entity_bIndoorCubeMap (bool)
            // NetworkVarNames: m_Entity_bCopyDiffuseFromDefaultCubemap (bool)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x5D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x5E0; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x5E4; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x5E8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x5F4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x600; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x604; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x608; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x60C; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x610; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x614; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x620; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x624; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x625; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x626; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x627; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x628; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x638; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_Yakuza_Shakedown {
                constexpr std::ptrdiff_t m_IgnoreChannelSlow = 0xC70; // int32
            }
            // Parent: CitadelItemVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_CheatDeathVData {
                constexpr std::ptrdiff_t m_DamagePulseParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DamageTargetParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sHealPulseSound = 0x1730; // CSoundEventName
                constexpr std::ptrdiff_t m_sHealAndDamagePulseSound = 0x1740; // CSoundEventName
                constexpr std::ptrdiff_t m_DeathImmuneModifier = 0x1750; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Succor_Move {
                constexpr std::ptrdiff_t m_bHasPulled = 0xC0; // bool
                constexpr std::ptrdiff_t m_bIsPulling = 0xC1; // bool
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Upgrade_WeaponPowerForHealth {
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 0
            namespace CCitadel_Ability_PrimaryWeapon_Cadence {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_AirLift_Grab {
            }
            // Parent: CCitadelModifier
            // Field count: 9
            namespace CCitadel_Modifier_ChronoSwap_BubbleMove {
                constexpr std::ptrdiff_t m_bOtherIsInFrontAtStart = 0xC0; // bool
                constexpr std::ptrdiff_t m_vOtherToDest = 0xC4; // Vector
                constexpr std::ptrdiff_t m_vStart = 0xD0; // Vector
                constexpr std::ptrdiff_t m_vDest = 0xDC; // Vector
                constexpr std::ptrdiff_t m_hOther = 0xE8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vLastSafePos = 0xEC; // Vector
                constexpr std::ptrdiff_t m_nNumTicks = 0xF8; // int32
                constexpr std::ptrdiff_t m_nTicksLeft = 0xFC; // int32
                constexpr std::ptrdiff_t m_nBeamIndex = 0x100; // ParticleIndex_t
            }
            // Parent: CCitadel_Modifier_Base_Buildup
            // Field count: 0
            namespace CCitadel_Modifier_Silence_Buildup {
            }
            // Parent: CBaseAnimGraph
            // Field count: 6
            namespace C_Citadel_FissureWall {
                constexpr std::ptrdiff_t m_vStartPos = 0xB40; // Vector
                constexpr std::ptrdiff_t m_vEndPos = 0xB4C; // Vector
                constexpr std::ptrdiff_t m_flStartEmitTime = 0xB58; // GameTime_t
                constexpr std::ptrdiff_t m_flEndEmitTime = 0xB5C; // GameTime_t
                constexpr std::ptrdiff_t m_bSolid = 0xB60; // bool
                constexpr std::ptrdiff_t m_nTouchCount = 0xB64; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            namespace CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
                constexpr std::ptrdiff_t m_bRollOnceForAllBulletsInAShot = 0x5F8; // bool
                constexpr std::ptrdiff_t m_flMaxBulletsToProcInShot = 0x5FC; // float32
                constexpr std::ptrdiff_t m_bCanProcMultipleTimesFromSameShot = 0x600; // bool
                constexpr std::ptrdiff_t m_bRequiresTargetFilter = 0x601; // bool
                constexpr std::ptrdiff_t m_PassiveVictimModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ProcReadyParticle = 0x618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TracerAdditionParticle = 0x6F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x7D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_OnBulletRolledProcSound = 0x8B8; // CSoundEventName
                constexpr std::ptrdiff_t m_ExplodeSound = 0x8C8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_ViscousBall {
                constexpr std::ptrdiff_t m_nDirectionParticleIndex = 0xC0; // ParticleIndex_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_PassiveBeefyVData {
                constexpr std::ptrdiff_t m_HealParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_IntensifyingClip {
                constexpr std::ptrdiff_t m_LastThinkTime = 0x130; // GameTime_t
                constexpr std::ptrdiff_t m_flSpinUpTime = 0x134; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_Ricochet_Proc {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            namespace CPropAnimatingBreakable {
                constexpr std::ptrdiff_t m_stages = 0xB40; // CBreakableStageHelper
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xB58; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFinalBreak = 0xB80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStageAdvanced = 0xBA8; // CEntityIOOutput
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ShakedownPulse {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityStickyBombVData {
                constexpr std::ptrdiff_t m_BombAttachedModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CastBombParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_BaseEntity
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bUpdateOnClient (bool)
            // NetworkVarNames: m_nInputType (ValueRemapperInputType_t)
            // NetworkVarNames: m_hRemapLineStart (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hRemapLineEnd (CHandle<CBaseEntity>)
            // NetworkVarNames: m_flMaximumChangePerSecond (float)
            // NetworkVarNames: m_flDisengageDistance (float)
            // NetworkVarNames: m_flEngageDistance (float)
            // NetworkVarNames: m_bRequiresUseKey (bool)
            // NetworkVarNames: m_nOutputType (ValueRemapperOutputType_t)
            // NetworkVarNames: m_hOutputEntities (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
            // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
            // NetworkVarNames: m_flMomentumModifier (float)
            // NetworkVarNames: m_flSnapValue (float)
            // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
            // NetworkVarNames: m_flInputOffset (float)
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x558; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x559; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x55A; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x55C; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x560; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x564; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x568; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x56C; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x570; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x574; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x578; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x580; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x598; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x59C; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x5A0; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x5A4; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x5A8; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x5AC; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x5B0; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x5B4; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x5B8; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x5B9; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x5BC; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x5C0; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x5C4; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Spin {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierQuarantineVData {
                constexpr std::ptrdiff_t m_BubbleParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BubbleExplodeParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SilenceModifier = 0x7B8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Neutral_Debuff_Pushback {
            }
            // Parent: C_Citadel_BreakblePropPickup
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iGoldReward (int)
            namespace C_Citadel_BreakblePropGoldPickup {
                constexpr std::ptrdiff_t m_iGoldReward = 0xB58; // int32
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_Item_Intensifying_Clip {
                constexpr std::ptrdiff_t m_flSpinUpTime = 0xCC0; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BreakablePropFireRatePickup {
            }
            // Parent: C_EnvCubemap
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelViscousBallVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flPhysicsRadius = 0x108; // float32
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_HeadshotBooster_VData {
                constexpr std::ptrdiff_t m_HeadShotVictimSound = 0x1570; // CSoundEventName
                constexpr std::ptrdiff_t m_HeadShotConfirmationSound = 0x1580; // CSoundEventName
            }
            // Parent: C_NPC_Trooper
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_CCitadelPlayerClipComponent (CCitadelPlayerClipComponent::Storage_t)
            // NetworkVarNames: m_flFadeOutStart (GameTime_t)
            // NetworkVarNames: m_flFadeOutEnd (GameTime_t)
            namespace C_NPC_TrooperBoss {
                constexpr std::ptrdiff_t m_CCitadelPlayerClipComponent = 0x14D8; // CCitadelPlayerClipComponent
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x1504; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeOutEnd = 0x1508; // GameTime_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_ThrowSand {
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityBouncePadVData {
                constexpr std::ptrdiff_t m_BounceModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AllyBounceModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SpeedOnLandModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_NoBounceModifier = 0x1558; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_RocketBarrageVolley {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_bUsingThisMelee (bool)
            // NetworkVarNames: m_bUsingMeleeTagActive (bool)
            // NetworkVarNames: m_bHitWithThisAttack (bool)
            // NetworkVarNames: m_flLastActivateTime (GameTime_t)
            // NetworkVarNames: m_flNextAttackAllowedTime (GameTime_t)
            // NetworkVarNames: m_flAttackTriggeredTime (GameTime_t)
            namespace CCitadel_Ability_Melee_Base {
                constexpr std::ptrdiff_t m_bUsingThisMelee = 0xC70; // bool
                constexpr std::ptrdiff_t m_bUsingMeleeTagActive = 0xC71; // bool
                constexpr std::ptrdiff_t m_bHitWithThisAttack = 0xC72; // bool
                constexpr std::ptrdiff_t m_flLastActivateTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_flNextAttackAllowedTime = 0xC78; // GameTime_t
                constexpr std::ptrdiff_t m_flAttackTriggeredTime = 0xC7C; // GameTime_t
            }
            // Parent: CCitadel_Modifier_ChainLightningEffect
            // Field count: 0
            namespace CCitadel_Modifier_PowerSurge_ChainLightning {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_FullSpectrumDamage {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x558; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x560; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x570; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x574; // bool
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_TechDamagePulse {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Tier3BossInvuln {
            }
            // Parent: C_Breakable
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_PristineEmblem_VData {
                constexpr std::ptrdiff_t m_TracerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ParticleModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CPathSimpleAPI {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_CitadelShopTunnelTrigger {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_ModDisruptor {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_FrenzyAura {
            }
            // Parent: CitadelAbilityVData
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Nano_Pounce_VData {
                constexpr std::ptrdiff_t m_LeapModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ActiveBuff = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AttackParticle = 0x1558; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlashParticle = 0x1638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x1718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSlowParticle = 0x17F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PrimaryHitParticle = 0x18D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AttackSound = 0x19B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strExplodeSound = 0x19C8; // CSoundEventName
                constexpr std::ptrdiff_t m_flPreArrivalAttackStartTime = 0x19D8; // float32
                constexpr std::ptrdiff_t m_flAllyMinTargetRange = 0x19DC; // float32
                constexpr std::ptrdiff_t m_flTargetVerticalOffset = 0x19E0; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHornetChainVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_ChainModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DisarmModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_hProjectile (EHANDLE)
            // NetworkVarNames: m_flArrowSpeed (float)
            // NetworkVarNames: m_flSnapAnglesBackTime (GameTime_t)
            // NetworkVarNames: m_nBonusTechPower (int)
            namespace CCitadel_Ability_GuidedArrow {
                constexpr std::ptrdiff_t m_hProjectile = 0xC78; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flArrowSpeed = 0xC7C; // float32
                constexpr std::ptrdiff_t m_flSnapAnglesBackTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_nBonusTechPower = 0xC84; // int32
                constexpr std::ptrdiff_t m_flCastTime = 0xC88; // GameTime_t
                constexpr std::ptrdiff_t m_bNeedsExplosion = 0xC8C; // bool
                constexpr std::ptrdiff_t m_vProjectileRemovedOrigin = 0xC90; // Vector
                constexpr std::ptrdiff_t m_angCasterAnglesAtCastTime = 0xC9C; // QAngle
                constexpr std::ptrdiff_t m_flTravelDistance = 0xCA8; // float32
                constexpr std::ptrdiff_t m_bInKillFlow = 0xCAC; // bool
                constexpr std::ptrdiff_t m_flProjectileTurnVel = 0xCB0; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_FireBombVData {
                constexpr std::ptrdiff_t m_ChargeParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GroundParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Ability_Melee_Base
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_flParryWindowEndTime (GameTime_t)
            // NetworkVarNames: m_flNextParryTime (GameTime_t)
            // NetworkVarNames: m_flStateStartTime (GameTime_t)
            // NetworkVarNames: m_flDashStartTime (GameTime_t)
            // NetworkVarNames: m_eCurrentAttackState (EMeleeHold_AttackState)
            // NetworkVarNames: m_eCurrentAttackType (EMeleeHold_AttackType)
            // NetworkVarNames: m_vAirDashDir (Vector)
            namespace CCitadel_Ability_HoldMelee {
                constexpr std::ptrdiff_t m_flParryWindowEndTime = 0xCF0; // GameTime_t
                constexpr std::ptrdiff_t m_flNextParryTime = 0xCF4; // GameTime_t
                constexpr std::ptrdiff_t m_flStateStartTime = 0xCF8; // GameTime_t
                constexpr std::ptrdiff_t m_flDashStartTime = 0xCFC; // GameTime_t
                constexpr std::ptrdiff_t m_eCurrentAttackState = 0xD00; // EMeleeHold_AttackState
                constexpr std::ptrdiff_t m_eCurrentAttackType = 0xD04; // EMeleeHold_AttackType
                constexpr std::ptrdiff_t m_vAirDashDir = 0xD08; // Vector
                constexpr std::ptrdiff_t m_bCreatedChargeEffects = 0xD14; // bool
                constexpr std::ptrdiff_t m_angForced = 0xD18; // QAngle
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierApexWatcherVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 22
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityJumpVData {
                constexpr std::ptrdiff_t m_flShootingLockoutAfterJump = 0x1528; // float32
                constexpr std::ptrdiff_t m_DashJumpParticle = 0x1530; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AirJumpParticle = 0x1610; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WallJumpParticle = 0x16F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AirJumpExecutedSound = 0x17D0; // CSoundEventName
                constexpr std::ptrdiff_t m_flMantleRefundWindow = 0x17E0; // float32
                constexpr std::ptrdiff_t m_flZiplineRefundWindow = 0x17E4; // float32
                constexpr std::ptrdiff_t m_flLateJumpGraceWindow = 0x17E8; // float32
                constexpr std::ptrdiff_t m_flMaxSpeedDelta = 0x17EC; // float32
                constexpr std::ptrdiff_t m_strDashJumpActivate = 0x17F0; // CSoundEventName
                constexpr std::ptrdiff_t m_flDashJumpStartTime = 0x1800; // float32
                constexpr std::ptrdiff_t m_flDashJumpEndTime = 0x1804; // float32
                constexpr std::ptrdiff_t m_flDashJumpDistanceInMeters = 0x1808; // float32
                constexpr std::ptrdiff_t m_flDashJumpVerticalSpeed = 0x1810; // float32
                constexpr std::ptrdiff_t m_flDashJumpMissMaxSpeed = 0x1814; // float32
                constexpr std::ptrdiff_t m_flDashJumpMantleDisableTime = 0x1818; // float32
                constexpr std::ptrdiff_t m_WallJumpExecutedSound = 0x1820; // CSoundEventName
                constexpr std::ptrdiff_t m_flCollidedWallMaxDist = 0x1830; // float32
                constexpr std::ptrdiff_t m_flRemapSpeedToWallJumpVelocityDist = 0x1834; // CRemapFloat
                constexpr std::ptrdiff_t m_flWallJumpNormalSpeed = 0x1844; // float32
                constexpr std::ptrdiff_t m_WallJumpAirDragCurve = 0x1848; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_flMaxWallYawOffset = 0x1888; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Objective_BulletReistVData {
                constexpr std::ptrdiff_t m_BulletResist = 0x5F8; // float32
                constexpr std::ptrdiff_t m_BulletResistReductionPerHero = 0x5FC; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_nCritHitGroup (HitGroup_t)
            // NetworkVarNames: m_nBodyGroup (int)
            // NetworkVarNames: m_bPermanentlyBroken (bool)
            // NetworkVarNames: m_nBrokenBodygroupIndex (int)
            namespace WeakPoint_t {
                constexpr std::ptrdiff_t m_bRegistered = 0x3C; // bool
                constexpr std::ptrdiff_t m_hOuter = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nCritHitGroup = 0x44; // HitGroup_t
                constexpr std::ptrdiff_t m_nBodyGroup = 0x48; // int32
                constexpr std::ptrdiff_t m_bPermanentlyBroken = 0x4C; // bool
                constexpr std::ptrdiff_t m_nBrokenBodygroupIndex = 0x50; // int32
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_hEnemy (EHANDLE)
            namespace C_NPC_SimpleAnimatingAI {
                constexpr std::ptrdiff_t m_hEnemy = 0xB40; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_Empty {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Slork_Raging_Current_Countdown {
                constexpr std::ptrdiff_t m_hRingEffect = 0xC0; // ParticleIndex_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Mirage_DjinnsReach_VData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ChannelParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChannelStartParticle = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShootParticle = 0x16F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SphereParticle = 0x17D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x18B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_IcePathVData {
                constexpr std::ptrdiff_t m_IcePathModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flMomentumDecayRate = 0x1538; // float32
                constexpr std::ptrdiff_t m_flMomentumWeight = 0x153C; // float32
                constexpr std::ptrdiff_t m_flMaxPitchChange = 0x1540; // float32
                constexpr std::ptrdiff_t m_flMaxPitchUp = 0x1544; // float32
                constexpr std::ptrdiff_t m_flMaxPitchDown = 0x1548; // float32
                constexpr std::ptrdiff_t m_flMaxHeight = 0x154C; // float32
                constexpr std::ptrdiff_t m_flForwardAngleBias = 0x1550; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_HealthSwapVData {
                constexpr std::ptrdiff_t m_SwapParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SwapModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PreCastModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_SiphonBullets_RestoreHealth {
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_EscalatingExposureProcWatcher {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_CanDamageMidBoss {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_SingleTargetStun {
            }
            // Parent: C_BaseTrigger
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_flInitialRadius (float)
            // NetworkVarNames: m_flEndRadius (float)
            // NetworkVarNames: m_flProgress (float)
            // NetworkVarNames: m_flCaptureTime (float)
            // NetworkVarNames: m_hUnlockPrereq (EHANDLE)
            // NetworkVarNames: m_bAvailable (bool)
            // NetworkVarNames: m_bIsBeingCaptured (bool)
            // NetworkVarNames: m_bIsBeingBlocked (bool)
            namespace CCitadelControlPointTrigger {
                constexpr std::ptrdiff_t m_flInitialRadius = 0x838; // float32
                constexpr std::ptrdiff_t m_flEndRadius = 0x83C; // float32
                constexpr std::ptrdiff_t m_flProgress = 0x840; // float32
                constexpr std::ptrdiff_t m_flCaptureTime = 0x844; // float32
                constexpr std::ptrdiff_t m_hUnlockPrereq = 0x848; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bAvailable = 0x84C; // bool
                constexpr std::ptrdiff_t m_bIsBeingCaptured = 0x84D; // bool
                constexpr std::ptrdiff_t m_bIsBeingBlocked = 0x84E; // bool
                constexpr std::ptrdiff_t m_flLastTouchedTime = 0x858; // GameTime_t
                constexpr std::ptrdiff_t m_vecBeamTarget = 0x85C; // Vector
                constexpr std::ptrdiff_t m_vecBeamStart = 0x868; // Vector
                constexpr std::ptrdiff_t m_nFXProgressBeam = 0x874; // ParticleIndex_t
                constexpr std::ptrdiff_t m_strUnlockPrereq = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strBeamStart = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_strBeamTarget = 0x888; // CUtlSymbolLarge
            }
            // Parent: CCitadelModifierVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierLastBreathVData {
                constexpr std::ptrdiff_t m_ShieldParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BulletShieldHitParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TechShieldHitParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStartSound = 0x978; // CSoundEventName
                constexpr std::ptrdiff_t m_ExplodeSound = 0x988; // CSoundEventName
                constexpr std::ptrdiff_t m_flShieldImpactEffectDuration = 0x998; // float32
                constexpr std::ptrdiff_t m_BulletShieldImpactModifier = 0x9A0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TechShieldImpactModifier = 0x9B0; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
                constexpr std::ptrdiff_t m_strLaserHitSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserStartSound = 0x608; // CSoundEventName
                constexpr std::ptrdiff_t m_strLaserLoopSound = 0x618; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_PsychicDagger_MakeDaggers {
                constexpr std::ptrdiff_t m_nSatVolumeIndex = 0xC0; // SatVolumeIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Bull_Leap_Boosting_CrashVData {
                constexpr std::ptrdiff_t m_DragModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CrashTrailParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flCollideRadius = 0x6E8; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 39
            //
            // Metadata:
            // NetworkVarNames: m_flNextPrimaryAttack (GameTime_t)
            // NetworkVarNames: m_iClip (int32)
            // NetworkVarNames: m_iBonusClip (int32)
            // NetworkVarNames: m_flSpreadPenalty (float)
            // NetworkVarNames: m_flZoomTime (GameTime_t)
            // NetworkVarNames: m_flZoomOutTime (GameTime_t)
            // NetworkVarNames: m_iSpreadIndex (int8)
            // NetworkVarNames: m_nShotRecoilIndex (int16)
            // NetworkVarNames: m_flNextShotRecoilRecoveryTime (GameTime_t)
            // NetworkVarNames: m_bIsZoomed (bool)
            // NetworkVarNames: m_nBurstShotsRemaining (uint8)
            // NetworkVarNames: m_nShotNumber (uint32)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_bSingleShotReloadFirstBullet (bool)
            // NetworkVarNames: m_reloadQueuedStartTime (GameTime_t)
            // NetworkVarNames: m_flReloadAvailableTime (GameTime_t)
            // NetworkVarNames: m_bCanActiveReload (bool)
            // NetworkVarNames: m_flLastAttackTime (GameTime_t)
            // NetworkVarNames: m_flNextAttackDelayStartTime (GameTime_t)
            // NetworkVarNames: m_flNextAttackDelayEndTime (GameTime_t)
            // NetworkVarNames: m_flAttackDelayPauseTotalTime (float)
            // NetworkVarNames: m_flAttackDelayPauseEndTime (GameTime_t)
            // NetworkVarNames: m_eNextAttackDelayReason (ENextAttackDelayReason_t)
            // NetworkVarNames: m_bInputPressedWhileSelected (bool)
            // NetworkVarNames: m_eActiveFireMode (EFireMode_t)
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
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SleepBombVData {
                constexpr std::ptrdiff_t m_BombParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeDamageFriendlyParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeDamageEnemyParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SleepModifier = 0x898; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x8A8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_StompDebuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Surging_PowerVData {
                constexpr std::ptrdiff_t m_BerserkerSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_ModifierActiveDisplay = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Neutral_Debuff_PushbackVData {
                constexpr std::ptrdiff_t m_flPushSpeed = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flPushRange = 0x5FC; // float32
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x570; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x57C; // Vector
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Projectile_Mirage_Tornado {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySlorkScaldVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierAirLiftGrabVData {
                constexpr std::ptrdiff_t m_GrabEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flLiftHorizontal = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flLiftHeight = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flFollowDampingFactor = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFollowDistance = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flAllyGrabCancelTime = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flAllyPossibleStuckDistance = 0x6EC; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
                constexpr std::ptrdiff_t m_vHoldOffset = 0xC0; // Vector
                constexpr std::ptrdiff_t m_flLastTouchTime = 0xCC; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_FissureWall {
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_InstantReloadVData {
                constexpr std::ptrdiff_t m_ReloadParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_TeleportToObjective {
                constexpr std::ptrdiff_t m_vDest = 0xC0; // Vector
                constexpr std::ptrdiff_t m_angDestAngles = 0xCC; // QAngle
                constexpr std::ptrdiff_t m_vDestVelocity = 0xD8; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PlayerDisconnected {
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace C_InfoPortalLink {
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (ice_path_shard_model_desc_t)
            // NetworkVarNames: m_qForward (QAngle)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flEndTime (GameTime_t)
            namespace C_Citadel_Ice_Path_Shard_Physics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x830; // ice_path_shard_model_desc_t
                constexpr std::ptrdiff_t m_qForward = 0x868; // QAngle
                constexpr std::ptrdiff_t m_flStartTime = 0x874; // GameTime_t
                constexpr std::ptrdiff_t m_flEndTime = 0x878; // GameTime_t
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_UtilityUpgrade_RocketBoots {
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityPerchedPredatorVData {
                constexpr std::ptrdiff_t m_ExplodeBaseParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeFriendlyParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeEnemyParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x17C8; // CSoundEventName
                constexpr std::ptrdiff_t m_ModifierDragEnemy = 0x17D8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flOnHitDetonateTimer = 0x17E8; // float32
                constexpr std::ptrdiff_t m_flTraceTravelRadius = 0x17EC; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_UppercutClipSize {
                constexpr std::ptrdiff_t m_nPreClipSize = 0xF8; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SpeedBoostVData {
                constexpr std::ptrdiff_t m_flMoveSpeedBoost = 0x5F8; // float32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseTriggerAbilityVData {
                constexpr std::ptrdiff_t m_AbilityToTrigger = 0x1528; // CSubclassName<4>
                constexpr std::ptrdiff_t m_flMinCancelTime = 0x1538; // float32
                constexpr std::ptrdiff_t m_eHintFeatureToMarkUsedOnTrigger = 0x153C; // ECitadelHintFeature
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_flEndDistance (float)
            // NetworkVarNames: m_flStartDistance (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogHeightWidth (float)
            // NetworkVarNames: m_flFogHeightEnd (float)
            // NetworkVarNames: m_flFogHeightStart (float)
            // NetworkVarNames: m_flFogHeightExponent (float)
            // NetworkVarNames: m_flLODBias (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_nCubemapSourceType (int)
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_iszSkyEntity (string_t)
            // NetworkVarNames: m_hFogCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bHasHeightFogEnd (bool)
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x558; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x560; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x564; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x568; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x56C; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x570; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x574; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x578; // float32
                constexpr std::ptrdiff_t m_bActive = 0x57C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x57D; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x580; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x584; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x588; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x590; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x598; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x5A0; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x5A1; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGenericPerson2VData {
            }
            // Parent: CCitadel_Modifier_Sleep
            // Field count: 0
            namespace CCitadel_Modifier_PoisonBullet_Poisoned {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Afterburn_DOT_VData {
                constexpr std::ptrdiff_t m_sAfterburnParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Fervor_Bonuses {
                constexpr std::ptrdiff_t m_nBonusesParticle = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifierAura
            // Field count: 3
            namespace CCitadel_Modifier_Rutger_Pulse_Aura {
                constexpr std::ptrdiff_t m_flStartRadius = 0xE0; // float32
                constexpr std::ptrdiff_t m_flEndRadius = 0xE4; // float32
                constexpr std::ptrdiff_t m_flSpreadDuration = 0xE8; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 1
            namespace CCitadel_ArmorUpgrade_DoubleJump {
                constexpr std::ptrdiff_t m_nTickJumped = 0xC88; // int32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PayloadCarrier {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Dust_Storm_Aura_Apply {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierChargedTacklePrepareVData {
                constexpr std::ptrdiff_t m_PrepareParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flParryStartTime (GameTime_t)
            // NetworkVarNames: m_bAttackParried (bool)
            // NetworkVarNames: m_flParrySuccessTime (GameTime_t)
            namespace CCitadel_Ability_MeleeParry {
                constexpr std::ptrdiff_t m_flParryStartTime = 0xC70; // GameTime_t
                constexpr std::ptrdiff_t m_bAttackParried = 0xC74; // bool
                constexpr std::ptrdiff_t m_flParrySuccessTime = 0xC78; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_BerserkerDamageStack {
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProc
            // Field count: 1
            namespace CCitadel_Modifier_ExplosiveBullets {
                constexpr std::ptrdiff_t m_BuffedShotId = 0x1F8; // ShotID_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_SourceAbilityID (AbilityID_t)
            // NetworkVarNames: m_TargetAbilityID (AbilityID_t)
            // NetworkVarNames: m_eValType (EModifierValue)
            // NetworkVarNames: m_flValue (float)
            namespace DynamicAbilityValues_t {
                constexpr std::ptrdiff_t m_SourceAbilityID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_TargetAbilityID = 0x34; // CUtlStringToken
                constexpr std::ptrdiff_t m_eValType = 0x38; // EModifierValue
                constexpr std::ptrdiff_t m_flValue = 0x3C; // float32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_MetalSkin {
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Spinning_BladeVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CatchIndicator = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CatchParticle = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strThrowSound = 0x16F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strReturnSound = 0x1708; // CSoundEventName
                constexpr std::ptrdiff_t m_strCatchSound = 0x1718; // CSoundEventName
                constexpr std::ptrdiff_t m_strFailSound = 0x1728; // CSoundEventName
                constexpr std::ptrdiff_t m_strHitSound = 0x1738; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Tengu_AirLiftVData {
                constexpr std::ptrdiff_t m_FlyingModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_GrabModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HoldBombModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DroppedBuffModifier = 0x1558; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplodingAllyModifier = 0x1568; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AoEModifier = 0x1578; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_InitialExplodeParticle = 0x1588; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HoldBombEffect = 0x1668; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x1748; // CSoundEventName
                constexpr std::ptrdiff_t m_flAirDrag = 0x1758; // float32
                constexpr std::ptrdiff_t m_flMaxFallSpeed = 0x175C; // float32
                constexpr std::ptrdiff_t m_flTargetAirSpeedFast = 0x1760; // float32
                constexpr std::ptrdiff_t m_flTargetAirSpeedBase = 0x1764; // float32
                constexpr std::ptrdiff_t m_flAcceleration = 0x1768; // float32
                constexpr std::ptrdiff_t m_flDecceleration = 0x176C; // float32
                constexpr std::ptrdiff_t m_flAirSideSpeedPercent = 0x1770; // float32
                constexpr std::ptrdiff_t m_flBoostTime = 0x1774; // float32
                constexpr std::ptrdiff_t m_flBoostSpeedUp = 0x1778; // float32
                constexpr std::ptrdiff_t m_flMinFlyHeight = 0x177C; // float32
                constexpr std::ptrdiff_t m_flMaxFlyHeight = 0x1780; // float32
                constexpr std::ptrdiff_t m_flMaxPitchUp = 0x1784; // float32
                constexpr std::ptrdiff_t m_flMaxPitchDown = 0x1788; // float32
                constexpr std::ptrdiff_t m_flAllyDelayedBoostTime = 0x178C; // float32
                constexpr std::ptrdiff_t m_flChannelingAirDrag = 0x1790; // float32
                constexpr std::ptrdiff_t m_flChannelingMaxFallSpeed = 0x1794; // float32
                constexpr std::ptrdiff_t m_flBombReleaseSpeed = 0x1798; // float32
                constexpr std::ptrdiff_t m_flBombReleasePitch = 0x179C; // float32
                constexpr std::ptrdiff_t m_flBombDropReleaseOffset = 0x17A0; // float32
                constexpr std::ptrdiff_t m_flHoldBombOffsetX = 0x17A4; // float32
                constexpr std::ptrdiff_t m_flHoldBombOffsetY = 0x17A8; // float32
                constexpr std::ptrdiff_t m_flHoldBombOffsetZ = 0x17AC; // float32
                constexpr std::ptrdiff_t m_flAnglePitchBias = 0x17B0; // float32
                constexpr std::ptrdiff_t m_flTrackAmount = 0x17B4; // float32
                constexpr std::ptrdiff_t m_flMoveCollideSpeed = 0x17B8; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
                constexpr std::ptrdiff_t m_BeamParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DamageParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Hero_Clone {
                constexpr std::ptrdiff_t m_bMimicOwner = 0xC0; // bool
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
            // NetworkVarNames: m_vecMins (Vector)
            // NetworkVarNames: m_vecMaxs (Vector)
            // NetworkVarNames: m_usSolidFlags (uint8)
            // NetworkVarNames: m_nSolidType (SolidType_t)
            // NetworkVarNames: m_triggerBloat (uint8)
            // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
            // NetworkVarNames: m_CollisionGroup (uint8)
            // NetworkVarNames: m_nEnablePhysics (uint8)
            // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
            // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
            // NetworkVarNames: m_vCapsuleCenter1 (Vector)
            // NetworkVarNames: m_vCapsuleCenter2 (Vector)
            // NetworkVarNames: m_flCapsuleRadius (float)
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
                constexpr std::ptrdiff_t m_AuraParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Targetdummy_Inherent {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityShivDeferDamageVData {
                constexpr std::ptrdiff_t m_ActiveCastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flDeferredDamageApplicationInterval = 0x1608; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bebop_Hook_BulletAmp {
            }
            // Parent: CCitadel_Modifier_StatStealBase
            // Field count: 0
            namespace CCitadel_Modifier_Arcane_Eater_Watcher {
            }
            // Parent: CTier3BossAbility
            // Field count: 0
            namespace CCitadel_Ability_Weapon_BossTier3 {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseLockonAbilityVData {
                constexpr std::ptrdiff_t m_TargetModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_strApplyLockonStack = 0x1538; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Synth_Grasp_Caster {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            namespace CCitadel_Ability_RiotProtocol {
                constexpr std::ptrdiff_t m_bActive = 0xC70; // bool
            }
            // Parent: CCitadel_Modifier_Intrinsic_BaseVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ThrowSandProjectileVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Intimidated_Debuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Astro_Rifle_DebuffVData {
                constexpr std::ptrdiff_t m_SlowModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strTargetHitSound = 0x608; // CSoundEventName
            }
            // Parent: CitadelItemVData
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Upgrade_MagicCarpetVData {
                constexpr std::ptrdiff_t m_SummonParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FlyingCarpetModifier = 0x1650; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SummonFlyingCarpetModifier = 0x1660; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SummonFlyingCarpetVisualModifier = 0x1670; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_FlyingCarpetVisualModifier = 0x1680; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ShieldModifier = 0x1690; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flSummonVisualDuration = 0x16A0; // float32
                constexpr std::ptrdiff_t m_flBurstSpeedBonus = 0x16A4; // float32
                constexpr std::ptrdiff_t m_flBurstSpeedMin = 0x16A8; // float32
                constexpr std::ptrdiff_t m_flBurstSpeedDuration = 0x16AC; // float32
                constexpr std::ptrdiff_t m_flMinDistanceAboveGround = 0x16B0; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_FullSpectrum {
            }
            // Parent: CCitadel_Modifier_Tier3Boss_Base
            // Field count: 18
            namespace CCitadel_Modifier_Tier3Boss_LaserBeam {
                constexpr std::ptrdiff_t m_flSoundStartTime = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_vStart = 0xD0; // Vector
                constexpr std::ptrdiff_t m_vEnd = 0xDC; // Vector
                constexpr std::ptrdiff_t m_vPrevEnd = 0xE8; // Vector
                constexpr std::ptrdiff_t m_flAngleBetweenTrace = 0xF4; // float32
                constexpr std::ptrdiff_t m_flPlayerDamagePerTick = 0xF8; // float32
                constexpr std::ptrdiff_t m_flNPCDamagePerTick = 0xFC; // float32
                constexpr std::ptrdiff_t m_flNextDamageTick = 0x100; // GameTime_t
                constexpr std::ptrdiff_t m_vecEntitiesHit = 0x108; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flDamageTickRate = 0x120; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x124; // GameTime_t
                constexpr std::ptrdiff_t m_bSweepRightFirst = 0x128; // bool
                constexpr std::ptrdiff_t m_vecBeamTarget = 0x12C; // Vector
                constexpr std::ptrdiff_t m_flLastBeamUpdateTime = 0x138; // GameTime_t
                constexpr std::ptrdiff_t m_vecEnemyPosition = 0x13C; // Vector
                constexpr std::ptrdiff_t m_nTrackingIndex = 0x148; // int32
                constexpr std::ptrdiff_t m_bPreviewMode = 0x14C; // bool
                constexpr std::ptrdiff_t m_hAttachment = 0x14D; // AttachmentHandle_t
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_vecProviders (EHANDLE)
            // NetworkVarNames: m_nDisabledGroups (uint32)
            // NetworkVarNames: m_bvEnabledStateMask (uint32)
            // NetworkVarNames: m_bvDisabledStateMask (uint32)
            // NetworkVarNames: m_bvEnabledPredictedStateMask (uint32)
            namespace CModifierProperty {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_hOwner = 0x30; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nProviderVisitedFlags = 0x194; // uint8
                constexpr std::ptrdiff_t m_bModifierStatesDirty = 0x195; // bool
                constexpr std::ptrdiff_t m_bPredictedOwner = 0x196; // bool
                constexpr std::ptrdiff_t m_iLockRefCount = 0x197; // int8
                constexpr std::ptrdiff_t m_hHandle = 0x198; // ModifierPropRuntimeHandle_t
                constexpr std::ptrdiff_t m_nBroadcastEventListenerMask = 0x19C; // uint32
                constexpr std::ptrdiff_t m_vecProviders = 0x1A8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nDisabledGroups = 0x1C0; // uint32
                constexpr std::ptrdiff_t m_bvEnabledStateMask = 0x1C4; // uint32[6]
                constexpr std::ptrdiff_t m_bvDisabledStateMask = 0x1DC; // uint32[6]
                constexpr std::ptrdiff_t m_bvEnabledPredictedStateMask = 0x1F4; // uint32[6]
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flForwardSpeed (float)
            // NetworkVarNames: m_hOwnerPawn (CHandle<CBaseEntity>)
            namespace C_NPC_NanoRollermine {
                constexpr std::ptrdiff_t m_flForwardSpeed = 0x14A8; // float32
                constexpr std::ptrdiff_t m_hOwnerPawn = 0x14AC; // CHandle<C_BaseEntity>
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace C_NPC_HeroCloneTrooper {
                constexpr std::ptrdiff_t m_hOwner = 0x1490; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_TenguUrn_Aura {
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CGameModifier_OverrideTargetIdentifier {
                constexpr std::ptrdiff_t m_sTargetIdentifier = 0xC0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hTarget = 0xC8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_sAttachmentName = 0xD0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_hAttachment = 0xD8; // AttachmentHandle_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_FealtyTarget {
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_RocketBarrageVData {
                constexpr std::ptrdiff_t m_BarrageModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_MoveSlowModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x1628; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSequenceSelected = 0x1638; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_flMoveSpeedReductionPct = 0x16B8; // float32
                constexpr std::ptrdiff_t m_flHeightTestDistance = 0x16BC; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_IncendiaryDebuff {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 39
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_XPOrbVData {
                constexpr std::ptrdiff_t m_bIsObjective = 0x28; // bool
                constexpr std::ptrdiff_t m_strOrbClaimed = 0x30; // CSoundEventName
                constexpr std::ptrdiff_t m_strOrbClaimedTeammate = 0x40; // CSoundEventName
                constexpr std::ptrdiff_t m_strOrbDenied = 0x50; // CSoundEventName
                constexpr std::ptrdiff_t m_strOrbDeniedPlayer = 0x60; // CSoundEventName
                constexpr std::ptrdiff_t m_sOrbModel = 0x70; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sFriendlyGlowParticle = 0x150; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sEnemyGlowParticle = 0x230; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sGoldReceivedParticle = 0x310; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sFriendlyOrbDeniedParticle = 0x3F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sEnemyOrbDeniedParticle = 0x4D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sFriendlyOrbEarnedParticle = 0x5B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sEnemyOrbEarnedParticle = 0x690; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flOrbSpawnDelayMin = 0x770; // float32
                constexpr std::ptrdiff_t m_flOrbSpawnDelayMax = 0x774; // float32
                constexpr std::ptrdiff_t m_flOrbSpawnOffsetZ = 0x778; // float32
                constexpr std::ptrdiff_t m_flOrbSpawnOffsetRandomXYZ = 0x77C; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x780; // float32
                constexpr std::ptrdiff_t m_flLateralSpeedMin = 0x784; // float32
                constexpr std::ptrdiff_t m_flLateralSpeedMax = 0x788; // float32
                constexpr std::ptrdiff_t m_flLateralMoveDuration = 0x78C; // float32
                constexpr std::ptrdiff_t m_flUpSpeedMin = 0x790; // float32
                constexpr std::ptrdiff_t m_flUpSpeedMax = 0x794; // float32
                constexpr std::ptrdiff_t m_flBurstSpeedMultiplier = 0x798; // float32
                constexpr std::ptrdiff_t m_flBurstSpeedDuration = 0x79C; // float32
                constexpr std::ptrdiff_t m_flOscillateFrequency = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flLifeTime = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flCollisionRadius = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flInvulDuration = 0x7AC; // float32
                constexpr std::ptrdiff_t m_bUseKillerPlaneOffsets = 0x7B0; // bool
                constexpr std::ptrdiff_t m_flKillerPlaneOffset = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneHorizontalDecayRate = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneHorizontalSpeedX = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneHorizontalSpeedY = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneVerticalSpeed = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneSpeedNoise = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneLaunchOffset = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flKillerPlaneLaunchDelay = 0x7D0; // float32
                constexpr std::ptrdiff_t m_flOrbClaimWindow = 0x7D4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: C_PhysicsProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0xCD8; // shard_model_desc_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTargetdummy3VData {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flLandedTime (GameTime_t)
            // NetworkVarNames: m_bLanded (bool)
            // NetworkVarNames: m_bFalling (bool)
            // NetworkVarNames: m_bInStoneForm (bool)
            // NetworkVarNames: m_flStartHeight (float)
            namespace CCitadel_Ability_Tengu_StoneForm {
                constexpr std::ptrdiff_t m_flStartTime = 0xE30; // GameTime_t
                constexpr std::ptrdiff_t m_flLandedTime = 0xE34; // GameTime_t
                constexpr std::ptrdiff_t m_bLanded = 0xE38; // bool
                constexpr std::ptrdiff_t m_bFalling = 0xE39; // bool
                constexpr std::ptrdiff_t m_bInStoneForm = 0xE3A; // bool
                constexpr std::ptrdiff_t m_flStartHeight = 0xE3C; // float32
                constexpr std::ptrdiff_t m_nStoneFormEffect = 0xE40; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_CheatDeathImmunity {
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x830; // CLightComponent*
            }
            // Parent: CCitadelModifierAura
            // Field count: 1
            namespace CCitadel_Modifier_Cadence_Crescendo_AOE {
                constexpr std::ptrdiff_t m_nTicks = 0xE8; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbility_Synth_Grasp_VData {
                constexpr std::ptrdiff_t m_CasterModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_VictimModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BulletShieldModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bInFlight (bool)
            namespace CCitadel_Ability_Tokamak_DyingStar {
                constexpr std::ptrdiff_t m_nRollFXIndex = 0xC70; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bInFlight = 0xC74; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_SleepingVData {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_IceGrenade {
                constexpr std::ptrdiff_t m_vLaunchPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_qLaunchAngle = 0xC7C; // QAngle
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_ChargePullEnemy {
                constexpr std::ptrdiff_t m_vecOffsetDir = 0xC0; // Vector
                constexpr std::ptrdiff_t m_flTackleRadius = 0xCC; // float32
                constexpr std::ptrdiff_t m_flPullTargetSpeed = 0xD0; // float32
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_WeaponUpgrade_Headhunter_VData {
                constexpr std::ptrdiff_t m_HeadshotBuffModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HeadShotVictimSound = 0x1580; // CSoundEventName
                constexpr std::ptrdiff_t m_HeadShotConfirmationSound = 0x1590; // CSoundEventName
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_SlowingTech_Proc {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Quarantine {
            }
            // Parent: CCitadel_Modifier_ShieldTracker_Base
            // Field count: 0
            namespace CCitadel_Modifier_ShieldTracker_Bullet {
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_Base_Buildup {
                constexpr std::ptrdiff_t m_flLastBuildupAppliedTime = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_flDelayedDieTimeRemaining = 0xC4; // float32
                constexpr std::ptrdiff_t m_bInDelayTime = 0xC8; // bool
                constexpr std::ptrdiff_t m_flBuildUpDecayDelayFromWeaponCycleTime = 0xCC; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x558; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x55C; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x560; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x564; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x568; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x569; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityRocketLauncherVData {
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Warden_CrowdControl_Debuff {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flDashEndTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_bIsSpeedBursting (bool)
            namespace CCitadel_Ability_FlameDash {
                constexpr std::ptrdiff_t m_flDashEndTime = 0xC70; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_bIsSpeedBursting = 0xC88; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ArcaneEaterDebuffVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_Inhibitor_Proc {
            }
            // Parent: CitadelAbilityVData
            // Field count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Climb_RopeVData {
                constexpr std::ptrdiff_t m_flMinButtonHoldTimeToActivate = 0x1528; // float32
                constexpr std::ptrdiff_t m_flClimbSpeedUp = 0x152C; // float32
                constexpr std::ptrdiff_t m_flClimbSpeedDown = 0x1530; // float32
                constexpr std::ptrdiff_t m_flClimbSpeedDownMax = 0x1534; // float32
                constexpr std::ptrdiff_t m_flClimbDownAccelTime = 0x1538; // float32
                constexpr std::ptrdiff_t m_flLatchSpeed = 0x153C; // float32
                constexpr std::ptrdiff_t m_flAttachOffset = 0x1540; // float32
                constexpr std::ptrdiff_t m_flMinReconnectTime = 0x1544; // float32
                constexpr std::ptrdiff_t m_flSideMoveReduction = 0x1548; // float32
                constexpr std::ptrdiff_t m_flTopOffset = 0x154C; // float32
                constexpr std::ptrdiff_t m_flBottomOffset = 0x1550; // float32
                constexpr std::ptrdiff_t m_flTraceRadiusSize = 0x1554; // float32
                constexpr std::ptrdiff_t m_flStopTimeToShoot = 0x1558; // float32
                constexpr std::ptrdiff_t m_flJumpOffVertical = 0x155C; // float32
                constexpr std::ptrdiff_t m_flJumpOffHorizontal = 0x1560; // float32
                constexpr std::ptrdiff_t m_flDuckOffVertical = 0x1564; // float32
                constexpr std::ptrdiff_t m_flDuckOffHorizontal = 0x1568; // float32
                constexpr std::ptrdiff_t m_flActivateRange = 0x156C; // float32
                constexpr std::ptrdiff_t m_flJumpToRoofRayCheckDist = 0x1570; // float32
                constexpr std::ptrdiff_t m_flMinTimeToRoofCheck = 0x1574; // float32
                constexpr std::ptrdiff_t m_flTimeToHintRefresh = 0x1578; // float32
                constexpr std::ptrdiff_t m_iMaxHintCount = 0x157C; // float32
                constexpr std::ptrdiff_t m_flClimbRopeSlowDurationOnHit = 0x1580; // float32
                constexpr std::ptrdiff_t m_ClimbRopeSlowOnHitModifier = 0x1588; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: dirPrimary (Vector)
            // NetworkVarNames: colorPrimary (Color)
            // NetworkVarNames: colorSecondary (Color)
            // NetworkVarNames: colorPrimaryLerpTo (Color)
            // NetworkVarNames: colorSecondaryLerpTo (Color)
            // NetworkVarNames: start (float32)
            // NetworkVarNames: end (float32)
            // NetworkVarNames: farz (float32)
            // NetworkVarNames: maxdensity (float32)
            // NetworkVarNames: exponent (float32)
            // NetworkVarNames: HDRColorScale (float32)
            // NetworkVarNames: skyboxFogFactor (float32)
            // NetworkVarNames: skyboxFogFactorLerpTo (float32)
            // NetworkVarNames: startLerpTo (float32)
            // NetworkVarNames: endLerpTo (float32)
            // NetworkVarNames: maxdensityLerpTo (float32)
            // NetworkVarNames: lerptime (GameTime_t)
            // NetworkVarNames: duration (float32)
            // NetworkVarNames: blendtobackground (float32)
            // NetworkVarNames: scattering (float32)
            // NetworkVarNames: locallightscale (float32)
            // NetworkVarNames: enable (bool)
            // NetworkVarNames: blend (bool)
            // NetworkVarNames: m_bNoReflectionFog (bool)
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
                constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
                constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
                constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
                constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: C_CitadelProjectile
            // Field count: 2
            namespace C_Citadel_Projectile_Tier2Boss_RocketBarrage {
                constexpr std::ptrdiff_t m_nLaserParticleIndex = 0x8B8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x8BC; // Vector
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BreakablePropClipSizePickupVData {
                constexpr std::ptrdiff_t m_flClipSize = 0x5F8; // float32
                constexpr std::ptrdiff_t m_nClipCount = 0x5FC; // int32
                constexpr std::ptrdiff_t m_flFireRate = 0x600; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHatTrickVData {
                constexpr std::ptrdiff_t m_SpectatingProjectileParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HatTrickChannelParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x17C8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x17D8; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 7
            namespace CCitadel_Modifier_VoidSphere {
                constexpr std::ptrdiff_t m_bTeleported = 0xC0; // bool
                constexpr std::ptrdiff_t m_particleStart = 0xC4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_particleEnd = 0xC8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_particleTrail = 0xCC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_vecEndLocation = 0xD0; // Vector
                constexpr std::ptrdiff_t m_vecStartPosition = 0xDC; // Vector
                constexpr std::ptrdiff_t m_vecEndLocationCaster = 0xE8; // Vector
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ZiplineKnockdownImmuneVData {
                constexpr std::ptrdiff_t m_ZipLineEnemyKnockdownProtectionParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineSelfKnockdownProtectionParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineKnockdownProtectionStatusParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ZipLineKnockdownProtectionStatusEnemyParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
                constexpr std::ptrdiff_t m_nStartingClipSize = 0xC0; // int32
            }
            // Parent: CCitadelYamatoBaseVData
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelAbilityFlyingStrikeVData {
                constexpr std::ptrdiff_t m_flJumpFallSpeedMax = 0x1530; // float32
                constexpr std::ptrdiff_t m_flJumpAirDrag = 0x1534; // float32
                constexpr std::ptrdiff_t m_flJumpAirSpeedMax = 0x1538; // float32
                constexpr std::ptrdiff_t m_flDashSpeed = 0x153C; // float32
                constexpr std::ptrdiff_t m_flDashCloseEnoughToTarget = 0x1540; // float32
                constexpr std::ptrdiff_t m_flDashLockOntoTargetDist = 0x1544; // float32
                constexpr std::ptrdiff_t m_flTargetMinSpeedToStopChasing = 0x1548; // float32
                constexpr std::ptrdiff_t m_flVelocityTurnSpringStrength = 0x154C; // float32
                constexpr std::ptrdiff_t m_flAngleToSpeedScale = 0x1550; // CRemapFloat
                constexpr std::ptrdiff_t m_flAnimToStrikePointTime = 0x1560; // float32
                constexpr std::ptrdiff_t m_flGrappleShotFloatTime = 0x1564; // float32
                constexpr std::ptrdiff_t m_flGrappleShotDelayToFlyOnHit = 0x1568; // float32
                constexpr std::ptrdiff_t m_flGrappleSpeed = 0x156C; // float32
                constexpr std::ptrdiff_t m_SlowModifier = 0x1570; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_GrappleTargetModifier = 0x1580; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_WeaponBuffModifier = 0x1590; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_LeapParticle = 0x15A0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1680; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SlashParticle = 0x1760; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BulletGrappleTracerParticle = 0x1840; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyGrappleParticle = 0x1920; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDamageTarget = 0x1A00; // CSoundEventName
                constexpr std::ptrdiff_t m_strStartDash = 0x1A10; // CSoundEventName
                constexpr std::ptrdiff_t m_strStartAttack = 0x1A20; // CSoundEventName
                constexpr std::ptrdiff_t m_strGrappleHitTarget = 0x1A30; // CSoundEventName
                constexpr std::ptrdiff_t m_strGrappleHitWorld = 0x1A40; // CSoundEventName
                constexpr std::ptrdiff_t m_strGrappleHitNothing = 0x1A50; // CSoundEventName
                constexpr std::ptrdiff_t m_cameraSequenceFlying = 0x1A60; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraSequenceAttacking = 0x1AE0; // CitadelCameraOperationsSequence_t
            }
            // Parent: CCitadel_Modifier_Base
            // Field count: 0
            namespace CCitadel_Modifier_FlyingStrikeTarget {
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGooGrenadeVData {
                constexpr std::ptrdiff_t m_GooGrenadeImpactModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_GooGrenadePuddleAuraModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_GooGrenadeSkipParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GooGrenadeExplodeParticle = 0x1628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GrenadeHitImpactSound = 0x1708; // CSoundEventName
                constexpr std::ptrdiff_t m_GrenadeMissImpactSound = 0x1718; // CSoundEventName
                constexpr std::ptrdiff_t m_flMinRestitution = 0x1728; // float32
                constexpr std::ptrdiff_t m_flMaxRestitution = 0x172C; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_FireBombVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_ProgressBarModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_FireBombModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1638; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_Tier3Boss_Base
            // Field count: 0
            namespace CCitadel_Modifier_Tier3_DamagePulse {
            }
            // Parent: C_GameRulesProxy
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (C_CitadelGameRules*)
            namespace C_CitadelGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x558; // C_CitadelGameRules*
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timeLastUpdate (GameTime_t)
            // NetworkVarNames: m_vecFOWEntities (STrooperFOWEntity)
            namespace CCitadelTrooperMinimap {
                constexpr std::ptrdiff_t m_timeLastUpdate = 0x558; // GameTime_t
                constexpr std::ptrdiff_t m_vecFOWEntities = 0x560; // C_UtlVectorEmbeddedNetworkVar<STrooperFOWEntity>
            }
            // Parent: C_NPC_SimpleAnimatingAI
            // Field count: 1
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_vecUnitStatusOffset (Vector)
            namespace C_NPC_BaseDefenseSentry {
                constexpr std::ptrdiff_t m_vecUnitStatusOffset = 0xB48; // Vector
            }
            // Parent: C_DynamicProp
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_strDefaultSkin (CUtlString)
            // NetworkVarNames: m_strFriendlySkin (CUtlString)
            // NetworkVarNames: m_strEnemySkin (CUtlString)
            // NetworkVarNames: m_bIsWorld (bool)
            namespace C_Citadel_DynamicProp {
                constexpr std::ptrdiff_t m_nPlayerTeamEvent = 0xDF0; // int32
                constexpr std::ptrdiff_t m_strDefaultSkin = 0xDF8; // CUtlString
                constexpr std::ptrdiff_t m_strFriendlySkin = 0xE00; // CUtlString
                constexpr std::ptrdiff_t m_strEnemySkin = 0xE08; // CUtlString
                constexpr std::ptrdiff_t m_bIsWorld = 0xE10; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace C_BaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0xB50; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0xB68; // Vector
                constexpr std::ptrdiff_t m_blinktoggle = 0xB80; // bool
                constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xBE0; // int32
                constexpr std::ptrdiff_t m_CachedViewTarget = 0xBE4; // Vector
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0xBF0; // SceneEventId_t
                constexpr std::ptrdiff_t m_iBlink = 0xBF4; // int32
                constexpr std::ptrdiff_t m_blinktime = 0xBF8; // float32
                constexpr std::ptrdiff_t m_prevblinktoggle = 0xBFC; // bool
                constexpr std::ptrdiff_t m_iJawOpen = 0xC00; // int32
                constexpr std::ptrdiff_t m_flJawOpenAmount = 0xC04; // float32
                constexpr std::ptrdiff_t m_flBlinkAmount = 0xC08; // float32
                constexpr std::ptrdiff_t m_iMouthAttachment = 0xC0C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xC0D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xC0E; // bool
                constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xC28; // int32
                constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xC2C; // matrix3x4_t
                constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_PhonemeClasses = 0xC78; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_DPS_Aura {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace C_RagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x558; // int8
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Mirage_FireBeetles_VData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CasterModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1628; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTargetdummy4VData {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SleepDagger_Drowsy_VData {
                constexpr std::ptrdiff_t m_SleepModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierIcePathVData {
                constexpr std::ptrdiff_t m_FrontModel = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_BodyModel = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_GroundParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FloatingParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_IcePathBuffParticle = 0x978; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FriendlyAuraModifier = 0xA58; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BonusSpiritLingerModifier = 0xA68; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_VitalitySuppressor {
                constexpr std::ptrdiff_t m_flLastTickTime = 0xC0; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SlowVData {
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_hSkyMaterialLightingOnly (HMaterialStrong)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_vTintColor (Color)
            // NetworkVarNames: m_vTintColorLightingOnly (Color)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nFogType (int)
            // NetworkVarNames: m_flFogMinStart (float)
            // NetworkVarNames: m_flFogMinEnd (float)
            // NetworkVarNames: m_flFogMaxStart (float)
            // NetworkVarNames: m_flFogMaxEnd (float)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x830; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x838; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x840; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x841; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x845; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84C; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x850; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x854; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x858; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x85C; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x860; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x864; // bool
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Item_Discord_Aura_Enemy {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ItemPickupPunchable {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Slork_Riptide {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Slork_Raging_Current {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Rutger_CheatDeath {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Tokamak_Breach {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flGroundDashJumpStartTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flGroundDashJumpEndTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_bJumped (bool)
            // NetworkVarNames: m_bCanDashJump (bool)
            // NetworkVarNames: m_nDesiredAirJumpCount (int)
            // NetworkVarNames: m_nExecutedAirJumpCount (int)
            // NetworkVarNames: m_bInSlideJump (bool)
            // NetworkVarNames: m_nConsecutiveAirJumps (int8)
            // NetworkVarNames: m_nConsecutiveWallJumps (int8)
            namespace CCitadel_Ability_Jump {
                constexpr std::ptrdiff_t m_flLastTimeOnZipLine = 0xC70; // GameTime_t
                constexpr std::ptrdiff_t m_flLastOnGroundTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_flPhaseStartTime = 0xC78; // GameTime_t
                constexpr std::ptrdiff_t m_flJumpTime = 0xC7C; // GameTime_t
                constexpr std::ptrdiff_t m_LastJumpType = 0xC80; // EJumpType_t
                constexpr std::ptrdiff_t m_bShouldCreateAirJumpEffects = 0xC81; // bool
                constexpr std::ptrdiff_t m_flDoubleJumpFailTime = 0xC84; // GameTime_t
                constexpr std::ptrdiff_t m_eDoubleJumpFailReason = 0xC88; // ECitadelAbilityOrders
                constexpr std::ptrdiff_t m_vWallJumpNormalUsed = 0xC8C; // Vector
                constexpr std::ptrdiff_t m_flGroundDashJumpStartTime = 0xDB0; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flGroundDashJumpEndTime = 0xDC8; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_bJumped = 0xDE0; // bool
                constexpr std::ptrdiff_t m_bCanDashJump = 0xDE1; // bool
                constexpr std::ptrdiff_t m_nDesiredAirJumpCount = 0xDE4; // int32
                constexpr std::ptrdiff_t m_nExecutedAirJumpCount = 0xDE8; // int32
                constexpr std::ptrdiff_t m_bInSlideJump = 0xDEC; // bool
                constexpr std::ptrdiff_t m_nConsecutiveAirJumps = 0xDED; // int8
                constexpr std::ptrdiff_t m_nConsecutiveWallJumps = 0xDEE; // int8
                constexpr std::ptrdiff_t m_vLastWallCollidedWithNormal = 0xDF0; // Vector
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace CInfoTarget {
            }
            // Parent: CCitadel_Modifier_Intrinsic_Base
            // Field count: 0
            namespace CCitadel_Modifier_PredatorPrecision {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TechCleaveVData {
                constexpr std::ptrdiff_t m_CleavePlayerParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CleaveTrooperParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sVictimSound = 0x7B8; // CSoundEventName
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityPropertyMultiStats {
            }
            // Parent: C_BreakableProp
            // Field count: 23
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xCC8; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xCC9; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xCD0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xCF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xD20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xD48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xD70; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xD98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xDA0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xDA4; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xDA5; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xDA6; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xDA7; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xDA8; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xDA9; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xDAC; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xDB0; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xDB4; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xDB8; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0xDBC; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0xDC0; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0xDC4; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0xDD0; // Vector
            }
            // Parent: CitadelAbilityVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityChargedTackleVData {
                constexpr std::ptrdiff_t m_ChargePreviewParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChargePrepareModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ChargeActiveModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DragModifier = 0x1638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strHitSound = 0x1648; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SpilledBloodThinkerVData {
                constexpr std::ptrdiff_t m_SpilledBloodParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flTickRate = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x6DC; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Fervor {
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_AttachTarget {
                constexpr std::ptrdiff_t m_hTarget = 0xC0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecOffset = 0xC4; // Vector
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructableBuildingVData {
                constexpr std::ptrdiff_t m_iMaxHealthFinal = 0x28; // int32
                constexpr std::ptrdiff_t m_iMaxHealthGenerator = 0x2C; // int32
                constexpr std::ptrdiff_t m_ObjectiveRegen = 0x30; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BackdoorBulletResistModifier = 0x40; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CEntityComponent
            // Field count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // int32
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingIdle (bool)
            // NetworkVarNames: m_bShieldActive (bool)
            namespace C_NPC_TrooperNeutral {
                constexpr std::ptrdiff_t m_bPlayingIdle = 0x1490; // bool
                constexpr std::ptrdiff_t m_bShieldActive = 0x1491; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Chomp_LowHealth_GlowVData {
                constexpr std::ptrdiff_t m_strLocalStatusEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Modifier_StunnedVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierGravityLassoEnemyVData {
                constexpr std::ptrdiff_t m_LassoEffect = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Wraith_RapidFireVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TargetBuffSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_RapidFireModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hTouchedPlayeres (CHandle<C_BasePlayerPawn>)
            namespace C_ItemWeaponParts {
                constexpr std::ptrdiff_t m_hTouchedPlayeres = 0xB60; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProc
            // Field count: 0
            namespace CCitadel_Modifier_Mirage_SandPhantom_Passive {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityStackingDamageVData {
                constexpr std::ptrdiff_t m_StackingModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 2
            namespace CCitadel_Modifier_TechDamageProcWatcher {
                constexpr std::ptrdiff_t m_flNextProcTime = 0x168; // GameTime_t
                constexpr std::ptrdiff_t m_shotProced = 0x16C; // ShotID_t
            }
            // Parent: C_NPC_Boss_Tier2
            // Field count: 0
            namespace C_NPC_Boss_Tier2_Sidelanes {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Citadel_Projectile_BloodBomb {
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_Discord_AuraVData_Enemy {
                constexpr std::ptrdiff_t m_strAreaEffectEnemy = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAreaEffectFriendly = 0x718; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAreaEffectSelf = 0x7F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_vDistanceInnerMins (Vector)
            // NetworkVarNames: m_vDistanceInnerMaxs (Vector)
            // NetworkVarNames: m_vDistanceOuterMins (Vector)
            // NetworkVarNames: m_vDistanceOuterMaxs (Vector)
            // NetworkVarNames: m_nAABBDirection (int)
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x578; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x588; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x594; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x5A0; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x5AC; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x5B8; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Slork_RagingCurrentVData {
                constexpr std::ptrdiff_t m_CountdownModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_WaterAuraParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_hCurrentTarget (EHANDLE)
            // NetworkVarNames: m_vStartPosition (Vector)
            // NetworkVarNames: m_vDeparturePosition (Vector)
            // NetworkVarNames: m_flDepartureTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flArrivalTime (CCitadelAutoScaledTime)
            namespace CCitadel_Ability_Nano_Pounce {
                constexpr std::ptrdiff_t m_bActive = 0xED8; // bool
                constexpr std::ptrdiff_t m_hCurrentTarget = 0xEDC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vStartPosition = 0xEE0; // Vector
                constexpr std::ptrdiff_t m_vDeparturePosition = 0xEEC; // Vector
                constexpr std::ptrdiff_t m_flDepartureTime = 0xEF8; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flArrivalTime = 0xF10; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_vLastKnownSafePos = 0xF28; // Vector
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_AOERoot {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Wrecker_UltimateGrabEnemyVData {
                constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_EnemyHeroGrabEffect = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Synth_Barrage_Amp {
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHornetLeapVData {
                constexpr std::ptrdiff_t m_flChannelingAirDrag = 0x1528; // float32
                constexpr std::ptrdiff_t m_flChannelingMaxFallSpeed = 0x152C; // float32
                constexpr std::ptrdiff_t m_flVerticalMoveSpeedTarget = 0x1530; // float32
                constexpr std::ptrdiff_t m_flAirDrag = 0x1534; // float32
                constexpr std::ptrdiff_t m_LeapModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DustParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TrailParticle = 0x1628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x1708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_AOE_Tech_ShieldVData {
                constexpr std::ptrdiff_t m_DurationModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_GameRules
            // Field count: 0
            namespace C_SingleplayRules {
            }
            // Parent: CBaseAnimGraph
            // Field count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0xB40; // int32
                constexpr std::ptrdiff_t die = 0xB44; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0xB48; // float32
                constexpr std::ptrdiff_t x = 0xB4C; // float32
                constexpr std::ptrdiff_t y = 0xB50; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0xB54; // float32
                constexpr std::ptrdiff_t bounceFactor = 0xB58; // float32
                constexpr std::ptrdiff_t hitSound = 0xB5C; // int32
                constexpr std::ptrdiff_t priority = 0xB60; // int32
                constexpr std::ptrdiff_t tentOffset = 0xB64; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xB70; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0xB7C; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0xB80; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0xB8C; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0xB90; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0xB94; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xB98; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0xBA0; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0xBA8; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0xBB0; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xBB4; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0xBB8; // Vector
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0xBC4; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0xBD0; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0xBDC; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Thumper_Bullet_Watcher {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Protection_Racket {
            }
            // Parent: CCitadelBaseYamatoAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flExplodeEndTime (GameTime_t)
            // NetworkVarNames: m_flBuffEndTime (GameTime_t)
            namespace CCitadel_Ability_InfinitySlash {
                constexpr std::ptrdiff_t m_flExplodeEndTime = 0xD20; // GameTime_t
                constexpr std::ptrdiff_t m_flBuffEndTime = 0xD24; // GameTime_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadelModifierProjectilePitchingLoopSoundThinker {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_HeroTestOrbSpawnerVData {
                constexpr std::ptrdiff_t m_hModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flModelScale = 0x108; // float32
                constexpr std::ptrdiff_t m_flSpawnOffset = 0x10C; // float32
                constexpr std::ptrdiff_t m_AmbientParticle = 0x110; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SpawnParticle = 0x1F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 2
            namespace C_EnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float32
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float32
            }
            // Parent: C_LightDirectionalEntity
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE {
            }
            // Parent: CCitadelPlayerController
            // Field count: 0
            namespace CCitadelPreviewPlayerController {
            }
            // Parent: CAI_CitadelNPCVData
            // Field count: 41
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_Boss_Tier3VData {
                constexpr std::ptrdiff_t m_nPhase2Health = 0xF58; // int32
                constexpr std::ptrdiff_t m_flEyeZOffset = 0xF5C; // float32
                constexpr std::ptrdiff_t m_flDefaultMoveSpeed = 0xF60; // float32
                constexpr std::ptrdiff_t m_flNoShieldMoveSpeed = 0xF64; // float32
                constexpr std::ptrdiff_t m_flDyingMoveSpeed = 0xF68; // float32
                constexpr std::ptrdiff_t m_flMovingToFinalPositionSpeed = 0xF6C; // float32
                constexpr std::ptrdiff_t m_DeathSmallExplosionParticle = 0xF70; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DeathLargeExplosionParticle = 0x1050; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WeakpointBrokenExplosionParticle = 0x1130; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChargeUpExplosionParticle = 0x1210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strWIPModelName = 0x12F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_DyingSmallExplosion = 0x13D0; // CSoundEventName
                constexpr std::ptrdiff_t m_AvatarKilledSound = 0x13E0; // CSoundEventName
                constexpr std::ptrdiff_t m_AvatarBecomePatronSound = 0x13F0; // CSoundEventName
                constexpr std::ptrdiff_t m_PatronLandedSound = 0x1400; // CSoundEventName
                constexpr std::ptrdiff_t m_PatronKilledSound = 0x1410; // CSoundEventName
                constexpr std::ptrdiff_t m_LaserSound = 0x1420; // CSoundEventName
                constexpr std::ptrdiff_t m_LaserBeamModifier = 0x1430; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_DyingModifier = 0x1440; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_VulnerableModifier = 0x1450; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_Phase1Modifier = 0x1460; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_Phase2Modifier = 0x1470; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_BackdoorProtection = 0x1480; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ObjectiveRegen = 0x1490; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_LaserChargingParticle = 0x14A0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaserBeamEffect = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaserPreviewEffect = 0x1660; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaserDamageEffect = 0x1740; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flLaserTargetingZOffset = 0x1820; // float32
                constexpr std::ptrdiff_t m_flLaserTrackingSpeed = 0x1824; // float32
                constexpr std::ptrdiff_t m_flLaserTrackingMaxSpeed = 0x1828; // float32
                constexpr std::ptrdiff_t m_flLaserCastingTrackSpeed = 0x182C; // float32
                constexpr std::ptrdiff_t m_flLaserCastingTrackMaxSpeed = 0x1830; // float32
                constexpr std::ptrdiff_t m_flLaserDPSToPlayers = 0x1834; // float32
                constexpr std::ptrdiff_t m_flLaserDPSToNPCs = 0x1838; // float32
                constexpr std::ptrdiff_t m_flNoShieldLaserTrackingSpeed = 0x183C; // float32
                constexpr std::ptrdiff_t m_flNoShieldLaserTrackingMaxSpeed = 0x1840; // float32
                constexpr std::ptrdiff_t m_flNoShieldLaserCastingTrackSpeed = 0x1844; // float32
                constexpr std::ptrdiff_t m_flNoShieldLaserCastingTrackMaxSpeed = 0x1848; // float32
                constexpr std::ptrdiff_t m_flNoShieldLaserDPSToPlayers = 0x184C; // float32
                constexpr std::ptrdiff_t m_flNoShieldLaserDPSToNPCs = 0x1850; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_Hornet_Chain {
                constexpr std::ptrdiff_t m_vLaunchPosition = 0xC70; // Vector
                constexpr std::ptrdiff_t m_qLaunchAngle = 0xC7C; // QAngle
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItemSingleTargetStunVData {
                constexpr std::ptrdiff_t m_StunDelayModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CastParticle = 0x1580; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CItem_WitheringWhip_VData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1670; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: C_PointEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_nResolutionX (int)
            // NetworkVarNames: m_nResolutionY (int)
            // NetworkVarNames: m_szLayoutFileName (string_t)
            // NetworkVarNames: m_RenderAttrName (string_t)
            // NetworkVarNames: m_TargetEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_nTargetChangeCount (int)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x558; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x55C; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x560; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x570; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x578; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x590; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x598; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x710; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_Flags (uint8)
            // NetworkVarNames: m_LightStyle (uint8)
            // NetworkVarNames: m_Radius (float32)
            // NetworkVarNames: m_Exponent (int32)
            // NetworkVarNames: m_InnerAngle (float32)
            // NetworkVarNames: m_OuterAngle (float32)
            // NetworkVarNames: m_SpotRadius (float32)
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0x830; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0x831; // uint8
                constexpr std::ptrdiff_t m_Radius = 0x834; // float32
                constexpr std::ptrdiff_t m_Exponent = 0x838; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0x83C; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0x840; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0x844; // float32
            }
            // Parent: CCitadel_Ability_PrimaryWeaponVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_PrimaryWeapon_SlorkVData {
                constexpr std::ptrdiff_t m_HitParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WeaponShapeParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WeaponRangeAssistParticle = 0x1730; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nNumConePoints = 0x1810; // int32
                constexpr std::ptrdiff_t m_flRoundPerSecond = 0x1814; // float32
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PoisonSprayerHitSound = 0x1828; // CSoundEventName
                constexpr std::ptrdiff_t m_WeaponLoopStartSound = 0x1838; // CSoundEventName
                constexpr std::ptrdiff_t m_WeaponLoopSound = 0x1848; // CSoundEventName
                constexpr std::ptrdiff_t m_WeaponLoopEndSound = 0x1858; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Nano_Shadow {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Bull_Leap_BoostingVData {
                constexpr std::ptrdiff_t m_BoostTrailParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
                constexpr std::ptrdiff_t m_AmbushModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_InvisModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TeamRelativeParticle {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Rutger_CheatDeath_Activated {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Warden_HighAlert {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ImmobilizeTrapDOT_ThinkerVData {
                constexpr std::ptrdiff_t m_GroundParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flTickRate = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x6DC; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 21
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityGuidedArrowVData {
                constexpr std::ptrdiff_t m_cameraCancelledTransitionBacktoArcher = 0x1528; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_cameraExplodedTransitionBackToArcher = 0x15A8; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_flCameraHoldAtExplosion = 0x1628; // float32
                constexpr std::ptrdiff_t m_flFadeToBlackTime = 0x162C; // float32
                constexpr std::ptrdiff_t m_SpectatingProjectileParticle = 0x1630; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1710; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GuidedArrowChannelParticle = 0x17F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ProjectileModel = 0x18D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_ArrowOffsetX = 0x19B0; // float32
                constexpr std::ptrdiff_t m_ArrowCameraDistance = 0x19B4; // float32
                constexpr std::ptrdiff_t m_ArrowCameraHeightOffset = 0x19B8; // float32
                constexpr std::ptrdiff_t m_ArrowInitialPitch = 0x19BC; // float32
                constexpr std::ptrdiff_t m_GuidingModifier = 0x19C0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x19D0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x19E0; // CSoundEventName
                constexpr std::ptrdiff_t m_flTrackAmount = 0x19F0; // float32
                constexpr std::ptrdiff_t m_flSpeedAccel = 0x19F4; // float32
                constexpr std::ptrdiff_t m_flSpeedDeccel = 0x19F8; // float32
                constexpr std::ptrdiff_t m_flBaseProjectileSpeed = 0x19FC; // float32
                constexpr std::ptrdiff_t m_flMaxProjectileSpeed = 0x1A00; // float32
                constexpr std::ptrdiff_t m_flArrowModelTurnSpringStrength = 0x1A04; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityPowerJumpVData {
                constexpr std::ptrdiff_t m_JumpParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_InAirModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PowerJumpModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_PersonalRejuvenator {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_PayloadPusherAuraTarget {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_TriggerVolume {
            }
            // Parent: C_FuncBrush
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0x830; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0x838; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0x840; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Tokamak_Radiance {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierCadenceGunSpikesVData {
                constexpr std::ptrdiff_t m_strSmallIconCssClassMax = 0x5F8; // CUtlString
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
                constexpr std::ptrdiff_t m_BuildUpModifier = 0x5F8; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeSound = 0x6E8; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Cadence_AnthemBuffVData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelYamatoBaseVData {
                constexpr std::ptrdiff_t m_flShadowFormSpeed = 0x1528; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TangoTether_TetherReceiverVData {
                constexpr std::ptrdiff_t m_strAttackBuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TetherSound = 0x6D8; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_WreckerSalvageVData {
                constexpr std::ptrdiff_t m_SalvageBeam = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ConnectBeam = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hProjectile (CHandle<CCitadelProjectile>)
            namespace CCitadel_Ability_HatTrick {
                constexpr std::ptrdiff_t m_hProjectile = 0xC70; // CHandle<C_CitadelProjectile>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Ricochet_ProcVData {
                constexpr std::ptrdiff_t m_RicochetTracerParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelBaseAbilityServerOnly
            // Field count: 0
            namespace CCitadel_Ability_Weapon_BossTier2 {
            }
            // Parent: CCitadelModifier
            // Field count: 7
            namespace CCitadel_Modifier_Invis {
                constexpr std::ptrdiff_t m_bInvis = 0x248; // bool
                constexpr std::ptrdiff_t m_flStartInvisTime = 0x24C; // GameTime_t
                constexpr std::ptrdiff_t m_bFullyInvis = 0x250; // bool
                constexpr std::ptrdiff_t m_flLastDamageTaken = 0x254; // GameTime_t
                constexpr std::ptrdiff_t m_flLastSpotted = 0x258; // GameTime_t
                constexpr std::ptrdiff_t m_nDetectionRangeRing = 0x25C; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nFullInvisEffect = 0x260; // ParticleIndex_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Mirage_SandPhantom_VData {
            }
            // Parent: CCitadel_Modifier_Sleep
            // Field count: 0
            namespace CCitadel_Modifier_SleepBomb_Asleep {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Lockdown_BulletResist {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_WreckerUltimate_Invincible {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Lash {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_BloodBombVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SpilledBloodModifier = 0x1608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strBloodSpillStatName = 0x1618; // CUtlString
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_LongRangeSlowingTech_Proc {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x558; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x55C; // float32
            }
            // Parent: CEntityInstance
            // Field count: 81
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_pModifierProp (CModifierProperty*)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_nPlatformType (EntityPlatformTypes_t)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_flSpeed (float)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_flWaterLevel (float32)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nGroundBodyIndex (int)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
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
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData {
                constexpr std::ptrdiff_t m_AttackerHitFx = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_playerBuffSelf = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_playerBuffEnemy = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ReflectedBulletTracerParticle = 0x978; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAttackerHitSound = 0xA58; // CSoundEventName
                constexpr std::ptrdiff_t m_strVictimHitSound = 0xA68; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuff {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Spinning_Blade {
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierAirLiftExplodeTargetVData {
                constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_SilenceModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BulletResistModifier = 0x628; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_DeathTax {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_StaticCharge {
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_DebuffReducerVData {
                constexpr std::ptrdiff_t m_DebuffReducedParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_PurgeCastParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MoveSpeedModifier = 0x1730; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CScaleFunctionBase
            // Field count: 0
            namespace CScaleFunctionAbilityProperty_TechDamage {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
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
            // Parent: CCitadelAnimatingModelEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flUpFactor (float)
            // NetworkVarNames: m_flBounceVelocity (float)
            namespace C_Citadel_Bounce_Pad {
                constexpr std::ptrdiff_t m_flUpFactor = 0xB48; // float32
                constexpr std::ptrdiff_t m_flBounceVelocity = 0xB4C; // float32
                constexpr std::ptrdiff_t m_flBarrelBounceVelocity = 0xB50; // float32
                constexpr std::ptrdiff_t m_flBarrelUpFactor = 0xB54; // float32
                constexpr std::ptrdiff_t m_bSpeedOnLand = 0xB58; // bool
            }
            // Parent: C_BreakableProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_bAwake (bool)
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0xCC8; // bool
            }
            // Parent: CBaseProp
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            // NetworkVarNames: m_noGhostCollision (bool)
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0xB80; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnBreak = 0xBC0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xBE8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xC10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xC38; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xC3C; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0xC40; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xC44; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xC48; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0xC54; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xC58; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xC5C; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xC60; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xC68; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xC70; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xC78; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xC7C; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xC80; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0xC88; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xC90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xC98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xCA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xCA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xCB0; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xCB4; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xCB8; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xCBC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hFlareEnt = 0xCC0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_noGhostCollision = 0xCC4; // bool
            }
            // Parent: CCitadelBaseLockonAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EGrappleState (ELashGrappleState)
            // NetworkVarNames: m_flStateEnterTime (GameTime_t)
            // NetworkVarNames: m_flNextStateTime (GameTime_t)
            // NetworkVarNames: m_flBoostEndTime (GameTime_t)
            namespace CCitadel_Ability_Lash_Ultimate {
                constexpr std::ptrdiff_t m_EGrappleState = 0xDEA; // ELashGrappleState
                constexpr std::ptrdiff_t m_flStateEnterTime = 0xDEC; // GameTime_t
                constexpr std::ptrdiff_t m_flNextStateTime = 0xDF0; // GameTime_t
                constexpr std::ptrdiff_t m_flBoostEndTime = 0xDF4; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierItemPickupTimerVData {
                constexpr std::ptrdiff_t m_TimerToSilence = 0x5F8; // float32
                constexpr std::ptrdiff_t m_SilenceDuration = 0x5FC; // float32
                constexpr std::ptrdiff_t m_SilenceModifier = 0x600; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Rutger_Pulse_VData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CitadelAbilityVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityThumper1VData {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Uppercut_Buff {
            }
            // Parent: CitadelAbilityVData
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityViscousBowlingVData {
                constexpr std::ptrdiff_t m_TransformStartFx = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplodeFX = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_WallImpactFx = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BallTrailFx = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GroundImpactParticle = 0x18A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_JumpParticle = 0x1988; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DirectionParticle = 0x1A68; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flVerticalCameraOffsetLerpTime = 0x1B48; // float32
                constexpr std::ptrdiff_t m_flVerticalCameraOffsetBias = 0x1B4C; // float32
                constexpr std::ptrdiff_t m_flVerticalCameraOffset = 0x1B50; // float32
                constexpr std::ptrdiff_t m_flDistanceCameraOffsetLerpTime = 0x1B54; // float32
                constexpr std::ptrdiff_t m_flDistanceCameraOffsetBias = 0x1B58; // float32
                constexpr std::ptrdiff_t m_flDistanceCameraOffset = 0x1B5C; // float32
                constexpr std::ptrdiff_t m_strPopGraphParamter = 0x1B60; // CGlobalSymbol
                constexpr std::ptrdiff_t m_BallJumpSound = 0x1B68; // CSoundEventName
                constexpr std::ptrdiff_t m_EnterBallSound = 0x1B78; // CSoundEventName
                constexpr std::ptrdiff_t m_BallLoopSound = 0x1B88; // CSoundEventName
                constexpr std::ptrdiff_t m_ExitBallSound = 0x1B98; // CSoundEventName
                constexpr std::ptrdiff_t m_WallImpactSound = 0x1BA8; // CSoundEventName
                constexpr std::ptrdiff_t m_PlayerImpactSound = 0x1BB8; // CSoundEventName
                constexpr std::ptrdiff_t m_ImpactModifier = 0x1BC8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DamagePreventionModifier = 0x1BD8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_RollingModifier = 0x1BE8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flTransformToBallTime = 0x1BF8; // float32
                constexpr std::ptrdiff_t m_flTransformFromBallTime = 0x1BFC; // float32
                constexpr std::ptrdiff_t m_flAirTurnRatio = 0x1C00; // float32
                constexpr std::ptrdiff_t m_flWallTurnRatioMax = 0x1C04; // float32
                constexpr std::ptrdiff_t m_flWallTurnRatioMin = 0x1C08; // float32
                constexpr std::ptrdiff_t m_flTurnRatio = 0x1C0C; // float32
                constexpr std::ptrdiff_t m_flDefaultBallSpeed = 0x1C10; // float32
                constexpr std::ptrdiff_t m_flFastBallSpeed = 0x1C14; // float32
                constexpr std::ptrdiff_t m_flSpeedAccel = 0x1C18; // float32
                constexpr std::ptrdiff_t m_flSpeedDeccel = 0x1C1C; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x1C20; // float32
                constexpr std::ptrdiff_t m_flWallCheckGroundOffset = 0x1C24; // float32
                constexpr std::ptrdiff_t m_flWallPauseTime = 0x1C28; // float32
                constexpr std::ptrdiff_t m_flWallAngleMin = 0x1C2C; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Nearby_Enemy_Boost {
            }
            // Parent: CCitadelModifierVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Base_BuildupVData {
                constexpr std::ptrdiff_t m_bUseBaseWeaponCycleTimeForDelay = 0x5F8; // bool
                constexpr std::ptrdiff_t m_flCycleTimeDelayAdd = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flBuildUpDecayDelay = 0x600; // float32
                constexpr std::ptrdiff_t m_eBuildupMode = 0x604; // BuildupMode_t
                constexpr std::ptrdiff_t m_bBuildupAffectedByEffectiveness = 0x608; // bool
                constexpr std::ptrdiff_t m_bPassBuildupEffectivenessToFillModifier = 0x609; // bool
            }
            // Parent: C_CitadelItemPickup
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_CCitadelAbilityComponent (CCitadelAbilityComponent::Storage_t)
            // NetworkVarNames: m_bPickedUp (bool)
            namespace CCitadelItemPickupRejuv {
                constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xB78; // CCitadelAbilityComponent
                constexpr std::ptrdiff_t m_bPickedUp = 0xD18; // bool
            }
            // Parent: C_BaseToggle
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace C_FuncMoveLinear {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            // NetworkVarNames: m_flFrameRate (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_nNumBeamEnts (uint8)
            // NetworkVarNames: m_hBaseMaterial (HMaterialStrong)
            // NetworkVarNames: m_nHaloIndex (HMaterialStrong)
            // NetworkVarNames: m_nBeamType (BeamType_t)
            // NetworkVarNames: m_nBeamFlags (uint32)
            // NetworkVarNames: m_hAttachEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nAttachIndex (AttachmentHandle_t)
            // NetworkVarNames: m_fWidth (float32)
            // NetworkVarNames: m_fEndWidth (float32)
            // NetworkVarNames: m_fFadeLength (float32)
            // NetworkVarNames: m_fHaloScale (float32)
            // NetworkVarNames: m_fAmplitude (float32)
            // NetworkVarNames: m_fStartFrame (float32)
            // NetworkVarNames: m_fSpeed (float32)
            // NetworkVarNames: m_flFrame (float32)
            // NetworkVarNames: m_nClipStyle (BeamClipStyle_t)
            // NetworkVarNames: m_bTurnedOff (bool)
            // NetworkVarNames: m_vecEndPos (Vector)
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x830; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x834; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x838; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x83C; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x840; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0x844; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x868; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x870; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x878; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x87C; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x880; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x8A8; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x8B4; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x8B8; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x8BC; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x8C0; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x8C4; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x8C8; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x8CC; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x8D0; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0x8D4; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0x8D8; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x8DC; // Vector
                constexpr std::ptrdiff_t m_hEndEntity = 0x8E8; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ZiplineBoostVData {
                constexpr std::ptrdiff_t m_flRampUpTime = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flPercentageSpeedIncrease = 0x5FC; // float32
                constexpr std::ptrdiff_t m_cameraSequenceStartBoost = 0x600; // CitadelCameraOperationsSequence_t
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_ItemAmmo {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Slork_Scald {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_LashGrappleTarget {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Snipe_Glow {
                constexpr std::ptrdiff_t m_nFXIndex = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_TechOverflowProcWatcher {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilitySlorkChompVData {
                constexpr std::ptrdiff_t m_ChompHobbled = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ChompGrapple = 0x1538; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Tokamak_HeatSinks {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_bFlying (bool)
            // NetworkVarNames: m_bFlyingStarted (bool)
            // NetworkVarNames: m_bIsGrabbing (bool)
            // NetworkVarNames: m_bIsHoldingBomb (bool)
            // NetworkVarNames: m_flCurrentSpeed (float)
            namespace CCitadel_Ability_Tengu_AirLift {
                constexpr std::ptrdiff_t m_nHoldBombEffect = 0xC70; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bFlying = 0xE70; // bool
                constexpr std::ptrdiff_t m_bFlyingStarted = 0xE71; // bool
                constexpr std::ptrdiff_t m_bIsGrabbing = 0xE72; // bool
                constexpr std::ptrdiff_t m_bIsHoldingBomb = 0xE73; // bool
                constexpr std::ptrdiff_t m_flCurrentSpeed = 0xE74; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Nikuman {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityChronoSwapVData {
                constexpr std::ptrdiff_t m_BubbleMoveModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strSwapStarted = 0x1538; // CSoundEventName
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Frenzy_MoveSpeed {
                constexpr std::ptrdiff_t m_flMoveSpeedPerStack = 0xC0; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flCameraDist (float)
            // NetworkVarNames: m_flCameraPitch (float)
            // NetworkVarNames: m_flCameraHeight (float)
            // NetworkVarNames: m_hTarget (EHANDLE)
            namespace CCitadelSpectateDirectedCamera {
                constexpr std::ptrdiff_t m_flCameraDist = 0x55C; // float32
                constexpr std::ptrdiff_t m_flCameraPitch = 0x560; // float32
                constexpr std::ptrdiff_t m_flCameraHeight = 0x564; // float32
                constexpr std::ptrdiff_t m_hTarget = 0x568; // CHandle<C_BaseEntity>
            }
            // Parent: CitadelAbilityVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityExplosiveBarrelVData {
                constexpr std::ptrdiff_t m_BarrelExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MirvExplodeParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BarrelBurnParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x17C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strMirvExplodeSound = 0x17D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strRiccochetSound = 0x17E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strBarrelSoundLp = 0x17F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strBarrelLaunchSound = 0x1808; // CSoundEventName
                constexpr std::ptrdiff_t m_strBarrelMeleedSound = 0x1818; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_MobileResupplyVData {
                constexpr std::ptrdiff_t m_flResupplyForceScale = 0x1528; // float32
                constexpr std::ptrdiff_t m_flResupplyUp = 0x152C; // float32
                constexpr std::ptrdiff_t m_strKilledSound = 0x1530; // CSoundEventName
                constexpr std::ptrdiff_t m_AuraModifier = 0x1540; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_DispenserModel = 0x1550; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_SprayParticle = 0x1630; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DestroyedParticle = 0x1710; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Fervor_VData {
                constexpr std::ptrdiff_t m_FervorParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BonusesModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseShield
            // Field count: 0
            namespace CCitadel_Modifier_RegeneratingBulletShield {
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_WeaponPowerForHealth {
                constexpr std::ptrdiff_t m_flHealthDrained = 0xC0; // float32
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CCitadel_Item_Bubble
            // Field count: 0
            namespace CCitadel_Item_Stasis_Bomb {
            }
            // Parent: C_PointEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszOverlayNames (string_t)
            // NetworkVarNames: m_flOverlayTimes (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iDesiredOverlay (int32)
            // NetworkVarNames: m_bIsActive (bool)
            namespace C_EnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x558; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x5A8; // float32[10]
                constexpr std::ptrdiff_t m_flStartTime = 0x5D0; // GameTime_t
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x5D4; // int32
                constexpr std::ptrdiff_t m_bIsActive = 0x5D8; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x5D9; // bool
                constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x5DC; // int32
                constexpr std::ptrdiff_t m_iCurrentOverlay = 0x5E0; // int32
                constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x5E4; // GameTime_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityTokamakHeatSinksInherentVData {
                constexpr std::ptrdiff_t m_HotTracerParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HotWeaponFxParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strHotWeaponShootSound = 0x16E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strOverheatRed = 0x16F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strOverheatFull = 0x1708; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TangoTether_TetherVData {
                constexpr std::ptrdiff_t m_TetherSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_HealSound = 0x608; // CSoundEventName
                constexpr std::ptrdiff_t m_HitIndicator = 0x618; // CSoundEventName
                constexpr std::ptrdiff_t m_GrappleHitSound = 0x628; // CSoundEventName
                constexpr std::ptrdiff_t m_BuffModifier = 0x638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DisconnectingModifier = 0x648; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DisconnectedModifier = 0x658; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_LockedTargetModifier = 0x668; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flMinConnectTime = 0x678; // float32
                constexpr std::ptrdiff_t m_flDisconnectDistanceBuffer = 0x67C; // float32
                constexpr std::ptrdiff_t m_flCandidateCloserDistance = 0x680; // float32
                constexpr std::ptrdiff_t m_flTargetAwayDistance = 0x684; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_hProjectile (EHANDLE)
            // NetworkVarNames: m_flArrowSpeed (float)
            // NetworkVarNames: m_flSnapAnglesBackTime (GameTime_t)
            namespace CCitadel_Ability_WreckerTeleport {
                constexpr std::ptrdiff_t m_hProjectile = 0xC78; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flArrowSpeed = 0xC7C; // float32
                constexpr std::ptrdiff_t m_flSnapAnglesBackTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_flCastTimeDamage = 0xC84; // float32
                constexpr std::ptrdiff_t m_flCastTime = 0xC88; // GameTime_t
                constexpr std::ptrdiff_t m_bNeedsExplosion = 0xC8C; // bool
                constexpr std::ptrdiff_t m_vProjectileRemovedOrigin = 0xC90; // Vector
                constexpr std::ptrdiff_t m_angCasterAnglesAtCastTime = 0xC9C; // QAngle
                constexpr std::ptrdiff_t m_flTravelDistance = 0xCA8; // float32
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_SnipeGlowVData {
                constexpr std::ptrdiff_t m_GlowParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 5
            namespace CCitadel_Modifier_ChargeDragEnemy {
                constexpr std::ptrdiff_t m_qRelativeOffset = 0x130; // QAngle
                constexpr std::ptrdiff_t m_flRelativeDist = 0x13C; // float32
                constexpr std::ptrdiff_t m_flMaxDist = 0x140; // float32
                constexpr std::ptrdiff_t m_vecOffsetDir = 0x144; // Vector
                constexpr std::ptrdiff_t m_vecStartPosition = 0x150; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Containment_Victim {
                constexpr std::ptrdiff_t m_flTetherRadius = 0xC0; // float32
                constexpr std::ptrdiff_t m_vecOrigin = 0xC4; // Vector
            }
            // Parent: CBaseAnimGraph
            // Field count: 5
            namespace CCitadel_GrandFinaleStage {
                constexpr std::ptrdiff_t m_vStartPos = 0xB40; // Vector
                constexpr std::ptrdiff_t m_vEndPos = 0xB4C; // Vector
                constexpr std::ptrdiff_t m_flStartEmitTime = 0xB58; // GameTime_t
                constexpr std::ptrdiff_t m_flEndEmitTime = 0xB5C; // GameTime_t
                constexpr std::ptrdiff_t m_nTouchCount = 0xB60; // int32
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_VacuumAura {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadelModifierAura_Default {
            }
            // Parent: C_ModelPointEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            // NetworkVarNames: m_FontName (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFullbright (bool)
            // NetworkVarNames: m_flWorldUnitsPerPx (float)
            // NetworkVarNames: m_flFontSize (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
            // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
            // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x838; // bool
                constexpr std::ptrdiff_t m_messageText = 0x848; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0xA48; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0xA88; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0xA89; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xA8C; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0xA90; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xA94; // float32
                constexpr std::ptrdiff_t m_Color = 0xA98; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xA9C; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xAA0; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0xAA4; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CitadelPortraitWorldCallbackHandler {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Wraith_RapidFire {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ShieldImpactVData {
                constexpr std::ptrdiff_t m_ShieldBreakParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShieldBreakSound = 0x6D8; // CSoundEventName
            }
            // Parent: CEntityComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nHeroID (HeroID_t)
            // NetworkVarNames: m_nHeroLoading (HeroID_t)
            namespace CCitadelHeroComponent {
                constexpr std::ptrdiff_t m_nHeroID = 0x14; // HeroID_t
                constexpr std::ptrdiff_t m_nHeroLoading = 0x18; // HeroID_t
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_Charge_Mastery {
            }
            // Parent: CCitadel_Modifier_Invis
            // Field count: 0
            namespace CCitadel_Modifier_Ult_Shadow {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Infuser_VData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flTime (GameTime_t)
            namespace CCitadelAutoScaledTime {
                constexpr std::ptrdiff_t m_flTime = 0x8; // GameTime_t
            }
            // Parent: CAI_CitadelNPCVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNPC_MidBossVData {
                constexpr std::ptrdiff_t m_iStartingHealth = 0xF58; // int32
                constexpr std::ptrdiff_t m_iHealthGainPerMinute = 0xF5C; // int32
                constexpr std::ptrdiff_t m_flAggroTime = 0xF60; // float32
                constexpr std::ptrdiff_t m_DyingSmallExplosion = 0xF68; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DyingFinalExplosion = 0x1048; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flDyingDuration = 0x1128; // float32
                constexpr std::ptrdiff_t m_KnockbackAura = 0x1130; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_AggroEnemy = 0x1140; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierAuraVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Thumper_PullAOE_VData {
                constexpr std::ptrdiff_t m_AuraParticle = 0x638; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Nikuman {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_TechUpgrade_Infuser {
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Tengu_StoneFormVData {
                constexpr std::ptrdiff_t m_CastParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_StoneFormParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastTargetSound = 0x17C8; // CSoundEventName
                constexpr std::ptrdiff_t m_strImpactSound = 0x17D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strTrueFormModel = 0x17E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flLandHoldTime = 0x18C8; // float32
                constexpr std::ptrdiff_t m_flRisingTime = 0x18CC; // float32
            }
            // Parent: CitadelAbilityVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_UltComboVData {
                constexpr std::ptrdiff_t m_MeleeSwingParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_MeleeImpactParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SelfModifier = 0x16E8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TargetModifier = 0x16F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 0
            namespace CCitadel_Ability_Shotgun_Astro {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Astro_Rifle_Self {
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_DragEnemyVData {
                constexpr std::ptrdiff_t m_flForwardOffset = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flVerticalOffset = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flDragDistance = 0x600; // float32
                constexpr std::ptrdiff_t m_flForceDistScale = 0x604; // float32
            }
            // Parent: CCitadel_Modifier_BaseEventProc
            // Field count: 0
            namespace CCitadel_Modifier_SilenceProcWatcher {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecComponentsConsumed (EntitySubclassID_t)
            namespace CCitadel_Item {
                constexpr std::ptrdiff_t m_vecComponentsConsumed = 0xC70; // C_NetworkUtlVectorBase<CUtlStringToken>
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityDustStormVData {
                constexpr std::ptrdiff_t m_DustStormAura = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_GrenadeTrailModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_UtilityUpgrade_DebuffImmunityVData {
                constexpr std::ptrdiff_t m_DebuffImmunityModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_UtilityUpgrade_RocketBootsVData {
                constexpr std::ptrdiff_t m_LaunchParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_InAirWatcherModifier = 0x1650; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_CritShotVData {
                constexpr std::ptrdiff_t m_SlowModifier = 0x728; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_CritSound = 0x738; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_WarpStone_Caster_VData {
                constexpr std::ptrdiff_t m_playerBuffSelf = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_SiphonBullets_HealthLoss_VData {
                constexpr std::ptrdiff_t m_SiphonParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealModifier = 0x6D8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BerserkerVData {
                constexpr std::ptrdiff_t m_BerserkerSound = 0x5F8; // CSoundEventName
                constexpr std::ptrdiff_t m_StackModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Bullet_Shield_Pulse {
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_Delayed_Stun {
                constexpr std::ptrdiff_t m_hRingEffect = 0xC0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flRadius = 0xC4; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_HeroUpgradeBonuses {
                constexpr std::ptrdiff_t m_pOwningPlayer = 0xC0; // C_CitadelPlayerPawn*
                constexpr std::ptrdiff_t m_flWeaponPower = 0xC8; // float32
                constexpr std::ptrdiff_t m_flArmorPower = 0xCC; // float32
                constexpr std::ptrdiff_t m_flTechPower = 0xD0; // float32
            }
            // Parent: C_DynamicProp
            // Field count: 7
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_eDoorState (DoorState_t)
            // NetworkVarNames: m_bLocked (bool)
            // NetworkVarNames: m_closedPosition (Vector)
            // NetworkVarNames: m_closedAngles (QAngle)
            // NetworkVarNames: m_hMaster (CHandle<C_BasePropDoor>)
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0xDF0; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0xDF4; // bool
                constexpr std::ptrdiff_t m_bLocked = 0xDF5; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0xDF8; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0xE04; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0xE10; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0xE14; // Vector
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace C_PointEntityAlias_info_target_portrait_root {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_PhantomStrike {
            }
            // Parent: CCitadel_Ability_PrimaryWeapon
            // Field count: 0
            namespace CCitadel_Ability_Shotgun_Astro_Backwards {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_PoisonBullets {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_SelfVacuum {
            }
            // Parent: CCitadelModifier
            // Field count: 7
            namespace CCitadel_Modifier_ShieldTracker_Base {
                constexpr std::ptrdiff_t m_vecShield = 0xC0; // Vector
                constexpr std::ptrdiff_t m_flShieldDamageTime = 0xCC; // float32
                constexpr std::ptrdiff_t m_flShieldBreakTime = 0xD0; // float32
                constexpr std::ptrdiff_t m_flShieldBreakHealAmount = 0xD4; // float32
                constexpr std::ptrdiff_t m_flShieldBreakHealDone = 0xD8; // float32
                constexpr std::ptrdiff_t m_bShieldHealingAfterBreak = 0xDC; // bool
                constexpr std::ptrdiff_t m_bForceRegen = 0xDD; // bool
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace C_NPC_MidBoss {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CCitadelItemMetal {
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 4
            namespace CCitadel_Modifier_VacuumAuraTarget {
                constexpr std::ptrdiff_t m_flMaxDist = 0x138; // float32
                constexpr std::ptrdiff_t m_vecOffsetDir = 0x13C; // Vector
                constexpr std::ptrdiff_t m_vecStartPosition = 0x148; // Vector
                constexpr std::ptrdiff_t m_flAOERadius = 0x154; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CModifier_CloakingDevice_Active_Ambush {
                constexpr std::ptrdiff_t m_nAmbushParticle = 0xC0; // ParticleIndex_t
            }
            // Parent: CitadelItemVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_ArmorUpgrade_AblativeCoatVData {
                constexpr std::ptrdiff_t m_RestoreEffectModifier = 0x1570; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_OnTakeDamageEffectModifier = 0x1580; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_OnBreakEffectModifier = 0x1590; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ResistBuffModifier = 0x15A0; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flOnTakeDamageEffectDuration = 0x15B0; // float32
                constexpr std::ptrdiff_t m_flOnBreakEffectDuration = 0x15B4; // float32
                constexpr std::ptrdiff_t m_flOnRestoreEffectDuration = 0x15B8; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal {
            }
            // Parent: C_BreakableProp
            // Field count: 6
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0xCC8; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0xCCC; // GameTime_t
                constexpr std::ptrdiff_t m_inertiaScale = 0xCD0; // float32
                constexpr std::ptrdiff_t m_vecDamagePosition = 0xCD4; // Vector
                constexpr std::ptrdiff_t m_vecDamageDirection = 0xCE0; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0xCEC; // DamageTypes_t
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_Projectile_Perched_Predator {
            }
            // Parent: CCitadelModifier
            // Field count: 3
            namespace CCitadel_Modifier_Mirage_DjinnsReach_Chain {
                constexpr std::ptrdiff_t m_vecOrigin = 0xC0; // Vector
                constexpr std::ptrdiff_t m_hPartner = 0xCC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bMakeChainParticle = 0xD0; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CModifier_Mirage_FireBeetles_Buff {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_vecTeleportPosition (Vector)
            // NetworkVarNames: m_vecTeleportPositionNormal (Vector)
            // NetworkVarNames: m_eTelepunchState (ETelepunchState_t)
            // NetworkVarNames: m_flNextStateTime (GameTime_t)
            namespace CCitadel_Ability_Viscous_Telepunch {
                constexpr std::ptrdiff_t m_vecTeleportPosition = 0xE68; // Vector
                constexpr std::ptrdiff_t m_vecTeleportPositionNormal = 0xE74; // Vector
                constexpr std::ptrdiff_t m_eTelepunchState = 0xE80; // ETelepunchState_t
                constexpr std::ptrdiff_t m_flNextStateTime = 0xE84; // GameTime_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vecPuddleModifiers (CUtlVector<EHANDLE>)
            namespace CCitadel_Ability_GooGrenade {
                constexpr std::ptrdiff_t m_vecPuddleModifiers = 0xC70; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_LastDetonateTime = 0xEB8; // GameTime_t
            }
            // Parent: CitadelAbilityVData
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ViscousWeapon_Alt_VData {
                constexpr std::ptrdiff_t m_strChargingParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ImpactParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FiringParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplosionSound = 0x17C8; // CSoundEventName
                constexpr std::ptrdiff_t m_ChargeSound = 0x17D8; // CSoundEventName
                constexpr std::ptrdiff_t m_ShootSound = 0x17E8; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bAirCast (bool)
            namespace CCitadel_Ability_Chrono_TimeWall {
                constexpr std::ptrdiff_t m_hChargingParticle = 0xC70; // ParticleIndex_t
                constexpr std::ptrdiff_t m_vSpawnPos = 0xC74; // Vector
                constexpr std::ptrdiff_t m_qAngles = 0xC80; // QAngle
                constexpr std::ptrdiff_t m_bAirCast = 0xC8C; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ServerOnly {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDashCastStartTime (GameTime_t)
            // NetworkVarNames: m_vDashCastDir (Vector)
            namespace CCitadelBaseDashCastAbility {
                constexpr std::ptrdiff_t m_hAbilityToTrigger = 0xC70; // CHandle<C_CitadelBaseAbility>
                constexpr std::ptrdiff_t m_flDashCastStartTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_vDashCastDir = 0xC78; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x558; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x560; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x568; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x570; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x558; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x5C0; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x5C4; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ShivDashVData {
                constexpr std::ptrdiff_t m_DashParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DashTrailParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_BurrowVData {
                constexpr std::ptrdiff_t m_ExplodeParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BurrowStartParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BurrowEndParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BurrowInGroundParticle = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BurrowModifier = 0x18A8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SpinModifier = 0x18B8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strBurrowEndSound = 0x18C8; // CSoundEventName
                constexpr std::ptrdiff_t m_flChannelEndEnemyPopUpForce = 0x18D8; // float32
                constexpr std::ptrdiff_t m_flChannelEndEnemyPopUpCylinderHeight = 0x18DC; // float32
            }
            // Parent: CCitadel_Modifier_BaseBulletPreRollProc
            // Field count: 0
            namespace CCitadel_Modifier_CritShot {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Savior_VData {
                constexpr std::ptrdiff_t m_BuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TrailParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Cadence_AnthemAOE {
            }
            // Parent: CitadelAbilityVData
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityWreckerTeleportVData {
                constexpr std::ptrdiff_t m_SpectatingProjectileParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ExplosionParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChannelParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastParticle = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ArrowOffsetX = 0x18A8; // float32
                constexpr std::ptrdiff_t m_ArrowCameraDistance = 0x18AC; // float32
                constexpr std::ptrdiff_t m_ArrowCameraHeightOffset = 0x18B0; // float32
                constexpr std::ptrdiff_t m_ArrowInitialPitch = 0x18B4; // float32
                constexpr std::ptrdiff_t m_GuidingModifier = 0x18B8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DebuffModifier = 0x18C8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strExplodeSound = 0x18D8; // CSoundEventName
                constexpr std::ptrdiff_t m_flTrackAmount = 0x18E8; // float32
                constexpr std::ptrdiff_t m_flSpeedAccel = 0x18EC; // float32
                constexpr std::ptrdiff_t m_flSpeedDeccel = 0x18F0; // float32
                constexpr std::ptrdiff_t m_flBaseProjectileSpeed = 0x18F4; // float32
                constexpr std::ptrdiff_t m_flMaxProjectileSpeed = 0x18F8; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Savior {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Objective_Regen {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BulletResistReductionStackVData {
                constexpr std::ptrdiff_t m_bSelfish = 0x5F8; // bool
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_ActiveBulletShield {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_vecLockonTargets (LockonTarget_t)
            // NetworkVarNames: m_LockOnStartTime (GameTime_t)
            namespace CCitadelBaseLockonAbility {
                constexpr std::ptrdiff_t m_vecLockonTargets = 0xD88; // C_UtlVectorEmbeddedNetworkVar<LockonTarget_t>
                constexpr std::ptrdiff_t m_LockOnStartTime = 0xDD8; // GameTime_t
                constexpr std::ptrdiff_t m_nTargetingLightEffect = 0xDE0; // ParticleIndex_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CAbility_Rutger_CheatDeath {
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BoucePadVData {
                constexpr std::ptrdiff_t m_StompParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strImpactSound = 0x6D8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityStompVData {
                constexpr std::ptrdiff_t m_StompParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strStompExplosionSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_strCastDelayLocalPlayerSound = 0x1618; // CSoundEventName
                constexpr std::ptrdiff_t m_DebuffModifier = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BulletResistModifier = 0x1638; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_PassiveBeefy {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityStormCloudVData {
                constexpr std::ptrdiff_t m_StormCloudModifier = 0x1528; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Tech_Bleed {
                constexpr std::ptrdiff_t m_hRingEffect = 0xC0; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_HoldingGoldenIdol {
                constexpr std::ptrdiff_t m_iIdolParticle = 0x130; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nGoldValue = 0x134; // int32
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x558; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x580; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x588; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x590; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x591; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x592; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x594; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x598; // bool
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_ShivDaggerVData {
                constexpr std::ptrdiff_t m_DamageDebuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowDebuffModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DaggerStuckParticle = 0x1548; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerImpactParticle = 0x1628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DaggerExplodeParticle = 0x1708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDaggerHitSound = 0x17E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strDaggerExplodeSound = 0x17F8; // CSoundEventName
            }
            // Parent: CCitadel_Modifier_Stunned
            // Field count: 2
            namespace CCitadel_Modifier_PsychicLift {
                constexpr std::ptrdiff_t m_vecFloatDest = 0x138; // Vector
                constexpr std::ptrdiff_t m_vecStartingPos = 0x144; // Vector
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_NearDeathFX {
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_ZiplineSpeedVData {
                constexpr std::ptrdiff_t m_flPercentageMultiplierStart = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flPercentageMultiplierEnd = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flRampUpTime = 0x600; // float32
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace C_Citadel_PestilenceDroneDispenser {
            }
            // Parent: CBaseAnimGraph
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_sPickupName (CUtlString)
            // NetworkVarNames: m_nNameOffset (int)
            namespace C_Citadel_BreakblePropPickup {
                constexpr std::ptrdiff_t m_bActive = 0xB40; // bool
                constexpr std::ptrdiff_t m_sPickupName = 0xB48; // CUtlString
                constexpr std::ptrdiff_t m_nNameOffset = 0xB50; // int32
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameModifier_FireUserEntityIOVData {
                constexpr std::ptrdiff_t m_FireOnAdded = 0x5F8; // FireUserEntityIO_t
                constexpr std::ptrdiff_t m_FireOnRemoved = 0x5FC; // FireUserEntityIO_t
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_GangActivity_Cancel {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Shakedown_TargetVData {
                constexpr std::ptrdiff_t m_RootModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PulseModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_WingBlastPush {
                constexpr std::ptrdiff_t m_vPush = 0xC0; // Vector
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flVertOffset (float)
            // NetworkVarNames: m_flHorizGap (float)
            // NetworkVarNames: m_vStartPos (Vector)
            // NetworkVarNames: m_vTargetPos (Vector)
            // NetworkVarNames: m_angFacing (QAngle)
            // NetworkVarNames: m_nMantleTypeIndex (int)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            namespace CCitadel_Ability_Mantle {
                constexpr std::ptrdiff_t m_flVertOffset = 0xC70; // float32
                constexpr std::ptrdiff_t m_flHorizGap = 0xC74; // float32
                constexpr std::ptrdiff_t m_vStartPos = 0xC78; // Vector
                constexpr std::ptrdiff_t m_vTargetPos = 0xC84; // Vector
                constexpr std::ptrdiff_t m_angFacing = 0xC90; // QAngle
                constexpr std::ptrdiff_t m_nMantleTypeIndex = 0xC9C; // int32
                constexpr std::ptrdiff_t m_flStartTime = 0xCA0; // GameTime_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_NearDeathFXVData {
                constexpr std::ptrdiff_t m_EnemyNearDeathParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_FriendlyNearDeathParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_sSelfDestructStart = 0x7B8; // CSoundEventName
                constexpr std::ptrdiff_t m_sSelfDestructEnd = 0x7C8; // CSoundEventName
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace C_NPC_CarpetBombDrone {
            }
            // Parent: C_CitadelItemPickup
            // Field count: 0
            namespace CCitadelItemPickupIdol {
            }
            // Parent: C_Citadel_BreakblePropPickup
            // Field count: 0
            namespace C_Citadel_BreakblePropModifierPickup {
            }
            // Parent: CBaseAnimGraph
            // Field count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xB40; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0xB58; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Slork_LastBreathVData {
                constexpr std::ptrdiff_t m_ShieldModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_AirLiftExplodingAlly {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 2
            namespace CCitadel_Ability_Wrecker_Ultimate {
                constexpr std::ptrdiff_t m_angBeamAngles = 0xC90; // QAngle
                constexpr std::ptrdiff_t m_bNeedsBeamReset = 0xCA8; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadelModifierChronoPulseGrenadePulseAreaVData {
                constexpr std::ptrdiff_t m_DebuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_SlowModifier = 0x608; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_PreviewRingParticle = 0x618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AreaEffect = 0x6F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strArmingSound = 0x7D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strArmedSound = 0x7E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strLoopingSound = 0x7F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strHitSound = 0x808; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bLeaping (bool)
            // NetworkVarNames: m_flLeapStartTime (GameTime_t)
            namespace CCitadel_Ability_HornetLeap {
                constexpr std::ptrdiff_t m_bLeaping = 0xC72; // bool
                constexpr std::ptrdiff_t m_flLeapStartTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_nFXIndex = 0xC78; // ParticleIndex_t
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ChainLightningEffect {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_VexBarrier_Shield {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_Frenzy {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            namespace C_InWorldKeyBindPanel {
                constexpr std::ptrdiff_t m_hPlayer = 0xA90; // CHandle<C_CitadelPlayerPawn>
            }
            // Parent: CBasePlayerController
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_ePlayState (EPlayerPlayState)
            // NetworkVarNames: m_iGuidedBotMatchLastHits (int)
            // NetworkVarNames: m_iGuidedBotMatchOrbsSecured (int)
            // NetworkVarNames: m_iGuidedBotMatchOrbsDenied (int)
            // NetworkVarNames: m_iGuidedBotMatchDamageToGuardians (int)
            // NetworkVarNames: m_iGuidedBotMatchDamageToPlayers (int)
            // NetworkVarNames: m_iGuidedBotMatchDamageTaken (int)
            // NetworkVarNames: m_iGuidedBotMatchNetWorth (int)
            // NetworkVarNames: m_iGuidedBotMatchModsPurchased (int)
            // NetworkVarNames: m_iGuidedBotMatchAbilityUpgrades (int)
            // NetworkVarNames: m_flGuideBotMatchLastTaskNagVO (float)
            // NetworkVarNames: m_flGuideBotLastTimeTaskCompleted (float)
            // NetworkVarNames: m_eGuidedBotMatchObjective (EGuidedBotMatchObjective)
            // NetworkVarNames: m_nAssignedLane (int8)
            // NetworkVarNames: m_nOriginalLaneAssignment (int8)
            // NetworkVarNames: m_bSwapCastModeAbility1 (bool)
            // NetworkVarNames: m_bSwapCastModeAbility2 (bool)
            // NetworkVarNames: m_bSwapCastModeAbility3 (bool)
            // NetworkVarNames: m_bSwapCastModeAbility4 (bool)
            // NetworkVarNames: m_bIsKingPanda (bool)
            // NetworkVarNames: m_bBotDisconnectTakeover (bool)
            // NetworkVarNames: m_bInTeamChat (bool)
            // NetworkVarNames: m_bInPartyChat (bool)
            // NetworkVarNames: m_hHeroPawn (CHandle<CCitadelPlayerPawn>)
            // NetworkVarNames: m_PlayerDataGlobal (PlayerDataGlobal_t)
            // NetworkVarNames: m_nDeathReplayAvailable (int8)
            // NetworkVarNames: m_unLobbyPlayerSlot (CitadelLobbyPlayerSlot_t)
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
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_GenericPerson_2 {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            namespace CCitadel_Ability_Ghost_BloodShards {
                constexpr std::ptrdiff_t m_vecDamagedTargets = 0xDC0; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Intrinsic_BaseVData {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace CCitadel_Projectile_Cyclone {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadelModifier_Viscous_Goo_Aura {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Intimidated {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_TargetPracticeEnemy {
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierPowerGeneratorVData {
                constexpr std::ptrdiff_t m_EffectToTitan = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifierVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_VoidSphereVData {
                constexpr std::ptrdiff_t m_TeleportStartParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportEndParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x7B8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportModelParticle = 0x898; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_BuffModifier = 0x978; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_flPreTeleportDuration = 0x988; // float32
                constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0x990; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Chrono_TimeWallVData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TimeWallParticle = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TimeWallChargeParticle = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TimeWallHitParticle = 0x16F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TimeWallHitTimerParticle = 0x17D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strWallCreated = 0x18B8; // CSoundEventName
                constexpr std::ptrdiff_t m_strChargeUpSound = 0x18C8; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_GhostBloodShardDebuffVData {
                constexpr std::ptrdiff_t m_BloodShardDebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CCitadel_Modifier_DPSTracker {
                constexpr std::ptrdiff_t m_flProgress = 0xC0; // float32
                constexpr std::ptrdiff_t m_flDistToTarget = 0xC4; // float32
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Slork_LastBreath {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Synth_Blitz {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Urn_Debuff {
            }
            // Parent: CitadelAbilityVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityChargedShotVData {
                constexpr std::ptrdiff_t m_ChannelParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ChannelStartParticle = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ShootParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Aerial_Assault {
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Dust_Storm_Aura {
            }
            // Parent: C_CitadelProjectile
            // Field count: 0
            namespace C_CitadelHornetStingProjectile {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_Item_CheatDeath {
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_Chomp_Hobbled {
                constexpr std::ptrdiff_t m_LastUpdate = 0xC0; // GameTime_t
                constexpr std::ptrdiff_t m_flDamageTime = 0xC4; // float32
                constexpr std::ptrdiff_t m_flMovementTime = 0xC8; // float32
                constexpr std::ptrdiff_t m_hGrappler = 0xCC; // CHandle<C_BaseEntity>
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierChompGrappleVData {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_AirLift_Explode_Target {
            }
            // Parent: CitadelAbilityVData
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHookVData {
                constexpr std::ptrdiff_t m_SelfModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_TargetModifier = 0x1538; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BulletAmpModifier = 0x1548; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_ShieldModifier = 0x1558; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_HookOutParticle = 0x1568; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strHookSuccessSound = 0x1648; // CSoundEventName
                constexpr std::ptrdiff_t m_strHookAllySound = 0x1658; // CSoundEventName
                constexpr std::ptrdiff_t m_strHookMissSound = 0x1668; // CSoundEventName
                constexpr std::ptrdiff_t m_strHookImpactGeoSound = 0x1678; // CSoundEventName
                constexpr std::ptrdiff_t m_SelfBuffCastSound = 0x1688; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIcePathing (bool)
            // NetworkVarNames: m_qLastAngles (QAngle)
            // NetworkVarNames: m_vLastVelocity (Vector)
            // NetworkVarNames: m_bFirstMovementTick (bool)
            namespace CCitadel_Ability_IcePath {
                constexpr std::ptrdiff_t m_bIcePathing = 0xCE0; // bool
                constexpr std::ptrdiff_t m_qLastAngles = 0xCE4; // QAngle
                constexpr std::ptrdiff_t m_vLastVelocity = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_bFirstMovementTick = 0xCFC; // bool
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_LearningHeroAbility {
                constexpr std::ptrdiff_t m_sDescription = 0xC0; // CBufferString
            }
            // Parent: None
            // Field count: 33
            //
            // Metadata:
            // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
            // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
            // NetworkVarNames: m_angRotation (QAngle)
            // NetworkVarNames: m_flScale (float)
            // NetworkVarNames: m_name (CUtlStringToken)
            // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
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
            // Parent: C_Citadel_BreakblePropPickup
            // Field count: 0
            namespace C_Citadel_BreakblePropHealthPickup {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierVData_SetModelScale {
                constexpr std::ptrdiff_t m_flScale = 0x5F8; // CRangeFloat
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_Riptide {
            }
            // Parent: CCitadelModifier
            // Field count: 2
            namespace CModifier_Mirage_Tornado_Lift {
                constexpr std::ptrdiff_t m_vecFloatDest = 0x130; // Vector
                constexpr std::ptrdiff_t m_vecStartingPos = 0x13C; // Vector
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CAbility_Rutger_ForceField {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flGroundDashSlideTime (CCitadelAutoScaledTime)
            // NetworkVarNames: m_flSlowGetupStartTime (GameTime_t)
            // NetworkVarNames: m_bShouldTriggerSlowGetup (bool)
            // NetworkVarNames: m_bWantsSlide (bool)
            // NetworkVarNames: m_bAirborneWhenDuckPressed (bool)
            // NetworkVarNames: m_bIsSliding (bool)
            // NetworkVarNames: m_flSpeedAdjust (float)
            // NetworkVarNames: m_flDuckPressedTime (GameTime_t)
            // NetworkVarNames: m_flVelocityAtDuckPressedTime (float)
            // NetworkVarNames: m_flSlideChangeTime (GameTime_t)
            // NetworkVarNames: m_flSlidingOnFlatStartTime (GameTime_t)
            // NetworkVarNames: m_nJumpsThisSlideSession (int)
            // NetworkVarNames: m_flOnGroundStartTime (GameTime_t)
            // NetworkVarNames: m_flDashSlideStartTime (GameTime_t)
            namespace CCitadel_Ability_Slide {
                constexpr std::ptrdiff_t m_flGroundDashSlideTime = 0xCC8; // CCitadelAutoScaledTime
                constexpr std::ptrdiff_t m_flSlowGetupStartTime = 0xCE0; // GameTime_t
                constexpr std::ptrdiff_t m_bShouldTriggerSlowGetup = 0xCE4; // bool
                constexpr std::ptrdiff_t m_bWantsSlide = 0xCE5; // bool
                constexpr std::ptrdiff_t m_bAirborneWhenDuckPressed = 0xCE6; // bool
                constexpr std::ptrdiff_t m_bIsSliding = 0xCE7; // bool
                constexpr std::ptrdiff_t m_flSpeedAdjust = 0xCE8; // float32
                constexpr std::ptrdiff_t m_flDuckPressedTime = 0xCEC; // GameTime_t
                constexpr std::ptrdiff_t m_flVelocityAtDuckPressedTime = 0xCF0; // float32
                constexpr std::ptrdiff_t m_flSlideChangeTime = 0xCF4; // GameTime_t
                constexpr std::ptrdiff_t m_flSlidingOnFlatStartTime = 0xCF8; // GameTime_t
                constexpr std::ptrdiff_t m_nJumpsThisSlideSession = 0xCFC; // int32
                constexpr std::ptrdiff_t m_flOnGroundStartTime = 0xD00; // GameTime_t
                constexpr std::ptrdiff_t m_flDashSlideStartTime = 0xD04; // GameTime_t
                constexpr std::ptrdiff_t m_bStartedSlideViaProbeSlope = 0xD08; // bool
                constexpr std::ptrdiff_t m_nSlideEffectIndex = 0xD0C; // ParticleIndex_t
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iLane (int)
            // NetworkVarNames: m_nElectricBeamCasts (int)
            // NetworkVarNames: m_eAliveState (ETier3State_t)
            // NetworkVarNames: m_ePhase (ETier3Phase_t)
            namespace C_NPC_Boss_Tier3 {
                constexpr std::ptrdiff_t m_iLane = 0x1490; // int32
                constexpr std::ptrdiff_t m_angTargeting1 = 0x1498; // QAngle
                constexpr std::ptrdiff_t m_angTargeting2 = 0x14B0; // QAngle
                constexpr std::ptrdiff_t m_nElectricBeamCasts = 0x14C8; // int32
                constexpr std::ptrdiff_t m_eAliveState = 0x14CC; // ETier3State_t
                constexpr std::ptrdiff_t m_ePhase = 0x14D0; // ETier3Phase_t
            }
            // Parent: CCitadelModifierVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BreakablePropExtraGoldPickupVData {
                constexpr std::ptrdiff_t m_iBaseExtraGoldBounty = 0x5F8; // int32
                constexpr std::ptrdiff_t m_iPerMinuteExtraGoldBounty = 0x5FC; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Astro_Shotgun_Toggle_VData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_Intrinsic_BaseVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MagicStormWatcherVData {
                constexpr std::ptrdiff_t m_BuffModifier = 0x5F8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 4
            namespace CCitadel_Modifier_TrooperDisabledInvulnerability {
                constexpr std::ptrdiff_t m_flBulletResistancePctMax = 0xC0; // float32
                constexpr std::ptrdiff_t m_bShieldUp = 0xC4; // bool
                constexpr std::ptrdiff_t m_flShieldUpTime = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_trackInfo = 0xCC; // ModifierTrackedParticle_t
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x558; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x580; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x584; // bool
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_FlameDashGroundAura {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: CCitadel_Ability_Melee_Base
            // Field count: 1
            namespace CCitadel_Ability_Uppercut {
                constexpr std::ptrdiff_t m_bShouldUseResources = 0xF20; // bool
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecPulseTargets (EHANDLE)
            namespace CCitadel_Ability_PsychicPulse {
                constexpr std::ptrdiff_t m_vecPulseTargets = 0xCA8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_TintController {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_WingBlastApply {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_ImmobilizeTrap_Debuff {
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_WeaponUpgrade_Headhunter {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            //
            // Metadata:
            // NetworkVarNames: m_hSpriteMaterial (HMaterialStrong)
            // NetworkVarNames: m_hAttachedToEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_flSpriteFramerate (float32)
            // NetworkVarNames: m_flFrame (float32)
            // NetworkVarNames: m_nBrightness (uint32)
            // NetworkVarNames: m_flBrightnessDuration (float32)
            // NetworkVarNames: m_flSpriteScale (float32)
            // NetworkVarNames: m_flScaleDuration (float32)
            // NetworkVarNames: m_bWorldSpaceScale (bool)
            // NetworkVarNames: m_flGlowProxySize (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x830; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x838; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x83C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x840; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x844; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x848; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x858; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x85C; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x860; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x864; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x868; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x86C; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x870; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x874; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x878; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x87C; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x880; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x884; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x888; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x88C; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x890; // GameTime_t
                constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0x898; // CWeakHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x938; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x93C; // int32
            }
            // Parent: CitadelAbilityVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityBullChargeVData {
                constexpr std::ptrdiff_t m_cameraSequenceImpact = 0x1528; // CitadelCameraOperationsSequence_t
                constexpr std::ptrdiff_t m_ModifierTossAirControlLockout = 0x15A8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ModifierWeaponPowerIncrease = 0x15B8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ModifierChargeDragEnemy = 0x15C8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_ModifierBullCharging = 0x15D8; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_WallImpactParticle = 0x15E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strWallSlamSound = 0x16C8; // CSoundEventName
                constexpr std::ptrdiff_t m_flWallStunLookAheadDist = 0x16D8; // float32
            }
            // Parent: C_TeamplayRules
            // Field count: 47
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_fLevelStartTime (GameTime_t)
            // NetworkVarNames: m_flGameStartTime (GameTime_t)
            // NetworkVarNames: m_flRoundStartTime (GameTime_t)
            // NetworkVarNames: m_eGameState (EGameState)
            // NetworkVarNames: m_hTowerAmber (EHANDLE)
            // NetworkVarNames: m_hTowerSapphire (EHANDLE)
            // NetworkVarNames: m_bEnemyInAmberBase (bool)
            // NetworkVarNames: m_bEnemyInSapphireBase (bool)
            // NetworkVarNames: m_vMinimapMins (Vector)
            // NetworkVarNames: m_vMinimapMaxs (Vector)
            // NetworkVarNames: m_bMatchSafeToAbandon (bool)
            // NetworkVarNames: m_bNoDeathEnabled (bool)
            // NetworkVarNames: m_bFastCooldownsEnabled (bool)
            // NetworkVarNames: m_bStaminaCooldownsEnabled (bool)
            // NetworkVarNames: m_bInfiniteResourcesEnabled (bool)
            // NetworkVarNames: m_bFlexSlotsForcedUnlocked (bool)
            // NetworkVarNames: m_eMatchMode (ECitadelMatchMode)
            // NetworkVarNames: m_eGameMode (ECitadelGameMode)
            // NetworkVarNames: m_unSpectatorCount (uint32)
            // NetworkVarNames: m_hTrooperMinimap (CHandle<CCitadelTrooperMinimap>)
            // NetworkVarNames: m_hCurrentHeroDrafterRebels (EHANDLE)
            // NetworkVarNames: m_hCurrentHeroDrafterCombine (EHANDLE)
            // NetworkVarNames: m_bServerPaused (bool)
            // NetworkVarNames: m_iPauseTeam (int)
            // NetworkVarNames: m_nMatchClockUpdateTick (int)
            // NetworkVarNames: m_flMatchClockAtLastUpdate (float)
            // NetworkVarNames: m_bRequiresReportCardDismissal (bool)
            // NetworkVarNames: m_eGGTeam (int)
            // NetworkVarNames: m_flGGEndsAtTime (GameTime_t)
            // NetworkVarNames: m_unMatchID (MatchID_t)
            // NetworkVarNames: m_nExperimentalGameplayState (int)
            // NetworkVarNames: m_flHeroDiedTime (GameTime_t)
            namespace C_CitadelGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x58; // bool
                constexpr std::ptrdiff_t m_fLevelStartTime = 0x5C; // GameTime_t
                constexpr std::ptrdiff_t m_flGameStartTime = 0x60; // GameTime_t
                constexpr std::ptrdiff_t m_flRoundStartTime = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_eGameState = 0x68; // EGameState
                constexpr std::ptrdiff_t m_hTowerAmber = 0x6C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTowerSapphire = 0x70; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnemyInAmberBase = 0x74; // bool
                constexpr std::ptrdiff_t m_bEnemyInSapphireBase = 0x75; // bool
                constexpr std::ptrdiff_t m_vMinimapMins = 0x78; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0x84; // Vector
                constexpr std::ptrdiff_t m_bMatchSafeToAbandon = 0x90; // bool
                constexpr std::ptrdiff_t m_bNoDeathEnabled = 0x91; // bool
                constexpr std::ptrdiff_t m_bFastCooldownsEnabled = 0x92; // bool
                constexpr std::ptrdiff_t m_bStaminaCooldownsEnabled = 0x93; // bool
                constexpr std::ptrdiff_t m_bInfiniteResourcesEnabled = 0x94; // bool
                constexpr std::ptrdiff_t m_bFlexSlotsForcedUnlocked = 0x95; // bool
                constexpr std::ptrdiff_t m_eMatchMode = 0x98; // ECitadelMatchMode
                constexpr std::ptrdiff_t m_eGameMode = 0x9C; // ECitadelGameMode
                constexpr std::ptrdiff_t m_unSpectatorCount = 0xA0; // uint32
                constexpr std::ptrdiff_t m_hTrooperMinimap = 0xA4; // CHandle<CCitadelTrooperMinimap>
                constexpr std::ptrdiff_t m_hCurrentHeroDrafterRebels = 0xA8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCurrentHeroDrafterCombine = 0xAC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bDontUploadStats = 0xB0; // bool
                constexpr std::ptrdiff_t m_bServerPaused = 0x9E08; // bool
                constexpr std::ptrdiff_t m_iPauseTeam = 0x9E0C; // int32
                constexpr std::ptrdiff_t m_nMatchClockUpdateTick = 0x9E10; // int32
                constexpr std::ptrdiff_t m_flMatchClockAtLastUpdate = 0x9E14; // float32
                constexpr std::ptrdiff_t m_flPauseTime = 0x9E18; // float64
                constexpr std::ptrdiff_t m_pausingPlayerId = 0x9E20; // CPlayerSlot
                constexpr std::ptrdiff_t m_unpausingPlayerId = 0x9E24; // CPlayerSlot
                constexpr std::ptrdiff_t m_fPauseRawTime = 0x9E28; // float32
                constexpr std::ptrdiff_t m_fPauseCurTime = 0x9E2C; // float32
                constexpr std::ptrdiff_t m_fUnpauseRawTime = 0x9E30; // float32
                constexpr std::ptrdiff_t m_fUnpauseCurTime = 0x9E34; // float32
                constexpr std::ptrdiff_t m_bRequiresReportCardDismissal = 0x9E88; // bool
                constexpr std::ptrdiff_t m_flPreGameWaitEndTime = 0x9E8C; // GameTime_t
                constexpr std::ptrdiff_t m_flReportCardDismissalWaitStart = 0x9E90; // GameTime_t
                constexpr std::ptrdiff_t m_nLastPreGameCount = 0x9E94; // int32
                constexpr std::ptrdiff_t m_eGGTeam = 0x9E98; // int32
                constexpr std::ptrdiff_t m_flGGEndsAtTime = 0x9E9C; // GameTime_t
                constexpr std::ptrdiff_t m_unMatchID = 0x9EA0; // MatchID_t
                constexpr std::ptrdiff_t m_nExperimentalGameplayState = 0x9EA8; // int32
                constexpr std::ptrdiff_t m_nPlayerDeathEventID = 0x9EAC; // int32
                constexpr std::ptrdiff_t m_nReplayChangedEvent = 0x9EB0; // int32
                constexpr std::ptrdiff_t m_nGameOverEvent = 0x9EB4; // int32
                constexpr std::ptrdiff_t m_flHeroDiedTime = 0x9ED8; // GameTime_t
            }
            // Parent: CCitadelModifierAura
            // Field count: 0
            namespace CCitadel_Modifier_Tier2Boss_RocketDamage_Aura {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_Rutger_Pulse_VData {
                constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x5F8; // CSoundEventName
            }
            // Parent: CitadelAbilityVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityShivDashVData {
                constexpr std::ptrdiff_t m_DashModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_DashImpactEffect = 0x1538; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DashSwingEffect = 0x1618; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_DashLineEffect = 0x16F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strDashStartWithTargets = 0x17D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strDashStartEcho = 0x17E8; // CSoundEventName
                constexpr std::ptrdiff_t m_strDashStartMiss = 0x17F8; // CSoundEventName
                constexpr std::ptrdiff_t m_strDashHitEnemy = 0x1808; // CSoundEventName
                constexpr std::ptrdiff_t m_flEchoDelay = 0x1818; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Nano_Pounce_Self {
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 0
            namespace CCitadel_Ability_MobileResupply {
            }
            // Parent: CitadelAbilityVData
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAbilityHornetSnipeVData {
                constexpr std::ptrdiff_t m_AssassinateShotParticle = 0x1528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_AssassinateShotParticleOwnerOnly = 0x1608; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaserSightParticle = 0x16E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_LaserSightParticleOwnerOnly = 0x17C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_SnipeModifier = 0x18A8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_BuffOnKillModifier = 0x18B8; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_strSnipeImpactSound = 0x18C8; // CSoundEventName
                constexpr std::ptrdiff_t m_flMinScopeTimeToShoot = 0x18D8; // float32
                constexpr std::ptrdiff_t m_flScopeTimeToFullPower = 0x18DC; // float32
                constexpr std::ptrdiff_t m_flScopeMinPowerFrac = 0x18E0; // float32
                constexpr std::ptrdiff_t m_flFadeToBlackTime = 0x18E4; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_AblativeCoatResistBuff {
            }
            // Parent: CCitadelModifierVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifierVitalitySuppressorVData {
                constexpr std::ptrdiff_t m_DebuffParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            }
            // Parent: C_AI_CitadelNPC
            // Field count: 0
            namespace C_CitadelPlayerBotNPCBrain {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_AnimGraph2TestProp {
            }
            // Parent: CBaseAnimGraph
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragPos = 0xB48; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0xB60; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0xB78; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0xB7C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xB80; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xB84; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xB88; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xBA0; // CUtlVector<int32>
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_WeaponUpgrade_BansheeSlugs {
            }
            // Parent: CitadelAbilityVData
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseDashCastAbilityVData {
                constexpr std::ptrdiff_t m_AbilityToTrigger = 0x1528; // CSubclassName<4>
                constexpr std::ptrdiff_t m_flDashCastTriggerRadius = 0x1538; // float32
                constexpr std::ptrdiff_t m_flDashSpeed = 0x153C; // float32
                constexpr std::ptrdiff_t m_bSnapToZeroSpeedOnEnd = 0x1540; // bool
                constexpr std::ptrdiff_t m_bUseCurveToDefineSpeed = 0x1541; // bool
                constexpr std::ptrdiff_t m_MovementSpeedCurve = 0x1548; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_flMovementSpeedCurveAvgSpeed = 0x1588; // float32
                constexpr std::ptrdiff_t m_strTargetHitSound = 0x1590; // CSoundEventName
                constexpr std::ptrdiff_t m_strMissSound = 0x15A0; // CSoundEventName
            }
            // Parent: CCitadelModifierVData
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModifier_Synth_Barrage_Amp_VData {
            }
            // Parent: CitadelAbilityVData
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_Gravity_Lasso_VData {
                constexpr std::ptrdiff_t m_GravityLassoSelf = 0x1528; // CEmbeddedSubclass<CBaseModifier>
                constexpr std::ptrdiff_t m_GravityLassoTarget = 0x1538; // CEmbeddedSubclass<CBaseModifier>
            }
            // Parent: CCitadel_Modifier_BaseEventProcVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_MeleeCharge_VData {
                constexpr std::ptrdiff_t m_SwingParticle = 0x628; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HitParticle = 0x708; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_ReloadVisualModifier = 0x7E8; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CitadelItemVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Item_HealthRegenAuraVData {
                constexpr std::ptrdiff_t m_HealParticle = 0x1570; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_CastHealParticle = 0x1650; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_HealingPulseTrackerModifier = 0x1730; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadel_Modifier_RegeneratingTechShield
            // Field count: 0
            namespace CCitadel_Modifier_GalvanicStormTechShield {
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Root {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CCitadelHeroComponent (CCitadelHeroComponent::Storage_t)
            namespace C_HeroPreview {
                constexpr std::ptrdiff_t m_CCitadelHeroComponent = 0x558; // CCitadelHeroComponent
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: CCitadel_Item
            // Field count: 0
            namespace CCitadel_ArmorUpgrade_Colossus {
            }
            // Parent: CCitadel_Ability_BaseHeldItemVData
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Ability_GoldenIdolVData {
                constexpr std::ptrdiff_t m_sIdolDropOffSound = 0x1608; // CSoundEventName
                constexpr std::ptrdiff_t m_DropoffTimerModifier = 0x1618; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_Bonus01 = 0x1628; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_Bonus02 = 0x1638; // CEmbeddedSubclass<CCitadelModifier>
                constexpr std::ptrdiff_t m_flInstantGoldPercentage = 0x1648; // float32
                constexpr std::ptrdiff_t m_iComebackBounty = 0x164C; // int32
                constexpr std::ptrdiff_t m_iComebackGoldThreshold = 0x1650; // int32
                constexpr std::ptrdiff_t m_flCasterBonusPercent = 0x1654; // float32
            }
            // Parent: CCitadelModifier
            // Field count: 0
            namespace CCitadel_Modifier_Slork_Visible {
            }
            // Parent: CitadelAbilityVData
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Slork_Raging_CurrentVData {
                constexpr std::ptrdiff_t m_AuraModifier = 0x1528; // CEmbeddedSubclass<CCitadelModifier>
            }
            // Parent: CCitadelModifier
            // Field count: 1
            namespace CCitadel_Modifier_Thumper_Ability_2 {
                constexpr std::ptrdiff_t m_vLastPosition = 0xC0; // Vector
            }
            // Parent: CCitadelModifierVData
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_BulletFlurryVData {
                constexpr std::ptrdiff_t m_ImpactParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_strAttackerHitSound = 0x6D8; // CSoundEventName
                constexpr std::ptrdiff_t m_strVictimHitSound = 0x6E8; // CSoundEventName
            }
            // Parent: C_CitadelBaseAbility
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bCardIsFlying (bool)
            namespace CCitadel_Ability_CardToss {
                constexpr std::ptrdiff_t m_bCardIsFlying = 0xEF0; // bool
            }
            // Parent: CCitadelModifierVData
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCitadel_Modifier_TeleportToObjectiveVData {
                constexpr std::ptrdiff_t m_TeleportOriginParticle = 0x5F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportDestinationParticle = 0x6D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_TeleportStartSound = 0x7B8; // CSoundEventName
                constexpr std::ptrdiff_t m_TeleportCompleteSound = 0x7C8; // CSoundEventName
                constexpr std::ptrdiff_t m_TeleportArriveSound = 0x7D8; // CSoundEventName
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_SourceModifierID (EntitySubclassID_t)
            // NetworkVarNames: m_eValType (EModifierValue)
            // NetworkVarNames: m_flValue (float)
            namespace StatViewerModifierValues_t {
                constexpr std::ptrdiff_t m_SourceModifierID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_eValType = 0x34; // EModifierValue
                constexpr std::ptrdiff_t m_flValue = 0x38; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<C_BaseEntity>
            }
        }
    }
}
