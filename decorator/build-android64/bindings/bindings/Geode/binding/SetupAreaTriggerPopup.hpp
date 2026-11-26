#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>

class SetupAreaTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTriggerPopup();

    /**
     * @note[short] Windows: 0x5a2670
     * @note[short] iOS: 0x3c020
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x435ca4
     * @note[short] MacOS (Intel): 0x4d49b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x435d98
     * @note[short] MacOS (Intel): 0x4d4ac0
     * @note[short] Windows: 0x5a7f50
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
