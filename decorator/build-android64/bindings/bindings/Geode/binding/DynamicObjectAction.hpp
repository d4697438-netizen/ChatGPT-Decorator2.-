#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class DynamicObjectAction {
public:
    static constexpr auto CLASS_NAME = "DynamicObjectAction";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DynamicObjectAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DynamicObjectAction(EffectGameObject* object, GameObject* targetObject, GameObject* centerObject);
    EffectGameObject* m_trigger;
    GEODE_DEFINE_ALIAS_HELPERS(m_trigger);
    GEODE_DEFINE_ALIAS(m_trigger, m_gameObject1);

    GameObject* m_centerObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_centerObject);
    GEODE_DEFINE_ALIAS(m_centerObject, m_gameObject2);

    GameObject* m_aimTargetObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_aimTargetObject);
    GEODE_DEFINE_ALIAS(m_aimTargetObject, m_gameObject3);

    GameObject* m_targetObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_targetObject);
    GEODE_DEFINE_ALIAS(m_targetObject, m_gameObject4);

    GameObject* m_minXObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_minXObject);
    GEODE_DEFINE_ALIAS(m_minXObject, m_gameObject5);

    GameObject* m_minYObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_minYObject);
    GEODE_DEFINE_ALIAS(m_minYObject, m_gameObject6);

    GameObject* m_maxXObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_maxXObject);
    GEODE_DEFINE_ALIAS(m_maxXObject, m_gameObject7);

    GameObject* m_maxYObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_maxYObject);
    GEODE_DEFINE_ALIAS(m_maxYObject, m_gameObject8);

    float m_elapsed;
    GEODE_DEFINE_ALIAS_HELPERS(m_elapsed);
    GEODE_DEFINE_ALIAS(m_elapsed, m_unkFloat1);

    float m_easedElapsed;
    GEODE_DEFINE_ALIAS_HELPERS(m_easedElapsed);
    GEODE_DEFINE_ALIAS(m_easedElapsed, m_unkFloat2);

    float m_easedProgress;
    GEODE_DEFINE_ALIAS_HELPERS(m_easedProgress);
    GEODE_DEFINE_ALIAS(m_easedProgress, m_unkFloat3);

    bool m_justStarted;
    GEODE_DEFINE_ALIAS_HELPERS(m_justStarted);
    GEODE_DEFINE_ALIAS(m_justStarted, m_unkBool1);

    bool m_stopped;
    GEODE_DEFINE_ALIAS_HELPERS(m_stopped);
    GEODE_DEFINE_ALIAS(m_stopped, m_unkBool2);

    bool m_paused;
    GEODE_DEFINE_ALIAS_HELPERS(m_paused);
    GEODE_DEFINE_ALIAS(m_paused, m_unkBool3);

    bool m_pausePending;
    GEODE_DEFINE_ALIAS_HELPERS(m_pausePending);
    GEODE_DEFINE_ALIAS(m_pausePending, m_unkBool4);

    int m_controlID;
    int m_targetGroupID;
    int m_centerGroupID;
};
