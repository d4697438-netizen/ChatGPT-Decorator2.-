#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/vector.hpp>

class ControllerInputNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ControllerInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ControllerInputNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x448080
     * @note[short] Android: Rebinded
     */
    virtual  ~ControllerInputNode();

    /**
     * @note[short] iOS: 0x4ab4c4
     * @note[short] Android
     */
    static ControllerInputNode* create(InputCaptureDelegate* p0, cocos2d::CCSize const& p1);

    /**
     * @note[short] Windows: 0x447b60
     * @note[short] iOS: 0x4aad5c
     * @note[short] Android
     */
    bool init(InputCaptureDelegate* p0, cocos2d::CCSize const& p1);

    /**
     * @note[short] Windows: 0x448420
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4480d0
     * @note[short] iOS: 0x4ab228
     * @note[short] Android
     */
    void refreshVisuals();

    /**
     * @note[short] Android
     */
    void setActiveKey(int p0);

    /**
     * @note[short] Android
     */
    void setController2(bool p0);
    InputCaptureDelegate* m_delegate;
    bool m_controller2;
    int m_activeKey;
    float m_outlineScale;
    cocos2d::CCSprite* m_controllerOutline;
    std::vector<cocos2d::CCSprite*> m_buttonSprites;
    std::array<cocos2d::CCSprite*, 4> m_overlaySprites;
    std::array<cocos2d::CCPoint, 4> m_overlayPositions;
};
