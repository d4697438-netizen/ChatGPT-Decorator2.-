#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/EditorSoundConfigCell.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromConfig
		#define GEODE_STATICS_loadFromConfig
		GEODE_AS_STATIC_FUNCTION(loadFromConfig) 
	#endif

	#ifndef GEODE_STATICS_onInfoPopup
		#define GEODE_STATICS_onInfoPopup
		GEODE_AS_STATIC_FUNCTION(onInfoPopup) 
	#endif

	#ifndef GEODE_STATICS_onView
		#define GEODE_STATICS_onView
		GEODE_AS_STATIC_FUNCTION(onView) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromConfig
		#define GEODE_CONCEPT_CHECK_loadFromConfig
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfoPopup
		#define GEODE_CONCEPT_CHECK_onInfoPopup
		GEODE_CONCEPT_FUNCTION_CHECK(onInfoPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onView
		#define GEODE_CONCEPT_CHECK_onView
		GEODE_CONCEPT_FUNCTION_CHECK(onView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundConfigCell> : ModifyBase<ModifyDerive<Der, EditorSoundConfigCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundConfigCell>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundConfigCell>>::ModifyBase;
		using Base = EditorSoundConfigCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21EditorSoundConfigCellC2EPKcff")), Default, EditorSoundConfigCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21EditorSoundConfigCellD2Ev")), Default, EditorSoundConfigCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&EditorSoundConfigCell::create)), Default, EditorSoundConfigCell, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorSoundConfigCell::init)), Default, EditorSoundConfigCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJEditorSoundConfig*>::func(&EditorSoundConfigCell::loadFromConfig)), Default, EditorSoundConfigCell, loadFromConfig, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigCell::onInfoPopup)), Default, EditorSoundConfigCell, onInfoPopup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigCell::onView)), Default, EditorSoundConfigCell, onView, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigCell::onViewProfile)), Default, EditorSoundConfigCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&EditorSoundConfigCell::updateBGColor)), Default, EditorSoundConfigCell, updateBGColor, int)
		}
	};
}
