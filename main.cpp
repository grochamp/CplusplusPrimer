#include <iostream>>
using namespace std;

int main(){

//int *ptr = new int;

//*ptr = 8;//var = 8과 같은 얘기
int *ptr = new int{ 8 };
cout << ptr << endl;
cout << *ptr << endl;

delete ptr;


cout << "데이터 없앴는데 " << ptr << " 주소랑" << *ptr << " 값이 있네"; //delete했는데 다 남아있음
ptr = nullptr;
if (ptr != nullptr)//유효하면
{

    cout << ptr << endl;
    cout << *ptr << endl;
}

    //int arra[100000]; //정적 할당: stack 작음 동적 : hip 큼

    return 0;
}