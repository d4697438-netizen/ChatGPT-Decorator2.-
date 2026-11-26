#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminReportQueueEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminReportQueueEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminReportQueueEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x217240
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminReportQueueEntry();
    int m_accountID;
    std::string m_userName;
    int m_itemCount;
    int m_unk64;
    int m_anonymousReporterCount;
    int m_topReason;
    long long m_unk70;
    std::string m_lastReportAge;
    int m_directReportCount;
    int m_lastViewedByAccountID;
    std::string m_lastViewedByName;
    std::string m_lastViewedAge;
    int m_flagScore;
    int m_flagType;
    int m_unke8;
    int m_unkec;
    int m_flagCount;
    long long m_unkf8;
    int m_points;
    int m_reporterCount;
};
