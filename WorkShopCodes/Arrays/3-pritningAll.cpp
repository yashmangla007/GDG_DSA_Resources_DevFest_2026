#include <iostream>
using namespace std;

int main(){

    int arr[5] = {4, 7, 2, 9, 5};

    /*
    //using multiple print statements:
    cout<<arr[0]<<' ';
    cout<<arr[1]<<' ';
    cout<<arr[2]<<' ';
    cout<<arr[3]<<' ';
    cout<<arr[4]<<' ';
    */

    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}
