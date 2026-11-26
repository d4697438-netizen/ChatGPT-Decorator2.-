#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GridSettingsLayer.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_onBuildWindowContent
		#define GEODE_STATICS_onBuildWindowContent
		GEODE_AS_STATIC_FUNCTION(onBuildWindowContent) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCycleDown
		#define GEODE_STATICS_onCycleDown
		GEODE_AS_STATIC_FUNCTION(onCycleDown) 
	#endif

	#ifndef GEODE_STATICS_onCycleUp
		#define GEODE_STATICS_onCycleUp
		GEODE_AS_STATIC_FUNCTION(onCycleUp) 
	#endif

	#ifndef GEODE_STATICS_onReset
		#define GEODE_STATICS_onReset
		GEODE_AS_STATIC_FUNCTION(onReset) 
	#endif

	#ifndef GEODE_STATICS_refreshValues
		#define GEODE_STATICS_refreshValues
		GEODE_AS_STATIC_FUNCTION(refreshValues) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBuildWindowContent
		#define GEODE_CONCEPT_CHECK_onBuildWindowContent
		GEODE_CONCEPT_FUNCTION_CHECK(onBuildWindowContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCycleDown
		#define GEODE_CONCEPT_CHECK_onCycleDown
		GEODE_CONCEPT_FUNCTION_CHECK(onCycleDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCycleUp
		#define GEODE_CONCEPT_CHECK_onCycleUp
		GEODE_CONCEPT_FUNCTION_CHECK(onCycleUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReset
		#define GEODE_CONCEPT_CHECK_onReset
		GEODE_CONCEPT_FUNCTION_CHECK(onReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshValues
		#define GEODE_CONCEPT_CHECK_refreshValues
		GEODE_CONCEPT_FUNCTION_CHECK(refreshValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GridSettingsLayer> : ModifyBase<ModifyDerive<Der, GridSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GridSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, GridSettingsLayer>>::ModifyBase;
		using Base = GridSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17GridSettingsLayerD2Ev")), Default, GridSettingsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EditorUI*>::func(&GridSettingsLayer::create)), Default, GridSettingsLayer, create, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&GridSettingsLayer::valueDidChange)), Default, GridSettingsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&GridSettingsLayer::getValue)), Default, GridSettingsLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GridSettingsLayer::onBuildWindowContent)), Default, GridSettingsLayer, onBuildWindowContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EditorUI*>::func(&GridSettingsLayer::init)), Default, GridSettingsLayer, init, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GridSettingsLayer::onCycleDown)), Default, GridSettingsLayer, onCycleDown, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GridSettingsLayer::onCycleUp)), Default, GridSettingsLayer, onCycleUp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GridSettingsLayer::onReset)), Default, GridSettingsLayer, onReset, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GridSettingsLayer::refreshValues)), Default, GridSettingsLayer, refreshValues, )
		}
	};
}
