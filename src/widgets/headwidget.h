/****
    * HexGlass is a Tetris-like puzzle game.
    *
    * Project homepage: https://github.com/michurin/hexglass
    *
    * Copyright (C) 2010-2020 Alexey Michurin <a.michurin@gmail.com>
    *
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    *
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    * GNU General Public License for more details.
    *
    * You should have received a copy of the GNU General Public License
    * along with this program. If not, see <http://www.gnu.org/licenses/>.
*****/

#ifndef SRC_WIDGETS_HEADWIDGET_H
#define SRC_WIDGETS_HEADWIDGET_H

#include <QLabel>

class HeadWidget : public QLabel {

    Q_OBJECT

public:
    HeadWidget(QWidget * p = 0);
};

#endif // SRC_WIDGETS_HEADWIDGET_H
