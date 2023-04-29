/***************************************************************************//**
 * @file displayEvent.h
 ******************************************************************************/
#ifndef DISPLAY_H
#define DISPLAY_H

#include "event.h"
#include "graphics.h"

/***************************************************************************//**
 * @class DisplayEvent
 ******************************************************************************/
class DisplayEvent : public Event
{
public:
   void doAction(Canvas &);
};

#endif
