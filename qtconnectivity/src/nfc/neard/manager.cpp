/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v org.neard.Manager.xml -p manager_p -v
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "manager_p.h"

/*
 * Implementation of interface class OrgNeardManagerInterface
 */

OrgNeardManagerInterface::OrgNeardManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgNeardManagerInterface::~OrgNeardManagerInterface()
{
}
