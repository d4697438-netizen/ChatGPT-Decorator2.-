#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/modify/Codegen.hpp>
#include <Geode/binding/SFXBrowser.hpp>
using namespace geode::modifier;

namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_sortSelectClosed
		#define GEODE_STATICS_sortSelectClosed
		GEODE_AS_STATIC_FUNCTION(sortSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_sfxFolderPicked
		#define GEODE_STATICS_sfxFolderPicked
		GEODE_AS_STATIC_FUNCTION(sfxFolderPicked) 
	#endif

	#ifndef GEODE_STATICS_sfxFoldersPicked
		#define GEODE_STATICS_sfxFoldersPicked
		GEODE_AS_STATIC_FUNCTION(sfxFoldersPicked) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellCustomIdx
		#define GEODE_STATICS_getSelectedCellCustomIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellCustomIdx) 
	#endif

	#ifndef GEODE_STATICS_allowsCustomSFXActions
		#define GEODE_STATICS_allowsCustomSFXActions
		GEODE_AS_STATIC_FUNCTION(allowsCustomSFXActions) 
	#endif

	#ifndef GEODE_STATICS_isCustomIDSelected
		#define GEODE_STATICS_isCustomIDSelected
		GEODE_AS_STATIC_FUNCTION(isCustomIDSelected) 
	#endif

	#ifndef GEODE_STATICS_inCustomSFXTree
		#define GEODE_STATICS_inCustomSFXTree
		GEODE_AS_STATIC_FUNCTION(inCustomSFXTree) 
	#endif

	#ifndef GEODE_STATICS_showsSFXInfoButton
		#define GEODE_STATICS_showsSFXInfoButton
		GEODE_AS_STATIC_FUNCTION(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_STATICS_shouldSnapToSelected
		#define GEODE_STATICS_shouldSnapToSelected
		GEODE_AS_STATIC_FUNCTION(shouldSnapToSelected) 
	#endif

	#ifndef GEODE_STATICS_currentListScrollY
		#define GEODE_STATICS_currentListScrollY
		GEODE_AS_STATIC_FUNCTION(currentListScrollY) 
	#endif

	#ifndef GEODE_STATICS_executeBatchDelete
		#define GEODE_STATICS_executeBatchDelete
		GEODE_AS_STATIC_FUNCTION(executeBatchDelete) 
	#endif

	#ifndef GEODE_STATICS_fitFolderPath
		#define GEODE_STATICS_fitFolderPath
		GEODE_AS_STATIC_FUNCTION(fitFolderPath) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBatchDelete
		#define GEODE_STATICS_onBatchDelete
		GEODE_AS_STATIC_FUNCTION(onBatchDelete) 
	#endif

	#ifndef GEODE_STATICS_onChangelog
		#define GEODE_STATICS_onChangelog
		GEODE_AS_STATIC_FUNCTION(onChangelog) 
	#endif

	#ifndef GEODE_STATICS_onClearSearchText
		#define GEODE_STATICS_onClearSearchText
		GEODE_AS_STATIC_FUNCTION(onClearSearchText) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onExitFolder
		#define GEODE_STATICS_onExitFolder
		GEODE_AS_STATIC_FUNCTION(onExitFolder) 
	#endif

	#ifndef GEODE_STATICS_onExportFile
		#define GEODE_STATICS_onExportFile
		GEODE_AS_STATIC_FUNCTION(onExportFile) 
	#endif

	#ifndef GEODE_STATICS_onImportFile
		#define GEODE_STATICS_onImportFile
		GEODE_AS_STATIC_FUNCTION(onImportFile) 
	#endif

	#ifndef GEODE_STATICS_onImportSetup
		#define GEODE_STATICS_onImportSetup
		GEODE_AS_STATIC_FUNCTION(onImportSetup) 
	#endif

	#ifndef GEODE_STATICS_onMoveToFolder
		#define GEODE_STATICS_onMoveToFolder
		GEODE_AS_STATIC_FUNCTION(onMoveToFolder) 
	#endif

	#ifndef GEODE_STATICS_onNewFolder
		#define GEODE_STATICS_onNewFolder
		GEODE_AS_STATIC_FUNCTION(onNewFolder) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onReplaceSetup
		#define GEODE_STATICS_onReplaceSetup
		GEODE_AS_STATIC_FUNCTION(onReplaceSetup) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShareSetup
		#define GEODE_STATICS_onShareSetup
		GEODE_AS_STATIC_FUNCTION(onShareSetup) 
	#endif

	#ifndef GEODE_STATICS_onSorting
		#define GEODE_STATICS_onSorting
		GEODE_AS_STATIC_FUNCTION(onSorting) 
	#endif

	#ifndef GEODE_STATICS_onToggleCompactMode
		#define GEODE_STATICS_onToggleCompactMode
		GEODE_AS_STATIC_FUNCTION(onToggleCompactMode) 
	#endif

	#ifndef GEODE_STATICS_onToggleSearch
		#define GEODE_STATICS_onToggleSearch
		GEODE_AS_STATIC_FUNCTION(onToggleSearch) 
	#endif

	#ifndef GEODE_STATICS_onToggleView
		#define GEODE_STATICS_onToggleView
		GEODE_AS_STATIC_FUNCTION(onToggleView) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLibrary
		#define GEODE_STATICS_onUpdateLibrary
		GEODE_AS_STATIC_FUNCTION(onUpdateLibrary) 
	#endif

	#ifndef GEODE_STATICS_refreshCustomList
		#define GEODE_STATICS_refreshCustomList
		GEODE_AS_STATIC_FUNCTION(refreshCustomList) 
	#endif

	#ifndef GEODE_STATICS_refreshLevelIDList
		#define GEODE_STATICS_refreshLevelIDList
		GEODE_AS_STATIC_FUNCTION(refreshLevelIDList) 
	#endif

	#ifndef GEODE_STATICS_restoreListScroll
		#define GEODE_STATICS_restoreListScroll
		GEODE_AS_STATIC_FUNCTION(restoreListScroll) 
	#endif

	#ifndef GEODE_STATICS_searchSettingsChanged
		#define GEODE_STATICS_searchSettingsChanged
		GEODE_AS_STATIC_FUNCTION(searchSettingsChanged) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_setupSFXBrowser
		#define GEODE_STATICS_setupSFXBrowser
		GEODE_AS_STATIC_FUNCTION(setupSFXBrowser) 
	#endif

	#ifndef GEODE_STATICS_switchToView
		#define GEODE_STATICS_switchToView
		GEODE_AS_STATIC_FUNCTION(switchToView) 
	#endif

	#ifndef GEODE_STATICS_trySetupSFXBrowser
		#define GEODE_STATICS_trySetupSFXBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSelectionUI
		#define GEODE_STATICS_updateSelectionUI
		GEODE_AS_STATIC_FUNCTION(updateSelectionUI) 
	#endif

	#ifndef GEODE_STATICS_updateShareItem
		#define GEODE_STATICS_updateShareItem
		GEODE_AS_STATIC_FUNCTION(updateShareItem) 
	#endif

	#ifndef GEODE_STATICS_updateViewItems
		#define GEODE_STATICS_updateViewItems
		GEODE_AS_STATIC_FUNCTION(updateViewItems) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSelectClosed
		#define GEODE_CONCEPT_CHECK_sortSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sortSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxFolderPicked
		#define GEODE_CONCEPT_CHECK_sfxFolderPicked
		GEODE_CONCEPT_FUNCTION_CHECK(sfxFolderPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxFoldersPicked
		#define GEODE_CONCEPT_CHECK_sfxFoldersPicked
		GEODE_CONCEPT_FUNCTION_CHECK(sfxFoldersPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellCustomIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellCustomIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellCustomIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allowsCustomSFXActions
		#define GEODE_CONCEPT_CHECK_allowsCustomSFXActions
		GEODE_CONCEPT_FUNCTION_CHECK(allowsCustomSFXActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomIDSelected
		#define GEODE_CONCEPT_CHECK_isCustomIDSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomIDSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inCustomSFXTree
		#define GEODE_CONCEPT_CHECK_inCustomSFXTree
		GEODE_CONCEPT_FUNCTION_CHECK(inCustomSFXTree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showsSFXInfoButton
		#define GEODE_CONCEPT_CHECK_showsSFXInfoButton
		GEODE_CONCEPT_FUNCTION_CHECK(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldSnapToSelected
		#define GEODE_CONCEPT_CHECK_shouldSnapToSelected
		GEODE_CONCEPT_FUNCTION_CHECK(shouldSnapToSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_currentListScrollY
		#define GEODE_CONCEPT_CHECK_currentListScrollY
		GEODE_CONCEPT_FUNCTION_CHECK(currentListScrollY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_executeBatchDelete
		#define GEODE_CONCEPT_CHECK_executeBatchDelete
		GEODE_CONCEPT_FUNCTION_CHECK(executeBatchDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fitFolderPath
		#define GEODE_CONCEPT_CHECK_fitFolderPath
		GEODE_CONCEPT_FUNCTION_CHECK(fitFolderPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBatchDelete
		#define GEODE_CONCEPT_CHECK_onBatchDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onBatchDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangelog
		#define GEODE_CONCEPT_CHECK_onChangelog
		GEODE_CONCEPT_FUNCTION_CHECK(onChangelog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearchText
		#define GEODE_CONCEPT_CHECK_onClearSearchText
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearchText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitFolder
		#define GEODE_CONCEPT_CHECK_onExitFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onExitFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExportFile
		#define GEODE_CONCEPT_CHECK_onExportFile
		GEODE_CONCEPT_FUNCTION_CHECK(onExportFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onImportFile
		#define GEODE_CONCEPT_CHECK_onImportFile
		GEODE_CONCEPT_FUNCTION_CHECK(onImportFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onImportSetup
		#define GEODE_CONCEPT_CHECK_onImportSetup
		GEODE_CONCEPT_FUNCTION_CHECK(onImportSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMoveToFolder
		#define GEODE_CONCEPT_CHECK_onMoveToFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onMoveToFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewFolder
		#define GEODE_CONCEPT_CHECK_onNewFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onNewFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReplaceSetup
		#define GEODE_CONCEPT_CHECK_onReplaceSetup
		GEODE_CONCEPT_FUNCTION_CHECK(onReplaceSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShareSetup
		#define GEODE_CONCEPT_CHECK_onShareSetup
		GEODE_CONCEPT_FUNCTION_CHECK(onShareSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSorting
		#define GEODE_CONCEPT_CHECK_onSorting
		GEODE_CONCEPT_FUNCTION_CHECK(onSorting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleCompactMode
		#define GEODE_CONCEPT_CHECK_onToggleCompactMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleCompactMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSearch
		#define GEODE_CONCEPT_CHECK_onToggleSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleView
		#define GEODE_CONCEPT_CHECK_onToggleView
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLibrary
		#define GEODE_CONCEPT_CHECK_onUpdateLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshCustomList
		#define GEODE_CONCEPT_CHECK_refreshCustomList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshCustomList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLevelIDList
		#define GEODE_CONCEPT_CHECK_refreshLevelIDList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLevelIDList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreListScroll
		#define GEODE_CONCEPT_CHECK_restoreListScroll
		GEODE_CONCEPT_FUNCTION_CHECK(restoreListScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_searchSettingsChanged
		#define GEODE_CONCEPT_CHECK_searchSettingsChanged
		GEODE_CONCEPT_FUNCTION_CHECK(searchSettingsChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSFXBrowser
		#define GEODE_CONCEPT_CHECK_setupSFXBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupSFXBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToView
		#define GEODE_CONCEPT_CHECK_switchToView
		GEODE_CONCEPT_FUNCTION_CHECK(switchToView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySetupSFXBrowser
		#define GEODE_CONCEPT_CHECK_trySetupSFXBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectionUI
		#define GEODE_CONCEPT_CHECK_updateSelectionUI
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectionUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShareItem
		#define GEODE_CONCEPT_CHECK_updateShareItem
		GEODE_CONCEPT_FUNCTION_CHECK(updateShareItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateViewItems
		#define GEODE_CONCEPT_CHECK_updateViewItems
		GEODE_CONCEPT_FUNCTION_CHECK(updateViewItems) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXBrowser> : ModifyBase<ModifyDerive<Der, SFXBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowser>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowser>>::ModifyBase;
		using Base = SFXBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10SFXBrowserD2Ev")), Default, SFXBrowser)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&SFXBrowser::create)), Default, SFXBrowser, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::registerWithTouchDispatcher)), Default, SFXBrowser, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::keyBackClicked)), Default, SFXBrowser, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::rebuildContent)), Default, SFXBrowser, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJMusicAction>::func(&SFXBrowser::musicActionFinished)), Default, SFXBrowser, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJMusicAction>::func(&SFXBrowser::musicActionFailed)), Default, SFXBrowser, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SelectSFXSortLayer*>::func(&SFXBrowser::sortSelectClosed)), Default, SFXBrowser, sortSelectClosed, SelectSFXSortLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXFolderPickerPopup*, int, std::string const&>::func(&SFXBrowser::sfxFolderPicked)), Default, SFXBrowser, sfxFolderPicked, SFXFolderPickerPopup*, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXFolderPickerPopup*, std::set<int> const&>::func(&SFXBrowser::sfxFoldersPicked)), Default, SFXBrowser, sfxFoldersPicked, SFXFolderPickerPopup*, std::set<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SetTextPopup*, std::string>::func(&SFXBrowser::setTextPopupClosed)), Default, SFXBrowser, setTextPopupClosed, SetTextPopup*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&SFXBrowser::FLAlert_Clicked)), Default, SFXBrowser, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SFXBrowser::textChanged)), Default, SFXBrowser, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&SFXBrowser::cellPerformedAction)), Default, SFXBrowser, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::getSelectedCellIdx)), Default, SFXBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::getSelectedCellCustomIdx)), Default, SFXBrowser, getSelectedCellCustomIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::allowsCustomSFXActions)), Default, SFXBrowser, allowsCustomSFXActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&SFXBrowser::isCustomIDSelected)), Default, SFXBrowser, isCustomIDSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::inCustomSFXTree)), Default, SFXBrowser, inCustomSFXTree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::showsSFXInfoButton)), Default, SFXBrowser, showsSFXInfoButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SFXBrowser::shouldSnapToSelected)), Default, SFXBrowser, shouldSnapToSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::currentListScrollY)), Default, SFXBrowser, currentListScrollY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::executeBatchDelete)), Default, SFXBrowser, executeBatchDelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::fitFolderPath)), Default, SFXBrowser, fitFolderPath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&SFXBrowser::init)), Default, SFXBrowser, init, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onBatchDelete)), Default, SFXBrowser, onBatchDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onChangelog)), Default, SFXBrowser, onChangelog, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onClearSearchText)), Default, SFXBrowser, onClearSearchText, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onClose)), Default, SFXBrowser, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onExitFolder)), Default, SFXBrowser, onExitFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onExportFile)), Default, SFXBrowser, onExportFile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onImportFile)), Default, SFXBrowser, onImportFile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onImportSetup)), Default, SFXBrowser, onImportSetup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onMoveToFolder)), Default, SFXBrowser, onMoveToFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onNewFolder)), Default, SFXBrowser, onNewFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onPage)), Default, SFXBrowser, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onReplaceSetup)), Default, SFXBrowser, onReplaceSetup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onSelectAll)), Default, SFXBrowser, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onSettings)), Default, SFXBrowser, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onShareSetup)), Default, SFXBrowser, onShareSetup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onSorting)), Default, SFXBrowser, onSorting, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onToggleCompactMode)), Default, SFXBrowser, onToggleCompactMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onToggleSearch)), Default, SFXBrowser, onToggleSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onToggleView)), Default, SFXBrowser, onToggleView, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SFXBrowser::onUpdateLibrary)), Default, SFXBrowser, onUpdateLibrary, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::refreshCustomList)), Default, SFXBrowser, refreshCustomList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXSearchResult*>::func(&SFXBrowser::refreshLevelIDList)), Default, SFXBrowser, refreshLevelIDList, SFXSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&SFXBrowser::restoreListScroll)), Default, SFXBrowser, restoreListScroll, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::searchSettingsChanged)), Default, SFXBrowser, searchSettingsChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXSearchResult*>::func(&SFXBrowser::setupList)), Default, SFXBrowser, setupList, SFXSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::setupSFXBrowser)), Default, SFXBrowser, setupSFXBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<AudioViewType>::func(&SFXBrowser::switchToView)), Default, SFXBrowser, switchToView, AudioViewType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::trySetupSFXBrowser)), Default, SFXBrowser, trySetupSFXBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::updatePageLabel)), Default, SFXBrowser, updatePageLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::updateSelectionUI)), Default, SFXBrowser, updateSelectionUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::updateShareItem)), Default, SFXBrowser, updateShareItem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXBrowser::updateViewItems)), Default, SFXBrowser, updateViewItems, )
		}
	};
}
