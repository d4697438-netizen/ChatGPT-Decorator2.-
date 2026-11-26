#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/SFXStateContainer.hpp>
#include <Geode/mapping/array.hpp>

class SFXTriggerState {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerState";
    SFXTriggerGameObject* m_sfxTriggerGameObject;
    int m_instanceID;
    GEODE_DEFINE_ALIAS_HELPERS(m_instanceID);
    GEODE_DEFINE_ALIAS(m_instanceID, m_unkInt1);

    double m_startTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_startTime);
    GEODE_DEFINE_ALIAS(m_startTime, m_unkDouble1);

    double m_playPosition;
    GEODE_DEFINE_ALIAS_HELPERS(m_playPosition);
    GEODE_DEFINE_ALIAS(m_playPosition, m_unkDouble2);

    double m_positionTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_positionTime);
    GEODE_DEFINE_ALIAS(m_positionTime, m_unkDouble3);

    double m_lastUpdateTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_lastUpdateTime);
    GEODE_DEFINE_ALIAS(m_lastUpdateTime, m_unkDouble4);

    float m_speed;
    GEODE_DEFINE_ALIAS_HELPERS(m_speed);
    GEODE_DEFINE_ALIAS(m_speed, m_unkFloat1);

    float m_groupSpeed;
    GEODE_DEFINE_ALIAS_HELPERS(m_groupSpeed);
    GEODE_DEFINE_ALIAS(m_groupSpeed, m_unkFloat2);

    float m_volume;
    GEODE_DEFINE_ALIAS_HELPERS(m_volume);
    GEODE_DEFINE_ALIAS(m_volume, m_unkFloat3);

    float m_length;
    GEODE_DEFINE_ALIAS_HELPERS(m_length);
    GEODE_DEFINE_ALIAS(m_length, m_unkFloat4);

    int m_index;
    GEODE_DEFINE_ALIAS_HELPERS(m_index);
    GEODE_DEFINE_ALIAS(m_index, m_unkInt2);

    bool m_processed;
    bool m_loop;
    GEODE_DEFINE_ALIAS_HELPERS(m_loop);
    GEODE_DEFINE_ALIAS(m_loop, m_unkBool1);

    std::array<SFXStateContainer, 3> m_sfxStateContainers;
};
