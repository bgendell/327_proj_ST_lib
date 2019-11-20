/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: ben
 */
#include "includes/Smalltalk_American.h"
#include "includes/constants.h"

Smalltalk_American::Smalltalk_American(int _iPerson):Smalltalk(AMERICAN, iPerson){
	Smalltalk_American::populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string _myNationality, int _iPerson):Smalltalk(_myNationality, _iPerson){
	//nationality = _myNationality;
	//iPerson = _iPerson;
}

Smalltalk_American::~Smalltalk_American(void){
	//nationality = "";
	//iPerson = 0;
}
void Smalltalk_American::populatePhrases(){
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
