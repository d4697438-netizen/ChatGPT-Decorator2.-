#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>


class ThreadOpenHelper {
public:
    static constexpr auto CLASS_NAME = "ThreadOpenHelper";

    /**
     * @note[short] MacOS (ARM): 0x829384
     * @note[short] MacOS (Intel): 0x948ef0
     * @note[short] Windows: 0xf3e40
     * @note[short] Android
     */
    static void check(int p0, std::string const& p1);

    /**
     * @note[short] Windows: 0xf3fd0
     * @note[short] Android
     */
    static void showRulesOnce();
};
