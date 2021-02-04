#include <iostream>
using namespace std;

int main (int argc, char **argv){
    cout<<"There are "<<argc<<" elements"<<endl;
    cout<<"The command line arguments are: "<<endl;
    for(int i=1;i<argc;i++){
        cout<<*(argv+i)<<endl;
    }
}