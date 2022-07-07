#include <iostream>
#include "RockPaperScissors.h"
using namespace std;

/**Rock Paper Scissors win logic 

rock beats scissors
rock loses paper
rock ties rock
rock beats lizard
rock loses spock

paper beats rock
paper ties paper
paper loses scissors
paper loses lizard
paper beats spock

scissors loses rock
scissors beats paper
scissors ties scissors
scissors beats lizard
scissors loses spock

lizard loses rock
lizard beats paper
lizard loses scissors
lizard tied lizard
lizard beats spock

spock beats rock
spock loses paper
spock beats scissors
spock loses lizard
spock tied spock
*/

int main() {

	srand((int)time(NULL));

	mainMenu();

	winLogic();
	
	restart();

	return 0;
}