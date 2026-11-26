#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(ChatGPTDecoratorMenu, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto label = CCLabelBMFont::create("Decorator", "goldFont.fnt");
        auto item = CCMenuItemLabel::create(
            label,
            this,
            menu_selector(ChatGPTDecoratorMenu::openDecorator)
        );

        item->setScale(0.65f);
        item->setID("chatgpt-decorator-button");

        if (auto menu = this->getChildByID("menu")) {
            menu->addChild(item);
            menu->updateLayout();
        }
        return true;
    }

    void openDecorator(CCObject*) {
        FLAlertLayer::create(
            "ChatGPT Decorator v1.0",
            "Starter mod installed!\n\nNext versions will add decoration presets, "
            "object layouts, and AI-assisted generation.",
            "OK"
        )->show();
    }
};
