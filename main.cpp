#include <iostream>
using namespace std;
int main(){

    string a, b;
    cin >> a >> b;
    if (a.length() == b.length()){
        cout << "a=b" << endl;

    }
    else if (a.length() > b.length()){
        cout << "a 가 더 큼" << endl;
    }
    else{
        cout << "b 가 더 큼" << endl;
    }

    return 0;

}