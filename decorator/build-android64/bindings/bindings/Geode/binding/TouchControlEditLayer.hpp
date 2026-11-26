#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/UIButtonConfig.hpp>
#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/vector.hpp>

class TouchControlEditLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "TouchControlEditLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TouchControlEditLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x856a34
     * @note[short] MacOS (Intel): 0x97c420
     * @note[short] Android: Rebinded
     */
     TouchControlEditLayer();

    /**
     * @note[short] Windows: 0x452460
     * @note[short] iOS: 0x52cd1c
     * @note[short] Android: Rebinded
     */
    virtual  ~TouchControlEditLayer();

    /**
     * @note[short] MacOS (ARM): 0x853a74
     * @note[short] MacOS (Intel): 0x979480
     * @note[short] Windows: 0x452140
     * @note[short] Android
     */
    static TouchControlEditLayer* create(bool p0, LevelControlConfig* p1);

    /**
     * @note[short] MacOS (ARM): 0x855e38
     * @note[short] MacOS (Intel): 0x97bb00
     * @note[short] Windows: 0x4566d0
     * @note[short] iOS: 0x52e7cc
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x855f48
     * @note[short] MacOS (Intel): 0x97bc10
     * @note[short] Windows: 0x4567c0
     * @note[short] iOS: 0x52e8bc
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x855310
     * @note[short] MacOS (Intel): 0x97ada0
     * @note[short] Windows: 0x454180
     * @note[short] iOS: 0x52de90
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x855798
     * @note[short] MacOS (Intel): 0x97b2f0
     * @note[short] Windows: 0x454640
     * @note[short] iOS: 0x52e254
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x855ad8
     * @note[short] MacOS (Intel): 0x97b6f0
     * @note[short] Windows: 0x454aa0
     * @note[short] iOS: 0x52e590
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x855af0
     * @note[short] MacOS (Intel): 0x97b730
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x52e5a8
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x855b0c
     * @note[short] MacOS (Intel): 0x97b770
     * @note[short] Windows: 0x134dc0
     * @note[short] iOS: 0x52e5c4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x855b44
     * @note[short] MacOS (Intel): 0x97b7b0
     * @note[short] Windows: 0x454f70
     * @note[short] iOS: 0x52e5fc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x8548f0
     * @note[short] MacOS (Intel): 0x97a500
     * @note[short] Windows: 0x453bc0
     * @note[short] iOS: 0x52d880
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x8550f4
     * @note[short] MacOS (Intel): 0x97ab80
     * @note[short] Windows: 0x453f00
     * @note[short] iOS: 0x52dcbc
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn activeNode();

    /**
     * @note[short] MacOS (ARM): 0x855240
     * @note[short] MacOS (Intel): 0x97acc0
     * @note[short] Windows: 0x4540a0
     * @note[short] Android
     */
    void beginDeadzoneDrag(GJUINode* p0, cocos2d::CCPoint const& p1);

    /**
     * @note[short] MacOS (ARM): 0x852d74
     * @note[short] MacOS (Intel): 0x9786c0
     * @note[short] Windows: 0x452cc0
     * @note[short] Android
     */
    void buildHud();

    /**
     * @note[short] MacOS (ARM): 0x852674
     * @note[short] MacOS (Intel): 0x977e50
     * @note[short] Windows: 0x452560
     * @note[short] Android
     */
    void buildNodes();

    /**
     * @note[short] Windows: 0x452bd0
     * @note[short] Android
     */
    void clearNodes();

    /**
     * @note[short] Android
     */
    TodoReturn commitToTarget();

    /**
     * @note[short] Windows: 0x456500
     * @note[short] Android
     */
    void copyTouchFrom(LevelControlConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn globalDpad(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hideSiblings();

    /**
     * @note[short] MacOS (ARM): 0x85251c
     * @note[short] MacOS (Intel): 0x977d10
     * @note[short] Android
     */
    bool init(bool p0, LevelControlConfig* p1);

    /**
     * @note[short] MacOS (ARM): 0x854078
     * @note[short] MacOS (Intel): 0x979c20
     * @note[short] Windows: 0x456590
     * @note[short] Android
     */
    void onApplyGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8541d0
     * @note[short] MacOS (Intel): 0x979d90
     * @note[short] Windows: 0x4559f0
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x853cd4
     * @note[short] MacOS (Intel): 0x979770
     * @note[short] Windows: 0x454f30
     * @note[short] Android
     */
    void onOK(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x854344
     * @note[short] MacOS (Intel): 0x979ed0
     * @note[short] Windows: 0x455c80
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x853d0c
     * @note[short] MacOS (Intel): 0x9797a0
     * @note[short] Windows: 0x454fa0
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x854058
     * @note[short] MacOS (Intel): 0x979c00
     * @note[short] Windows: 0x4563a0
     * @note[short] Android
     */
    void onSlots(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x853914
     * @note[short] MacOS (Intel): 0x979310
     * @note[short] Windows: 0x453730
     * @note[short] Android
     */
    void refreshHud();

    /**
     * @note[short] MacOS (ARM): 0x855c10
     * @note[short] MacOS (Intel): 0x97b880
     * @note[short] Android
     */
    void reloadNodes();

    /**
     * @note[short] Android
     */
    TodoReturn restoreSiblings();

    /**
     * @note[short] MacOS (ARM): 0x854bb8
     * @note[short] MacOS (Intel): 0x97a7d0
     * @note[short] Windows: 0x454ab0
     * @note[short] Android
     */
    void saveTarget();

    /**
     * @note[short] MacOS (ARM): 0x853614
     * @note[short] MacOS (Intel): 0x978fa0
     * @note[short] Windows: 0x4538b0
     * @note[short] Android
     */
    void updateHandles();

    /**
     * @note[short] Windows: 0x453830
     * @note[short] Android
     */
    void updateHudVisibility();

    /**
     * @note[short] MacOS (ARM): 0x8537c0
     * @note[short] MacOS (Intel): 0x9791a0
     * @note[short] Windows: 0x453a30
     * @note[short] Android
     */
    void updateJumpGuide();
    bool m_platformerMode;
    LevelControlConfig* m_targetConfig;
    std::array<UIButtonConfig, 5> m_buttonConfigs;
    std::vector<GJUINode*> m_controlNodes;
    GJUINode* m_selectedNode;
    std::vector<cocos2d::CCSprite*> m_resizeHandles;
    cocos2d::CCArray* m_hiddenSiblings;
    int m_dragMode;
    GJUINode* m_dragNode;
    cocos2d::CCPoint m_dragOffset;
    float m_radiusDragOffset;
    cocos2d::CCPoint m_deadzoneDragStart;
    cocos2d::CCPoint m_deadzoneDragAxis;
    float m_initialDeadzone;
    bool m_modified;
    cocos2d::CCLabelBMFont* m_jumpGuideLabel;
};
