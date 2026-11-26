#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GJThreadMessage.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GJThreadMessage> : ModifyBase<ModifyDerive<Der, GJThreadMessage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJThreadMessage>>;
		using ModifyBase<ModifyDerive<Der, GJThreadMessage>>::ModifyBase;
		using Base = GJThreadMessage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJThreadMessageD2Ev")), Default, GJThreadMessage)
		}
	};
}
