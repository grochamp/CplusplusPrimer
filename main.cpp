#include <iostream>
using namespace std;

const int SIZE = 9;//9개로 이루어짐

int sumArray(int[], int);//배열과 x번쨰 배열
//void가 아닌 typename로 선언했으니까 return값있음


int main(){

    int arr[SIZE] ={ 1, 3, 5, 7, 9, 11 ,13 ,15, 17}; //배열 선언
    int sum = sumArray(arr, SIZE);//배열 형식

    cout << "총 합은 " << sum << endl;
    cout << arr << endl; //arr = arr[0] 포인터터
    cout << &arr[2] << endl;
    
    return 0;


}
int sumArray(int arr[], int n){//함수구조
int total = 0;
for (int i = 0; i < n; i++)//함수0번째수부터 끝까지
total += arr[i];//모든 항목 더하기
return total;


}