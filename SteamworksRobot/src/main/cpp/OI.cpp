/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>
#include "Commands/SetShooter.h"
#include "Commands/MoveGate.h"
#include "Commands/ExampleCommand.h"

OI::OI() : mechStick(new Joystick(0)), leftStick(new Joystick(1)), rightStick(new Joystick(2)), shootBall10(new JoystickButton(mechStick, 11)), 
turnGate(new JoystickButton(mechStick, 7)), 
shootBall5(new JoystickButton(mechStick, 9)),
shootBall7(new JoystickButton(mechStick, 10)) {
  // Process operator interface input here.
  shootBall10->ToggleWhenPressed(new SetShooter(1));
  shootBall5->ToggleWhenPressed(new SetShooter(0.5));
    shootBall7->ToggleWhenPressed(new SetShooter(0.75));


  //shootBall->WhenReleased(new ExampleCommand());
  turnGate->WhenPressed(new MoveGate(1));
   turnGate->WhenPressed(new MoveGate(0));
}

Joystick* OI::getMechStick()
{
  return mechStick;
}

Joystick* OI::getLeftStick()
{
  return leftStick;
}

Joystick* OI::getRightStick()
{
  return rightStick;
}