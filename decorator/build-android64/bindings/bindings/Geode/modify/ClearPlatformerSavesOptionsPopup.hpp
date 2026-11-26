#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/ClearPlatformerSavesOptionsPopup.hpp>
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

	#ifndef GEODE_STATICS_onBackupToggle
		#define GEODE_STATICS_onBackupToggle
		GEODE_AS_STATIC_FUNCTION(onBackupToggle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBackupToggle
		#define GEODE_CONCEPT_CHECK_onBackupToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onBackupToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ClearPlatformerSavesOptionsPopup> : ModifyBase<ModifyDerive<Der, ClearPlatformerSavesOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ClearPlatformerSavesOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, ClearPlatformerSavesOptionsPopup>>::ModifyBase;
		using Base = ClearPlatformerSavesOptionsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN32ClearPlatformerSavesOptionsPopupD2Ev")), Default, ClearPlatformerSavesOptionsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ClearPlatformerSavesOptionsPopup::create)), Default, ClearPlatformerSavesOptionsPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ClearPlatformerSavesOptionsPopup::init)), Default, ClearPlatformerSavesOptionsPopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ClearPlatformerSavesOptionsPopup::onBackupToggle)), Default, ClearPlatformerSavesOptionsPopup, onBackupToggle, cocos2d::CCObject*)
		}
	};
}
