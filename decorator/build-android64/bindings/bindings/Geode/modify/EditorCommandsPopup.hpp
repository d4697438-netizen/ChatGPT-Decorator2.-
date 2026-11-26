#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/EditorCommandsPopup.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onBuildWindowContent
		#define GEODE_STATICS_onBuildWindowContent
		GEODE_AS_STATIC_FUNCTION(onBuildWindowContent) 
	#endif

	#ifndef GEODE_STATICS_onWindowResized
		#define GEODE_STATICS_onWindowResized
		GEODE_AS_STATIC_FUNCTION(onWindowResized) 
	#endif

	#ifndef GEODE_STATICS_addCommandButton
		#define GEODE_STATICS_addCommandButton
		GEODE_AS_STATIC_FUNCTION(addCommandButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layoutCommandButtons
		#define GEODE_STATICS_layoutCommandButtons
		GEODE_AS_STATIC_FUNCTION(layoutCommandButtons) 
	#endif

	#ifndef GEODE_STATICS_onCommand
		#define GEODE_STATICS_onCommand
		GEODE_AS_STATIC_FUNCTION(onCommand) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBuildWindowContent
		#define GEODE_CONCEPT_CHECK_onBuildWindowContent
		GEODE_CONCEPT_FUNCTION_CHECK(onBuildWindowContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onWindowResized
		#define GEODE_CONCEPT_CHECK_onWindowResized
		GEODE_CONCEPT_FUNCTION_CHECK(onWindowResized) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCommandButton
		#define GEODE_CONCEPT_CHECK_addCommandButton
		GEODE_CONCEPT_FUNCTION_CHECK(addCommandButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutCommandButtons
		#define GEODE_CONCEPT_CHECK_layoutCommandButtons
		GEODE_CONCEPT_FUNCTION_CHECK(layoutCommandButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommand
		#define GEODE_CONCEPT_CHECK_onCommand
		GEODE_CONCEPT_FUNCTION_CHECK(onCommand) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorCommandsPopup> : ModifyBase<ModifyDerive<Der, EditorCommandsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorCommandsPopup>>;
		using ModifyBase<ModifyDerive<Der, EditorCommandsPopup>>::ModifyBase;
		using Base = EditorCommandsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19EditorCommandsPopupD2Ev")), Default, EditorCommandsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EditorUI*>::func(&EditorCommandsPopup::create)), Default, EditorCommandsPopup, create, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorCommandsPopup::onBuildWindowContent)), Default, EditorCommandsPopup, onBuildWindowContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorCommandsPopup::onWindowResized)), Default, EditorCommandsPopup, onWindowResized, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, EditorCommand>::func(&EditorCommandsPopup::addCommandButton)), Default, EditorCommandsPopup, addCommandButton, char const*, EditorCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EditorUI*>::func(&EditorCommandsPopup::init)), Default, EditorCommandsPopup, init, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorCommandsPopup::layoutCommandButtons)), Default, EditorCommandsPopup, layoutCommandButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorCommandsPopup::onCommand)), Default, EditorCommandsPopup, onCommand, cocos2d::CCObject*)
		}
	};
}
