#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    string filename="hello.txt";
    ifstream fin;
    fin.open(filename);
    if (!fin.is_open()){
        cout<<"open failed"<<endl;
        return 1;
    }
    string word;
    while (fin >>word){
        cout<<"word = "<<word<<endl;
    }
    fin.close();
}