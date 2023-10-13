//Question 5

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Transcript{
    double grades[100];
    string classes[100];
    std::size_t num; //only integer type that can be changed to std::size_t in the program
};

struct Student{ //change using typedef (only in Student structure)
    typedef int Number;
    typedef string Line;
    Line name;
    Number idNumber;
    Number year;
    Transcript t;
};

void initializeStudent(Student& s);
void fillTranscript(Transcript& t);
void printStudent(Student const & s);
void printTranscript(Transcript const & t);

int main(){
    Student me;
    initializeStudent(me);
    printStudent(me);
    return 0;
}

void initializeStudent(Student& s){
    string dummy;
    std::cout << "please enter a name"<<endl;
    getline(cin, s.name);
    std::cout << "please enter an ID number"<<endl;
    std::cin >>s.idNumber;
    cout<<"Please enter your year as a number 1‐4"<<endl;
    std::cin>>s.year;
    getline(cin, dummy);
    fillTranscript(s.t);
}

void fillTranscript(Transcript& t){
    string course;//note ‐ class is a reserved word
    double grade = 0;
    string dummy;
    std::cout << "Please enter the name of the next class, done when done"<<endl;
    getline(cin, course);
    t.num = 0;
    while(course != "done"){
        std::cout<<"Please enter your grade in "<<course<<endl;
        std::cin >>grade;
        getline(cin, dummy);//consume
        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;
        std::cout << "Please enter the name of the next class, done when done"<<endl;
        getline(cin, course);
    }
}

void printStudent(const Student & s){ //Question 1
    std::cout << "Name:"<<s.name<<endl;
    std::cout << "ID number:"<<s.idNumber<<endl;
    std::cout << "year:"<<s.year<<endl;
    printTranscript(s.t);
}

void printTranscript(const Transcript & t){ //Question 1
    std::cout<<"Transcript: "<<endl;
    for(int i=0; i<t.num; i++){
        std::cout<<t.classes[i]<<": "<<t.grades[i]<<endl;
    }
}

// Question 2: First overloaded function definition
Student initializeStudent(){
   Student new_student;
   new_student.name = "";
   new_student.idNumber = 0;
   new_student.year = -1;
   return new_student;
}

// Question 2: Second overloaded function definition
Student initializeStudent(std::string n)
{
   Student new_student;
   new_student.name = n;
   new_student.idNumber = 0;
   new_student.year = -1;
   return new_student;
}

// Question 2: Third overloaded function definition
Student initializeStudent(int i)
{
   Student new_student;
   new_student.name = "";
   new_student.idNumber = i;
   new_student.year = -1;
   return new_student;
}
