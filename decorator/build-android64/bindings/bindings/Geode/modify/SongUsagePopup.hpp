#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/SongUsagePopup.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_songUsageFinished
		#define GEODE_STATICS_songUsageFinished
		GEODE_AS_STATIC_FUNCTION(songUsageFinished) 
	#endif

	#ifndef GEODE_STATICS_songUsageFailed
		#define GEODE_STATICS_songUsageFailed
		GEODE_AS_STATIC_FUNCTION(songUsageFailed) 
	#endif

	#ifndef GEODE_STATICS_buildStatRow
		#define GEODE_STATICS_buildStatRow
		GEODE_AS_STATIC_FUNCTION(buildStatRow) 
	#endif

	#ifndef GEODE_STATICS_buildUsageGrid
		#define GEODE_STATICS_buildUsageGrid
		GEODE_AS_STATIC_FUNCTION(buildUsageGrid) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layoutPopup
		#define GEODE_STATICS_layoutPopup
		GEODE_AS_STATIC_FUNCTION(layoutPopup) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_showStatus
		#define GEODE_STATICS_showStatus
		GEODE_AS_STATIC_FUNCTION(showStatus) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songUsageFinished
		#define GEODE_CONCEPT_CHECK_songUsageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(songUsageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songUsageFailed
		#define GEODE_CONCEPT_CHECK_songUsageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(songUsageFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildStatRow
		#define GEODE_CONCEPT_CHECK_buildStatRow
		GEODE_CONCEPT_FUNCTION_CHECK(buildStatRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildUsageGrid
		#define GEODE_CONCEPT_CHECK_buildUsageGrid
		GEODE_CONCEPT_FUNCTION_CHECK(buildUsageGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutPopup
		#define GEODE_CONCEPT_CHECK_layoutPopup
		GEODE_CONCEPT_FUNCTION_CHECK(layoutPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showStatus
		#define GEODE_CONCEPT_CHECK_showStatus
		GEODE_CONCEPT_FUNCTION_CHECK(showStatus) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongUsagePopup> : ModifyBase<ModifyDerive<Der, SongUsagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongUsagePopup>>;
		using ModifyBase<ModifyDerive<Der, SongUsagePopup>>::ModifyBase;
		using Base = SongUsagePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongUsagePopupD2Ev")), Default, SongUsagePopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, std::string const&, std::string const&>::func(&SongUsagePopup::create)), Default, SongUsagePopup, create, int, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SongUsagePopup::keyBackClicked)), Default, SongUsagePopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, std::string>::func(&SongUsagePopup::songUsageFinished)), Default, SongUsagePopup, songUsageFinished, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&SongUsagePopup::songUsageFailed)), Default, SongUsagePopup, songUsageFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::string const*, std::string const*, int, float>::func(&SongUsagePopup::buildStatRow)), Default, SongUsagePopup, buildStatRow, std::string const*, std::string const*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::vector<SongUsageEntry> const&>::func(&SongUsagePopup::buildUsageGrid)), Default, SongUsagePopup, buildUsageGrid, std::vector<SongUsageEntry> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, std::string const&, std::string const&>::func(&SongUsagePopup::init)), Default, SongUsagePopup, init, int, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&SongUsagePopup::layoutPopup)), Default, SongUsagePopup, layoutPopup, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SongUsagePopup::onClose)), Default, SongUsagePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&SongUsagePopup::showStatus)), Default, SongUsagePopup, showStatus, char const*)
		}
	};
}
