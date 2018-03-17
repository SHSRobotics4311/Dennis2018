// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include <Commands/Drive/TurnRight.h>

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

TurnRight::TurnRight(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
	Requires(Robot::drive.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void TurnRight::Initialize() {
	count = 0;
}

// Called repeatedly when this Command is scheduled to run
void TurnRight::Execute() {

	Robot::drive->turn(-.75);
	count++;

}

// Make this return true when this Command no longer needs to run execute()
bool TurnRight::IsFinished() {
    if(count >= 50){
    	return true;
    }else{
    	return false;
    }
}

// Called once after isFinished returns true
void TurnRight::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnRight::Interrupted() {

}