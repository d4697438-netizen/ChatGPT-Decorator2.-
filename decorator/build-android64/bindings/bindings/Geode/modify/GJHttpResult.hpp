#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GJHttpResult.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJHttpResult> : ModifyBase<ModifyDerive<Der, GJHttpResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJHttpResult>>;
		using ModifyBase<ModifyDerive<Der, GJHttpResult>>::ModifyBase;
		using Base = GJHttpResult;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12GJHttpResultD2Ev")), Default, GJHttpResult)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, std::string, std::string, GJHttpType>::func(&GJHttpResult::create)), Default, GJHttpResult, create, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, std::string, std::string, GJHttpType>::func(&GJHttpResult::init)), Default, GJHttpResult, init, bool, std::string, std::string, GJHttpType)
		}
	};
}
