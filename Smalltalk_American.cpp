/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: ben
 */
#include "includes/Smalltalk_American.h"

Smalltalk_American::Smalltalk_American(int _iPerson){
	iPerson = _iPerson;
}



Smalltalk_American::Smalltalk_American(std::string _myNationality, int _iPerson){
	nationality = _myNationality;
	iPerson = _iPerson;
}

Smalltalk_American::~Smalltalk_American(void){
	nationality = "";
	iPerson = 0;
}
virtual void populatePhrases(){

}
