#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    // direct access
    // Student(int r,int c,double g)
    // {
    //     roll=r;
    //     cls=c;
    //     cgpa=g;
    // }
    // direfarence access
    // Student(int roll,int cls,double cgpa)
    // {
    //     (*this).roll=roll;
    //     (*this).cls=cls;
    //     (*this).cgpa=cgpa;
    // }
    // arrow access
    Student(int roll,int cls,double cgpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->cgpa=cgpa;
    }

};

int main()
{
    Student rohim(4,5,5.88);
    cout<<rohim.roll<<" "<<rohim.cls<<" "<<rohim.cgpa<<endl;
    return 0;
}