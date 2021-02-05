#include <iostream>
using namespace std;

void printArray(int myArray[], int size){
    for(int i = 0; i < size; i++){
        cout << myArray[i] << endl;
    }
}

int main(){
    int myList[5] = {1, 2, 33, 44, 55};

    printArray(myList, 5);
}