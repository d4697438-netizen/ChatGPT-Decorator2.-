#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <cocos2d.h>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLabelProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCLabelProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLabelProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLabelProtocol>>::ModifyBase;
		using Base = cocos2d::CCLabelProtocol;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*>::func(&cocos2d::CCLabelProtocol::setString)), Default, cocos2d::CCLabelProtocol, setString, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelProtocol::getString)), Default, cocos2d::CCLabelProtocol, getString, )
		}
	};
}
