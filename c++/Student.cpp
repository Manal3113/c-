# include <iostream>
using namespace std;
class Student
{
    string nm;
    float marks;
    int age;
public:
      void getdata(){
        cout << "Enter Your name :"<<endl;
        cin>>nm;
        cout<<"Enter your marks :"<<endl;
        cin>>marks;
        cout<<"Enter your age :"<<endl;
        cin>>age;
      }
      void display(){
        cout<<"Name :"<<nm<<endl;
        cout<<"Marks:"<<marks<<endl;
        cout<<"Age :"<<age<<endl;
      }
};
int main(){
    Student s;
    s.getdata();
    s.display();
    return 0;
}