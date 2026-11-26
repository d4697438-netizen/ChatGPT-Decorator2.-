#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FriendsProfilePage : public PagedListPopup, public VirtualRowSource, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, PagedListPopup)

    /**
     * @note[short] MacOS (ARM): 0x6429f4
     * @note[short] MacOS (Intel): 0x7349c0
     * @note[short] Windows: 0x213240
     * @note[short] iOS: 0x271548
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendsProfilePage();

    /**
     * @note[short] MacOS (ARM): 0x642a2c
     * @note[short] MacOS (Intel): 0x734a40
     * @note[short] Windows: 0x213430
     * @note[short] iOS: 0x271580
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x643f0c
     * @note[short] MacOS (Intel): 0x736020
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x2726b8
     * @note[short] Android
     */
    virtual bool requestPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x645c58
     * @note[short] MacOS (Intel): 0x737df0
     * @note[short] Windows: 0x217060
     * @note[short] iOS: 0x273cd8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6440b0
     * @note[short] MacOS (Intel): 0x7361e0
     * @note[short] Windows: 0x214740
     * @note[short] iOS: 0x2727fc
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] MacOS (ARM): 0x644168
     * @note[short] MacOS (Intel): 0x736290
     * @note[short] Windows: 0xe8460
     * @note[short] iOS: 0x272868
     * @note[short] Android
     */
    virtual float virtualRowHeight(int p0);

    /**
     * @note[short] MacOS (ARM): 0x644180
     * @note[short] MacOS (Intel): 0x7362b0
     * @note[short] Windows: 0x214770
     * @note[short] iOS: 0x272880
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] MacOS (ARM): 0x6451b0
     * @note[short] MacOS (Intel): 0x737340
     * @note[short] Windows: 0x214d40
     * @note[short] iOS: 0x273484
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x6454b4
     * @note[short] MacOS (Intel): 0x737680
     * @note[short] Windows: 0x215600
     * @note[short] iOS: 0x273704
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType type, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x6455bc
     * @note[short] MacOS (Intel): 0x737780
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x2737f4
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x6455d8
     * @note[short] MacOS (Intel): 0x7377c0
     * @note[short] Windows: 0x2156d0
     * @note[short] iOS: 0x273810
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x645680
     * @note[short] MacOS (Intel): 0x7378b0
     * @note[short] Windows: 0x215f00
     * @note[short] iOS: 0x2738b8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x6457e4
     * @note[short] MacOS (Intel): 0x737a30
     * @note[short] Windows: 0x216150
     * @note[short] iOS: 0x273a08
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x645944
     * @note[short] MacOS (Intel): 0x737b80
     * @note[short] Windows: 0x2161e0
     * @note[short] iOS: 0x273aa4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x645ac4
     * @note[short] MacOS (Intel): 0x737c70
     * @note[short] Windows: 0x2162b0
     * @note[short] iOS: 0x273b40
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x645b4c
     * @note[short] MacOS (Intel): 0x737ce0
     * @note[short] Windows: 0x216300
     * @note[short] iOS: 0x273bb0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x644e94
     * @note[short] MacOS (Intel): 0x736f80
     * @note[short] Windows: 0x216c60
     * @note[short] Android
     */
    void filterUsersWithQuery(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x6440ec
     * @note[short] MacOS (Intel): 0x736220
     * @note[short] Android
     */
    cocos2d::CCArray* getActiveUserList();

    /**
     * @note[short] MacOS (ARM): 0x642b54
     * @note[short] MacOS (Intel): 0x734bd0
     * @note[short] Windows: 0x213620
     * @note[short] iOS: 0x27169c
     * @note[short] Android
     */
    bool init(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x643b80
     * @note[short] MacOS (Intel): 0x735c50
     * @note[short] Windows: 0x216b80
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6439fc
     * @note[short] MacOS (Intel): 0x735b70
     * @note[short] Windows: 0x216440
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x644a4c
     * @note[short] MacOS (Intel): 0x736b30
     * @note[short] Windows: 0x2157c0
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x643968
     * @note[short] MacOS (Intel): 0x735ae0
     * @note[short] Windows: 0x216fa0
     * @note[short] iOS: 0x272264
     * @note[short] Android
     */
    void onSwitchList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x643c64
     * @note[short] MacOS (Intel): 0x735d40
     * @note[short] Windows: 0x214ba0
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x643d64
     * @note[short] MacOS (Intel): 0x735e60
     * @note[short] Windows: 0x214c40
     * @note[short] Android
     */
    void onToggleSortDir(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6444d8
     * @note[short] MacOS (Intel): 0x7365d0
     * @note[short] Windows: 0x215cc0
     * @note[short] Android
     */
    void onUnblock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x644afc
     * @note[short] MacOS (Intel): 0x736bd0
     * @note[short] Windows: 0x215840
     * @note[short] Android
     */
    void onUnfollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x644794
     * @note[short] MacOS (Intel): 0x736880
     * @note[short] Windows: 0x215a80
     * @note[short] Android
     */
    void onUnmute(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x643ea8
     * @note[short] MacOS (Intel): 0x735fb0
     * @note[short] Windows: 0x216e80
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x644490
     * @note[short] MacOS (Intel): 0x736590
     * @note[short] Windows: 0xe8810
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x643f14
     * @note[short] MacOS (Intel): 0x736030
     * @note[short] Android
     */
    void rebuildList();

    /**
     * @note[short] MacOS (ARM): 0x644dbc
     * @note[short] MacOS (Intel): 0x736ea0
     * @note[short] Windows: 0x214b20
     * @note[short] Android
     */
    void sortUsers();

    /**
     * @note[short] MacOS (ARM): 0x643f3c
     * @note[short] MacOS (Intel): 0x736060
     * @note[short] Windows: 0x2145a0
     * @note[short] Android
     */
    void updateCountLabel();

    /**
     * @note[short] MacOS (ARM): 0x644e3c
     * @note[short] MacOS (Intel): 0x736f20
     * @note[short] Android
     */
    void updateSortLabel();
    UserListType m_type;
    cocos2d::CCLabelBMFont* m_totalFriends;
    GJCommentListLayer* m_listLayer;
    GJUserScore* m_selectedUser;
    UploadActionPopup* m_uploadPopup;
    cocos2d::CCArray* m_users;
    cocos2d::CCArray* m_filteredUsers;
    cocos2d::CCArray* m_globalSearchResults;
    std::string m_searchQuery;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCTextInputNode* m_searchInput;
    bool m_showGlobalSearchResults;
    CCMenuItemSpriteExtra* m_sortButton;
    ButtonSprite* m_sortButtonSprite;
    bool m_sortByTime;
    CCMenuItemSpriteExtra* m_sortDirectionButton;
    cocos2d::CCSprite* m_sortDirectionSprite;
    bool m_reverseSort;
};
