#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCPoint.hpp>

class GameObjectPhysics {
public:
    static constexpr auto CLASS_NAME = "GameObjectPhysics";
    GameObject* m_gameObject;
    cocos2d::CCPoint m_velocity;
    GEODE_DEFINE_ALIAS_HELPERS(m_velocity);
    GEODE_DEFINE_ALIAS(m_velocity, m_unkPoint1);

    cocos2d::CCPoint m_direction;
    GEODE_DEFINE_ALIAS_HELPERS(m_direction);
    GEODE_DEFINE_ALIAS(m_direction, m_unkPoint2);

    float m_targetAngle;
    GEODE_DEFINE_ALIAS_HELPERS(m_targetAngle);
    GEODE_DEFINE_ALIAS(m_targetAngle, m_unkFloat1);

    float m_turnSpeed;
    GEODE_DEFINE_ALIAS_HELPERS(m_turnSpeed);
    GEODE_DEFINE_ALIAS(m_turnSpeed, m_unkFloat2);

    int m_unkInt1;
    int m_lastUpdateStep;
    GEODE_DEFINE_ALIAS_HELPERS(m_lastUpdateStep);
    GEODE_DEFINE_ALIAS(m_lastUpdateStep, m_unkInt2);

    int m_exclusiveStep;
    GEODE_DEFINE_ALIAS_HELPERS(m_exclusiveStep);
    GEODE_DEFINE_ALIAS(m_exclusiveStep, m_unkInt3);

};
