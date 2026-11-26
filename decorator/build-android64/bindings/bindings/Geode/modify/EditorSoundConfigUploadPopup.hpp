#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/EditorSoundConfigUploadPopup.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_uploadEditorSoundFinished
		#define GEODE_STATICS_uploadEditorSoundFinished
		GEODE_AS_STATIC_FUNCTION(uploadEditorSoundFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadEditorSoundFailed
		#define GEODE_STATICS_uploadEditorSoundFailed
		GEODE_AS_STATIC_FUNCTION(uploadEditorSoundFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancel
		#define GEODE_STATICS_onCancel
		GEODE_AS_STATIC_FUNCTION(onCancel) 
	#endif

	#ifndef GEODE_STATICS_onToggleFriendsOnly
		#define GEODE_STATICS_onToggleFriendsOnly
		GEODE_AS_STATIC_FUNCTION(onToggleFriendsOnly) 
	#endif

	#ifndef GEODE_STATICS_onToggleUnlisted
		#define GEODE_STATICS_onToggleUnlisted
		GEODE_AS_STATIC_FUNCTION(onToggleUnlisted) 
	#endif

	#ifndef GEODE_STATICS_onUpload
		#define GEODE_STATICS_onUpload
		GEODE_AS_STATIC_FUNCTION(onUpload) 
	#endif

	#ifndef GEODE_STATICS_onUploadAsUpdate
		#define GEODE_STATICS_onUploadAsUpdate
		GEODE_AS_STATIC_FUNCTION(onUploadAsUpdate) 
	#endif

	#ifndef GEODE_STATICS_performUpload
		#define GEODE_STATICS_performUpload
		GEODE_AS_STATIC_FUNCTION(performUpload) 
	#endif

	#ifndef GEODE_STATICS_updateVisibilityState
		#define GEODE_STATICS_updateVisibilityState
		GEODE_AS_STATIC_FUNCTION(updateVisibilityState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadEditorSoundFinished
		#define GEODE_CONCEPT_CHECK_uploadEditorSoundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadEditorSoundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadEditorSoundFailed
		#define GEODE_CONCEPT_CHECK_uploadEditorSoundFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadEditorSoundFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancel
		#define GEODE_CONCEPT_CHECK_onCancel
		GEODE_CONCEPT_FUNCTION_CHECK(onCancel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleFriendsOnly
		#define GEODE_CONCEPT_CHECK_onToggleFriendsOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleFriendsOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleUnlisted
		#define GEODE_CONCEPT_CHECK_onToggleUnlisted
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleUnlisted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpload
		#define GEODE_CONCEPT_CHECK_onUpload
		GEODE_CONCEPT_FUNCTION_CHECK(onUpload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadAsUpdate
		#define GEODE_CONCEPT_CHECK_onUploadAsUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadAsUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performUpload
		#define GEODE_CONCEPT_CHECK_performUpload
		GEODE_CONCEPT_FUNCTION_CHECK(performUpload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibilityState
		#define GEODE_CONCEPT_CHECK_updateVisibilityState
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibilityState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundConfigUploadPopup> : ModifyBase<ModifyDerive<Der, EditorSoundConfigUploadPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundConfigUploadPopup>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundConfigUploadPopup>>::ModifyBase;
		using Base = EditorSoundConfigUploadPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN28EditorSoundConfigUploadPopupD2Ev")), Default, EditorSoundConfigUploadPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJEditorSoundConfig*, EditorSoundConfigInfoLayer*>::func(&EditorSoundConfigUploadPopup::create)), Default, EditorSoundConfigUploadPopup, create, GJEditorSoundConfig*, EditorSoundConfigInfoLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorSoundConfigUploadPopup::keyBackClicked)), Default, EditorSoundConfigUploadPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onClose)), Default, EditorSoundConfigUploadPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&EditorSoundConfigUploadPopup::uploadEditorSoundFinished)), Default, EditorSoundConfigUploadPopup, uploadEditorSoundFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&EditorSoundConfigUploadPopup::uploadEditorSoundFailed)), Default, EditorSoundConfigUploadPopup, uploadEditorSoundFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJEditorSoundConfig*, EditorSoundConfigInfoLayer*>::func(&EditorSoundConfigUploadPopup::init)), Default, EditorSoundConfigUploadPopup, init, GJEditorSoundConfig*, EditorSoundConfigInfoLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onCancel)), Default, EditorSoundConfigUploadPopup, onCancel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onToggleFriendsOnly)), Default, EditorSoundConfigUploadPopup, onToggleFriendsOnly, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onToggleUnlisted)), Default, EditorSoundConfigUploadPopup, onToggleUnlisted, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onUpload)), Default, EditorSoundConfigUploadPopup, onUpload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onUploadAsUpdate)), Default, EditorSoundConfigUploadPopup, onUploadAsUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&EditorSoundConfigUploadPopup::performUpload)), Default, EditorSoundConfigUploadPopup, performUpload, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorSoundConfigUploadPopup::updateVisibilityState)), Default, EditorSoundConfigUploadPopup, updateVisibilityState, )
		}
	};
}
