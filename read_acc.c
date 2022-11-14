#include<stdio.h>
#include"read_acc.h"
#include "Account.h"
#include<stdlib.h>

void read_acc(){

FILE *F =NULL ;
F=fopen("accounts.bin", "r");

account_st*  account=(account_st*)malloc(sizeof(account_st)) ;

fread(account,sizeof(*account),1,F);


printf("%s\n%s\n%s\n%s\n%s\n%s\n%d\n",account->name,account->date_of_birth,account->citizen_number,account->adress,account->phone_number,account->type_of_deposit,account->amount);

fclose(F);


}
