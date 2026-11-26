#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/MusicChangelogLine.hpp>
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
	struct ModifyDerive<Der, MusicChangelogLine> : ModifyBase<ModifyDerive<Der, MusicChangelogLine>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicChangelogLine>>;
		using ModifyBase<ModifyDerive<Der, MusicChangelogLine>>::ModifyBase;
		using Base = MusicChangelogLine;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18MusicChangelogLineD2Ev")), Default, MusicChangelogLine)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, std::string, int>::func(&MusicChangelogLine::create)), Default, MusicChangelogLine, create, int, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, std::string, int>::func(&MusicChangelogLine::init)), Default, MusicChangelogLine, init, int, std::string, int)
		}
	};
}
