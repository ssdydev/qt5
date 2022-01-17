/****************************************************************************
**
** Copyright (C) 2018 Denis Shienkov <denis.shienkov@gmail.com>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtPositioning module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QGEOPOSITIONINFOSOURCEFACTORY_GEOCLUE2_H
#define QGEOPOSITIONINFOSOURCEFACTORY_GEOCLUE2_H

#include <QtCore/QObject>
#include <QtPositioning/QGeoPositionInfoSourceFactory>

QT_BEGIN_NAMESPACE

/*
    Qt Positioning plugin for Geoclue. This plugin supports Geoclue version 2.x.
*/
class QGeoPositionInfoSourceFactoryGeoclue2 : public QObject, public QGeoPositionInfoSourceFactory
{
    Q_OBJECT

    Q_PLUGIN_METADATA(IID "org.qt-project.qt.position.sourcefactory/5.0"
                      FILE "plugin.json")

    Q_INTERFACES(QGeoPositionInfoSourceFactory)

public:
    QGeoPositionInfoSource *positionInfoSource(QObject *parent) override;
    QGeoSatelliteInfoSource *satelliteInfoSource(QObject *parent) override;
    QGeoAreaMonitorSource *areaMonitor(QObject *parent) override;
};

QT_END_NAMESPACE

#endif // QGEOPOSITIONINFOSOURCEFACTORY_GEOCLUE2_H
