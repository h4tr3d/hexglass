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

#ifndef SRC_CONTROL_CONFIGURATION_H
#define SRC_CONTROL_CONFIGURATION_H

#include "skin.h"

#include <QObject>
#include <QSettings>

class QAction;

class Configuration : public QObject {

    Q_OBJECT

private:
    QSettings settings;
    Skin skin_bank[6];
    int skin_index;
    int geometry_index;
    bool autopause_mode;
    bool careful_dropping_mode;
    int high_scores[5][3];
    static char high_scores_label[];

public:
    Configuration(QObject * p = 0);

    int get_height() const;
    int get_width() const;
    Skin const & get_skin() const;
    bool get_autopause_mode() const;
    bool get_careful_dropping_mode() const;
    int const * get_high_score() const;

    int get_geometry_as_int() const;
    int get_skin_as_int() const;

public slots:
    void set_geometry(QAction *);
    void set_skin(QAction *);
    void set_autopause_mode(bool);
    void set_careful_dropping_mode(bool);
    void set_high_scores(const int *);

    void save_configuration();

signals:
    void update_geometry(int, int);
    void update_skin(const Skin &);
    void update_high_scores(const int *);
};

#endif // SRC_CONTROL_CONFIGURATION_H
