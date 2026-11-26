#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/tk_spline.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class KeyframeObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeObject";

    /**
     * @note[short] MacOS (ARM): 0xcb680
     * @note[short] MacOS (Intel): 0xe9740
     * @note[short] Windows: 0x3d9f10
     * @note[short] Android
     */
    void setupSpline(std::vector<KeyframeObject*>& objects);
    double m_duration;
    GEODE_DEFINE_ALIAS_HELPERS(m_duration);
    GEODE_DEFINE_ALIAS(m_duration, m_unk000);

    int m_easingType;
    GEODE_DEFINE_ALIAS_HELPERS(m_easingType);
    GEODE_DEFINE_ALIAS(m_easingType, m_unk008);

    float m_easingRate;
    GEODE_DEFINE_ALIAS_HELPERS(m_easingRate);
    GEODE_DEFINE_ALIAS(m_easingRate, m_unk00c);

    bool m_refOnly;
    GEODE_DEFINE_ALIAS_HELPERS(m_refOnly);
    GEODE_DEFINE_ALIAS(m_refOnly, m_unk010);

    int m_spawnGroup;
    GEODE_DEFINE_ALIAS_HELPERS(m_spawnGroup);
    GEODE_DEFINE_ALIAS(m_spawnGroup, m_unk014);

    float m_spawnDelay;
    GEODE_DEFINE_ALIAS_HELPERS(m_spawnDelay);
    GEODE_DEFINE_ALIAS(m_spawnDelay, m_unk018);

    bool m_proximity;
    GEODE_DEFINE_ALIAS_HELPERS(m_proximity);
    GEODE_DEFINE_ALIAS(m_proximity, m_unk01c);

    bool m_spawned;
    GEODE_DEFINE_ALIAS_HELPERS(m_spawned);
    GEODE_DEFINE_ALIAS(m_spawned, m_unk01d);

    bool m_curve;
    GEODE_DEFINE_ALIAS_HELPERS(m_curve);
    GEODE_DEFINE_ALIAS(m_curve, m_unk01e);

    tk_spline m_spline1;
    tk_spline m_spline2;
    double m_curveLength;
    GEODE_DEFINE_ALIAS_HELPERS(m_curveLength);
    GEODE_DEFINE_ALIAS(m_curveLength, m_unk170);

    double m_refRunDuration;
    GEODE_DEFINE_ALIAS_HELPERS(m_refRunDuration);
    GEODE_DEFINE_ALIAS(m_refRunDuration, m_unk178);

    int m_timeMode;
    GEODE_DEFINE_ALIAS_HELPERS(m_timeMode);
    GEODE_DEFINE_ALIAS(m_timeMode, m_unk180);

    int m_keyframeObject;
    GEODE_DEFINE_ALIAS_HELPERS(m_keyframeObject);
    GEODE_DEFINE_ALIAS(m_keyframeObject, m_unk184);

    cocos2d::CCPoint m_positionDelta;
    cocos2d::CCPoint m_position;
    double m_scaleX;
    GEODE_DEFINE_ALIAS_HELPERS(m_scaleX);
    GEODE_DEFINE_ALIAS(m_scaleX, m_unk198);

    double m_scaleY;
    GEODE_DEFINE_ALIAS_HELPERS(m_scaleY);
    GEODE_DEFINE_ALIAS(m_scaleY, m_unk1a0);

    double m_rotation;
    GEODE_DEFINE_ALIAS_HELPERS(m_rotation);
    GEODE_DEFINE_ALIAS(m_rotation, m_unk1a8);

    double m_unk1b0;
    float m_opacity;
    GEODE_DEFINE_ALIAS_HELPERS(m_opacity);
    GEODE_DEFINE_ALIAS(m_opacity, m_unk1b8);

};
