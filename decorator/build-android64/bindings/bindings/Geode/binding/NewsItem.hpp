#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/NewsBlock.hpp>
#include <Geode/mapping/vector.hpp>

class NewsItem {
public:
    static constexpr auto CLASS_NAME = "NewsItem";
    int m_id;
    std::string m_title;
    std::string m_subtitle;
    std::vector<NewsBlock> m_blocks;
};
