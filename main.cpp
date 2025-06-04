#include <iostream>
#include <string>
using namespace std;

string word;
char ch;
int number;
int main(){
    cin >> word;
    for (char ch : word){
        switch(ch){
            case 'a': case 'e':
            ++number;
            break;
        }
    }
    cout << number << endl;


    return 0;
}