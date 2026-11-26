#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/vector.hpp>

class ReportPopupConfig {
public:
    static constexpr auto CLASS_NAME = "ReportPopupConfig";
    int m_contentType;
    int m_targetID;
    int m_special;
    std::string m_targetName;
    std::string m_preview;
    long long m_messageID;
    std::string m_previewTitle;
    std::vector<int> m_reasonIndices;
};
