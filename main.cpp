#include <iostream>
using namespace std;

void printArray(int array[], int length){

for(int index = 0; index<length; ++index)
    cout << array[index] << " ";
    cout << endl;

}
int main(){

    const int length = 5;
    int array[length] = {3, 13, 5, 7, 9};
    int biggernumber = array[0];

    for(int indexnum = 0; indexnum<length; ++indexnum)
        {
            if(array[indexnum] > biggernumber){
                biggernumber == array[indexnum];
            }
                
        }

    
    printArray(array, length);


    return 0;
}