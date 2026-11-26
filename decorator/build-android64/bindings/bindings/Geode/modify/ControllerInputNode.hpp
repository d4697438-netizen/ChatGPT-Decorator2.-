#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/ControllerInputNode.hpp>
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

	#ifndef GEODE_STATICS_onButton
		#define GEODE_STATICS_onButton
		GEODE_AS_STATIC_FUNCTION(onButton) 
	#endif

	#ifndef GEODE_STATICS_refreshVisuals
		#define GEODE_STATICS_refreshVisuals
		GEODE_AS_STATIC_FUNCTION(refreshVisuals) 
	#endif

	#ifndef GEODE_STATICS_setActiveKey
		#define GEODE_STATICS_setActiveKey
		GEODE_AS_STATIC_FUNCTION(setActiveKey) 
	#endif

	#ifndef GEODE_STATICS_setController2
		#define GEODE_STATICS_setController2
		GEODE_AS_STATIC_FUNCTION(setController2) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButton
		#define GEODE_CONCEPT_CHECK_onButton
		GEODE_CONCEPT_FUNCTION_CHECK(onButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshVisuals
		#define GEODE_CONCEPT_CHECK_refreshVisuals
		GEODE_CONCEPT_FUNCTION_CHECK(refreshVisuals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveKey
		#define GEODE_CONCEPT_CHECK_setActiveKey
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setController2
		#define GEODE_CONCEPT_CHECK_setController2
		GEODE_CONCEPT_FUNCTION_CHECK(setController2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ControllerInputNode> : ModifyBase<ModifyDerive<Der, ControllerInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ControllerInputNode>>;
		using ModifyBase<ModifyDerive<Der, ControllerInputNode>>::ModifyBase;
		using Base = ControllerInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19ControllerInputNodeD2Ev")), Default, ControllerInputNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<InputCaptureDelegate*, cocos2d::CCSize const&>::func(&ControllerInputNode::create)), Default, ControllerInputNode, create, InputCaptureDelegate*, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<InputCaptureDelegate*, cocos2d::CCSize const&>::func(&ControllerInputNode::init)), Default, ControllerInputNode, init, InputCaptureDelegate*, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ControllerInputNode::onButton)), Default, ControllerInputNode, onButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ControllerInputNode::refreshVisuals)), Default, ControllerInputNode, refreshVisuals, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&ControllerInputNode::setActiveKey)), Default, ControllerInputNode, setActiveKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&ControllerInputNode::setController2)), Default, ControllerInputNode, setController2, bool)
		}
	};
}
