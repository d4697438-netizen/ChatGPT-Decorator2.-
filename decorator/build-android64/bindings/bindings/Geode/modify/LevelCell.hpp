#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/LevelCell.hpp>
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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_inRecallMode
		#define GEODE_STATICS_inRecallMode
		GEODE_AS_STATIC_FUNCTION(inRecallMode) 
	#endif

	#ifndef GEODE_STATICS_loadCustomLevelCell
		#define GEODE_STATICS_loadCustomLevelCell
		GEODE_AS_STATIC_FUNCTION(loadCustomLevelCell) 
	#endif

	#ifndef GEODE_STATICS_loadFromLevel
		#define GEODE_STATICS_loadFromLevel
		GEODE_AS_STATIC_FUNCTION(loadFromLevel) 
	#endif

	#ifndef GEODE_STATICS_loadLocalLevelCell
		#define GEODE_STATICS_loadLocalLevelCell
		GEODE_AS_STATIC_FUNCTION(loadLocalLevelCell) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_playRecallUnlock
		#define GEODE_STATICS_playRecallUnlock
		GEODE_AS_STATIC_FUNCTION(playRecallUnlock) 
	#endif

	#ifndef GEODE_STATICS_recallChestReady
		#define GEODE_STATICS_recallChestReady
		GEODE_AS_STATIC_FUNCTION(recallChestReady) 
	#endif

	#ifndef GEODE_STATICS_recallLevel
		#define GEODE_STATICS_recallLevel
		GEODE_AS_STATIC_FUNCTION(recallLevel) 
	#endif

	#ifndef GEODE_STATICS_recallSavedLevel
		#define GEODE_STATICS_recallSavedLevel
		GEODE_AS_STATIC_FUNCTION(recallSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateCellMode
		#define GEODE_STATICS_updateCellMode
		GEODE_AS_STATIC_FUNCTION(updateCellMode) 
	#endif

	#ifndef GEODE_STATICS_updateToggle
		#define GEODE_STATICS_updateToggle
		GEODE_AS_STATIC_FUNCTION(updateToggle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inRecallMode
		#define GEODE_CONCEPT_CHECK_inRecallMode
		GEODE_CONCEPT_FUNCTION_CHECK(inRecallMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCustomLevelCell
		#define GEODE_CONCEPT_CHECK_loadCustomLevelCell
		GEODE_CONCEPT_FUNCTION_CHECK(loadCustomLevelCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromLevel
		#define GEODE_CONCEPT_CHECK_loadFromLevel
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLocalLevelCell
		#define GEODE_CONCEPT_CHECK_loadLocalLevelCell
		GEODE_CONCEPT_FUNCTION_CHECK(loadLocalLevelCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClick
		#define GEODE_CONCEPT_CHECK_onClick
		GEODE_CONCEPT_FUNCTION_CHECK(onClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playRecallUnlock
		#define GEODE_CONCEPT_CHECK_playRecallUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(playRecallUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recallChestReady
		#define GEODE_CONCEPT_CHECK_recallChestReady
		GEODE_CONCEPT_FUNCTION_CHECK(recallChestReady) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recallLevel
		#define GEODE_CONCEPT_CHECK_recallLevel
		GEODE_CONCEPT_FUNCTION_CHECK(recallLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recallSavedLevel
		#define GEODE_CONCEPT_CHECK_recallSavedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(recallSavedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCellMode
		#define GEODE_CONCEPT_CHECK_updateCellMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateCellMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggle
		#define GEODE_CONCEPT_CHECK_updateToggle
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelCell> : ModifyBase<ModifyDerive<Der, LevelCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelCell>>;
		using ModifyBase<ModifyDerive<Der, LevelCell>>::ModifyBase;
		using Base = LevelCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9LevelCellC2EPKcff")), Default, LevelCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN9LevelCellD2Ev")), Default, LevelCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&LevelCell::create)), Default, LevelCell, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelCell::init)), Default, LevelCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelCell::draw)), Default, LevelCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::inRecallMode)), Default, LevelCell, inRecallMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::loadCustomLevelCell)), Default, LevelCell, loadCustomLevelCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*>::func(&LevelCell::loadFromLevel)), Default, LevelCell, loadFromLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::loadLocalLevelCell)), Default, LevelCell, loadLocalLevelCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&LevelCell::onClick)), Default, LevelCell, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&LevelCell::onToggle)), Default, LevelCell, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&LevelCell::onViewProfile)), Default, LevelCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::playRecallUnlock)), Default, LevelCell, playRecallUnlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::recallChestReady)), Default, LevelCell, recallChestReady, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::recallLevel)), Default, LevelCell, recallLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::recallSavedLevel)), Default, LevelCell, recallSavedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelCell::updateBGColor)), Default, LevelCell, updateBGColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelCell::updateCellMode)), Default, LevelCell, updateCellMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelCell::updateToggle)), Default, LevelCell, updateToggle, )
		}
	};
}
