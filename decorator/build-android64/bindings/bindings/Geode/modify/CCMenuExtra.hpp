#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/CCMenuExtra.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
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

	#ifndef GEODE_STATICS_disableRepeatPress
		#define GEODE_STATICS_disableRepeatPress
		GEODE_AS_STATIC_FUNCTION(disableRepeatPress) 
	#endif

	#ifndef GEODE_STATICS_enableRepeatPress
		#define GEODE_STATICS_enableRepeatPress
		GEODE_AS_STATIC_FUNCTION(enableRepeatPress) 
	#endif

	#ifndef GEODE_STATICS_fireSelectedItem
		#define GEODE_STATICS_fireSelectedItem
		GEODE_AS_STATIC_FUNCTION(fireSelectedItem) 
	#endif

	#ifndef GEODE_STATICS_repeatSelectionChanged
		#define GEODE_STATICS_repeatSelectionChanged
		GEODE_AS_STATIC_FUNCTION(repeatSelectionChanged) 
	#endif

	#ifndef GEODE_STATICS_repeatTick
		#define GEODE_STATICS_repeatTick
		GEODE_AS_STATIC_FUNCTION(repeatTick) 
	#endif

	#ifndef GEODE_STATICS_stopRepeat
		#define GEODE_STATICS_stopRepeat
		GEODE_AS_STATIC_FUNCTION(stopRepeat) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
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

	#ifndef GEODE_CONCEPT_CHECK_disableRepeatPress
		#define GEODE_CONCEPT_CHECK_disableRepeatPress
		GEODE_CONCEPT_FUNCTION_CHECK(disableRepeatPress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableRepeatPress
		#define GEODE_CONCEPT_CHECK_enableRepeatPress
		GEODE_CONCEPT_FUNCTION_CHECK(enableRepeatPress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fireSelectedItem
		#define GEODE_CONCEPT_CHECK_fireSelectedItem
		GEODE_CONCEPT_FUNCTION_CHECK(fireSelectedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repeatSelectionChanged
		#define GEODE_CONCEPT_CHECK_repeatSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(repeatSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repeatTick
		#define GEODE_CONCEPT_CHECK_repeatTick
		GEODE_CONCEPT_FUNCTION_CHECK(repeatTick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRepeat
		#define GEODE_CONCEPT_CHECK_stopRepeat
		GEODE_CONCEPT_FUNCTION_CHECK(stopRepeat) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuExtra> : ModifyBase<ModifyDerive<Der, CCMenuExtra>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuExtra>>;
		using ModifyBase<ModifyDerive<Der, CCMenuExtra>>::ModifyBase;
		using Base = CCMenuExtra;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11CCMenuExtraD2Ev")), Default, CCMenuExtra)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCMenuExtra::create)), Default, CCMenuExtra, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCMenuExtra::onExit)), Default, CCMenuExtra, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCMenuExtra::ccTouchBegan)), Default, CCMenuExtra, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCMenuExtra::ccTouchMoved)), Default, CCMenuExtra, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCMenuExtra::ccTouchEnded)), Default, CCMenuExtra, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCMenuExtra::ccTouchCancelled)), Default, CCMenuExtra, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCMenuExtra::disableRepeatPress)), Default, CCMenuExtra, disableRepeatPress, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCMenuExtra::enableRepeatPress)), Default, CCMenuExtra, enableRepeatPress, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&CCMenuExtra::enableRepeatPress)), Default, CCMenuExtra, enableRepeatPress, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCMenuExtra::fireSelectedItem)), Default, CCMenuExtra, fireSelectedItem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCMenuExtra::repeatSelectionChanged)), Default, CCMenuExtra, repeatSelectionChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCMenuExtra::repeatTick)), Default, CCMenuExtra, repeatTick, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCMenuExtra::stopRepeat)), Default, CCMenuExtra, stopRepeat, )
		}
	};
}
