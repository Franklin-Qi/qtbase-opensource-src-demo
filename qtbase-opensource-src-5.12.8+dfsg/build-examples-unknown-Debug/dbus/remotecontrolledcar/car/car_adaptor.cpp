/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i car_adaptor.h -a :car_adaptor.cpp ../../../../examples/dbus/remotecontrolledcar/car/car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "car_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CarInterfaceAdaptor
 */

CarInterfaceAdaptor::CarInterfaceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CarInterfaceAdaptor::~CarInterfaceAdaptor()
{
    // destructor
}

void CarInterfaceAdaptor::accelerate()
{
    // handle method call org.example.Examples.CarInterface.accelerate
    QMetaObject::invokeMethod(parent(), "accelerate");
}

void CarInterfaceAdaptor::decelerate()
{
    // handle method call org.example.Examples.CarInterface.decelerate
    QMetaObject::invokeMethod(parent(), "decelerate");
}

void CarInterfaceAdaptor::turnLeft()
{
    // handle method call org.example.Examples.CarInterface.turnLeft
    QMetaObject::invokeMethod(parent(), "turnLeft");
}

void CarInterfaceAdaptor::turnRight()
{
    // handle method call org.example.Examples.CarInterface.turnRight
    QMetaObject::invokeMethod(parent(), "turnRight");
}

