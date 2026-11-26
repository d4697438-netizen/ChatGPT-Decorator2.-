#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCheckpointPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCheckpointPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCheckpointPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCheckpointPopup();

    /**
     * @note[short] Windows: 0x5fbda0
     * @note[short] iOS: 0x48ac54
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCheckpointPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupCheckpointPopup* create(CheckpointGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f74fc
     * @note[short] MacOS (Intel): 0x5a9190
     * @note[short] Windows: 0x5ff1a0
     * @note[short] Android
     */
    bool init(CheckpointGameObject* object, cocos2d::CCArray* objects);
};
