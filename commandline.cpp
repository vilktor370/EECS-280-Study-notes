#include <iostream>
using namespace std;

int main (int argc, char **argv){
    cout<<"The number of inputs(include'./a.out'): "<<argc<<endl;
    cout<<"The number of elements: "<<argc-1<<endl;
    cout<<"The command line arguments are: ";
    for(int i=1;i<argc;i++){
        cout<<*(argv+i)<<"  ";
    }
}