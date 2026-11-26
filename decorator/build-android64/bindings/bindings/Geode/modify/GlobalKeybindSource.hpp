#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/GlobalKeybindSource.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_chordsForAction
		#define GEODE_STATICS_chordsForAction
		GEODE_AS_STATIC_FUNCTION(chordsForAction) 
	#endif

	#ifndef GEODE_STATICS_actionsForChord
		#define GEODE_STATICS_actionsForChord
		GEODE_AS_STATIC_FUNCTION(actionsForChord) 
	#endif

	#ifndef GEODE_STATICS_bindChord
		#define GEODE_STATICS_bindChord
		GEODE_AS_STATIC_FUNCTION(bindChord) 
	#endif

	#ifndef GEODE_STATICS_unbindChord
		#define GEODE_STATICS_unbindChord
		GEODE_AS_STATIC_FUNCTION(unbindChord) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_chordsForAction
		#define GEODE_CONCEPT_CHECK_chordsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(chordsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsForChord
		#define GEODE_CONCEPT_CHECK_actionsForChord
		GEODE_CONCEPT_FUNCTION_CHECK(actionsForChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindChord
		#define GEODE_CONCEPT_CHECK_bindChord
		GEODE_CONCEPT_FUNCTION_CHECK(bindChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unbindChord
		#define GEODE_CONCEPT_CHECK_unbindChord
		GEODE_CONCEPT_FUNCTION_CHECK(unbindChord) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GlobalKeybindSource> : ModifyBase<ModifyDerive<Der, GlobalKeybindSource>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GlobalKeybindSource>>;
		using ModifyBase<ModifyDerive<Der, GlobalKeybindSource>>::ModifyBase;
		using Base = GlobalKeybindSource;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19GlobalKeybindSourceD2Ev")), Default, GlobalKeybindSource)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&GlobalKeybindSource::chordsForAction)), Default, GlobalKeybindSource, chordsForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&GlobalKeybindSource::actionsForChord)), Default, GlobalKeybindSource, actionsForChord, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&GlobalKeybindSource::bindChord)), Default, GlobalKeybindSource, bindChord, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&GlobalKeybindSource::unbindChord)), Default, GlobalKeybindSource, unbindChord, int, int)
		}
	};
}
