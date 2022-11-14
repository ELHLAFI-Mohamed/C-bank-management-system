
#include "new_acc.h"
#include "Account.h"
#include <stdio.h>
#include <stdlib.h>
#include "store_acc.h"

void new_acc(){

	 account_st * account=(account_st*)malloc(sizeof(account_st));






	printf("********** Bonjour vous veuillez entrer les information suivant :\n");
	printf("entrer votre nom:");
	gets(account->name);
	printf("entrer le date de naissance : ");
	gets(account->date_of_birth);
	printf("entrer votre identer national :");
	gets(account->citizen_number);
	printf("entrer votre adress ");
	gets(account->adress);
	printf("entrer votre telephone ");
	gets(account->phone_number);
	printf("entrer le type de stockage : ");
	gets(account->type_of_deposit);
	printf("entrer le monatant que vous voulez stocker :");
	scanf("%d",&account->amount);



store_acc(account);






}
