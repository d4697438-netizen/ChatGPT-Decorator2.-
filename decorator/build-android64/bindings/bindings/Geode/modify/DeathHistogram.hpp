#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/DeathHistogram.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_handleTouchBegan
		#define GEODE_STATICS_handleTouchBegan
		GEODE_AS_STATIC_FUNCTION(handleTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_handleTouchEnded
		#define GEODE_STATICS_handleTouchEnded
		GEODE_AS_STATIC_FUNCTION(handleTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_handleTouchMoved
		#define GEODE_STATICS_handleTouchMoved
		GEODE_AS_STATIC_FUNCTION(handleTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_persistScroll
		#define GEODE_STATICS_persistScroll
		GEODE_AS_STATIC_FUNCTION(persistScroll) 
	#endif

	#ifndef GEODE_STATICS_rebuildAxis
		#define GEODE_STATICS_rebuildAxis
		GEODE_AS_STATIC_FUNCTION(rebuildAxis) 
	#endif

	#ifndef GEODE_STATICS_restoreScroll
		#define GEODE_STATICS_restoreScroll
		GEODE_AS_STATIC_FUNCTION(restoreScroll) 
	#endif

	#ifndef GEODE_STATICS_setAttemptLine
		#define GEODE_STATICS_setAttemptLine
		GEODE_AS_STATIC_FUNCTION(setAttemptLine) 
	#endif

	#ifndef GEODE_STATICS_setData
		#define GEODE_STATICS_setData
		GEODE_AS_STATIC_FUNCTION(setData) 
	#endif

	#ifndef GEODE_STATICS_setProgression
		#define GEODE_STATICS_setProgression
		GEODE_AS_STATIC_FUNCTION(setProgression) 
	#endif

	#ifndef GEODE_STATICS_setSurvival
		#define GEODE_STATICS_setSurvival
		GEODE_AS_STATIC_FUNCTION(setSurvival) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchBegan
		#define GEODE_CONCEPT_CHECK_handleTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchEnded
		#define GEODE_CONCEPT_CHECK_handleTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchMoved
		#define GEODE_CONCEPT_CHECK_handleTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_persistScroll
		#define GEODE_CONCEPT_CHECK_persistScroll
		GEODE_CONCEPT_FUNCTION_CHECK(persistScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildAxis
		#define GEODE_CONCEPT_CHECK_rebuildAxis
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildAxis) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreScroll
		#define GEODE_CONCEPT_CHECK_restoreScroll
		GEODE_CONCEPT_FUNCTION_CHECK(restoreScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttemptLine
		#define GEODE_CONCEPT_CHECK_setAttemptLine
		GEODE_CONCEPT_FUNCTION_CHECK(setAttemptLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setData
		#define GEODE_CONCEPT_CHECK_setData
		GEODE_CONCEPT_FUNCTION_CHECK(setData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProgression
		#define GEODE_CONCEPT_CHECK_setProgression
		GEODE_CONCEPT_FUNCTION_CHECK(setProgression) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSurvival
		#define GEODE_CONCEPT_CHECK_setSurvival
		GEODE_CONCEPT_FUNCTION_CHECK(setSurvival) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathHistogram> : ModifyBase<ModifyDerive<Der, DeathHistogram>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathHistogram>>;
		using ModifyBase<ModifyDerive<Der, DeathHistogram>>::ModifyBase;
		using Base = DeathHistogram;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14DeathHistogramD2Ev")), Default, DeathHistogram)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize>::func(&DeathHistogram::create)), Default, DeathHistogram, create, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*>::func(&DeathHistogram::handleTouchBegan)), Default, DeathHistogram, handleTouchBegan, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*>::func(&DeathHistogram::handleTouchEnded)), Default, DeathHistogram, handleTouchEnded, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*>::func(&DeathHistogram::handleTouchMoved)), Default, DeathHistogram, handleTouchMoved, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize>::func(&DeathHistogram::init)), Default, DeathHistogram, init, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::string const&>::func(&DeathHistogram::persistScroll)), Default, DeathHistogram, persistScroll, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int, float, float, char const*>::func(&DeathHistogram::rebuildAxis)), Default, DeathHistogram, rebuildAxis, char const*, int, float, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::string const&>::func(&DeathHistogram::restoreScroll)), Default, DeathHistogram, restoreScroll, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::vector<int> const&, std::vector<int> const&, cocos2d::ccColor3B, int, cocos2d::ccColor3B, bool>::func(&DeathHistogram::setAttemptLine)), Default, DeathHistogram, setAttemptLine, std::vector<int> const&, std::vector<int> const&, cocos2d::ccColor3B, int, cocos2d::ccColor3B, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::vector<int> const&, int, bool, bool, bool>::func(&DeathHistogram::setData)), Default, DeathHistogram, setData, std::vector<int> const&, int, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::vector<int> const&, std::vector<int> const&, std::vector<int> const&>::func(&DeathHistogram::setProgression)), Default, DeathHistogram, setProgression, std::vector<int> const&, std::vector<int> const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::vector<int> const&, bool, bool, int>::func(&DeathHistogram::setSurvival)), Default, DeathHistogram, setSurvival, std::vector<int> const&, bool, bool, int)
		}
	};
}
