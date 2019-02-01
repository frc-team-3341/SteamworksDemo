/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/ArcadeDrive.h"
#include "Robot.h"

ArcadeDrive::ArcadeDrive() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::drive);
}

// Called just before this Command runs the first time
void ArcadeDrive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ArcadeDrive::Execute() {
  Robot::drive->arcadeDrive(Robot::m_oi->getDriveStick()->GetY(), Robot::m_oi->getDriveStick()->GetZ());
}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDrive::IsFinished() { return false; }

// Called once after isFinished returns true
void ArcadeDrive::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeDrive::Interrupted() {}
