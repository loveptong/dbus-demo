/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DemoDbusIface2 -p demoif2.h:demoif2.cpp .\cn.kylinos.dbusdemoiface2.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "demoif2.h"

/*
 * Implementation of interface class DemoDbusIface2
 */

DemoDbusIface2::DemoDbusIface2(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

DemoDbusIface2::~DemoDbusIface2()
{
}

