#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/ccTypes.hpp>

class DropdownListStyle {
public:
    static constexpr auto CLASS_NAME = "DropdownListStyle";
    std::string m_backgroundTexture;
    cocos2d::ccColor3B m_backgroundColor;
    uint8_t m_backgroundOpacity;
    std::string m_font;
    float m_fontScale;
    cocos2d::ccColor3B m_textColor;
    cocos2d::ccColor3B m_prefixColor;
    float m_width;
    float m_rowHeight;
    float m_verticalPadding;
    float m_maxHeight;
    std::string m_arrowSpriteFrame;
    int m_direction;
};
