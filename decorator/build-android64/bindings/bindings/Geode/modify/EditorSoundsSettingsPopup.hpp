#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/EditorSoundsSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearAll
		#define GEODE_STATICS_onClearAll
		GEODE_AS_STATIC_FUNCTION(onClearAll) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDownloadAll
		#define GEODE_STATICS_onDownloadAll
		GEODE_AS_STATIC_FUNCTION(onDownloadAll) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearAll
		#define GEODE_CONCEPT_CHECK_onClearAll
		GEODE_CONCEPT_FUNCTION_CHECK(onClearAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadAll
		#define GEODE_CONCEPT_CHECK_onDownloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadAll) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundsSettingsPopup> : ModifyBase<ModifyDerive<Der, EditorSoundsSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundsSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundsSettingsPopup>>::ModifyBase;
		using Base = EditorSoundsSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN25EditorSoundsSettingsPopupD2Ev")), Default, EditorSoundsSettingsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EditorSoundsLayer*>::func(&EditorSoundsSettingsPopup::create)), Default, EditorSoundsSettingsPopup, create, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorSoundsSettingsPopup::keyBackClicked)), Default, EditorSoundsSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&EditorSoundsSettingsPopup::FLAlert_Clicked)), Default, EditorSoundsSettingsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EditorSoundsLayer*>::func(&EditorSoundsSettingsPopup::init)), Default, EditorSoundsSettingsPopup, init, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundsSettingsPopup::onClearAll)), Default, EditorSoundsSettingsPopup, onClearAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundsSettingsPopup::onClose)), Default, EditorSoundsSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundsSettingsPopup::onDownloadAll)), Default, EditorSoundsSettingsPopup, onDownloadAll, cocos2d::CCObject*)
		}
	};
}
