#pragma once
#ifndef LIBGUI_ROOT
#define LIBGUI_ROOT

#include <vector>
#include "WidgetBase.hpp"

namespace gui
{
    class Root : public WidgetBase
    {
        void draw_line(gui::Point start, gui::Point end);
        void draw_rect(gui::Point start, gui::Point end);
        void draw_triangle(gui::Point A, gui::Point B, gui::Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);
        void draw();

    public:
        void _draw();
        void onTouch(int x, int y);
        void onButton(uint32_t key);
        Root();
        std::vector<WidgetBase> children;
    };
}

#endif