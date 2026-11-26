#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/SetupInstantCollisionTriggerPopup.hpp>

class SetupCollisionStateTriggerPopup : public SetupInstantCollisionTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionStateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionStateTriggerPopup, SetupInstantCollisionTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCollisionStateTriggerPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCollisionStateTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x30cd14
     * @note[short] MacOS (Intel): 0x381830
     * @note[short] Windows: 0x5b0fb0
     * @note[short] Android
     */
    static SetupCollisionStateTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30ce00
     * @note[short] MacOS (Intel): 0x381940
     * @note[short] Windows: 0x5b10c0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
