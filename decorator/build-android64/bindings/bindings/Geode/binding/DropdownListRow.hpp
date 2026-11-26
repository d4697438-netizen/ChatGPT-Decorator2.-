#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class DropdownListRow {
public:
    static constexpr auto CLASS_NAME = "DropdownListRow";
    int m_tag;
    std::string m_text;
    std::string m_prefix;
};
