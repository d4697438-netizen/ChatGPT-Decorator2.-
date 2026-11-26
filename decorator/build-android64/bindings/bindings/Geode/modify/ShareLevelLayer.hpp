#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/ShareLevelLayer.hpp>
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

	#ifndef GEODE_STATICS_getStarsButton
		#define GEODE_STATICS_getStarsButton
		GEODE_AS_STATIC_FUNCTION(getStarsButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onGuidelines
		#define GEODE_STATICS_onGuidelines
		GEODE_AS_STATIC_FUNCTION(onGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onNotifyFollowers
		#define GEODE_STATICS_onNotifyFollowers
		GEODE_AS_STATIC_FUNCTION(onNotifyFollowers) 
	#endif

	#ifndef GEODE_STATICS_onNotifyFriends
		#define GEODE_STATICS_onNotifyFriends
		GEODE_AS_STATIC_FUNCTION(onNotifyFriends) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

	#ifndef GEODE_STATICS_setupNotifyToggles
		#define GEODE_STATICS_setupNotifyToggles
		GEODE_AS_STATIC_FUNCTION(setupNotifyToggles) 
	#endif

	#ifndef GEODE_STATICS_setupStars
		#define GEODE_STATICS_setupStars
		GEODE_AS_STATIC_FUNCTION(setupStars) 
	#endif

	#ifndef GEODE_STATICS_updateNotifyToggles
		#define GEODE_STATICS_updateNotifyToggles
		GEODE_AS_STATIC_FUNCTION(updateNotifyToggles) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarsButton
		#define GEODE_CONCEPT_CHECK_getStarsButton
		GEODE_CONCEPT_FUNCTION_CHECK(getStarsButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGuidelines
		#define GEODE_CONCEPT_CHECK_onGuidelines
		GEODE_CONCEPT_FUNCTION_CHECK(onGuidelines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNotifyFollowers
		#define GEODE_CONCEPT_CHECK_onNotifyFollowers
		GEODE_CONCEPT_FUNCTION_CHECK(onNotifyFollowers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNotifyFriends
		#define GEODE_CONCEPT_CHECK_onNotifyFriends
		GEODE_CONCEPT_FUNCTION_CHECK(onNotifyFriends) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShare
		#define GEODE_CONCEPT_CHECK_onShare
		GEODE_CONCEPT_FUNCTION_CHECK(onShare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectRating
		#define GEODE_CONCEPT_CHECK_selectRating
		GEODE_CONCEPT_FUNCTION_CHECK(selectRating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupNotifyToggles
		#define GEODE_CONCEPT_CHECK_setupNotifyToggles
		GEODE_CONCEPT_FUNCTION_CHECK(setupNotifyToggles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupStars
		#define GEODE_CONCEPT_CHECK_setupStars
		GEODE_CONCEPT_FUNCTION_CHECK(setupStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateNotifyToggles
		#define GEODE_CONCEPT_CHECK_updateNotifyToggles
		GEODE_CONCEPT_FUNCTION_CHECK(updateNotifyToggles) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareLevelLayer> : ModifyBase<ModifyDerive<Der, ShareLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareLevelLayer>>::ModifyBase;
		using Base = ShareLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15ShareLevelLayerD2Ev")), Default, ShareLevelLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&ShareLevelLayer::create)), Default, ShareLevelLayer, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ShareLevelLayer::keyBackClicked)), Default, ShareLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float>::func(&ShareLevelLayer::getStarsButton)), Default, ShareLevelLayer, getStarsButton, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&ShareLevelLayer::init)), Default, ShareLevelLayer, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::onClose)), Default, ShareLevelLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::onGuidelines)), Default, ShareLevelLayer, onGuidelines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::onNotifyFollowers)), Default, ShareLevelLayer, onNotifyFollowers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::onNotifyFriends)), Default, ShareLevelLayer, onNotifyFriends, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::onSettings)), Default, ShareLevelLayer, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::onShare)), Default, ShareLevelLayer, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ShareLevelLayer::selectRating)), Default, ShareLevelLayer, selectRating, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, float, float>::func(&ShareLevelLayer::setupNotifyToggles)), Default, ShareLevelLayer, setupNotifyToggles, cocos2d::CCPoint, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ShareLevelLayer::setupStars)), Default, ShareLevelLayer, setupStars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ShareLevelLayer::updateNotifyToggles)), Default, ShareLevelLayer, updateNotifyToggles, )
		}
	};
}
