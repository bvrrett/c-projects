/*
 * Contact.c
 *
 *  Created on: May 10, 2018
 *      Author: spencerbarrett
 */

#include "Person.h"

Contact * AddContact(int *pContactIndex, char *pContactInfo) {
	Contact * pContactNewContact = (Contact *) malloc(sizeof(Contact));

	if (pContactNewContact)
	{
		strcpy(pContactNewContact->contactInfo, pContactInfo);
		pContactNewContact->pPrev = NULL;
		pContactNewContact->pNext = NULL;
	}
	return pContactNewContact;
}

Contact * GetContact(int *pContactIndex) {
	int i;
	pContactIndex = (Contact *) malloc(sizeof(Contact));

	for(i = 0; i < pContactIndex; i++){
	
	}
}
