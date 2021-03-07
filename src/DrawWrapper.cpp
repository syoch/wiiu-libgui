#include <DrawWrapper.hpp>

void GUI::_draw_translate(float x, float y)
{
    if (x == 0 && y == 0)
        return;

    GUI::draw_translate(x, y);
}
void GUI::draw_rect(DrawPoint start, DrawPoint end)
{
    DrawPoint A = start;
    DrawPoint B = start;

    A.point.x = end.point.x;
    B.point.y = end.point.x;

    draw_rect(start, A, end, B);
}