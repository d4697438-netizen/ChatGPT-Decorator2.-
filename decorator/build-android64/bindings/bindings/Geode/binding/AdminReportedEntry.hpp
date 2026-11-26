#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminReportedEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminReportedEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminReportedEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2171d0
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminReportedEntry();
    int m_contentType;
    int m_targetID;
    int m_parentID;
    int m_unk44;
    int m_anonymousReporterCount;
    GEODE_PAD(28);
    bool m_contentExists;
    std::string m_title;
    std::string m_body;
    long long m_contentTimestamp;
    long long m_messageID;
    bool m_canOpenThread;
    long long m_reportTimestamp;
    int m_reporterCount;
    std::string m_reportAge;
};
