#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminLogEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminLogEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminLogEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x217160
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminLogEntry();
    std::string m_action;
    std::string m_actionArgument;
    int m_durationMinutes;
    int m_actionValue;
    int m_reasonMask;
    std::string m_note;
    std::string m_actionDetails;
    std::string m_actorName;
    long long m_timestamp;
};
