#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCMenu.hpp>

class CCMenuExtra : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "CCMenuExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuExtra, cocos2d::CCMenu)

    /**
     * @note[short] Android: Rebinded
     */
    virtual  ~CCMenuExtra();

    /**
     * @note[short] Android
     */
    static CCMenuExtra* create();

    /**
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] iOS: 0x2afe9c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] iOS: 0x2aff20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    void disableRepeatPress();

    /**
     * @note[short] iOS: 0x2afe18
     * @note[short] Android
     */
    void enableRepeatPress();

    /**
     * @note[short] Android
     */
    void enableRepeatPress(float delay, float interval);

    /**
     * @note[short] Android
     */
    void fireSelectedItem();

    /**
     * @note[short] Android
     */
    void repeatSelectionChanged();

    /**
     * @note[short] iOS: 0x2afff4
     * @note[short] Android
     */
    void repeatTick(float dt);

    /**
     * @note[short] Android
     */
    void stopRepeat();
    float m_repeatDelay;
    float m_repeatInterval;
    bool m_repeatActive;
};
