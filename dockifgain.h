/***************************************************************************
 *  This file is part of Qthid.
 *
 *  CopyRight (C) 2011  Alexandru Csete, OZ9AEC
 *
 *  Qthid is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Qthid is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Qthid.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***************************************************************************/
#ifndef DOCKIFGAIN_H
#define DOCKIFGAIN_H

#include <QDockWidget>
#include "ui_dockifgain.h"  // necessary if we want ui to be public

namespace Ui {
    class DockIfGain;
}

class DockIfGain : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockIfGain(QWidget *parent = 0);
    ~DockIfGain();

    Ui::DockIfGain *ui; /*! UI generated by Qt Designer. We keep it pulic so mainwindow can access controls. */

private:

};

#endif // DOCKIFGAIN_H