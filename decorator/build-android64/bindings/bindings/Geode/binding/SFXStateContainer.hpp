#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class SFXStateContainer {
public:
    static constexpr auto CLASS_NAME = "SFXStateContainer";
    double m_startTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_startTime);
    GEODE_DEFINE_ALIAS(m_startTime, m_unkDouble1);

    double m_duration;
    GEODE_DEFINE_ALIAS_HELPERS(m_duration);
    GEODE_DEFINE_ALIAS(m_duration, m_unkDouble2);

    float m_target;
    GEODE_DEFINE_ALIAS_HELPERS(m_target);
    GEODE_DEFINE_ALIAS(m_target, m_unkFloat1);

    float m_unusedFrom;
    GEODE_DEFINE_ALIAS_HELPERS(m_unusedFrom);
    GEODE_DEFINE_ALIAS(m_unusedFrom, m_unkFloat2);

    bool m_active;
    GEODE_DEFINE_ALIAS_HELPERS(m_active);
    GEODE_DEFINE_ALIAS(m_active, m_unkBool);

};
