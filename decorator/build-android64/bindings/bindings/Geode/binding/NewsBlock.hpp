#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class NewsBlock {
public:
    static constexpr auto CLASS_NAME = "NewsBlock";
    int m_type;
    std::string m_text;
    std::string m_imageKey;
    int m_imageWidth;
    int m_imageHeight;
    bool m_isVideo;
    std::string m_url;
};
