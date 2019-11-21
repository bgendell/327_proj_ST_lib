/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: ben
 */

#include "includes/Smalltalk.h"
#include "includes/Watch.h"
#include "includes/constants.h"


Smalltalk::Smalltalk(std::string _myNationality, int _iPerson):nationality(_myNationality),iPerson(_iPerson),current_phrase(0),pWatch(nullptr){

}

Smalltalk::~Smalltalk(void){

}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
std::string Smalltalk::saySomething(){
	if(this->current_phrase < this->mySmallTalk.size()-1){
		this->current_phrase++;
		return this->mySmallTalk[this->current_phrase-1];
	}
	else{
		this->current_phrase =  0;
		return this->mySmallTalk[this->mySmallTalk.size() -1];
	}
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime(){
	if(this->pWatch != NULL){
		std::string currTime = this->pWatch->getTime();
		return THE_CURRENT_TIME_IS + currTime;
	}
	return I_DO_NOT_HAVE_A_WATCH;
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
std::unique_ptr<Watch>  Smalltalk::takeWatch(){
	this->giveWatch(this->pWatch);
	this->pWatch.reset(0);
	return std::move(this->pWatch);
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &watch){
	if(this->pWatch == NULL){
		this->pWatch = std::move(watch);
		return true;
	}
	return false;
}

