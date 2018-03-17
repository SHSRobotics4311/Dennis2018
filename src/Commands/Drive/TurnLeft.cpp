// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include <Commands/Drive/TurnLeft.h>

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

TurnLeft::TurnLeft(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
	Requires(Robot::drive.get());
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void TurnLeft::Initialize() {
	count = 0;
}

// Called repeatedly when this Command is scheduled to run
void TurnLeft::Execute() {
	Robot::drive->turn(.75);
	count++;
}

// Make this return true when this Command no longer needs to run execute()
bool TurnLeft::IsFinished() {
    if(count >= 50){
    	return true;
    }else{
    	return false;
    }
}

// Called once after isFinished returns true
void TurnLeft::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnLeft::Interrupted() {

}
