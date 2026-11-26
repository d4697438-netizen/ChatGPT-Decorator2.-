#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/EditorSFXActionConfigLayer.hpp>
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

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_sfxBrowserClosed
		#define GEODE_STATICS_sfxBrowserClosed
		GEODE_AS_STATIC_FUNCTION(sfxBrowserClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddSound
		#define GEODE_STATICS_onAddSound
		GEODE_AS_STATIC_FUNCTION(onAddSound) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSound
		#define GEODE_STATICS_onDeleteSound
		GEODE_AS_STATIC_FUNCTION(onDeleteSound) 
	#endif

	#ifndef GEODE_STATICS_onEditSound
		#define GEODE_STATICS_onEditSound
		GEODE_AS_STATIC_FUNCTION(onEditSound) 
	#endif

	#ifndef GEODE_STATICS_onOpenSettings
		#define GEODE_STATICS_onOpenSettings
		GEODE_AS_STATIC_FUNCTION(onOpenSettings) 
	#endif

	#ifndef GEODE_STATICS_onPreviewSound
		#define GEODE_STATICS_onPreviewSound
		GEODE_AS_STATIC_FUNCTION(onPreviewSound) 
	#endif

	#ifndef GEODE_STATICS_onToggleMode
		#define GEODE_STATICS_onToggleMode
		GEODE_AS_STATIC_FUNCTION(onToggleMode) 
	#endif

	#ifndef GEODE_STATICS_refreshModeButtons
		#define GEODE_STATICS_refreshModeButtons
		GEODE_AS_STATIC_FUNCTION(refreshModeButtons) 
	#endif

	#ifndef GEODE_STATICS_refreshRows
		#define GEODE_STATICS_refreshRows
		GEODE_AS_STATIC_FUNCTION(refreshRows) 
	#endif

	#ifndef GEODE_STATICS_refreshRowsAddedDeferred
		#define GEODE_STATICS_refreshRowsAddedDeferred
		GEODE_AS_STATIC_FUNCTION(refreshRowsAddedDeferred) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxBrowserClosed
		#define GEODE_CONCEPT_CHECK_sfxBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sfxBrowserClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddSound
		#define GEODE_CONCEPT_CHECK_onAddSound
		GEODE_CONCEPT_FUNCTION_CHECK(onAddSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSound
		#define GEODE_CONCEPT_CHECK_onDeleteSound
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditSound
		#define GEODE_CONCEPT_CHECK_onEditSound
		GEODE_CONCEPT_FUNCTION_CHECK(onEditSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenSettings
		#define GEODE_CONCEPT_CHECK_onOpenSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPreviewSound
		#define GEODE_CONCEPT_CHECK_onPreviewSound
		GEODE_CONCEPT_FUNCTION_CHECK(onPreviewSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleMode
		#define GEODE_CONCEPT_CHECK_onToggleMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshModeButtons
		#define GEODE_CONCEPT_CHECK_refreshModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(refreshModeButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshRows
		#define GEODE_CONCEPT_CHECK_refreshRows
		GEODE_CONCEPT_FUNCTION_CHECK(refreshRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshRowsAddedDeferred
		#define GEODE_CONCEPT_CHECK_refreshRowsAddedDeferred
		GEODE_CONCEPT_FUNCTION_CHECK(refreshRowsAddedDeferred) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSFXActionConfigLayer> : ModifyBase<ModifyDerive<Der, EditorSFXActionConfigLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSFXActionConfigLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorSFXActionConfigLayer>>::ModifyBase;
		using Base = EditorSFXActionConfigLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26EditorSFXActionConfigLayerC2Ev")), Default, EditorSFXActionConfigLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26EditorSFXActionConfigLayerD2Ev")), Default, EditorSFXActionConfigLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, EditorSoundsLayer*>::func(&EditorSFXActionConfigLayer::create)), Default, EditorSFXActionConfigLayer, create, int, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchBegan)), Default, EditorSFXActionConfigLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchMoved)), Default, EditorSFXActionConfigLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchEnded)), Default, EditorSFXActionConfigLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchCancelled)), Default, EditorSFXActionConfigLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorSFXActionConfigLayer::rebuildContent)), Default, EditorSFXActionConfigLayer, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onClose)), Default, EditorSFXActionConfigLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&EditorSFXActionConfigLayer::valueDidChange)), Default, EditorSFXActionConfigLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&EditorSFXActionConfigLayer::getValue)), Default, EditorSFXActionConfigLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXBrowser*>::func(&EditorSFXActionConfigLayer::sfxBrowserClosed)), Default, EditorSFXActionConfigLayer, sfxBrowserClosed, SFXBrowser*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, EditorSoundsLayer*>::func(&EditorSFXActionConfigLayer::init)), Default, EditorSFXActionConfigLayer, init, int, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onAddSound)), Default, EditorSFXActionConfigLayer, onAddSound, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onDeleteSound)), Default, EditorSFXActionConfigLayer, onDeleteSound, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onEditSound)), Default, EditorSFXActionConfigLayer, onEditSound, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onOpenSettings)), Default, EditorSFXActionConfigLayer, onOpenSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onPreviewSound)), Default, EditorSFXActionConfigLayer, onPreviewSound, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onToggleMode)), Default, EditorSFXActionConfigLayer, onToggleMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorSFXActionConfigLayer::refreshModeButtons)), Default, EditorSFXActionConfigLayer, refreshModeButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorSFXActionConfigLayer::refreshRows)), Default, EditorSFXActionConfigLayer, refreshRows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EditorSFXActionConfigLayer::refreshRowsAddedDeferred)), Default, EditorSFXActionConfigLayer, refreshRowsAddedDeferred, float)
		}
	};
}
