#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/mapping/CCObject.hpp>

class GJCompactUserCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJCompactUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJCompactUserCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ea5dc
     * @note[short] MacOS (Intel): 0x23f370
     * @note[short] Android: Rebinded
     */
     GJCompactUserCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1ea464
     * @note[short] MacOS (Intel): 0x23f150
     * @note[short] Windows: 0x157bc0
     * @note[short] iOS: 0x1391b0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJCompactUserCell();

    /**
     * @note[short] MacOS (ARM): 0x1ea620
     * @note[short] MacOS (Intel): 0x23f3e0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x1391e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1eb3c4
     * @note[short] MacOS (Intel): 0x240290
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x139e1c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1eb12c
     * @note[short] MacOS (Intel): 0x240020
     * @note[short] Windows: 0x158990
     * @note[short] Android
     */
    static void addStat(int p0, char const* p1, cocos2d::CCNode* p2, float& p3, float p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x1ea62c
     * @note[short] MacOS (Intel): 0x23f400
     * @note[short] Windows: 0x157e90
     * @note[short] iOS: 0x1391f4
     * @note[short] Android
     */
    static cocos2d::CCLabelBMFont* buildUserRow(GJUserScore* score, cocos2d::CCNode* mainLayer, cocos2d::CCNode* playerNameMenu, cocos2d::CCObject* selectorTarget, cocos2d::SEL_MenuHandler selector, float y, bool dimmed, bool showFriendIcon);

    /**
     * @note[short] MacOS (ARM): 0x1eb060
     * @note[short] MacOS (Intel): 0x23ff60
     * @note[short] Android
     */
    static void createStatStrip(GJUserScore* p0, cocos2d::CCNode* p1, float p2, float p3, bool p4);

    /**
     * @note[short] MacOS (ARM): 0x1de220
     * @note[short] MacOS (Intel): 0x231b80
     * @note[short] Windows: 0x157c60
     * @note[short] iOS: 0x12edf4
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1eafbc
     * @note[short] MacOS (Intel): 0x23fec0
     * @note[short] Windows: 0x158c00
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1eaf84
     * @note[short] MacOS (Intel): 0x23fe90
     * @note[short] Windows: 0x157b80
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1de1a0
     * @note[short] MacOS (Intel): 0x231b20
     * @note[short] iOS: 0x12ed74
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_userScore;
};
