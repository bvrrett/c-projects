/*
 * Person.h
 *
 *  Created on: Apr 24, 2018
 *      Author: spencerbarrett
 */

#ifndef CONTACT_H_
#define CONTACT_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * STRUCTURE DEFINITIONS
 */
typedef struct contact Contact;
typedef struct contact* pContact;
struct contact{
	char contactInfo[2000];
	char lastName[250];
	char firstName[250];
	char emailAddress[250];
	char phoneNumber[250];
	Contact *pPrev;
	Contact *pNext;
	Contact *pHead;
};

/*
 * FUNCTION DECLARATIONS
 */

Contact *AddContact(int contactIndex, char *contactInfo);

Contact *DeleteContact(int contactIndex);

Contact *GetContact(int contactIndex);

Contact *GetField(int contactIndex, char *contactInfo);





#endif /* PERSON_H_ */
