#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
	
}

TEST_CASE("Test one die roll")
{
	Die die;

	die.roll();
	bool pass = die.rolled_value() >= 1 && die.rolled_value() <= 6;

	REQUIRE(pass);
}

TEST_CASE("Test one dice roll 10 times"){
	Die die;

	for(int i = 0; i < 10; i++)
	{
		die.roll();
		bool pass = die.rolled_value() >= 1 && die.rolled_value() <= 6;

		REQUIRE(pass);
	}
}
TEST_CASE("Test total of 2 dice roll"){
	Die dice1;
	Die dice2;
	Roll value(dice1,dice2);

	value.roll_die();
	REQUIRE(((value.roll_value() >= 2) && (value.roll_value() <= 12)) == true);
}

TEST_CASE("Test total of 2 dice roll 10 times"){
	Die dice1;
	Die dice2;
	Roll value(dice1,dice2);
	for (int j = 0; j < 10; j++)
	{
		value.roll_die();
		REQUIRE(((value.roll_value() >= 2) && (value.roll_value() <= 12)) == true);
	}
}