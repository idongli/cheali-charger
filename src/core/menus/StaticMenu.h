/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef STATICMENU_H_
#define STATICMENU_H_

#include "LcdPrint.h"
#include "Menu.h"
#include "Utils.h"

class StaticMenu : public Menu {
public:
    const char * const* staticMenu_;

public:
    StaticMenu(const char * const staticMenu[]);
    virtual void printItem(uint8_t i);
};

#endif /* STATICMENU_H_ */

