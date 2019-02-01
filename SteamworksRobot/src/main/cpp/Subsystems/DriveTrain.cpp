/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/DriveTrain.h"
#include "Commands/ArcadeDrive.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem"), left(new Talon(0)), right(new Talon(1)),
 chassis(new RobotDrive(left, right)) {
   
 }

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new ArcadeDrive());
}

void DriveTrain::arcadeDrive(double move, double rotate)
{
  chassis->ArcadeDrive(move, rotate);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.