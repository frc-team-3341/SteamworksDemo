/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/Shooter.h"
#include "Commands/ExampleCommand.h"
#include <iostream>

Shooter::Shooter() : Subsystem("ExampleSubsystem"), wheel(new TalonSRX(2)), gate(new Servo(2))
 {
   wheel->ConfigSelectedFeedbackSensor(FeedbackDevice::Analog, 0, 10);
   
 }

void Shooter::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new ExampleCommand());
}

void Shooter::setPower(double power)
{
  wheel->Set(ControlMode::PercentOutput, power);
 // std::cout << "worked" << std::endl;
}

double Shooter::getSpeed()
{
  return wheel->GetSelectedSensorVelocity(0);
}

double Shooter::getPosition()
{
  return wheel->GetSelectedSensorPosition(0);
}

void Shooter::moveGate(double angle)
{
  gate->Set(angle);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
