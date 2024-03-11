#include <stdio.h>
#include <stdlib.h>
void dbKata(){
    FILE* db = fopen("db.txt","r"); // DataBase kata
    if (db == NULL) {
        printf("FILE TIDAK BISA DIBUKA");
        exit(0);
    }else{
        printf("FILE ADA");
    }
    
}

int main(){
    dbKata();
    return 0;
}