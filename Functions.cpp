//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 *      Finished by: ben
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> myVector;
		//add brits to vector
	for(int b = 0; b < numBrit; b++){
		std::unique_ptr<Smalltalk> temp(new Smalltalk_Brit(b));
		myVector.push_back(std::move(temp));

	}

	//add americans  to vector
	for(int a = 0; a < numAmerican; a++){
		std::unique_ptr<Smalltalk> temp(new Smalltalk_American(a));
		myVector.push_back(std::move(temp));

	}

	//add american donut enthusiest  to vector
	for(int d = 0; d < numbAmericanDonutEnthusiest; d++){
		std::unique_ptr<Smalltalk> temp(new ST_American_DonutEnthusiest(d));
		myVector.push_back(std::move(temp));

	}
	if(numWatches <= numBrit + numAmerican + numbAmericanDonutEnthusiest){
		for(int w = 0; w < numWatches; w++){
			std::unique_ptr<Watch> newWatch(new Watch);

		}
	}
		//create some watches (as long as number watches <= numb people)
		//then give the watches away to first NUM_WATCHES people in the vector
		// when you are finished using the vector you return
		//from this function(see Smalltalk header for hints)

		//return your vector
	return myVector;
}
