#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCNode.hpp>

class TimeSpeedControl : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TimeSpeedControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TimeSpeedControl, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x505d4
     * @note[short] MacOS (Intel): 0x56a80
     * @note[short] Windows: 0x47080
     * @note[short] iOS: 0x17c58
     * @note[short] Android: Rebinded
     */
    virtual  ~TimeSpeedControl();

    /**
     * @note[short] MacOS (ARM): 0x851ed0
     * @note[short] MacOS (Intel): 0x9776d0
     * @note[short] Windows: 0x66d6e0
     * @note[short] iOS: 0x52b618
     * @note[short] Android
     */
    static TimeSpeedControl* create(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x851f68
     * @note[short] MacOS (Intel): 0x977750
     * @note[short] Windows: 0x66d790
     * @note[short] iOS: 0x52b6a4
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x852468
     * @note[short] MacOS (Intel): 0x977c50
     * @note[short] Windows: 0x66ddd0
     * @note[short] iOS: 0x52bb7c
     * @note[short] Android
     */
    void onAudioTimeSpeedToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x85236c
     * @note[short] MacOS (Intel): 0x977b30
     * @note[short] Windows: 0x66dc50
     * @note[short] iOS: 0x52ba88
     * @note[short] Android
     */
    void timeSliderChanged(cocos2d::CCObject* sender);
    GJBaseGameLayer* m_gameLayer;
    Slider* m_slider;
    cocos2d::CCLabelBMFont* m_speedLabel;
    CCMenuItemToggler* m_musicToggle;
};
