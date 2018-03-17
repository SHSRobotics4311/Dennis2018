#include <Commands/AutoSequence3.h>
#include <Commands/Drive/DriveForward.h>
#include <Commands/Drive/TurnRight.h>
#include <Commands/Drive/TurnLeft.h>
#include <Commands/GetGameData.h>

AutoSequence3::AutoSequence3(){
	// Add Commands here:
	    // e.g. AddSequential(new Command1());
	    //      AddSequential(new Command2());
	    // these will run in order.

	    // To run multiple commands at the same time,
	    // use AddParallel()
	    // e.g. AddParallel(new Command1());
	    //      AddSequential(new Command2());
	    // Command1 and Command2 will run in parallel.

	    // A command group will require all of the subsystems that each member
	    // would require.
	    // e.g. if Command1 requires chassis, and Command2 requires arm,
	    // a CommandGroup containing them would require both the chassis and the
	    // arm.
	AddSequential(new GetGameData());
	if(Robot::drive->isLeftActive()){
		//Right Start, Left Switch
		AddSequential(new TurnRight());
	}else{
		//Right Start, Right Switch
		AddSequential(new TurnLeft());

	}

}
