#include "UI.hpp"
#include "MenuBase.hpp"
#include "SceneBuilderPanel.hpp"
#include "MobjectPanel.hpp"
#include "EditorPanel.hpp"
#include "ViewportPanel.hpp"

void UI::init() {
    bool dock;

    MenuBase::init(&dock);
    SceneBuilderPanel::init();
    MobjectPanel::init();
    EditorPanel::init();
    ViewportPanel::init();
}
