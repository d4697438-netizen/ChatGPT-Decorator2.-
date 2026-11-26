#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJRequestCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1eb644
     * @note[short] MacOS (Intel): 0x240600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJRequestCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1eb4cc
     * @note[short] MacOS (Intel): 0x2403e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x139f24
     * @note[short] Android: Rebinded
     */
     ~GJRequestCell();

    /**
     * @note[short] MacOS (ARM): 0x1eb694
     * @note[short] MacOS (Intel): 0x240680
     * @note[short] Windows: 0x158d20
     * @note[short] iOS: 0x139f5c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1eb8a4
     * @note[short] MacOS (Intel): 0x2408c0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13a0f8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1de434
     * @note[short] MacOS (Intel): 0x231d80
     * @note[short] Windows: 0x158d40
     * @note[short] iOS: 0x12f000
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1eb810
     * @note[short] MacOS (Intel): 0x240820
     * @note[short] iOS: 0x13a064
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] MacOS (ARM): 0x1eb7dc
     * @note[short] MacOS (Intel): 0x2407f0
     * @note[short] Windows: 0x1592a0
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1eb6e4
     * @note[short] MacOS (Intel): 0x2406d0
     * @note[short] Windows: 0x159100
     * @note[short] iOS: 0x139fac
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1eb6ac
     * @note[short] MacOS (Intel): 0x2406a0
     * @note[short] Windows: 0x157b80
     * @note[short] iOS: 0x139f74
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1de3b4
     * @note[short] MacOS (Intel): 0x231d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12ef80
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1e259c
     * @note[short] MacOS (Intel): 0x236440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    GJUserScore* m_score;
    CCMenuItemToggler* m_toggler;
    bool m_groupRequest;
};
