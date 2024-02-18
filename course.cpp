#include<iostream>
using namespace std;

class Student
{
private:
    string name ;
    string address;
    int age;
    int id;
    int gpa;
    int phone;
public:
    Student()
       {name="";
       address="";
       age=0;
       id=0;
       gpa=0;
       phone=0;
       }

    Student(string n,string a,int ag,int i,int g, int p)
       {name=n;
       address=a;
       age=g;
       id=i;
       gpa=g;
       phone=p;
       } 

    string getName () {return name;}
    string getAddres () {return address;}  
    int getAge ()  {return age;}
    int getId ()  {return id;}
    int getgpa ()  {return gpa;}
    int getphone ()  {return phone;}

    void setName (string n)  {name =n;}
    void setAddress (string a)  {address =a;}
    void setAge (int ag)  {age =ag;}
    void setId (int i)  {id =i;}
    void setGpa (int g)  {gpa =g;}
    void setPhone (int p)  {phone =p;}

    void print(){
        cout << "Student Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Address: " << address << "\n";
        cout << "Age: " << age << "\n";
        cout << "ID: " << id << "\n";
        cout << "GPA: " << gpa << "\n";
        cout << "Phone: " << phone << "\n";
    }


};


int main(){
    string name, address;
    int age,id , gpa,phone;
    cout<< "please enter your name:\n";
    cin>> name;
    cout<< "please enter your address:\n";
    cin>> address;
    cout<< "Age:\n";
    cin>> age;
    cout<< "ID:\n";
    cin>> id;
    cout<< "GPA:\n";
    cin>>gpa;
    cout<<"Phone number:\n";
    cin>>phone;
    Student student1;
    Student student2(name,address,age,id,gpa,phone);

    cout<< "Details about student 1:\n";
    student1.print();
    cout<< "Details about student 2:\n";
    student2.print();
    return 0;
}
