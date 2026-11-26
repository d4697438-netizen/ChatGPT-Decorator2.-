#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/ThreadMessageOptionsPopup.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAction
		#define GEODE_STATICS_onAction
		GEODE_AS_STATIC_FUNCTION(onAction) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAction
		#define GEODE_CONCEPT_CHECK_onAction
		GEODE_CONCEPT_FUNCTION_CHECK(onAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadMessageOptionsPopup> : ModifyBase<ModifyDerive<Der, ThreadMessageOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadMessageOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, ThreadMessageOptionsPopup>>::ModifyBase;
		using Base = ThreadMessageOptionsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN25ThreadMessageOptionsPopupD2Ev")), Default, ThreadMessageOptionsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJThreadMessage*, std::string const&, ThreadViewPopup*>::func(&ThreadMessageOptionsPopup::create)), Default, ThreadMessageOptionsPopup, create, GJThreadMessage*, std::string const&, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ThreadMessageOptionsPopup::keyBackClicked)), Default, ThreadMessageOptionsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&ThreadMessageOptionsPopup::onClose)), Default, ThreadMessageOptionsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&ThreadMessageOptionsPopup::FLAlert_Clicked)), Default, ThreadMessageOptionsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJThreadMessage*, std::string const&, ThreadViewPopup*>::func(&ThreadMessageOptionsPopup::init)), Default, ThreadMessageOptionsPopup, init, GJThreadMessage*, std::string const&, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ThreadMessageOptionsPopup::onAction)), Default, ThreadMessageOptionsPopup, onAction, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ThreadMessageOptionsPopup::onCopy)), Default, ThreadMessageOptionsPopup, onCopy, cocos2d::CCObject*)
		}
	};
}
