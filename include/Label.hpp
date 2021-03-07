#pragma once
#ifndef LIBGUI_LABEL
#define LIBGUI_LABEL

#include <vector>
#include <string>
#include "Widget.hpp"

namespace GUI
{
    template <typename T>
    class Label : public Widget
    {
    public:
        using Widget::Widget;
        Label(ContainerBase &super, int x, int y, int w, int h, T text)
            : text(text), Widget(super, x, y, w, h)
        {
        }

        void draw() override
        {
            if (typeid(T) == typeid(mstd::wstring))
            {
                draw_text(0, 0, text, (GUI::Color){0, 0, 0, 0});
            }
            else
            {
                draw_text(0, 0, mstd::wstring("#NIMP#"), (GUI::Color){0, 0, 0, 0});
            }
        };

    private:
        T text;
    };
}

#endif