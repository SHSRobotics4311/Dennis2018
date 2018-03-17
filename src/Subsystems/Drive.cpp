// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Drive.h"
#include "../RobotMap.h"
#include "../Commands/Drive/StickDrive.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Drive::Drive() : frc::Subsystem("Drive") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    frontL = RobotMap::driveFrontL;
    backL = RobotMap::driveBackL;
    leftGroup = RobotMap::driveLeftGroup;
    leftGroup->SetInverted(true);
    frontR = RobotMap::driveFrontR;
    backR = RobotMap::driveBackR;
    rightGroup = RobotMap::driveRightGroup;
    drive = RobotMap::driveDrive;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drive::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new StickDrive());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Drive::Periodic() {
    // Put code here to be run every loop

}

std::shared_ptr<frc::DifferentialDrive> Drive::getDifferential(){
	return drive;
}

void Drive::stickControl(){
	drive->ArcadeDrive(-.75*(Robot::oi->getJoystick1()->GetX()),Robot::oi->getJoystick1()->GetY());
}

void Drive::driveForward(){
		drive->ArcadeDrive(0, -.75);
}

void Drive::turn(double speed){
	drive->ArcadeDrive(speed, 0);
}

void Drive::setGameData(std::string data){
	gameData=data;
}

bool Drive::isLeftActive(){
	if(gameData[0]=='L'){
		return true;
	}else{
		return false;
	}
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
