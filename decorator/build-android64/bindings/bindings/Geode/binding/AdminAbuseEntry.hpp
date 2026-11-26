#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminAbuseEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminAbuseEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminAbuseEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2172b0
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminAbuseEntry();
    int m_surface;
    int m_filterResult;
    int m_unk40;
    int m_action;
    int m_category;
    std::string m_label;
    std::string m_text;
    long long m_unk90;
    std::string m_age;
    bool m_highlighted;
    int m_contentID;
    int m_parentID;
    bool m_contentExists;
};
