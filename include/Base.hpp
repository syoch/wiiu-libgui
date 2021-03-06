#pragma once
#ifndef LIBGUI_WIDGET_BASE
#define LIBGUI_WIDGET_BASE

#include <inttypes.h>

#include "Types.hpp"

namespace GUI
{
    class ContainerBase;

    class Base
    {
    protected:
        virtual void draw();
        bool isHided;

    public:
        virtual void draw_line(DrawPoint start, DrawPoint end);
        virtual void draw_rect(DrawPoint start, DrawPoint end);
        virtual void draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D);
        virtual void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C);
        virtual void draw_text(int row, int column, mstd::wstring, Color color);
        virtual void draw_textShadow(int row, int column, mstd::wstring, Color color);
        virtual void draw_translate(float x, float y);

    public:
        Base(int x, int y, int w, int h);

        virtual void _draw();
        virtual void onTouch(int x, int y);
        virtual void onButton(uint32_t key);

        virtual void hide();
        virtual void show();

        Point pos;
        Size size;
    };
}

#endif