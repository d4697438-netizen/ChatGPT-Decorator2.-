#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/ControlSlotsPopup.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLoad
		#define GEODE_STATICS_onLoad
		GEODE_AS_STATIC_FUNCTION(onLoad) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoad
		#define GEODE_CONCEPT_CHECK_onLoad
		GEODE_CONCEPT_FUNCTION_CHECK(onLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ControlSlotsPopup> : ModifyBase<ModifyDerive<Der, ControlSlotsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ControlSlotsPopup>>;
		using ModifyBase<ModifyDerive<Der, ControlSlotsPopup>>::ModifyBase;
		using Base = ControlSlotsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17ControlSlotsPopupD2Ev")), Default, ControlSlotsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<TouchControlEditLayer*, bool>::func(&ControlSlotsPopup::create)), Default, ControlSlotsPopup, create, TouchControlEditLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&ControlSlotsPopup::onClose)), Default, ControlSlotsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<TouchControlEditLayer*, bool>::func(&ControlSlotsPopup::init)), Default, ControlSlotsPopup, init, TouchControlEditLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ControlSlotsPopup::onLoad)), Default, ControlSlotsPopup, onLoad, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ControlSlotsPopup::onSave)), Default, ControlSlotsPopup, onSave, cocos2d::CCObject*)
		}
	};
}
