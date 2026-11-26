#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/LevelStatsInfoPopup.hpp>
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

	#ifndef GEODE_STATICS_buildInfoText
		#define GEODE_STATICS_buildInfoText
		GEODE_AS_STATIC_FUNCTION(buildInfoText) 
	#endif

	#ifndef GEODE_STATICS_buildStatsText
		#define GEODE_STATICS_buildStatsText
		GEODE_AS_STATIC_FUNCTION(buildStatsText) 
	#endif

	#ifndef GEODE_STATICS_decodeProgress
		#define GEODE_STATICS_decodeProgress
		GEODE_AS_STATIC_FUNCTION(decodeProgress) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_updatePage
		#define GEODE_STATICS_updatePage
		GEODE_AS_STATIC_FUNCTION(updatePage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildInfoText
		#define GEODE_CONCEPT_CHECK_buildInfoText
		GEODE_CONCEPT_FUNCTION_CHECK(buildInfoText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildStatsText
		#define GEODE_CONCEPT_CHECK_buildStatsText
		GEODE_CONCEPT_FUNCTION_CHECK(buildStatsText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decodeProgress
		#define GEODE_CONCEPT_CHECK_decodeProgress
		GEODE_CONCEPT_FUNCTION_CHECK(decodeProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePage
		#define GEODE_CONCEPT_CHECK_updatePage
		GEODE_CONCEPT_FUNCTION_CHECK(updatePage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelStatsInfoPopup> : ModifyBase<ModifyDerive<Der, LevelStatsInfoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelStatsInfoPopup>>;
		using ModifyBase<ModifyDerive<Der, LevelStatsInfoPopup>>::ModifyBase;
		using Base = LevelStatsInfoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19LevelStatsInfoPopupD2Ev")), Default, LevelStatsInfoPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&LevelStatsInfoPopup::create)), Default, LevelStatsInfoPopup, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelStatsInfoPopup::keyBackClicked)), Default, LevelStatsInfoPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelStatsInfoPopup::buildInfoText)), Default, LevelStatsInfoPopup, buildInfoText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelStatsInfoPopup::buildStatsText)), Default, LevelStatsInfoPopup, buildStatsText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::string const&>::func(&LevelStatsInfoPopup::decodeProgress)), Default, LevelStatsInfoPopup, decodeProgress, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&LevelStatsInfoPopup::init)), Default, LevelStatsInfoPopup, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&LevelStatsInfoPopup::onClose)), Default, LevelStatsInfoPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&LevelStatsInfoPopup::onNextPage)), Default, LevelStatsInfoPopup, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&LevelStatsInfoPopup::onPrevPage)), Default, LevelStatsInfoPopup, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelStatsInfoPopup::updatePage)), Default, LevelStatsInfoPopup, updatePage, )
		}
	};
}
