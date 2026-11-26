#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class SongTriggerState {
public:
    static constexpr auto CLASS_NAME = "SongTriggerState";
    SongTriggerGameObject* m_songTriggerGameObject;
    double m_startTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_startTime);
    GEODE_DEFINE_ALIAS(m_startTime, m_unkDouble);

};
