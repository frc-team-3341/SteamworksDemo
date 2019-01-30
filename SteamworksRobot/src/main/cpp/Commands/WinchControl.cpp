/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/WinchControl.h"
#include "Robot.h"

WinchControl::WinchControl() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
    Requires(Robot::winch);
}

// Called just before this Command runs the first time
void WinchControl::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void WinchControl::Execute() 
{
  Robot::winch->moveWinch(Robot::m_oi->getMechStick()->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool WinchControl::IsFinished() { return false; }

// Called once after isFinished returns true
void WinchControl::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WinchControl::Interrupted() {}
