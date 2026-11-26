#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class GJSelectionStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSelectionStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSelectionStrip, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3a8f90
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSelectionStrip();

    /**
     * @note[short] Windows: 0x3a8e00
     * @note[short] Android
     */
    static GJSelectionStrip* create(cocos2d::CCMenu* p0, cocos2d::CCNode* p1, cocos2d::CCPoint p2, float p3, cocos2d::CCObject* p4, cocos2d::SEL_MenuHandler p5);

    /**
     * @note[short] Android
     */
    TodoReturn addAction(char const* p0, float p1, cocos2d::SEL_MenuHandler p2, float p3);

    /**
     * @note[short] Windows: 0x3a8fe0
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* addButton(char const* p0, float p1, cocos2d::SEL_MenuHandler p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x2402c4
     * @note[short] MacOS (Intel): 0x29ccc0
     * @note[short] Windows: 0x3a90f0
     * @note[short] Android
     */
    void addCountLabel(float p0, int p1);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCMenu* p0, cocos2d::CCNode* p1, cocos2d::CCPoint p2, float p3, cocos2d::CCObject* p4, cocos2d::SEL_MenuHandler p5);

    /**
     * @note[short] Windows: 0x3a91a0
     * @note[short] Android
     */
    void setCount(int p0);

    /**
     * @note[short] Android
     */
    void setStripVisible(bool p0);
    cocos2d::CCMenu* m_menu;
    cocos2d::CCNode* m_parentNode;
    cocos2d::CCObject* m_target;
    cocos2d::CCPoint m_buttonPosition;
    float m_scale;
    cocos2d::CCLabelBMFont* m_countLabel;
    CCMenuItemSpriteExtra* m_selectAllButton;
    bool m_stripVisible;
    std::vector<CCMenuItemSpriteExtra*> m_actionButtons;
};
