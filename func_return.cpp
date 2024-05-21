#include <bits/stdc++.h>
using namespace std;

// Class
class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll,int cls,double cgpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->cgpa=cgpa;
    }
};

// function
Student fun()
{
    Student rohim(3, 4, 4.78);
    return rohim;
}

int main()
{
    Student ans=fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.cgpa<<endl;
    return 0;
}