#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCSceneTransitionDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/GJContentStatusDelegate.hpp>

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate, public GJContentStatusDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreatorLayer();

    /**
     * @note[short] MacOS (ARM): 0x2270ac
     * @note[short] MacOS (Intel): 0x281ac0
     * @note[short] Windows: 0x135400
     * @note[short] iOS: 0xda8ac
     * @note[short] Android: Rebinded
     */
    virtual  ~CreatorLayer();

    /**
     * @note[short] MacOS (ARM): 0x2273f0
     * @note[short] MacOS (Intel): 0x281ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xda93c
     * @note[short] Android
     */
    static CreatorLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2272fc
     * @note[short] MacOS (Intel): 0x281dc0
     * @note[short] Windows: 0x135510
     * @note[short] iOS: 0xda8e4
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2274bc
     * @note[short] MacOS (Intel): 0x281ff0
     * @note[short] Windows: 0x1356b0
     * @note[short] iOS: 0xda9fc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x229c2c
     * @note[short] MacOS (Intel): 0x2849c0
     * @note[short] Windows: 0x139960
     * @note[short] iOS: 0xdc7c4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x229a28
     * @note[short] MacOS (Intel): 0x284790
     * @note[short] Windows: 0x1396b0
     * @note[short] iOS: 0xdc6d4
     * @note[short] Android
     */
    virtual void contentStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x229b38
     * @note[short] MacOS (Intel): 0x2848c0
     * @note[short] Windows: 0x1397e0
     * @note[short] iOS: 0xdc770
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] MacOS (ARM): 0x229a34
     * @note[short] MacOS (Intel): 0x2847c0
     * @note[short] Windows: 0x1396c0
     * @note[short] iOS: 0xdc6e0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2299d4
     * @note[short] MacOS (Intel): 0x284720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canPlayOnlineLevels();

    /**
     * @note[short] MacOS (ARM): 0x228e0c
     * @note[short] MacOS (Intel): 0x283b40
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkQuestsStatus();

    /**
     * @note[short] MacOS (ARM): 0x228ecc
     * @note[short] MacOS (Intel): 0x283bf0
     * @note[short] Windows: 0x139530
     * @note[short] iOS: 0xdbf58
     * @note[short] Android
     */
    void checkTimedStatus();

    /**
     * @note[short] MacOS (ARM): 0x228790
     * @note[short] MacOS (Intel): 0x2834b0
     * @note[short] Windows: 0x138140
     * @note[short] iOS: 0xdbb18
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x229974
     * @note[short] MacOS (Intel): 0x2846c0
     * @note[short] Windows: 0x139780
     * @note[short] iOS: 0xdc5c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228824
     * @note[short] MacOS (Intel): 0x283520
     * @note[short] Windows: 0x138460
     * @note[short] iOS: 0xdbb90
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22885c
     * @note[short] MacOS (Intel): 0x283550
     * @note[short] Windows: 0x1382b0
     * @note[short] iOS: 0xdbbc8
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2288f4
     * @note[short] MacOS (Intel): 0x2835f0
     * @note[short] Windows: 0x1383d0
     * @note[short] iOS: 0xdbc60
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2289c0
     * @note[short] MacOS (Intel): 0x2836d0
     * @note[short] Windows: 0x137740
     * @note[short] iOS: 0xdbd2c
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228940
     * @note[short] MacOS (Intel): 0x283640
     * @note[short] Windows: 0x137a50
     * @note[short] iOS: 0xdbcac
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228388
     * @note[short] MacOS (Intel): 0x2830f0
     * @note[short] Windows: 0x137550
     * @note[short] iOS: 0xdb7a8
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228a88
     * @note[short] MacOS (Intel): 0x2837b0
     * @note[short] Windows: 0x137980
     * @note[short] iOS: 0xdbdf4
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2283d0
     * @note[short] MacOS (Intel): 0x283140
     * @note[short] Windows: 0x137b50
     * @note[short] iOS: 0xdb7f0
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228b10
     * @note[short] MacOS (Intel): 0x283850
     * @note[short] Windows: 0x136aa0
     * @note[short] iOS: 0xdbe7c
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228ad4
     * @note[short] MacOS (Intel): 0x283810
     * @note[short] Windows: 0x137900
     * @note[short] iOS: 0xdbe40
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228bec
     * @note[short] MacOS (Intel): 0x283940
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228a0c
     * @note[short] MacOS (Intel): 0x283730
     * @note[short] Windows: 0x137810
     * @note[short] iOS: 0xdbd78
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2282b4
     * @note[short] MacOS (Intel): 0x283010
     * @note[short] Windows: 0x137000
     * @note[short] iOS: 0xdb6d4
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x229194
     * @note[short] MacOS (Intel): 0x283ea0
     * @note[short] Windows: 0x1384a0
     * @note[short] iOS: 0xdbfdc
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228a28
     * @note[short] MacOS (Intel): 0x283750
     * @note[short] Windows: 0x137830
     * @note[short] iOS: 0xdbd94
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2293e0
     * @note[short] MacOS (Intel): 0x2840c0
     * @note[short] Windows: 0x138cd0
     * @note[short] iOS: 0xdc1ac
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2288a8
     * @note[short] MacOS (Intel): 0x2835a0
     * @note[short] Windows: 0x138340
     * @note[short] iOS: 0xdbc14
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_secretDoorSprite;
    cocos2d::CCSprite* m_questsSprite;
    cocos2d::CCSprite* m_dailySprite;
    cocos2d::CCSprite* m_weeklySprite;
    cocos2d::CCSprite* m_eventSprite;
    cocos2d::CCSprite* m_gauntletSprite;
    int m_vaultDialogIndex;
    int m_versusDialogIndex;
};
