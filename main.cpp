//예외 클래스 만들기
#include <iostream>
using namespace std;

class Exception
{
    public:
    void report()//
    {
        cerr << "Exception report" << endl; //cerr : cout랑 비슷
    }

};

class MyArray;
{
    private://타지역에서 참고불가 friend로 상속에서 참고가능
        int m_data[5]//int형 m_data 배열(인자수 6개)
  public :
  int & operator[] (const int & index) //배열 오퍼레이터 ex) array[5] = 0 가능

    if (index < 0 || index >= 5) throw Exception(); //음수번째, 6번째 넘어가면 -1로 예외처리 
{
    return = m_data[index];

}
};

void doSomething()
{
    MyArray my_array;

    try
    {
        my_array[100];
    }
    catch (const int & x)
    {
        cerr << "Exception" << x << endl;
    }

    catch (Exception & e)
    {
        e.report();
    }
}
