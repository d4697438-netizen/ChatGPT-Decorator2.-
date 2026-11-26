#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class AccountReviewCard {
public:
    static constexpr auto CLASS_NAME = "AccountReviewCard";
    std::string m_userName;
    int m_userID;
    int m_caseState;
    int m_status;
    int m_score;
    std::string m_statusAge;
    std::string m_reviewerName;
    std::string m_reviewAge;
    int m_reviewResult;
    int m_reportedItemCount;
    int m_reporterCount;
    int m_anonymousReportCount;
    int m_directReportCount;
    int m_topReportReason;
    int m_commentBanTime;
    int m_uploadBanTime;
    int m_messageBanTime;
    int m_weeklyBlockCount;
    int m_monthlyBlockCount;
    int m_noteCount;
    int m_filterCount;
    int m_historyCount;
    std::string m_lastAction;
    std::string m_lastActionMode;
    int m_lastActionDuration;
    std::string m_lastActionModerator;
    std::string m_lastActionAge;
    int m_unk150;
    std::string m_lastViewerName;
    std::string m_lastViewedAge;
    int m_accountCreationTimestamp;
    int m_trendingBanState;
    int m_nameLockState;
    int m_queueMuteTime;
};
