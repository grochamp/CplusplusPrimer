#include <iostream>
#include <typeinfo>
using namespace std;

enum Color 
{
    COLOR_BLACK, //일일이 지정도 가능
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,//last에 ,박아도됨
};



int main(){


    Color paint = COLOR_BLACK;
    Color interrior = COLOR_GREEN; //Color안에서 0~3중 3라서 3
    Color road = COLOR_RED;//Color 안에서 0~3에서 1이라서 1
    Color box = COLOR_BLUE;
    cout << road << endl;
    //cin으로 받을수 없음.
    

    return 0;
}
