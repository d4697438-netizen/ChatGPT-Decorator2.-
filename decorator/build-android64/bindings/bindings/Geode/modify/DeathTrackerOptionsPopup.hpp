#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/DeathTrackerOptionsPopup.hpp>
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

	#ifndef GEODE_STATICS_onClearData
		#define GEODE_STATICS_onClearData
		GEODE_AS_STATIC_FUNCTION(onClearData) 
	#endif

	#ifndef GEODE_STATICS_onToggleAutoScroll
		#define GEODE_STATICS_onToggleAutoScroll
		GEODE_AS_STATIC_FUNCTION(onToggleAutoScroll) 
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

	#ifndef GEODE_CONCEPT_CHECK_onClearData
		#define GEODE_CONCEPT_CHECK_onClearData
		GEODE_CONCEPT_FUNCTION_CHECK(onClearData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAutoScroll
		#define GEODE_CONCEPT_CHECK_onToggleAutoScroll
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAutoScroll) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathTrackerOptionsPopup> : ModifyBase<ModifyDerive<Der, DeathTrackerOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathTrackerOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, DeathTrackerOptionsPopup>>::ModifyBase;
		using Base = DeathTrackerOptionsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN24DeathTrackerOptionsPopupD2Ev")), Default, DeathTrackerOptionsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, DeathTrackerPopup*>::func(&DeathTrackerOptionsPopup::create)), Default, DeathTrackerOptionsPopup, create, GJGameLevel*, DeathTrackerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DeathTrackerOptionsPopup::keyBackClicked)), Default, DeathTrackerOptionsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&DeathTrackerOptionsPopup::onClose)), Default, DeathTrackerOptionsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&DeathTrackerOptionsPopup::FLAlert_Clicked)), Default, DeathTrackerOptionsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, DeathTrackerPopup*>::func(&DeathTrackerOptionsPopup::init)), Default, DeathTrackerOptionsPopup, init, GJGameLevel*, DeathTrackerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&DeathTrackerOptionsPopup::onClearData)), Default, DeathTrackerOptionsPopup, onClearData, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&DeathTrackerOptionsPopup::onToggleAutoScroll)), Default, DeathTrackerOptionsPopup, onToggleAutoScroll, cocos2d::CCObject*)
		}
	};
}
