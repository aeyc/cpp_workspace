//
//  main.cpp
//  Pre_Lab02
//
//  Created by Ayca Begum Tascioglu on 1.11.2020.
//

#include <iostream>
#include <list>
#include <vector>
//#include "Manager.h"

////*
//class Date{};
struct Employee{
    Employee(std::string n,std::string f,char m,short d):first_name(n),
    family_name(f),middle_initial(m),department(d){}
    std::string first_name,family_name;
    char middle_initial;
    //Date hiring_date;
    short department;
}; //expected ; after classes & structs
struct Manager:public Employee{
    using Employee::Employee; //inheriting constructors
    std::list<Employee*> group;
    short level;
};
//*/
void f(Manager m1,Employee e1){
    //memory address of m1 & e1 is held in this vector
    std::vector<Employee*> vec {&m1, &e1}; //#include <vector>
    /*
     A Manager* is also an Employee*
     A Manager& is also an Employee&
     But an Employee* is not a Manager* - in case explicit conversion is needed
     */
}
struct X{
    int number;
};
struct Y:public X{
    int m_second_number;
};
void f(X *p){
    X h = *p;
    std::cout <<(h.number)<<std::endl;
}
void f2( X var){
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Manager m{"Ayca","Begum",'a',8}; //ok when have 'using Employee::Employee;' in manager class
    Y var1{}; //var1 contains number and second_number
    X* p = &var1; //pointer to var1 address - LEGIT NOT SLICING YO CAN DO IT
    X var2 = *p; //only copying number - slicing
    std::cout<<(var2.number)<<std::endl;
    //f2(var1); //NOT A GOOD IDEA
    //f2(*p);  //STILL NOT A GOOD IDEA BC OF SLICING
    f2(var1); //still ok not slicing
    return 0;
}
