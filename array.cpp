#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3};
    cout<<sizeof(arr)<<endl;//12 3 elements * 4 bytes
    cout<<sizeof(arr)/sizeof(*arr)<<endl;//sizeof(arr[0]) = 4
    cout<<sizeof(arr)/sizeof(int)<<endl;//sizeof(int) = 4
    

    char array[3]={'a','b','c'}; 
    char *p0 = array;// a
    char *p1 = array + 1;// b
    char *p2 = array + 2;// c
    cout<< *(array)<<endl;// a
    cout<< *(array+1)<<endl;// b
    cout<< *(array+2)<<endl;// c
  return 0;
}