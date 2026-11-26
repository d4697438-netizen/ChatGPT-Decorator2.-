#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJThreadMessage : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJThreadMessage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJThreadMessage, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0xd2af0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJThreadMessage();
    long long m_messageID;
    int m_accountID;
    std::string m_body;
    long long m_timestamp;
    bool m_deleted;
};
