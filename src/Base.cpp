#include <Base.hpp>

#include <inttypes.h>

#include "Types.hpp"
#include "Container.hpp"
#include "DrawWrapper.hpp"
#include <iostream>

#include <mc/internal/std/string.hpp>

namespace GUI
{
    void Base::draw_line(DrawPoint start, DrawPoint end)
    {
        GUI::draw_line(start, end);
    }
    void Base::draw_rect(DrawPoint start, DrawPoint end)
    {
        GUI::draw_rect(start, end);
    }
    void Base::draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D)
    {
        GUI::draw_rect(A, B, C, D);
    }
    void Base::draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C)
    {
        GUI::draw_triangle(A, B, C);
    }
    void Base::draw_text(int row, int column, mstd::wstring text, Color color)
    {
        GUI::draw_text(row, column, text, color);
    }
    void Base::draw_textShadow(int row, int column, mstd::wstring text, Color color)
    {
        GUI::draw_textShadow(row, column, text, color);
    }
    void Base::draw_translate(float x, float y)
    {
        GUI::_draw_translate(x, y);
    }
    void Base::draw()
    {
    }
    void Base::_draw()
    {
        if (isHided)
            return;
        if (isRelative)
            draw_translate(pos.x, pos.y);
        draw();
        if (isRelative)
            draw_translate(-pos.x, -pos.y);
    }
    void Base::onTouch(int, int)
    {
    }
    void Base::onButton(uint32_t)
    {
    }
    void Base::hide()
    {
        isHided = true;
    }
    void Base::show()
    {
        isHided = false;
    }

    Base::Base(int x, int y, int w, int h)
    {
        pos = ((Point){x, y});
        size = ((Size){w, h});
        isHided = false;
    }
}