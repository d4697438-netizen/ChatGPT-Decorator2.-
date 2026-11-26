#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_buildControllerGlyph
		#define GEODE_STATICS_buildControllerGlyph
		GEODE_AS_STATIC_FUNCTION(buildControllerGlyph) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getActionTable
		#define GEODE_STATICS_getActionTable
		GEODE_AS_STATIC_FUNCTION(getActionTable) 
	#endif

	#ifndef GEODE_STATICS_tintGlyph
		#define GEODE_STATICS_tintGlyph
		GEODE_AS_STATIC_FUNCTION(tintGlyph) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_showTab
		#define GEODE_STATICS_showTab
		GEODE_AS_STATIC_FUNCTION(showTab) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_actionsToShow
		#define GEODE_STATICS_actionsToShow
		GEODE_AS_STATIC_FUNCTION(actionsToShow) 
	#endif

	#ifndef GEODE_STATICS_nameForAction
		#define GEODE_STATICS_nameForAction
		GEODE_AS_STATIC_FUNCTION(nameForAction) 
	#endif

	#ifndef GEODE_STATICS_openBindingEditor
		#define GEODE_STATICS_openBindingEditor
		GEODE_AS_STATIC_FUNCTION(openBindingEditor) 
	#endif

	#ifndef GEODE_STATICS_showControllerChords
		#define GEODE_STATICS_showControllerChords
		GEODE_AS_STATIC_FUNCTION(showControllerChords) 
	#endif

	#ifndef GEODE_STATICS_settingsEntries
		#define GEODE_STATICS_settingsEntries
		GEODE_AS_STATIC_FUNCTION(settingsEntries) 
	#endif

	#ifndef GEODE_STATICS_buildContentForTab
		#define GEODE_STATICS_buildContentForTab
		GEODE_AS_STATIC_FUNCTION(buildContentForTab) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddBinding
		#define GEODE_STATICS_onAddBinding
		GEODE_AS_STATIC_FUNCTION(onAddBinding) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onEditBinding
		#define GEODE_STATICS_onEditBinding
		GEODE_AS_STATIC_FUNCTION(onEditBinding) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_buildControllerGlyph
		#define GEODE_CONCEPT_CHECK_buildControllerGlyph
		GEODE_CONCEPT_FUNCTION_CHECK(buildControllerGlyph) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionTable
		#define GEODE_CONCEPT_CHECK_getActionTable
		GEODE_CONCEPT_FUNCTION_CHECK(getActionTable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tintGlyph
		#define GEODE_CONCEPT_CHECK_tintGlyph
		GEODE_CONCEPT_FUNCTION_CHECK(tintGlyph) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTab
		#define GEODE_CONCEPT_CHECK_showTab
		GEODE_CONCEPT_FUNCTION_CHECK(showTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsToShow
		#define GEODE_CONCEPT_CHECK_actionsToShow
		GEODE_CONCEPT_FUNCTION_CHECK(actionsToShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForAction
		#define GEODE_CONCEPT_CHECK_nameForAction
		GEODE_CONCEPT_FUNCTION_CHECK(nameForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openBindingEditor
		#define GEODE_CONCEPT_CHECK_openBindingEditor
		GEODE_CONCEPT_FUNCTION_CHECK(openBindingEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showControllerChords
		#define GEODE_CONCEPT_CHECK_showControllerChords
		GEODE_CONCEPT_FUNCTION_CHECK(showControllerChords) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_settingsEntries
		#define GEODE_CONCEPT_CHECK_settingsEntries
		GEODE_CONCEPT_FUNCTION_CHECK(settingsEntries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_crossCheckGlobalConflicts
		#define GEODE_CONCEPT_CHECK_crossCheckGlobalConflicts
		GEODE_CONCEPT_FUNCTION_CHECK(crossCheckGlobalConflicts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildContentForTab
		#define GEODE_CONCEPT_CHECK_buildContentForTab
		GEODE_CONCEPT_FUNCTION_CHECK(buildContentForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddBinding
		#define GEODE_CONCEPT_CHECK_onAddBinding
		GEODE_CONCEPT_FUNCTION_CHECK(onAddBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditBinding
		#define GEODE_CONCEPT_CHECK_onEditBinding
		GEODE_CONCEPT_FUNCTION_CHECK(onEditBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindingsLayer> : ModifyBase<ModifyDerive<Der, KeybindingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsLayer>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsLayer>>::ModifyBase;
		using Base = KeybindingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16KeybindingsLayerC2Ev")), Default, KeybindingsLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16KeybindingsLayerD2Ev")), Default, KeybindingsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool&>::func(&KeybindingsLayer::buildControllerGlyph)), Default, KeybindingsLayer, buildControllerGlyph, int, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameSettingsLayer*>::func(&KeybindingsLayer::create)), Default, KeybindingsLayer, create, GameSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int&>::func(&KeybindingsLayer::getActionTable)), Default, KeybindingsLayer, getActionTable, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, cocos2d::ccColor3B>::func(&KeybindingsLayer::tintGlyph)), Default, KeybindingsLayer, tintGlyph, cocos2d::CCSprite*, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchBegan)), Default, KeybindingsLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchMoved)), Default, KeybindingsLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchEnded)), Default, KeybindingsLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchCancelled)), Default, KeybindingsLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&KeybindingsLayer::rebuildContent)), Default, KeybindingsLayer, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&KeybindingsLayer::onClose)), Default, KeybindingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&KeybindingsLayer::textChanged)), Default, KeybindingsLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&KeybindingsLayer::showTab)), Default, KeybindingsLayer, showTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&KeybindingsLayer::setupTabs)), Default, KeybindingsLayer, setupTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&KeybindingsLayer::actionsToShow)), Default, KeybindingsLayer, actionsToShow, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&KeybindingsLayer::nameForAction)), Default, KeybindingsLayer, nameForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&KeybindingsLayer::openBindingEditor)), Default, KeybindingsLayer, openBindingEditor, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&KeybindingsLayer::showControllerChords)), Default, KeybindingsLayer, showControllerChords, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&KeybindingsLayer::settingsEntries)), Default, KeybindingsLayer, settingsEntries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, crossCheckGlobalConflicts, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&KeybindingsLayer::buildContentForTab)), Default, KeybindingsLayer, buildContentForTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameSettingsLayer*>::func(&KeybindingsLayer::init)), Default, KeybindingsLayer, init, GameSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&KeybindingsLayer::onAddBinding)), Default, KeybindingsLayer, onAddBinding, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&KeybindingsLayer::onClearSearch)), Default, KeybindingsLayer, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&KeybindingsLayer::onEditBinding)), Default, KeybindingsLayer, onEditBinding, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&KeybindingsLayer::onSettings)), Default, KeybindingsLayer, onSettings, cocos2d::CCObject*)
		}
	};
}
