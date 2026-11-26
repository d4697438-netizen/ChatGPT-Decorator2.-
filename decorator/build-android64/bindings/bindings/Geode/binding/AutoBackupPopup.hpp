#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/CCIndexPath.hpp>
#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/AutoBackupOptionsDelegate.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class AutoBackupPopup : public PagedListPopup, public FLAlertLayerProtocol, public AutoBackupOptionsDelegate {
public:
    static constexpr auto CLASS_NAME = "AutoBackupPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AutoBackupPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xc9870
     * @note[short] iOS: 0x5338a0
     * @note[short] Android: Rebinded
     */
    virtual  ~AutoBackupPopup();

    /**
     * @note[short] Windows: 0xc9650
     * @note[short] iOS: 0x52f9c8
     * @note[short] Android
     */
    static AutoBackupPopup* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x8593ec
     * @note[short] MacOS (Intel): 0x97f2a0
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x530fa0
     * @note[short] Android
     */
    virtual bool requestPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x85ae7c
     * @note[short] MacOS (Intel): 0x981030
     * @note[short] Windows: 0xcabc0
     * @note[short] iOS: 0x531e24
     * @note[short] Android
     */
    virtual void clearPageContent();

    /**
     * @note[short] MacOS (ARM): 0x85b948
     * @note[short] MacOS (Intel): 0x981ce0
     * @note[short] Windows: 0xcca80
     * @note[short] iOS: 0x532540
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x85abd0
     * @note[short] MacOS (Intel): 0x980db0
     * @note[short] Windows: 0xca850
     * @note[short] iOS: 0x531b8c
     * @note[short] Android
     */
    virtual void backupsChanged();

    /**
     * @note[short] MacOS (ARM): 0x85ac1c
     * @note[short] MacOS (Intel): 0x980e00
     * @note[short] Windows: 0xca880
     * @note[short] iOS: 0x531bd8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x85b600
     * @note[short] MacOS (Intel): 0x9818d0
     * @note[short] Windows: 0xcc350
     * @note[short] iOS: 0x5323dc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xca220
     * @note[short] Android
     */
    void assignRevs();

    /**
     * @note[short] MacOS (ARM): 0x857f80
     * @note[short] MacOS (Intel): 0x97dbc0
     * @note[short] Windows: 0xccb10
     * @note[short] iOS: 0x53008c
     * @note[short] Android
     */
    static std::string backupDirectory();

    /**
     * @note[short] Windows: 0xcabe0
     * @note[short] Android
     */
    void buildRows();

    /**
     * @note[short] Windows: 0xc9910
     * @note[short] iOS: 0x52fae0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0xcab80
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbe50
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcc750
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcb880
     * @note[short] Android
     */
    void onRestore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcc5f0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xccad0
     * @note[short] iOS: 0x530180
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcc500
     * @note[short] Android
     */
    void onToggleRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcd7d0
     * @note[short] Android
     */
    static int pruneBackups(std::string const& p0, int p1, std::string const& p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x858518
     * @note[short] MacOS (Intel): 0x97e210
     * @note[short] Windows: 0xca0c0
     * @note[short] Android
     */
    void reloadFiles();

    /**
     * @note[short] Android
     */
    int selectedCount();

    /**
     * @note[short] Android
     */
    void updateSelectUI();

    /**
     * @note[short] Android
     */
    void updateSummary();
    int m_levelFolder;
    std::string m_backupDirectory;
    GEODE_PAD(48);
    std::string m_searchQuery;
    std::map<std::string, int> m_revisions;
    CCTextInputNode* m_searchInput;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    int m_pendingDeleteIndex;
    std::set<std::string> m_selectedFiles;
    std::vector<CCMenuItemToggler*> m_rowToggles;
    GJSelectionStrip* m_selectionStrip;
};
