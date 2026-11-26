#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJNotification : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJNotification";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJNotification, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x218d80
     * @note[short] Android: Rebinded
     */
    virtual  ~GJNotification();

    /**
     * @note[short] Android
     */
    static GJNotification* create();

    /**
     * @note[short] Android
     */
    TodoReturn rewardKey();
    int m_notificationID;
    int m_type;
    std::string m_iconKey;
    std::string m_title;
    std::string m_body;
    std::string m_age;
    bool m_showBadge;
    int m_targetType;
    int m_targetID;
    std::string m_achievementID;
    int m_statID;
    int m_statValue;
    int m_rewardFlag;
    int m_rewardChestType;
    int m_senderAccountID;
    std::string m_senderName;
};
