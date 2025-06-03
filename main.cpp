#include <iostream>
using namespace std;
int main(){
string word;
while (cin >> word)  //이렇게만 해도 알아서 공백인지하면 각각의 단어로 인지함
cout << word << endl;

    return 0;
}