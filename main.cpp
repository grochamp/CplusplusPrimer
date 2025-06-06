#include <iostream>
using namespace std;

int main(){

    const int num_students = 5;
    int scores[] = {74, 66, 12, 78, 90};
    int total_score = 0;
    int max_score = 0;


    for (int i = 0; i < num_students; ++i){

        total_score +=scores[i];
        if (max_score<scores[i])
        {
            max_score=scores[i];
        }
        
    }
    cout << total_score << endl;
    cout << max_score << endl;
    




    return 0;
}