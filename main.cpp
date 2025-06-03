#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
int main(){
string word;
vector<string> words;
int a = 0;
int count = 0;
while(cin >> word){
transform(word.begin(), word.end(), word.begin(), ::toupper); //stl써서  word전체를 toupper 적용해서 대문자로바꿈
words.push_back(word);

}
for(a; a<words.size(); ++a){
    cout << words[a] << " ";
    count++;

    if (count % 8 == 0)

{
    /* code */cout << endl;
}
}
    return 0;
}
