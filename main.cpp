#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    using namespace std;

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 /zero;
    double nan = zero / zero;
    cout << posinf << " " << isnan(nan) << endl;
    cout << neginf <<  " " << isnan(nan) <<endl;
    cout << nan << " " << isnan(nan) << endl;
    return 0;

}