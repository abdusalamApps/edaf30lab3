//
// Created by Abdusalam Yabrak on 2020-11-27.
//
#include <iostream>
#include "UserTable.h"
#include "User.h"

using namespace std;

int main() {

    UserTable userTable("users.txt");
    cout << userTable.getNbrUsers() << "\n";
    cout << userTable.find(21330) << "\n";
    cout << userTable.find(21331) << "\n";

    cout << testFindNbr(userTable) << "\n";

    cout << userTable.getNbrUsers() << "\n";
    cout << userTable.find(21330) << "\n";
    cout << userTable.find(21331) << "\n";


//    userTable.print(cout);

}

