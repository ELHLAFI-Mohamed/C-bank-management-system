#include<stdio.h>
#include"store_acc.h"
#include<stdlib.h>


void store_acc(account_st* account){

FILE *F=NULL ;

F=fopen("accounts", "wb" );

fwrite(account, sizeof(*account), 1, F);

fclose(F);






}
