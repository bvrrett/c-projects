/*
 * Person.h
 *
 *  Created on: Apr 24, 2018
 *      Author: spencerbarrett
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * STRUCTURE DEFINITIONS
 */
typedef struct contact Contact;
typedef struct contact* pContact;
struct contact{
//	char lastName[250];
//	char firstName[250];
//	char emailAddress[1000];
//	int phoneNumb[20];
	int contactIndex[100];
	char contactInfo[1000];
	Contact *pPrev;
	Contact *pNext;
};

/*
 * FUNCTION DECLARATIONS
 */

Contact *AddContact(int contactIndex[], char *contactInfo);

Contact *GetContact(int contactIndex[]);



#endif /* PERSON_H_ */
