#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GJNotification.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_rewardKey
		#define GEODE_STATICS_rewardKey
		GEODE_AS_STATIC_FUNCTION(rewardKey) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardKey
		#define GEODE_CONCEPT_CHECK_rewardKey
		GEODE_CONCEPT_FUNCTION_CHECK(rewardKey) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJNotification> : ModifyBase<ModifyDerive<Der, GJNotification>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJNotification>>;
		using ModifyBase<ModifyDerive<Der, GJNotification>>::ModifyBase;
		using Base = GJNotification;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14GJNotificationD2Ev")), Default, GJNotification)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJNotification::create)), Default, GJNotification, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJNotification::rewardKey)), Default, GJNotification, rewardKey, )
		}
	};
}
