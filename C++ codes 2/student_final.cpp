#include<iostream>
#include<vector>
using namespace std;
class Teacher;
class Course{
public:
    string c_code;
    string title;
    double credit;
    vector<Teacher>teachers;
    Course(string c,string t,double cr){
        c_code=c;
        title=t;
        credit=cr;
    }
};
class Academic{
public:
    double total_credit;
    double cgpa;
    Academic(double tc,double cg){
        total_credit=tc;
        cgpa=cg;
    }
};
class Student{
public:
    string id;
    string name;
    string address;
    vector<Course>courses;
    Academic *ac;
    Student(string i,string n,string ad){
        id=i;
        name=n;
        address=ad;
    }
};
class Teacher{
public:
    string id;
    string name;
    string deg;
    Teacher(string i,string n,string deg){
        id=i;
        name=n;
        this->deg=deg;
    }

};
int main()
{
   Student std1("ash1701","tuhin","lakshmipur");
   Student std2("ash1705","monuar","sherpur");
   std1.ac=new Academic(160,3.50);
   std2.ac=new Academic(160,3.60);

   Course c1("cste1201","object oriented programming ",3.0);
   Course c2("cste1206","java programming language",3.0);

   std1.courses.push_back(c1);
   std1.courses.push_back(c2);
   std2.courses.push_back(c2);

   Teacher t1("#aka","abul kalam azad","assistant professor");
   Teacher t2("#mhr","hasnat riaz","assistant professor");

   c1.teachers.push_back(t1);
   c1.teachers.push_back(t2);
   c2.teachers.push_back(t2);


  cout<<"Student info:"<<endl;
  cout<<"ID: "<<std1.id<<endl;
  cout<<"Name: "<<std1.name<<endl;
  cout<<"Address: "<<std1.address<<endl<<endl;
  cout<<"Taken courses:"<<endl;
  cout<<"Title: "<<std1.courses[0].title<<endl;
  cout<<"Code: "<<std1.courses[0].c_code<<endl;
  cout<<"Credit: "<<std1.courses[0].credit<<endl;
  cout<<"Title: "<<std1.courses[1].title<<endl;
  cout<<"Code: "<<std1.courses[1].c_code<<endl;
  cout<<"Credit: "<<std1.courses[1].credit<<endl<<endl;
  cout<<"Course Teachers: "<<endl;
  cout<<"Course: "<<c1.c_code<<","<<endl;
  cout<<"Teacher id: "<<c1.teachers[0].id<<endl;
  cout<<"Teacher's name: "<<c1.teachers[0].name<<endl;
  cout<<"Teacher's designation: "<<c1.teachers[0].deg<<endl;
  cout<<"Teacher id: "<<c1.teachers[1].id<<endl;
  cout<<"Teacher's name: "<<c1.teachers[1].name<<endl;
  cout<<"Teacher's designation: "<<c1.teachers[1].deg<<endl;


}






