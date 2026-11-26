#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/CustomSFXRowMenu.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXRowMenu> : ModifyBase<ModifyDerive<Der, CustomSFXRowMenu>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXRowMenu>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXRowMenu>>::ModifyBase;
		using Base = CustomSFXRowMenu;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CustomSFXRowMenuD2Ev")), Default, CustomSFXRowMenu)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CustomSFXRowMenu::create)), Default, CustomSFXRowMenu, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CustomSFXRowMenu::ccTouchBegan)), Default, CustomSFXRowMenu, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
