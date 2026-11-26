#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/AdminReportQueueEntry.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminReportQueueEntry> : ModifyBase<ModifyDerive<Der, AdminReportQueueEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminReportQueueEntry>>;
		using ModifyBase<ModifyDerive<Der, AdminReportQueueEntry>>::ModifyBase;
		using Base = AdminReportQueueEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21AdminReportQueueEntryD2Ev")), Default, AdminReportQueueEntry)
		}
	};
}
