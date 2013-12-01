/**
 * @file /src/touchegg/actions/implementation/ChangeDesktop.h
 *
 * This file is part of Touchégg.
 *
 * Touchégg is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 2 of the License,  or (at your option)  any later
 * version.
 *
 * Touchégg is distributed in the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Touchégg. If not, see <http://www.gnu.org/licenses/>.
 *
 * @author José Expósito <jose.exposito89@gmail.com> (C) 2011 - 2012
 * @class  ChangeDesktop
 */
#ifndef CHANGEDESKTOP_H
#define CHANGEDESKTOP_H

#include "src/touchegg/util/Include.h"
#include "src/touchegg/actions/implementation/Action.h"

/**
 * Change the desktop.
 */
class ChangeDesktop : public Action
{

public:

    ChangeDesktop(const QString &settings, const QString &timing, Window window);

    void executeStart(const QHash<QString, QVariant>& attrs);

    void executeUpdate(const QHash<QString, QVariant>& attrs);

    void executeFinish(const QHash<QString, QVariant>& attrs);

protected:
    /**
     * Helper method that actually does the switching
     */
    void changeDesktop();

    /**
     * Direction to switch desktops.
     */
    bool next;


};

#endif // CHANGEDESKTOP_H
