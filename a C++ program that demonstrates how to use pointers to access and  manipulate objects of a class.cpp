#include<iostream> 
using namespace std; 
class student
{
private:
string name; 
int age; 
public:
void setdata(string n,int a)
{
name=n; 
age=a;
}
void display()
cout<<"name:"<<name<<endl; 
cout<<"age:"<<age<<endl;
cout<<”Roll No:24B11AI136”<<endl;
student s1; 
s1.setdata("sathvik",20); 
s1.display();
student *ptr; 
ptr=&s1;
ptr->display();
student *ptr2=new student; 
ptr2-
>setdata("gowtham",21); 
ptr2->display();
delete ptr2; 
return 0;
}
