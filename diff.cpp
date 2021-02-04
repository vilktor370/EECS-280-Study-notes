#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int size=5;
    const char *a="apple";
    cout<<*a<<endl;// a lives in stack
    char b[]="apple";
    cout<<b<<endl;// apple lives in somewhere else
    cout<<strlen(a)<<endl;// size 5
    if (!strcmp(a,b)){ // string comparison in C
        cout<<"They are the same!"<<endl;
    }
}