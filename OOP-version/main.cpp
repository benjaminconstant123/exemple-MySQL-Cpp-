#include "CSQL.h"

int main(){

    CSQL mySQL("tcp://127.0.0.1:3306", "testuser", "password", "testdb");
    mySQL.innsertPerson("Benjamin", 20);
    return 0;

}