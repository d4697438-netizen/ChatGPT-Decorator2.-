#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/NotificationListDelegate.hpp>

class NotificationsPage : public FLAlertLayer, public NotificationListDelegate {
public:
    static constexpr auto CLASS_NAME = "NotificationsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NotificationsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x8655b4
     * @note[short] MacOS (Intel): 0x98af60
     * @note[short] Windows: 0x477bb0
     * @note[short] iOS: 0x53ad38
     * @note[short] Android: Rebinded
     */
    virtual  ~NotificationsPage();

    /**
     * @note[short] MacOS (ARM): 0x8655ec
     * @note[short] MacOS (Intel): 0x98afe0
     * @note[short] Android
     */
    static NotificationsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x865778
     * @note[short] MacOS (Intel): 0x98b210
     * @note[short] Windows: 0x477cf0
     * @note[short] iOS: 0x53ae4c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x8663d0
     * @note[short] MacOS (Intel): 0x98bf90
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x53b820
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x8663c4
     * @note[short] MacOS (Intel): 0x98bf60
     * @note[short] Windows: 0x4787b0
     * @note[short] iOS: 0x53b814
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x86656c
     * @note[short] MacOS (Intel): 0x98c140
     * @note[short] Windows: 0x478a40
     * @note[short] iOS: 0x53b9bc
     * @note[short] Android
     */
    virtual void loadNotificationsFinished(cocos2d::CCArray* p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x8667cc
     * @note[short] MacOS (Intel): 0x98c3c0
     * @note[short] Windows: 0x478bd0
     * @note[short] iOS: 0x53bba8
     * @note[short] Android
     */
    virtual void loadNotificationsFailed(int p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x8668cc
     * @note[short] MacOS (Intel): 0x98c4b0
     * @note[short] Windows: 0x478c30
     * @note[short] iOS: 0x53bc2c
     * @note[short] Android
     */
    virtual void notificationRewardFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x866ac0
     * @note[short] MacOS (Intel): 0x98c6b0
     * @note[short] Windows: 0x478e90
     * @note[short] iOS: 0x53bde8
     * @note[short] Android
     */
    virtual void notificationRewardFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x866c50
     * @note[short] MacOS (Intel): 0x98c810
     * @note[short] Windows: 0x478f90
     * @note[short] iOS: 0x53be74
     * @note[short] Android
     */
    virtual void notificationMuteFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x866d34
     * @note[short] MacOS (Intel): 0x98c920
     * @note[short] Windows: 0x478fe0
     * @note[short] iOS: 0x53becc
     * @note[short] Android
     */
    virtual void notificationMuteFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x866228
     * @note[short] MacOS (Intel): 0x98bd90
     * @note[short] Windows: 0x4787c0
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x865f08
     * @note[short] MacOS (Intel): 0x98ba50
     * @note[short] Windows: 0x4786f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x86620c
     * @note[short] MacOS (Intel): 0x98bd70
     * @note[short] Windows: 0x4784e0
     * @note[short] Android
     */
    void onFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x866064
     * @note[short] MacOS (Intel): 0x98bbc0
     * @note[short] Windows: 0x4790d0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x865fac
     * @note[short] MacOS (Intel): 0x98bb00
     * @note[short] Windows: 0x4790e0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x86611c
     * @note[short] MacOS (Intel): 0x98bc80
     * @note[short] Windows: 0x478620
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x866aa0
     * @note[short] MacOS (Intel): 0x98c660
     * @note[short] Android
     */
    void reloadCells();

    /**
     * @note[short] MacOS (ARM): 0x866408
     * @note[short] MacOS (Intel): 0x98bfd0
     * @note[short] Windows: 0x4788b0
     * @note[short] Android
     */
    void setupBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x866708
     * @note[short] MacOS (Intel): 0x98c2e0
     * @note[short] Android
     */
    void updateCountLabel();

    /**
     * @note[short] MacOS (ARM): 0x8666a4
     * @note[short] MacOS (Intel): 0x98c280
     * @note[short] Android
     */
    void updatePageArrows();
    cocos2d::CCLabelBMFont* m_countLabel;
    cocos2d::CCLabelBMFont* m_statusLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_updateButton;
    cocos2d::CCArray* m_notifications;
    int m_page;
    int m_totalNotifications;
    int m_pageSize;
};
