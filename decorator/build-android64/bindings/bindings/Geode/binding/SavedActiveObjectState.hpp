#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class SavedActiveObjectState {
public:
    static constexpr auto CLASS_NAME = "SavedActiveObjectState";
    GameObject* m_gameObject;
    bool m_activatedByPlayer1;
    bool m_activatedByPlayer2;
};
