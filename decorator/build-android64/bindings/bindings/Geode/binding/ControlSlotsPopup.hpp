#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class ControlSlotsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ControlSlotsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ControlSlotsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~ControlSlotsPopup();

    /**
     * @note[short] MacOS (ARM): 0x855d3c
     * @note[short] MacOS (Intel): 0x97b9d0
     * @note[short] Android
     */
    static ControlSlotsPopup* create(TouchControlEditLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x856a30
     * @note[short] MacOS (Intel): 0x97c410
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x52ef50
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x856078
     * @note[short] MacOS (Intel): 0x97bd50
     * @note[short] Windows: 0x456860
     * @note[short] Android
     */
    bool init(TouchControlEditLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x8568a4
     * @note[short] MacOS (Intel): 0x97c2a0
     * @note[short] Windows: 0x456fb0
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x856718
     * @note[short] MacOS (Intel): 0x97c130
     * @note[short] Windows: 0x456e60
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);
    TouchControlEditLayer* m_editLayer;
    bool m_dual;
};
