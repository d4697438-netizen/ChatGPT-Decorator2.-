#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/SFXFolderPickerPopup.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onConfirm
		#define GEODE_STATICS_onConfirm
		GEODE_AS_STATIC_FUNCTION(onConfirm) 
	#endif

	#ifndef GEODE_STATICS_onNewFolder
		#define GEODE_STATICS_onNewFolder
		GEODE_AS_STATIC_FUNCTION(onNewFolder) 
	#endif

	#ifndef GEODE_STATICS_onPickFolder
		#define GEODE_STATICS_onPickFolder
		GEODE_AS_STATIC_FUNCTION(onPickFolder) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_pickFolder
		#define GEODE_STATICS_pickFolder
		GEODE_AS_STATIC_FUNCTION(pickFolder) 
	#endif

	#ifndef GEODE_STATICS_rebuildList
		#define GEODE_STATICS_rebuildList
		GEODE_AS_STATIC_FUNCTION(rebuildList) 
	#endif

	#ifndef GEODE_STATICS_refreshList
		#define GEODE_STATICS_refreshList
		GEODE_AS_STATIC_FUNCTION(refreshList) 
	#endif

	#ifndef GEODE_STATICS_updateActionBtn
		#define GEODE_STATICS_updateActionBtn
		GEODE_AS_STATIC_FUNCTION(updateActionBtn) 
	#endif

	#ifndef GEODE_STATICS_updateShareHint
		#define GEODE_STATICS_updateShareHint
		GEODE_AS_STATIC_FUNCTION(updateShareHint) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfirm
		#define GEODE_CONCEPT_CHECK_onConfirm
		GEODE_CONCEPT_FUNCTION_CHECK(onConfirm) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewFolder
		#define GEODE_CONCEPT_CHECK_onNewFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onNewFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickFolder
		#define GEODE_CONCEPT_CHECK_onPickFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onPickFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickFolder
		#define GEODE_CONCEPT_CHECK_pickFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pickFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildList
		#define GEODE_CONCEPT_CHECK_rebuildList
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshList
		#define GEODE_CONCEPT_CHECK_refreshList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActionBtn
		#define GEODE_CONCEPT_CHECK_updateActionBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updateActionBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShareHint
		#define GEODE_CONCEPT_CHECK_updateShareHint
		GEODE_CONCEPT_FUNCTION_CHECK(updateShareHint) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXFolderPickerPopup> : ModifyBase<ModifyDerive<Der, SFXFolderPickerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXFolderPickerPopup>>;
		using ModifyBase<ModifyDerive<Der, SFXFolderPickerPopup>>::ModifyBase;
		using Base = SFXFolderPickerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20SFXFolderPickerPopupC2Ev")), Default, SFXFolderPickerPopup, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN20SFXFolderPickerPopupD2Ev")), Default, SFXFolderPickerPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int>::func(&SFXFolderPickerPopup::create)), Default, SFXFolderPickerPopup, create, SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchBegan)), Default, SFXFolderPickerPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchMoved)), Default, SFXFolderPickerPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchEnded)), Default, SFXFolderPickerPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchCancelled)), Default, SFXFolderPickerPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXFolderPickerPopup::keyBackClicked)), Default, SFXFolderPickerPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SetTextPopup*, std::string>::func(&SFXFolderPickerPopup::setTextPopupClosed)), Default, SFXFolderPickerPopup, setTextPopupClosed, SetTextPopup*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int>::func(&SFXFolderPickerPopup::init)), Default, SFXFolderPickerPopup, init, SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXFolderPickerPopup::onClose)), Default, SFXFolderPickerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXFolderPickerPopup::onConfirm)), Default, SFXFolderPickerPopup, onConfirm, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXFolderPickerPopup::onNewFolder)), Default, SFXFolderPickerPopup, onNewFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXFolderPickerPopup::onPickFolder)), Default, SFXFolderPickerPopup, onPickFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXFolderPickerPopup::onSave)), Default, SFXFolderPickerPopup, onSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXFolderPickerPopup::onSelectAll)), Default, SFXFolderPickerPopup, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SFXFolderPickerPopup::pickFolder)), Default, SFXFolderPickerPopup, pickFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXFolderPickerPopup::rebuildList)), Default, SFXFolderPickerPopup, rebuildList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXFolderPickerPopup::refreshList)), Default, SFXFolderPickerPopup, refreshList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXFolderPickerPopup::updateActionBtn)), Default, SFXFolderPickerPopup, updateActionBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXFolderPickerPopup::updateShareHint)), Default, SFXFolderPickerPopup, updateShareHint, )
		}
	};
}
