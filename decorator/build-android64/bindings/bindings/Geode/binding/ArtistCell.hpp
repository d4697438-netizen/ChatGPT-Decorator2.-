#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/modify/Codegen.hpp>

#include <Geode/binding/TableViewCell.hpp>

class ArtistCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ArtistCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtistCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1e8d9c
     * @note[short] MacOS (Intel): 0x23d630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     ArtistCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e8d64
     * @note[short] MacOS (Intel): 0x23d5b0
     * @note[short] Windows: 0x151590
     * @note[short] iOS: 0x138184
     * @note[short] Android: Rebinded
     */
    virtual  ~ArtistCell();

    /**
     * @note[short] MacOS (ARM): 0x1e8de0
     * @note[short] MacOS (Intel): 0x23d6a0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x1381bc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e9078
     * @note[short] MacOS (Intel): 0x23d8f0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x1383d4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d9924
     * @note[short] MacOS (Intel): 0x22ce90
     * @note[short] Windows: 0x151620
     * @note[short] iOS: 0x12a8cc
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8dec
     * @note[short] MacOS (Intel): 0x23d6c0
     * @note[short] Windows: 0x151a40
     * @note[short] iOS: 0x1381c8
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e8fd4
     * @note[short] MacOS (Intel): 0x23d870
     * @note[short] Windows: 0x151ba0
     * @note[short] iOS: 0x138340
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d9c4c
     * @note[short] MacOS (Intel): 0x22d1b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12abe4
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongInfoObject* m_songInfo;
};
