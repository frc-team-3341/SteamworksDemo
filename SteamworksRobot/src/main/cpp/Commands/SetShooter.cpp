/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/SetShooter.h"
#include "Robot.h"

SetShooter::SetShooter(double temp_power) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
    Requires(Robot::shoot);
    power = temp_power;
}

// Called just before this Command runs the first time
void SetShooter::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void SetShooter::Execute() 
{
  Robot::shoot->setPower(power);
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooter::IsFinished() { return false; }

// Called once after isFinished returns true
void SetShooter::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooter::Interrupted() {}
