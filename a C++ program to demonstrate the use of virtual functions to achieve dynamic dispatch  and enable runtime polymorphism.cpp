#include<iostream> 
using namespace std; 
class shape
{
public:
virtual void draw()
{
cout<<"Draw a generic shape"<<endl;
}
};
class circle:public shape
{
public:
void draw() override
{
cout<<"drawing a circle"<<endl;
}
};
classrectangle:public 
shape
{
public:
void draw() override
{
cout<<"drawing a rectangle"<<endl;
}
};
classtriangle:public 
shape
{
public:
void draw() override
{
cout<<"drawing a triangle"<<endl;
}
};
int main()
{
cout<<"Roll no:24B11AI136"<<endl; 
shape* shapePtr;
circle c; 
shapePtr=&c; 
shapePtr->draw(); 
rectangle r; 
shapePtr=&r; 
shapePtr->draw(); 
triangle t; 
shape s; 
shapePtr=&s; 
shapePtr->draw(); 
return 0;
}
shapePtr=&t; 
shapePtr->draw();
