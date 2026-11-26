#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCNode.hpp>

class VirtualKeyboardNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "VirtualKeyboardNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(VirtualKeyboardNode, cocos2d::CCNode)

    /**
     * @note[short] iOS: 0x52f640
     * @note[short] Android
     */
    static VirtualKeyboardNode* create(InputCaptureDelegate* p0);

    /**
     * @note[short] iOS: 0x52f3c0
     * @note[short] Android
     */
    void buildKeys();

    /**
     * @note[short] Android
     */
    bool init(InputCaptureDelegate* p0);

    /**
     * @note[short] iOS: 0x52f718
     * @note[short] Android
     */
    void onKey(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x52f7f0
     * @note[short] Android
     */
    void refreshModifierVisuals();

    /**
     * @note[short] iOS: 0x52f8dc
     * @note[short] Android
     */
    void resetModifiers();
};
