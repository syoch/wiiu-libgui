#pragma once
#ifndef LIBGUI_SCROLL
#define LIBGUI_SCROLL

#include <vector>
#include "Container.hpp"

namespace GUI
{
    class Scroll : public Container
    {
    public:
        void draw_line(DrawPoint start, DrawPoint end) override;
        void draw_rect(DrawPoint start, DrawPoint end) override;
        void draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D) override;
        void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C) override;
        void draw_text(int row, int column, mstd::wstring, Color color) override;
        void draw_textShadow(int row, int column, mstd::wstring, Color color);
        void draw_translate(float x, float y) override;
        void _draw() override;

        using Container::Container;
        Scroll(ContainerBase &super, int x, int y, int w, int h);
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);

    private:
        DrawPoint convert(DrawPoint src);
        int yOffset;
        int xOffset;
    };
}

#endif