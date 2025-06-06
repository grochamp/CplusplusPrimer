#include <iostream>
using namespace std;

enum class Colors{

    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,


};

void printColorName(Colors color)
{

    switch (color)
    {
        case Colors::BLACK :
        cout << "black" << endl;
        // break;
        case Colors::BLUE :
        cout << "blue" << endl;
        default:
        cout << "케이스에 해당하지 않으면 디폴트" << endl;
        break;//꼭필요없음

    }
    // if(color == Colors::BLACK)
    // {
    //     cout << "black" << endl;
    // }
    // else if(color == Colors::WHITE)
    // {
    //     cout << "white" << endl;
    // }
    // else if(color == Colors::RED)
    // {
    //     cout << "red" << endl;
    // }
    // else if(color == Colors::GREEN)
    // {
    //     cout << "green" << endl;
    // }
    // else if(color == Colors::BLUE)
    // {
    //     cout << "blue" << endl;
    // }
}
int main(){

    printColorName(Colors::RED);

    int x;
    // cin >> x;

    switch (x)
    {
        case 0:
        cout << "zero";
        break;
        case 1:
        cout << "one";
        break;
        case 2:
        cout << "two";//케이스는 성공해도 뒤에 계속 한다. 예를들어 0에 부합해도 1 2도 한다 그래서 break를 걸어줘야한다
        break;
    }


    return 0;
}