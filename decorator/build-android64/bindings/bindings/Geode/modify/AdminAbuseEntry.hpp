#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/AdminAbuseEntry.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminAbuseEntry> : ModifyBase<ModifyDerive<Der, AdminAbuseEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminAbuseEntry>>;
		using ModifyBase<ModifyDerive<Der, AdminAbuseEntry>>::ModifyBase;
		using Base = AdminAbuseEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15AdminAbuseEntryD2Ev")), Default, AdminAbuseEntry)
		}
	};
}
