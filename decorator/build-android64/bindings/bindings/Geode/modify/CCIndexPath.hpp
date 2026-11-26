#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/CCIndexPath.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_CCIndexPathWithSectionRow
		#define GEODE_CONCEPT_CHECK_CCIndexPathWithSectionRow
		GEODE_CONCEPT_FUNCTION_CHECK(CCIndexPathWithSectionRow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCIndexPath> : ModifyBase<ModifyDerive<Der, CCIndexPath>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCIndexPath>>;
		using ModifyBase<ModifyDerive<Der, CCIndexPath>>::ModifyBase;
		using Base = CCIndexPath;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11CCIndexPathD2Ev")), Default, CCIndexPath)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCIndexPath, CCIndexPathWithSectionRow, int, int)
		}
	};
}
