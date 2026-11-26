#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class SongChannelState {
public:
    static constexpr auto CLASS_NAME = "SongChannelState";
    SongTriggerGameObject* m_songTriggerGameObject1;
    double m_startTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_startTime);
    GEODE_DEFINE_ALIAS(m_startTime, m_unkDouble1);

    SongTriggerGameObject* m_songTriggerGameObject2;
    double m_prepareTime;
    GEODE_DEFINE_ALIAS_HELPERS(m_prepareTime);
    GEODE_DEFINE_ALIAS(m_prepareTime, m_unkDouble2);

};
