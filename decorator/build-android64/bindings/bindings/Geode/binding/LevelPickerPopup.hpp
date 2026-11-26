#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class LevelPickerPopup : public PagedListPopup, public LevelManagerDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelPickerPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd35d0
     * @note[short] iOS: 0x5048a0
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelPickerPopup();

    /**
     * @note[short] Windows: 0xe8b60
     * @note[short] Android
     */
    static LevelPickerPopup* create(LevelPickerDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x82080c
     * @note[short] MacOS (Intel): 0x93f930
     * @note[short] Windows: 0xe9f80
     * @note[short] iOS: 0x505b90
     * @note[short] Android
     */
    virtual bool requestPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x821f78
     * @note[short] MacOS (Intel): 0x9413e0
     * @note[short] Windows: 0xeb8f0
     * @note[short] iOS: 0x506c30
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x820ddc
     * @note[short] MacOS (Intel): 0x93ff30
     * @note[short] Windows: 0xea7e0
     * @note[short] iOS: 0x505f5c
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x82103c
     * @note[short] MacOS (Intel): 0x9401c0
     * @note[short] Windows: 0xea8f0
     * @note[short] iOS: 0x5061ac
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x820c20
     * @note[short] MacOS (Intel): 0x93fd70
     * @note[short] Windows: 0xea640
     * @note[short] iOS: 0x505e30
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x82111c
     * @note[short] MacOS (Intel): 0x9402a0
     * @note[short] Windows: 0xea980
     * @note[short] iOS: 0x50627c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn applyKind();

    /**
     * @note[short] Windows: 0xeb750
     * @note[short] Android
     */
    TodoReturn buildSavedPage();

    /**
     * @note[short] Windows: 0xe9fb0
     * @note[short] Android
     */
    TodoReturn doPageRequest(float p0);

    /**
     * @note[short] Windows: 0xe8d90
     * @note[short] Android
     */
    bool init(LevelPickerDelegate* p0);

    /**
     * @note[short] Windows: 0xea370
     * @note[short] Android
     */
    void onOnlineMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xea5a0
     * @note[short] Android
     */
    void onRefreshOnline(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe9ed0
     * @note[short] Android
     */
    void onToggleFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe97f0
     * @note[short] Android
     */
    void onToggleKind(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe9d30
     * @note[short] Android
     */
    void onUseID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe9ab0
     * @note[short] Android
     */
    TodoReturn refreshUseID();

    /**
     * @note[short] Android
     */
    TodoReturn savedIndex();

    /**
     * @note[short] Windows: 0xeab50
     * @note[short] Android
     */
    void setupList(cocos2d::CCArray* p0);
    LevelPickerDelegate* m_delegate;
    GJCommentListLayer* m_listLayer;
    bool m_onlineMode;
    bool m_listMode;
    bool m_favoritesOnly;
    CCMenuItemToggler* m_favoritesToggle;
    cocos2d::CCSprite* m_kindSprite;
    int m_requestedPage;
    std::string m_onlineSearchKey;
    int m_onlineTotal;
    int m_onlineOffset;
    std::string m_searchQuery;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_onlineLabel;
    CCMenuItemSpriteExtra* m_refreshOnlineButton;
    ButtonSprite* m_onlineModeSprite;
    CCMenuItemSpriteExtra* m_useIDButton;
    ButtonSprite* m_useIDSprite;
    GEODE_PAD(48);
    cocos2d::CCArray* m_savedLevels;
    cocos2d::CCArray* m_savedLists;
    std::vector<int> m_matches;
    std::string m_lastMatchQuery;
    bool m_matchesValid;
};
