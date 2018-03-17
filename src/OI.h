// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	std::shared_ptr<frc::Joystick> joystick1;
	std::shared_ptr<frc::JoystickButton> butt1;
	std::shared_ptr<frc::JoystickButton> butt2;
	std::shared_ptr<frc::JoystickButton> butt3;
	std::shared_ptr<frc::JoystickButton> butt4;
	std::shared_ptr<frc::JoystickButton> butt5;
	std::shared_ptr<frc::JoystickButton> butt6;
	std::shared_ptr<frc::JoystickButton> butt10;
	std::shared_ptr<frc::JoystickButton> butt11;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<frc::Joystick> getJoystick1();
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif