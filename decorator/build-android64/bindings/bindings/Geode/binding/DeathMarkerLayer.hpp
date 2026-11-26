#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class DeathMarkerLayer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DeathMarkerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DeathMarkerLayer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x114d80
     * @note[short] iOS: 0x4b1004
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathMarkerLayer();

    /**
     * @note[short] MacOS (ARM): 0x7ac7dc
     * @note[short] MacOS (Intel): 0x8bc170
     * @note[short] Android
     */
    static DeathMarkerLayer* create(std::vector<int> const& p0, cocos2d::ccColor3B p1, bool p2, bool p3, cocos2d::CCRect const& p4, int p5, int p6, float p7, float p8, float p9, int p10, int p11, cocos2d::CCNode* p12, bool p13, bool p14);

    /**
     * @note[short] MacOS (ARM): 0x7ac990
     * @note[short] MacOS (Intel): 0x8bc300
     * @note[short] Windows: 0x114ee0
     * @note[short] Android
     */
    bool init(std::vector<int> const& p0, cocos2d::ccColor3B p1, bool p2, bool p3, cocos2d::CCRect const& p4, int p5, int p6, float p7, float p8, float p9, int p10, int p11, cocos2d::CCNode* p12, bool p13, bool p14);

    /**
     * @note[short] Windows: 0x1180b0
     * @note[short] Android
     */
    void mountSection(unsigned int p0);

    /**
     * @note[short] Windows: 0x118fb0
     * @note[short] Android
     */
    void playMarkerSound();

    /**
     * @note[short] Windows: 0x119050
     * @note[short] Android
     */
    void playPendingLabelSound();

    /**
     * @note[short] Windows: 0x118fe0
     * @note[short] Android
     */
    void queueDeathLabelSound(int p0);

    /**
     * @note[short] Windows: 0x118570
     * @note[short] Android
     */
    void resolveBadgeCollisions();

    /**
     * @note[short] Android
     */
    void setLabelsVisible(bool p0);

    /**
     * @note[short] Windows: 0x119080
     * @note[short] Android
     */
    void tickDeathCountLabel();

    /**
     * @note[short] Windows: 0x114a40
     * @note[short] Android
     */
    static float timescale();

    /**
     * @note[short] Windows: 0x118b90
     * @note[short] Android
     */
    void unmountSection(unsigned int p0);

    /**
     * @note[short] MacOS (ARM): 0x7ae990
     * @note[short] MacOS (Intel): 0x8becd0
     * @note[short] Windows: 0x118ce0
     * @note[short] Android
     */
    void updateVisibility(cocos2d::CCRect const& p0);

    /**
     * @note[short] Windows: 0x119180
     * @note[short] Android
     */
    void setFlipped(bool p0);
    GEODE_PAD(24);
    std::unordered_map<unsigned int, std::vector<int>> m_sectionCells;
    int m_minSectionX;
    int m_maxSectionX;
    int m_minSectionY;
    int m_maxSectionY;
    bool m_allSectionsMounted;
    cocos2d::CCSpriteBatchNode* m_batchNode;
    cocos2d::CCNode* m_badgeLayer;
    bool m_isGlobal;
    bool m_coloredGlobalBadges;
    cocos2d::ccColor3B m_color;
    float m_revealDuration;
    float m_timescale;
    int m_activeCellIndex;
    int m_pendingLabelSoundID;
    bool m_animate;
    bool m_flipped;
    int m_markerSoundID;
};
