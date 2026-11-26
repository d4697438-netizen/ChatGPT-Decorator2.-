#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GJRateLevelListLayer.hpp>
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

	#ifndef GEODE_STATICS_onCustomButton
		#define GEODE_STATICS_onCustomButton
		GEODE_AS_STATIC_FUNCTION(onCustomButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_createStatPillar
		#define GEODE_STATICS_createStatPillar
		GEODE_AS_STATIC_FUNCTION(createStatPillar) 
	#endif

	#ifndef GEODE_STATICS_impliedStarsForLevel
		#define GEODE_STATICS_impliedStarsForLevel
		GEODE_AS_STATIC_FUNCTION(impliedStarsForLevel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_starSumForBottom
		#define GEODE_STATICS_starSumForBottom
		GEODE_AS_STATIC_FUNCTION(starSumForBottom) 
	#endif

	#ifndef GEODE_STATICS_updateStarSumLabel
		#define GEODE_STATICS_updateStarSumLabel
		GEODE_AS_STATIC_FUNCTION(updateStarSumLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onCustomButton
		#define GEODE_CONCEPT_CHECK_onCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStatPillar
		#define GEODE_CONCEPT_CHECK_createStatPillar
		GEODE_CONCEPT_FUNCTION_CHECK(createStatPillar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_impliedStarsForLevel
		#define GEODE_CONCEPT_CHECK_impliedStarsForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(impliedStarsForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmit
		#define GEODE_CONCEPT_CHECK_onSubmit
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_starSumForBottom
		#define GEODE_CONCEPT_CHECK_starSumForBottom
		GEODE_CONCEPT_FUNCTION_CHECK(starSumForBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStarSumLabel
		#define GEODE_CONCEPT_CHECK_updateStarSumLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateStarSumLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRateLevelListLayer> : ModifyBase<ModifyDerive<Der, GJRateLevelListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRateLevelListLayer>>;
		using ModifyBase<ModifyDerive<Der, GJRateLevelListLayer>>::ModifyBase;
		using Base = GJRateLevelListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*, cocos2d::CCArray*>::func(&GJRateLevelListLayer::create)), Default, GJRateLevelListLayer, create, GJLevelList*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GJRateLevelListLayer::keyBackClicked)), Default, GJRateLevelListLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&GJRateLevelListLayer::onClose)), Default, GJRateLevelListLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&GJRateLevelListLayer::onCustomButton)), Default, GJRateLevelListLayer, onCustomButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&GJRateLevelListLayer::valueDidChange)), Default, GJRateLevelListLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&GJRateLevelListLayer::uploadActionFinished)), Default, GJRateLevelListLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&GJRateLevelListLayer::uploadActionFailed)), Default, GJRateLevelListLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<UploadActionPopup*>::func(&GJRateLevelListLayer::onClosePopup)), Default, GJRateLevelListLayer, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&GJRateLevelListLayer::FLAlert_Clicked)), Default, GJRateLevelListLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, cocos2d::ccColor3B, cocos2d::ccColor3B, cocos2d::CCPoint, std::string>::func(&GJRateLevelListLayer::createStatPillar)), Default, GJRateLevelListLayer, createStatPillar, int, int, int, cocos2d::ccColor3B, cocos2d::ccColor3B, cocos2d::CCPoint, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&GJRateLevelListLayer::impliedStarsForLevel)), Default, GJRateLevelListLayer, impliedStarsForLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJLevelList*, cocos2d::CCArray*>::func(&GJRateLevelListLayer::init)), Default, GJRateLevelListLayer, init, GJLevelList*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&GJRateLevelListLayer::onSubmit)), Default, GJRateLevelListLayer, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJRateLevelListLayer::starSumForBottom)), Default, GJRateLevelListLayer, starSumForBottom, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJRateLevelListLayer::updateStarSumLabel)), Default, GJRateLevelListLayer, updateStarSumLabel, int)
		}
	};
}
