#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/EventTriggerInstance.hpp>
#include <Geode/binding/SongChannelState.hpp>
#include <Geode/binding/DynamicObjectAction.hpp>
#include <Geode/binding/AdvancedFollowInstance.hpp>
#include <Geode/binding/EnterEffectInstance.hpp>
#include <Geode/binding/GameObjectPhysics.hpp>
#include <Geode/binding/GJValueTween.hpp>
#include <Geode/binding/SFXTriggerInstance.hpp>
#include <Geode/binding/SFXTriggerState.hpp>
#include <Geode/binding/SongTriggerState.hpp>
#include <Geode/binding/EnterEffectAnimValue.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GJGameState {
public:
    static constexpr auto CLASS_NAME = "GJGameState";

    /**
     * @note[short] MacOS (ARM): 0xcbf08
     * @note[short] MacOS (Intel): 0xea1a0
     * @note[short] Windows: 0x30b370
     * @note[short] Android
     */
    void controlTweenAction(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xcc438
     * @note[short] MacOS (Intel): 0xea840
     * @note[short] Windows: 0x30b710
     * @note[short] Android
     */
    GameObjectPhysics& getGameObjectPhysics(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xcc324
     * @note[short] MacOS (Intel): 0xea710
     * @note[short] Windows: 0x30b5b0
     * @note[short] Android
     */
    void processStateTriggers();

    /**
     * @note[short] MacOS (ARM): 0xcbee0
     * @note[short] MacOS (Intel): 0xea170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopTweenAction(int action);

    /**
     * @note[short] MacOS (ARM): 0xcbe44
     * @note[short] MacOS (Intel): 0xea0c0
     * @note[short] Windows: 0x30b2b0
     * @note[short] Android
     */
    void tweenValue(float from, float to, int action, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xcc270
     * @note[short] MacOS (Intel): 0xea5f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTweenAction(float value, int action);

    /**
     * @note[short] MacOS (ARM): 0xcc078
     * @note[short] MacOS (Intel): 0xea310
     * @note[short] Windows: 0x30b400
     * @note[short] Android
     */
    void updateTweenActions(float tweenValue);
    float m_cameraZoom;
    float m_targetCameraZoom;
    cocos2d::CCPoint m_cameraOffset;
    cocos2d::CCPoint m_cameraOffsetTarget;
    cocos2d::CCPoint m_lastCameraTarget;
    cocos2d::CCPoint m_lastCameraOffset;
    cocos2d::CCPoint m_cameraDeltaPosition;
    cocos2d::CCPoint m_staticCameraStart;
    cocos2d::CCPoint m_staticCameraPosition;
    cocos2d::CCPoint m_staticCameraTarget;
    cocos2d::CCPoint m_staticExitOffset;
    cocos2d::CCPoint m_appliedStaticExitOffset;
    cocos2d::CCPoint m_staticStartVelocity;
    cocos2d::CCPoint m_staticCameraDuration;
    cocos2d::CCPoint m_staticTransitionProgress;
    cocos2d::CCPoint m_lastStaticTransitionProgress;
    cocos2d::CCPoint m_staticFollowEasing;
    cocos2d::CCPoint m_staticFollow;
    cocos2d::CCPoint m_staticFollowGroup;
    cocos2d::CCPoint m_staticCameraActive;
    cocos2d::CCPoint m_staticExitPending;
    cocos2d::CCPoint m_staticExitDuration;
    cocos2d::CCPoint m_staticExitEasingRate;
    cocos2d::CCPoint m_staticExitEasing;
    cocos2d::CCPoint m_staticSmoothVelocity;
    cocos2d::CCPoint m_staticSmoothVelocityMod;
    cocos2d::CCPoint m_staticExitStartOffset;
    cocos2d::CCPoint m_unkPoint25;
    cocos2d::CCPoint m_internalCameraOffset;
    cocos2d::CCPoint m_internalCameraOffsetTarget;
    cocos2d::CCPoint m_lastInternalCameraOffsetTarget;
    cocos2d::CCPoint m_unkPoint29;
    bool m_dualStaticCamera;
    GEODE_DEFINE_ALIAS_HELPERS(m_dualStaticCamera);
    GEODE_DEFINE_ALIAS(m_dualStaticCamera, m_unkBool1);

    int m_gameplayOffsetX;
    GEODE_DEFINE_ALIAS_HELPERS(m_gameplayOffsetX);
    GEODE_DEFINE_ALIAS(m_gameplayOffsetX, m_unkInt1);

    bool m_gameplayOffsetXDontZoom;
    GEODE_DEFINE_ALIAS_HELPERS(m_gameplayOffsetXDontZoom);
    GEODE_DEFINE_ALIAS(m_gameplayOffsetXDontZoom, m_unkBool2);

    int m_gameplayOffsetY;
    GEODE_DEFINE_ALIAS_HELPERS(m_gameplayOffsetY);
    GEODE_DEFINE_ALIAS(m_gameplayOffsetY, m_unkInt2);

    bool m_gameplayOffsetYDontZoom;
    GEODE_DEFINE_ALIAS_HELPERS(m_gameplayOffsetYDontZoom);
    GEODE_DEFINE_ALIAS(m_gameplayOffsetYDontZoom, m_unkBool3);

    cocos2d::CCPoint m_snapInternalCameraOffset;
    float m_middleGroundOffsetY;
    float m_middleGroundOffsetYTarget;
    GEODE_DEFINE_ALIAS_HELPERS(m_middleGroundOffsetYTarget);
    GEODE_DEFINE_ALIAS(m_middleGroundOffsetYTarget, m_unkInt3);

    float m_middleGroundOffsetYDuration;
    GEODE_DEFINE_ALIAS_HELPERS(m_middleGroundOffsetYDuration);
    GEODE_DEFINE_ALIAS(m_middleGroundOffsetYDuration, m_unkInt4);

    bool m_cameraMoveXActive;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraMoveXActive);
    GEODE_DEFINE_ALIAS(m_cameraMoveXActive, m_unkBool4);

    bool m_cameraMoveYActive;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraMoveYActive);
    GEODE_DEFINE_ALIAS(m_cameraMoveYActive, m_unkBool5);

    float m_cameraPadding;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraPadding);
    GEODE_DEFINE_ALIAS(m_cameraPadding, m_unkFloat2);

    float m_cameraEasing;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraEasing);
    GEODE_DEFINE_ALIAS(m_cameraEasing, m_unkFloat3);

    int m_unkInt5;
    int m_unkInt6;
    int m_unkInt7;
    int m_unkInt8;
    int m_unkInt9;
    float m_flyCameraY;
    GEODE_DEFINE_ALIAS_HELPERS(m_flyCameraY);
    GEODE_DEFINE_ALIAS(m_flyCameraY, m_unkInt10);

    float m_lastModeHeight;
    GEODE_DEFINE_ALIAS_HELPERS(m_lastModeHeight);
    GEODE_DEFINE_ALIAS(m_lastModeHeight, m_unkInt11);

    float m_lastCameraZoom;
    GEODE_DEFINE_ALIAS_HELPERS(m_lastCameraZoom);
    GEODE_DEFINE_ALIAS(m_lastCameraZoom, m_unkFloat4);

    float m_zoomDuration;
    GEODE_DEFINE_ALIAS_HELPERS(m_zoomDuration);
    GEODE_DEFINE_ALIAS(m_zoomDuration, m_unkUint1);

    float m_portalY;
    bool m_portalYDuringZoom;
    GEODE_DEFINE_ALIAS_HELPERS(m_portalYDuringZoom);
    GEODE_DEFINE_ALIAS(m_portalYDuringZoom, m_unkBool6);

    bool m_gravityRelated;
    float m_cameraCenterY;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraCenterY);
    GEODE_DEFINE_ALIAS(m_cameraCenterY, m_unkInt12);

    float m_cameraMoveYTarget;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraMoveYTarget);
    GEODE_DEFINE_ALIAS(m_cameraMoveYTarget, m_unkInt13);

    float m_flyCameraTargetY;
    GEODE_DEFINE_ALIAS_HELPERS(m_flyCameraTargetY);
    GEODE_DEFINE_ALIAS(m_flyCameraTargetY, m_unkInt14);

    float m_unkInt15;
    bool m_flyGroundActive;
    GEODE_DEFINE_ALIAS_HELPERS(m_flyGroundActive);
    GEODE_DEFINE_ALIAS(m_flyGroundActive, m_unkBool7);

    bool m_isFreeMode;
    GEODE_DEFINE_ALIAS_HELPERS(m_isFreeMode);
    GEODE_DEFINE_ALIAS(m_isFreeMode, m_unkBool8);

    bool m_disableCameraGridSnap;
    GEODE_DEFINE_ALIAS_HELPERS(m_disableCameraGridSnap);
    GEODE_DEFINE_ALIAS(m_disableCameraGridSnap, m_unkBool9);

    float m_backgroundSpeedX;
    GEODE_DEFINE_ALIAS_HELPERS(m_backgroundSpeedX);
    GEODE_DEFINE_ALIAS(m_backgroundSpeedX, m_unkFloat5);

    float m_backgroundSpeedY;
    GEODE_DEFINE_ALIAS_HELPERS(m_backgroundSpeedY);
    GEODE_DEFINE_ALIAS(m_backgroundSpeedY, m_unkFloat6);

    float m_middlegroundSpeedX;
    GEODE_DEFINE_ALIAS_HELPERS(m_middlegroundSpeedX);
    GEODE_DEFINE_ALIAS(m_middlegroundSpeedX, m_unkFloat7);

    float m_middlegroundSpeedY;
    GEODE_DEFINE_ALIAS_HELPERS(m_middlegroundSpeedY);
    GEODE_DEFINE_ALIAS(m_middlegroundSpeedY, m_unkFloat8);

    float m_cameraAngle;
    float m_targetCameraAngle;
    bool m_playerStreakBlend;
    float m_timeWarp;
    float m_queuedTimeWarp;
    float m_timeWarpRelated;
    int m_currentChannel;
    int m_rotateChannel;
    std::unordered_map<int, int> m_spawnChannelRelated0;
    std::unordered_map<int, bool> m_spawnChannelRelated1;
    double m_totalTime;
    double m_levelTime;
    double m_bestTime;
    unsigned int m_commandIndex;
    float m_unkUint3;
    unsigned int m_currentProgress;
    int m_stepCommandIndex;
    GEODE_DEFINE_ALIAS_HELPERS(m_stepCommandIndex);
    GEODE_DEFINE_ALIAS(m_stepCommandIndex, m_unkUint4);

    unsigned int m_positionHistoryTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_positionHistoryTime);
    GEODE_DEFINE_ALIAS(m_positionHistoryTime, m_unkUint5);

    unsigned int m_positionHistoryClock;
    GEODE_DEFINE_ALIAS_HELPERS(m_positionHistoryClock);
    GEODE_DEFINE_ALIAS(m_positionHistoryClock, m_unkUint6);

    unsigned int m_areaEffectCounter;
    GEODE_DEFINE_ALIAS_HELPERS(m_areaEffectCounter);
    GEODE_DEFINE_ALIAS(m_areaEffectCounter, m_unkUint7);

    unsigned int m_advancedFollowCounter;
    GEODE_DEFINE_ALIAS_HELPERS(m_advancedFollowCounter);
    GEODE_DEFINE_ALIAS(m_advancedFollowCounter, m_unkUint8);

    GameObject* m_lastActivatedPortal1;
    GameObject* m_lastActivatedPortal2;
    cocos2d::CCPoint m_cameraPosition;
    bool m_isFlipped;
    GEODE_DEFINE_ALIAS_HELPERS(m_isFlipped);
    GEODE_DEFINE_ALIAS(m_isFlipped, m_unkBool10);

    float m_levelFlipProgress;
    GEODE_DEFINE_ALIAS_HELPERS(m_levelFlipProgress);
    GEODE_DEFINE_ALIAS(m_levelFlipProgress, m_levelFlipping);

    bool m_inSecondHalfOfFlipAnimation;
    GEODE_DEFINE_ALIAS_HELPERS(m_inSecondHalfOfFlipAnimation);
    GEODE_DEFINE_ALIAS(m_inSecondHalfOfFlipAnimation, m_unkBool11);

    bool m_isFlipping;
    GEODE_DEFINE_ALIAS_HELPERS(m_isFlipping);
    GEODE_DEFINE_ALIAS(m_isFlipping, m_unkBool12);

    bool m_isDualMode;
    float m_dualAnimationProgress;
    GEODE_DEFINE_ALIAS_HELPERS(m_dualAnimationProgress);
    GEODE_DEFINE_ALIAS(m_dualAnimationProgress, m_unkFloat9);

    std::unordered_map<int, GJValueTween> m_tweenActions;
    int m_cameraEdgeValue0;
    int m_cameraEdgeValue1;
    int m_cameraEdgeValue2;
    int m_cameraEdgeValue3;
    std::unordered_map<int, GameObjectPhysics> m_gameObjectPhysics;
    std::vector<float> m_positionHistory;
    int m_unkUint10;
    int m_positionHistoryIndex;
    GEODE_DEFINE_ALIAS_HELPERS(m_positionHistoryIndex);
    GEODE_DEFINE_ALIAS(m_positionHistoryIndex, m_unkUint11);

    int m_cameraHistorySlot;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraHistorySlot);
    GEODE_DEFINE_ALIAS(m_cameraHistorySlot, m_unkUint12);

    cocos2d::CCPoint m_cameraStepDiff;
    float m_backgroundWidth;
    GEODE_DEFINE_ALIAS_HELPERS(m_backgroundWidth);
    GEODE_DEFINE_ALIAS(m_backgroundWidth, m_unkFloat10);

    float m_timeModRelated;
    bool m_timeModRelated2;
    std::map<std::pair<int, int>, int> m_activatedObjectIDs;
    float m_teleportCameraEaseTimer;
    GEODE_DEFINE_ALIAS_HELPERS(m_teleportCameraEaseTimer);
    GEODE_DEFINE_ALIAS(m_teleportCameraEaseTimer, m_unkUint13);

    cocos2d::CCPoint m_lastCameraEase;
    cocos2d::CCPoint m_cameraLastPosition;
    bool m_player1GoingSideways;
    GEODE_DEFINE_ALIAS_HELPERS(m_player1GoingSideways);
    GEODE_DEFINE_ALIAS(m_player1GoingSideways, m_unkBool20);

    bool m_player1GoingLeft;
    GEODE_DEFINE_ALIAS_HELPERS(m_player1GoingLeft);
    GEODE_DEFINE_ALIAS(m_player1GoingLeft, m_unkBool21);

    bool m_audioOnDeath;
    GEODE_DEFINE_ALIAS_HELPERS(m_audioOnDeath);
    GEODE_DEFINE_ALIAS(m_audioOnDeath, m_unkBool22);

    float m_respawnTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_respawnTime);
    GEODE_DEFINE_ALIAS(m_respawnTime, m_unkUint14);

    bool m_noDeathSFX;
    GEODE_DEFINE_ALIAS_HELPERS(m_noDeathSFX);
    GEODE_DEFINE_ALIAS(m_noDeathSFX, m_unkBool26);

    bool m_cameraShakeEnabled;
    float m_cameraShakeDuration;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraShakeDuration);
    GEODE_DEFINE_ALIAS(m_cameraShakeDuration, m_cameraShakeFactor);

    float m_cameraShakeStrength;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraShakeStrength);
    GEODE_DEFINE_ALIAS(m_cameraShakeStrength, m_unkUint15);

    float m_cameraShakeInterval;
    GEODE_DEFINE_ALIAS_HELPERS(m_cameraShakeInterval);
    GEODE_DEFINE_ALIAS(m_cameraShakeInterval, m_unkUint16);

    double m_lastShakeTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_lastShakeTime);
    GEODE_DEFINE_ALIAS(m_lastShakeTime, m_unkUint64_1);

    cocos2d::CCPoint m_cameraShakeOffset;
    unsigned int m_dualRelated;
    std::unordered_map<int, EnhancedGameObject*> m_stateObjects;
    std::map<std::pair<GJGameEvent, int>, std::vector<EventTriggerInstance>> m_gameEventTriggers;
    std::map<std::pair<GJGameEvent, int>, int> m_gameEventCounts;
    std::unordered_map<int, std::vector<EnterEffectInstance>> m_enterEffectInstanceVectors;
    std::unordered_map<int, std::vector<EnterEffectInstance>> m_exitEffectInstanceVectors;
    std::vector<int> m_enterChannelMap;
    std::vector<int> m_exitChannelMap;
    std::vector<EnterEffectInstance> m_moveEffectInstances;
    std::vector<EnterEffectInstance> m_rotateEffectInstances;
    std::vector<EnterEffectInstance> m_scaleEffectInstances;
    std::vector<EnterEffectInstance> m_fadeEffectInstances;
    std::vector<EnterEffectInstance> m_tintEffectInstances;
    std::unordered_set<int> m_unsortedAreaEffects;
    bool m_advancedFollowNeedsSort;
    GEODE_DEFINE_ALIAS_HELPERS(m_advancedFollowNeedsSort);
    GEODE_DEFINE_ALIAS(m_advancedFollowNeedsSort, m_unkBool27);

    std::vector<AdvancedFollowInstance> m_advanceFollowInstances;
    std::vector<DynamicObjectAction> m_dynamicMoveActions;
    std::vector<DynamicObjectAction> m_dynamicRotateActions;
    bool m_instantExitStaticCameraX;
    GEODE_DEFINE_ALIAS_HELPERS(m_instantExitStaticCameraX);
    GEODE_DEFINE_ALIAS(m_instantExitStaticCameraX, m_unkBool28);

    bool m_instantExitStaticCameraY;
    GEODE_DEFINE_ALIAS_HELPERS(m_instantExitStaticCameraY);
    GEODE_DEFINE_ALIAS(m_instantExitStaticCameraY, m_unkBool29);

    float m_maxPortalY;
    GEODE_DEFINE_ALIAS_HELPERS(m_maxPortalY);
    GEODE_DEFINE_ALIAS(m_maxPortalY, m_unkUint17);

    std::unordered_map<int, std::vector<int>> m_sfxTriggerChannels;
    std::map<std::pair<int,int>, SFXTriggerInstance> m_proximityVolumeRelated;
    std::unordered_map<int, SongChannelState> m_songChannelStates;
    std::unordered_map<int, std::vector<SongTriggerState>> m_songTriggerStateVectors;
    std::vector<SFXTriggerState> m_sfxTriggerStates;
    bool m_mainSongStopped;
    GEODE_DEFINE_ALIAS_HELPERS(m_mainSongStopped);
    GEODE_DEFINE_ALIAS(m_mainSongStopped, m_unkBool30);

    int m_background;
    int m_ground;
    int m_middleground;
    bool m_unlinkDualGravity;
    GEODE_DEFINE_ALIAS_HELPERS(m_unlinkDualGravity);
    GEODE_DEFINE_ALIAS(m_unlinkDualGravity, m_unkBool31);

    int m_points;
    bool m_hasObtainedPoints;
    GEODE_DEFINE_ALIAS_HELPERS(m_hasObtainedPoints);
    GEODE_DEFINE_ALIAS(m_hasObtainedPoints, m_unkBool32);

    unsigned int m_pauseCounter;
    unsigned int m_pauseBufferTimer;
};
