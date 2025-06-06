#include <iostream>
#include <typeinfo>
using namespace std;

enum class Color //enum에 class를 더해서 영역제한
{
    COLOR_BLACK, 
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
};

enum class Food
{
    RAMEN,
    HAMBURGER,
    RICE,
    SUSHI,

};


int main(){
    Color color = Color::RED;
    Food food = Food::RAMEN;

    


  

    return 0;
}
