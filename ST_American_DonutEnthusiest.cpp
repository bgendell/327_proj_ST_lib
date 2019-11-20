/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: ben
 */



#include "includes/ST_American_DonutEnthusiest.h"
#include "includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int _iPerson):Smalltalk_American(AMERICAN_DE, _iPerson){
	Smalltalk_American::populatePhrases();
	ST_American_DonutEnthusiest::populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){
	//nationality = "";
	//iPerson = 0;
}
void ST_American_DonutEnthusiest::populatePhrases(){
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
