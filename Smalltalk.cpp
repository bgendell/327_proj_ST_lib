/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: ben
 */
#include "includes/Smalltalk.h"
using namespace std;

Smalltalk::Smalltalk(string _myNationality, int _iPerson){
	nationality = _myNationality;
	iPerson = _iPerson;
	current_phrase = 0;
	pWatch = 0;
};

Smalltalk::~Smalltalk(void){
	nationality = "";
	iPerson = 0;
	current_phrase = 0;
}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
string Smalltalk::saySomething(){
	return "";
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
string Smalltalk::getTime(){
	return "";
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
unique_ptr<Watch>  takeWatch(){
	return nullptr;
}

virtual void populatePhrases(){

}
