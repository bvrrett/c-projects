/*
 * Contact.c
 *
 *  Created on: May 10, 2018
 *      Author: spencerbarrett
 */

#include "Contact.h"

Contact * AddContact(int contactIndex, char *pContactInfo) {
	Contact * pContactNewContact = (Contact *) malloc(sizeof(Contact));
	if (pContactNewContact)
	{
		strcpy(pContactNewContact->contactInfo, pContactInfo);
//		pContactNewContact->pPrev = NULL;
//		pContactNewContact->pNext = NULL;
		if (contactIndex == 0){
			pContactNewContact->pPrev = NULL;
			pContactNewContact->pNext;
			return pContactNewContact;
		}else{

		}

	}
	return pContactNewContact;
}

//Contact * GetContact(int *pContactIndex) {
//	int i;
//	pContactIndex = (Contact *) malloc(sizeof(Contact));
//
//	for(i = 0; i < pContactIndex; i++){
//
//	}
//}
