#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GJMessageThread.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createRoleBadge
		#define GEODE_STATICS_createRoleBadge
		GEODE_AS_STATIC_FUNCTION(createRoleBadge) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRoleBadge
		#define GEODE_CONCEPT_CHECK_createRoleBadge
		GEODE_CONCEPT_FUNCTION_CHECK(createRoleBadge) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMessageThread> : ModifyBase<ModifyDerive<Der, GJMessageThread>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMessageThread>>;
		using ModifyBase<ModifyDerive<Der, GJMessageThread>>::ModifyBase;
		using Base = GJMessageThread;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJMessageThreadD2Ev")), Default, GJMessageThread)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJMessageThread::create)), Default, GJMessageThread, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJMessageThread::createRoleBadge)), Default, GJMessageThread, createRoleBadge, float)
		}
	};
}
