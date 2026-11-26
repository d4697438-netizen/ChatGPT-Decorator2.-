#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/KeyframeAnimTriggerObject.hpp>
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

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeyframeAnimTriggerObject> : ModifyBase<ModifyDerive<Der, KeyframeAnimTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeyframeAnimTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, KeyframeAnimTriggerObject>>::ModifyBase;
		using Base = KeyframeAnimTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN25KeyframeAnimTriggerObjectD2Ev")), Default, KeyframeAnimTriggerObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&KeyframeAnimTriggerObject::create)), Default, KeyframeAnimTriggerObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&KeyframeAnimTriggerObject::init)), Default, KeyframeAnimTriggerObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&KeyframeAnimTriggerObject::customObjectSetup)), Default, KeyframeAnimTriggerObject, customObjectSetup, std::vector<std::string>&, std::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&KeyframeAnimTriggerObject::getSaveString)), Default, KeyframeAnimTriggerObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
