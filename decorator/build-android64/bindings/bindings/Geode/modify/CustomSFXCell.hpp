#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/CustomSFXCell.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_sfxObjectSelected
		#define GEODE_STATICS_sfxObjectSelected
		GEODE_AS_STATIC_FUNCTION(sfxObjectSelected) 
	#endif

	#ifndef GEODE_STATICS_getActiveSFXID
		#define GEODE_STATICS_getActiveSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveSFXID) 
	#endif

	#ifndef GEODE_STATICS_getActiveCustomSFXID
		#define GEODE_STATICS_getActiveCustomSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveCustomSFXID) 
	#endif

	#ifndef GEODE_STATICS_sfxAddToFolder
		#define GEODE_STATICS_sfxAddToFolder
		GEODE_AS_STATIC_FUNCTION(sfxAddToFolder) 
	#endif

	#ifndef GEODE_STATICS_sfxEditCustomObject
		#define GEODE_STATICS_sfxEditCustomObject
		GEODE_AS_STATIC_FUNCTION(sfxEditCustomObject) 
	#endif

	#ifndef GEODE_STATICS_sfxToggleCustomSelect
		#define GEODE_STATICS_sfxToggleCustomSelect
		GEODE_AS_STATIC_FUNCTION(sfxToggleCustomSelect) 
	#endif

	#ifndef GEODE_STATICS_isCustomEntrySelected
		#define GEODE_STATICS_isCustomEntrySelected
		GEODE_AS_STATIC_FUNCTION(isCustomEntrySelected) 
	#endif

	#ifndef GEODE_STATICS_inCustomSFXTree
		#define GEODE_STATICS_inCustomSFXTree
		GEODE_AS_STATIC_FUNCTION(inCustomSFXTree) 
	#endif

	#ifndef GEODE_STATICS_showsSFXInfoButton
		#define GEODE_STATICS_showsSFXInfoButton
		GEODE_AS_STATIC_FUNCTION(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_shouldReload
		#define GEODE_STATICS_shouldReload
		GEODE_AS_STATIC_FUNCTION(shouldReload) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxObjectSelected
		#define GEODE_CONCEPT_CHECK_sfxObjectSelected
		GEODE_CONCEPT_FUNCTION_CHECK(sfxObjectSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSFXID
		#define GEODE_CONCEPT_CHECK_getActiveSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveCustomSFXID
		#define GEODE_CONCEPT_CHECK_getActiveCustomSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveCustomSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxAddToFolder
		#define GEODE_CONCEPT_CHECK_sfxAddToFolder
		GEODE_CONCEPT_FUNCTION_CHECK(sfxAddToFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxEditCustomObject
		#define GEODE_CONCEPT_CHECK_sfxEditCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(sfxEditCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxToggleCustomSelect
		#define GEODE_CONCEPT_CHECK_sfxToggleCustomSelect
		GEODE_CONCEPT_FUNCTION_CHECK(sfxToggleCustomSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomEntrySelected
		#define GEODE_CONCEPT_CHECK_isCustomEntrySelected
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomEntrySelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inCustomSFXTree
		#define GEODE_CONCEPT_CHECK_inCustomSFXTree
		GEODE_CONCEPT_FUNCTION_CHECK(inCustomSFXTree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showsSFXInfoButton
		#define GEODE_CONCEPT_CHECK_showsSFXInfoButton
		GEODE_CONCEPT_FUNCTION_CHECK(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldReload
		#define GEODE_CONCEPT_CHECK_shouldReload
		GEODE_CONCEPT_FUNCTION_CHECK(shouldReload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXCell> : ModifyBase<ModifyDerive<Der, CustomSFXCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXCell>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXCell>>::ModifyBase;
		using Base = CustomSFXCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13CustomSFXCellC2EPKcff")), Default, CustomSFXCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13CustomSFXCellD2Ev")), Default, CustomSFXCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CustomSFXCell::init)), Default, CustomSFXCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CustomSFXCell::draw)), Default, CustomSFXCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxObjectSelected)), Default, CustomSFXCell, sfxObjectSelected, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CustomSFXCell::getActiveSFXID)), Default, CustomSFXCell, getActiveSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CustomSFXCell::getActiveCustomSFXID)), Default, CustomSFXCell, getActiveCustomSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxAddToFolder)), Default, CustomSFXCell, sfxAddToFolder, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxEditCustomObject)), Default, CustomSFXCell, sfxEditCustomObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxToggleCustomSelect)), Default, CustomSFXCell, sfxToggleCustomSelect, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&CustomSFXCell::isCustomEntrySelected)), Default, CustomSFXCell, isCustomEntrySelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CustomSFXCell::inCustomSFXTree)), Default, CustomSFXCell, inCustomSFXTree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CustomSFXCell::showsSFXInfoButton)), Default, CustomSFXCell, showsSFXInfoButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXInfoObject*>::func(&CustomSFXCell::loadFromObject)), Default, CustomSFXCell, loadFromObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CustomSFXCell::shouldReload)), Default, CustomSFXCell, shouldReload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CustomSFXCell::updateBGColor)), Default, CustomSFXCell, updateBGColor, int)
		}
	};
}
