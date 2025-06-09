#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor; //전방선언


class Patient
{
    private:
        string m_name;
        vector<Doctor*> m_doctors;

    public :
        Patient(string name_in)
            : m_name(name_in)
        {}
    void addDoctor(Doctor * new_doctor)
    {
        m_doctors.push_back(new_doctor);
    }
    friend class Doctor;

    void meetDoctors();
    
};

class Doctor
{
    private:
        string m_name;
        vector<Patient*> m_patients;
    public:
        Doctor(string name_in)
            :m_name(name_in)
            {}
    void addPatient(Patient * new_patient)
    {
        m_patients.push_back(new_patient);
    }

    friend class Patient;


    void meetPatients()
    {
        for(auto & ele : m_patients)
        {
            cout << "환자자 만나기 : " << ele->m_name << endl;
        }
    }

    


    
};
void Patient::meetDoctors()//따로 빼애한다다
    {
        for(auto & ele : m_doctors)
        {
            cout << "의사 만나기 : " << ele->m_name << endl;
        }
    }

int main()
{
    Patient *p1 = new Patient("LeBron James");
    Patient *p2 = new Patient("Yoon Seok");
    Patient *p3 = new Patient("Violet");

    Doctor *d1 = new Doctor("Kobe Bryant");
    Doctor *d2 = new Doctor("Lee Kuk");


    p1->addDoctor(d1);
    d1->addPatient(p1);

    p2->addDoctor(d2);
    d2->addPatient(p2);

    p1->meetDoctors();
    d1->meetPatients();

    delete p1;
    delete p2;
    delete p3;

    delete d1;
    delete d2;
    return 0;
}