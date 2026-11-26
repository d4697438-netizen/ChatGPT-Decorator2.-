#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2a565c
     * @note[short] MacOS (Intel): 0x312e80
     * @note[short] Windows: 0x3af700
     * @note[short] iOS: 0x1cc44c
     * @note[short] Android: Rebinded
     */
    virtual  ~PurchaseItemPopup();

    /**
     * @note[short] MacOS (ARM): 0x2a3748
     * @note[short] MacOS (Intel): 0x310ab0
     * @note[short] Windows: 0x3b4f40
     * @note[short] iOS: 0x1cac7c
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a6344
     * @note[short] MacOS (Intel): 0x313d70
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x1cce74
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a5834
     * @note[short] MacOS (Intel): 0x313140
     * @note[short] Windows: 0x3b5040
     * @note[short] iOS: 0x1cc484
     * @note[short] Android
     */
    bool init(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a6294
     * @note[short] MacOS (Intel): 0x313cd0
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x1ccdc4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a62d0
     * @note[short] MacOS (Intel): 0x313d00
     * @note[short] Windows: 0x3b5ef0
     * @note[short] iOS: 0x1cce00
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);
    GJStoreItem* m_storeItem;
    GJPurchaseDelegate* m_delegate;
};
