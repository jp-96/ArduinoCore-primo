// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
// Modified by Arduino.org development team

#include "BLEFixedLengthCharacteristic.h"

BLEFixedLengthCharacteristic::BLEFixedLengthCharacteristic(const char* uuid, unsigned char properties, unsigned char valueSize) :
  BLECharacteristic(uuid, properties, valueSize)
{
  this->_valueLength = valueSize;
}

BLEFixedLengthCharacteristic::BLEFixedLengthCharacteristic(const char* uuid, unsigned char properties, const char* value) :
  BLECharacteristic(uuid, properties, value)
{
}

bool BLEFixedLengthCharacteristic::fixedLength() const {
  return true;
}


//

BLEFixedLengthRemoteCharacteristic::BLEFixedLengthRemoteCharacteristic(const char* uuid, unsigned char properties) :
  BLERemoteCharacteristic(uuid, properties)
{
}

bool BLEFixedLengthRemoteCharacteristic::fixedLength() const {
  return true;
}

