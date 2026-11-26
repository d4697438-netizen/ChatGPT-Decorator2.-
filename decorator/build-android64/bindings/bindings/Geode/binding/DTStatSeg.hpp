#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/ccTypes.hpp>

class DTStatSeg {
public:
    static constexpr auto CLASS_NAME = "DTStatSeg";
    char const* m_iconSpriteFrame;
    std::string m_prefix;
    std::string m_value;
    std::string m_suffix;
    cocos2d::ccColor3B m_valueColor;
};
