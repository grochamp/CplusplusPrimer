#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string words("안녕");
string wordss("안아녕");
int main(){
    if (equal(begin(words),end(words),begin(wordss)))
{cout << "같음" << endl;
    /* code */
}
else{
    cout << "다름" << endl;
}
return 0;}