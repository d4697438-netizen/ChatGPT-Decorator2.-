#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/AutoSaveSettingsLayer.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_getBackupCap
		#define GEODE_STATICS_getBackupCap
		GEODE_AS_STATIC_FUNCTION(getBackupCap) 
	#endif

	#ifndef GEODE_STATICS_getBackupDirectory
		#define GEODE_STATICS_getBackupDirectory
		GEODE_AS_STATIC_FUNCTION(getBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_getCustomBackupDirectory
		#define GEODE_STATICS_getCustomBackupDirectory
		GEODE_AS_STATIC_FUNCTION(getCustomBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_onAdvanced
		#define GEODE_STATICS_onAdvanced
		GEODE_AS_STATIC_FUNCTION(onAdvanced) 
	#endif

	#ifndef GEODE_STATICS_onOpenBackupDir
		#define GEODE_STATICS_onOpenBackupDir
		GEODE_AS_STATIC_FUNCTION(onOpenBackupDir) 
	#endif

	#ifndef GEODE_STATICS_onSelectBackupDir
		#define GEODE_STATICS_onSelectBackupDir
		GEODE_AS_STATIC_FUNCTION(onSelectBackupDir) 
	#endif

	#ifndef GEODE_STATICS_openBackupDirectory
		#define GEODE_STATICS_openBackupDirectory
		GEODE_AS_STATIC_FUNCTION(openBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_setBackupCap
		#define GEODE_STATICS_setBackupCap
		GEODE_AS_STATIC_FUNCTION(setBackupCap) 
	#endif

	#ifndef GEODE_STATICS_setBackupDirectory
		#define GEODE_STATICS_setBackupDirectory
		GEODE_AS_STATIC_FUNCTION(setBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_updateBackupDirLabel
		#define GEODE_STATICS_updateBackupDirLabel
		GEODE_AS_STATIC_FUNCTION(updateBackupDirLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackupCap
		#define GEODE_CONCEPT_CHECK_getBackupCap
		GEODE_CONCEPT_FUNCTION_CHECK(getBackupCap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackupDirectory
		#define GEODE_CONCEPT_CHECK_getBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(getBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomBackupDirectory
		#define GEODE_CONCEPT_CHECK_getCustomBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdvanced
		#define GEODE_CONCEPT_CHECK_onAdvanced
		GEODE_CONCEPT_FUNCTION_CHECK(onAdvanced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenBackupDir
		#define GEODE_CONCEPT_CHECK_onOpenBackupDir
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenBackupDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectBackupDir
		#define GEODE_CONCEPT_CHECK_onSelectBackupDir
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectBackupDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openBackupDirectory
		#define GEODE_CONCEPT_CHECK_openBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(openBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackupCap
		#define GEODE_CONCEPT_CHECK_setBackupCap
		GEODE_CONCEPT_FUNCTION_CHECK(setBackupCap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackupDirectory
		#define GEODE_CONCEPT_CHECK_setBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(setBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBackupDirLabel
		#define GEODE_CONCEPT_CHECK_updateBackupDirLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateBackupDirLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AutoSaveSettingsLayer> : ModifyBase<ModifyDerive<Der, AutoSaveSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AutoSaveSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, AutoSaveSettingsLayer>>::ModifyBase;
		using Base = AutoSaveSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21AutoSaveSettingsLayerC2Ev")), Default, AutoSaveSettingsLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN21AutoSaveSettingsLayerD2Ev")), Default, AutoSaveSettingsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AutoSaveSettingsLayer::create)), Default, AutoSaveSettingsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AutoSaveSettingsLayer::init)), Default, AutoSaveSettingsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&AutoSaveSettingsLayer::onClose)), Default, AutoSaveSettingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&AutoSaveSettingsLayer::valueDidChange)), Default, AutoSaveSettingsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&AutoSaveSettingsLayer::getValue)), Default, AutoSaveSettingsLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AutoSaveSettingsLayer::getBackupCap)), Default, AutoSaveSettingsLayer, getBackupCap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AutoSaveSettingsLayer::getBackupDirectory)), Default, AutoSaveSettingsLayer, getBackupDirectory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AutoSaveSettingsLayer::getCustomBackupDirectory)), Default, AutoSaveSettingsLayer, getCustomBackupDirectory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&AutoSaveSettingsLayer::onAdvanced)), Default, AutoSaveSettingsLayer, onAdvanced, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&AutoSaveSettingsLayer::onOpenBackupDir)), Default, AutoSaveSettingsLayer, onOpenBackupDir, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&AutoSaveSettingsLayer::onSelectBackupDir)), Default, AutoSaveSettingsLayer, onSelectBackupDir, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AutoSaveSettingsLayer::openBackupDirectory)), Default, AutoSaveSettingsLayer, openBackupDirectory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&AutoSaveSettingsLayer::setBackupCap)), Default, AutoSaveSettingsLayer, setBackupCap, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<std::string>::func(&AutoSaveSettingsLayer::setBackupDirectory)), Default, AutoSaveSettingsLayer, setBackupDirectory, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AutoSaveSettingsLayer::updateBackupDirLabel)), Default, AutoSaveSettingsLayer, updateBackupDirLabel, )
		}
	};
}
