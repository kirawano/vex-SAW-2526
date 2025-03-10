#include "lemlib/api.hpp" //IWYU pragma: keep
#include "main.h"

#include "bot.hpp"

//TODO adjust directions, change gearset
pros::MotorGroup left_motors({1,2,3}, pros::MotorGearset::blue);
pros::MotorGroup right_motors({4,5,6}, pros::MotorGearset::blue);

void initialize() {
}

void disabled() {}

void competition_initialize() {}

void autonomous()
{

}

/**
 * If no competition control is connected, this function will run immediately
 * following initialize().
 */
void opcontrol() {

	while (true) {
	}
}
