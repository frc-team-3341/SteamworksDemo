/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/Winch.h"

Winch::Winch() : Subsystem("ExampleSubsystem"), winch(new TalonSRX(1)) {}

void Winch::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void Winch::moveWinch(double power)
{
  winch->Set(ControlMode::PercentOutput, power);
}

TalonSRX* Winch::getWinch()
{
  return winch;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
