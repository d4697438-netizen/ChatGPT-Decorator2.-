#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class EditorCommandsPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "EditorCommandsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorCommandsPopup, EditorWindowPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorCommandsPopup();

    /**
     * @note[short] MacOS (ARM): 0x7ca74c
     * @note[short] MacOS (Intel): 0x8ddec0
     * @note[short] Windows: 0x17d520
     * @note[short] iOS: 0x4c54f0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorCommandsPopup();

    /**
     * @note[short] MacOS (ARM): 0x7ca784
     * @note[short] MacOS (Intel): 0x8ddf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4c5528
     * @note[short] Android
     */
    static EditorCommandsPopup* create(EditorUI* editorUI);

    /**
     * @note[short] MacOS (ARM): 0x7ca924
     * @note[short] MacOS (Intel): 0x8de0f0
     * @note[short] Windows: 0x17d5f0
     * @note[short] iOS: 0x4c5668
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] MacOS (ARM): 0x7cb6e8
     * @note[short] MacOS (Intel): 0x8def30
     * @note[short] Windows: 0x17dae0
     * @note[short] iOS: 0x4c5bfc
     * @note[short] Android
     */
    virtual void onWindowResized();

    /**
     * @note[short] MacOS (ARM): 0x7cb2b4
     * @note[short] MacOS (Intel): 0x8dea60
     * @note[short] Windows: 0x17d7a0
     * @note[short] iOS: 0x4c5800
     * @note[short] Android
     */
    void addCommandButton(char const* p0, EditorCommand p1);

    /**
     * @note[short] MacOS (ARM): 0x7ca8b4
     * @note[short] MacOS (Intel): 0x8de090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4c55fc
     * @note[short] Android
     */
    bool init(EditorUI* editorUI);

    /**
     * @note[short] MacOS (ARM): 0x7cb364
     * @note[short] MacOS (Intel): 0x8deb00
     * @note[short] Windows: 0x17d8b0
     * @note[short] iOS: 0x4c58ac
     * @note[short] Android
     */
    void layoutCommandButtons();

    /**
     * @note[short] MacOS (ARM): 0x7cb4d8
     * @note[short] MacOS (Intel): 0x8decd0
     * @note[short] Windows: 0x17daf0
     * @note[short] iOS: 0x4c5a14
     * @note[short] Android
     */
    void onCommand(cocos2d::CCObject* sender);
};
