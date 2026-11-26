#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/SFXChangelogPopup.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_buildContent
		#define GEODE_STATICS_buildContent
		GEODE_AS_STATIC_FUNCTION(buildContent) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCredits
		#define GEODE_STATICS_onCredits
		GEODE_AS_STATIC_FUNCTION(onCredits) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildContent
		#define GEODE_CONCEPT_CHECK_buildContent
		GEODE_CONCEPT_FUNCTION_CHECK(buildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCredits
		#define GEODE_CONCEPT_CHECK_onCredits
		GEODE_CONCEPT_FUNCTION_CHECK(onCredits) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXChangelogPopup> : ModifyBase<ModifyDerive<Der, SFXChangelogPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXChangelogPopup>>;
		using ModifyBase<ModifyDerive<Der, SFXChangelogPopup>>::ModifyBase;
		using Base = SFXChangelogPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SFXChangelogPopupD2Ev")), Default, SFXChangelogPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&SFXChangelogPopup::create)), Default, SFXChangelogPopup, create, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, float, float>::func(&SFXChangelogPopup::buildContent)), Default, SFXChangelogPopup, buildContent, cocos2d::CCNode*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&SFXChangelogPopup::init)), Default, SFXChangelogPopup, init, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXChangelogPopup::onCredits)), Default, SFXChangelogPopup, onCredits, cocos2d::CCObject*)
		}
	};
}
