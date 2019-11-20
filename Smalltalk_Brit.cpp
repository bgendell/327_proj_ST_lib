/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: ben
 */

#include "includes/Smalltalk_Brit.h"
#include "includes/constants.h"

Smalltalk_Brit::Smalltalk_Brit(int _iPerson):Smalltalk(BRIT, _iPerson){
	Smalltalk_Brit::populatePhrases();
}


Smalltalk_Brit::~Smalltalk_Brit(void){
}

void Smalltalk_Brit::populatePhrases(){
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_1);
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_2);
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_3);
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_4);
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_5);
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_6);
	Smalltalk_Brit::mySmallTalk.push_back(BRIT_7);

}


