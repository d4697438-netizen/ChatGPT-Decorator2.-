#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/ThreadSearchPopup.hpp>
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

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_clampDayField
		#define GEODE_STATICS_clampDayField
		GEODE_AS_STATIC_FUNCTION(clampDayField) 
	#endif

	#ifndef GEODE_STATICS_fieldValue
		#define GEODE_STATICS_fieldValue
		GEODE_AS_STATIC_FUNCTION(fieldValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onGoToDate
		#define GEODE_STATICS_onGoToDate
		GEODE_AS_STATIC_FUNCTION(onGoToDate) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
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

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clampDayField
		#define GEODE_CONCEPT_CHECK_clampDayField
		GEODE_CONCEPT_FUNCTION_CHECK(clampDayField) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fieldValue
		#define GEODE_CONCEPT_CHECK_fieldValue
		GEODE_CONCEPT_FUNCTION_CHECK(fieldValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToDate
		#define GEODE_CONCEPT_CHECK_onGoToDate
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadSearchPopup> : ModifyBase<ModifyDerive<Der, ThreadSearchPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadSearchPopup>>;
		using ModifyBase<ModifyDerive<Der, ThreadSearchPopup>>::ModifyBase;
		using Base = ThreadSearchPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17ThreadSearchPopupD2Ev")), Default, ThreadSearchPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ThreadViewPopup*>::func(&ThreadSearchPopup::create)), Default, ThreadSearchPopup, create, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ThreadSearchPopup::keyBackClicked)), Default, ThreadSearchPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&ThreadSearchPopup::onClose)), Default, ThreadSearchPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&ThreadSearchPopup::textChanged)), Default, ThreadSearchPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ThreadSearchPopup::clampDayField)), Default, ThreadSearchPopup, clampDayField, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<CCTextInputNode*, int, int>::func(&ThreadSearchPopup::fieldValue)), Default, ThreadSearchPopup, fieldValue, CCTextInputNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ThreadViewPopup*>::func(&ThreadSearchPopup::init)), Default, ThreadSearchPopup, init, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ThreadSearchPopup::onGoToDate)), Default, ThreadSearchPopup, onGoToDate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ThreadSearchPopup::onSearch)), Default, ThreadSearchPopup, onSearch, cocos2d::CCObject*)
		}
	};
}
