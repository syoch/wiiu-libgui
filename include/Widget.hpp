#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET
#include <WidgetBase.hpp>
#include <Container.hpp>
namespace gui
{
    class Widget : public WidgetBase
    {
    private:
        Container super;

    public:
        Widget(gui::Container _super, int x, int y, int w, int h);
    };
}

#endif