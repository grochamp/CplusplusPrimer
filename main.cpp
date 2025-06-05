#include <iostream>
using namespace std;

void my_function(){


}
int main(){

    int i= 123;
    float f = 3.14f;
    void *my_void;
    my_void = (void*)&i;
    my_void = (void*)&f;
    return 0;
}