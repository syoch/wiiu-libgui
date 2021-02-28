#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "ContainerBase.hpp"

namespace GUI
{
    class Container : public ContainerBase, public WidgetBase
    {
    public:
        using ContainerBase::ContainerBase;
        using WidgetBase::WidgetBase;
    };
}

#endif