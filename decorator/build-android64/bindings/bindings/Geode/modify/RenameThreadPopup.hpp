#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/RenameThreadPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFinished
		#define GEODE_STATICS_threadUpdateFinished
		GEODE_AS_STATIC_FUNCTION(threadUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFailed
		#define GEODE_STATICS_threadUpdateFailed
		GEODE_AS_STATIC_FUNCTION(threadUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_threadMessagesFinished
		#define GEODE_STATICS_threadMessagesFinished
		GEODE_AS_STATIC_FUNCTION(threadMessagesFinished) 
	#endif

	#ifndef GEODE_STATICS_threadMessagesFailed
		#define GEODE_STATICS_threadMessagesFailed
		GEODE_AS_STATIC_FUNCTION(threadMessagesFailed) 
	#endif

	#ifndef GEODE_STATICS_threadSearchFinished
		#define GEODE_STATICS_threadSearchFinished
		GEODE_AS_STATIC_FUNCTION(threadSearchFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSearchFailed
		#define GEODE_STATICS_threadSearchFailed
		GEODE_AS_STATIC_FUNCTION(threadSearchFailed) 
	#endif

	#ifndef GEODE_STATICS_threadSendFinished
		#define GEODE_STATICS_threadSendFinished
		GEODE_AS_STATIC_FUNCTION(threadSendFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSendFailed
		#define GEODE_STATICS_threadSendFailed
		GEODE_AS_STATIC_FUNCTION(threadSendFailed) 
	#endif

	#ifndef GEODE_STATICS_handBackSlot
		#define GEODE_STATICS_handBackSlot
		GEODE_AS_STATIC_FUNCTION(handBackSlot) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFinished
		#define GEODE_CONCEPT_CHECK_threadMessagesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFailed
		#define GEODE_CONCEPT_CHECK_threadMessagesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFinished
		#define GEODE_CONCEPT_CHECK_threadSearchFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFailed
		#define GEODE_CONCEPT_CHECK_threadSearchFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFinished
		#define GEODE_CONCEPT_CHECK_threadSendFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFailed
		#define GEODE_CONCEPT_CHECK_threadSendFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handBackSlot
		#define GEODE_CONCEPT_CHECK_handBackSlot
		GEODE_CONCEPT_FUNCTION_CHECK(handBackSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RenameThreadPopup> : ModifyBase<ModifyDerive<Der, RenameThreadPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RenameThreadPopup>>;
		using ModifyBase<ModifyDerive<Der, RenameThreadPopup>>::ModifyBase;
		using Base = RenameThreadPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17RenameThreadPopupD2Ev")), Default, RenameThreadPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJMessageThread*, ThreadViewPopup*>::func(&RenameThreadPopup::create)), Default, RenameThreadPopup, create, GJMessageThread*, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RenameThreadPopup::keyBackClicked)), Default, RenameThreadPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&RenameThreadPopup::onClose)), Default, RenameThreadPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&RenameThreadPopup::threadUpdateFinished)), Default, RenameThreadPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&RenameThreadPopup::threadUpdateFailed)), Default, RenameThreadPopup, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, cocos2d::CCArray*, bool>::func(&RenameThreadPopup::threadMessagesFinished)), Default, RenameThreadPopup, threadMessagesFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&RenameThreadPopup::threadMessagesFailed)), Default, RenameThreadPopup, threadMessagesFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, cocos2d::CCArray*, bool>::func(&RenameThreadPopup::threadSearchFinished)), Default, RenameThreadPopup, threadSearchFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&RenameThreadPopup::threadSearchFailed)), Default, RenameThreadPopup, threadSearchFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, long long>::func(&RenameThreadPopup::threadSendFinished)), Default, RenameThreadPopup, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RenameThreadPopup::threadSendFailed)), Default, RenameThreadPopup, threadSendFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&RenameThreadPopup::handBackSlot)), Default, RenameThreadPopup, handBackSlot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJMessageThread*, ThreadViewPopup*>::func(&RenameThreadPopup::init)), Default, RenameThreadPopup, init, GJMessageThread*, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&RenameThreadPopup::onSave)), Default, RenameThreadPopup, onSave, cocos2d::CCObject*)
		}
	};
}
