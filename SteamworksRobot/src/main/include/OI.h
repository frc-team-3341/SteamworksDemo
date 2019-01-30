/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "WPILib.h"

class OI {
 private:
  Joystick* mechStick;
  Joystick* leftStick;
  Joystick* rightStick;

  Button* shootBall10;
  Button* turnGate;
  Button* shootBall5;
  Button* shootBall7;

 public:
  OI();
  Joystick* getMechStick();
  Joystick* getLeftStick();
  Joystick* getRightStick();
};
