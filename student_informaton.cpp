#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class student
{
    private:
    int*rollno,*dob;              //for using "new" and "delete" keyword data are always represented using pointers.
    char *name,*class_,*division,*bloodgrp,*address;
    long*mobno;
   
    public:
    student()                   //constructor.
    {  
        dob =new  int;
        rollno=new int;
        mobno=new long;
        name=new char;
        class_=new char;
        division =new char;
        bloodgrp=new char;
        address=new char;
     }
    ~student()                  //destructor.
    {
        delete dob;              //delete keyword is used for memory deallocation.
        delete rollno;
        delete mobno; 
        delete name;
        delete class_;
        delete division;
        delete bloodgrp;
        delete address;
    }
    
    void setdata()
    {
        cout<<"Enter the details of students:"<<endl;
        cout<<"Name:";
        cin>>name;
        cout<<"rollno:";
        cin>>*rollno;
        cout<<"mobno:";
        cin>>*mobno;
        cout<<"dob:";
        cin>>*dob;
        cout<<"class:";
        cin>>class_;
        cout<<"division:";
        cin>>division;
        cout<<"blood group:";
        cin>>bloodgrp;
        cout<<"address:";
        cin>>address;
    }

    void display()
    {   
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<*rollno<<endl;
        cout<<"mobno:"<<*mobno<<endl;
        cout<<"dob:"<<*dob<<endl;
        cout<<"class:"<<class_<<endl;
        cout<<"division:"<<division<<endl;
        cout<<"blood group:"<<bloodgrp<<endl;
        cout<<"address:"<<address<<endl;
    }
};
int main()
{
    int ch,n;
    student s[n];
    while(1)
    {
        cout<<"\n 1.Create.\n 2.Display \n 3.Exit";
        cout<<"\n Enter your choice:";
        cin>>ch;

        switch(ch)
        {
        case 1:
        cout<<"Enter how many students informaiton you want to store:"<<endl;
        cin>>n;
          for(int i=0;i<n;i++)
          {
            cout<<"\n ENTER INFORMATION OF"<<i+1<<"th student:"<<endl;
            s[i].setdata();
          }
          break;

        
        case 2:
        cout<<"Student database is as follows:";
        for(int i=0;i<n;i++)
        s[i].display();
        break;

        
        case 3:
        exit(0);
        }
    }
    return 0;
}