//
//  Employee.cpp
//  Pre_Lab02
//
//  Created by Ayca Begum Tascioglu on 1.11.2020.
//

#include <stdio.h>
#include "Employee.h"
namespace Employee{
    Employee::Employee(const std::string& n,
                        const std::string& f,
                        char m,
                       short d):name(n),familyName(f),middle_initial(m),department(d){}
    Employee::~Employee(){}

    void Employee::setName(const std::string& n){
        name = n;
    }
    void Employee::setFamilyName(const std::string& f){
        familyName = f;
    }
    void Employee::setMiddleInitial(char m){
        middle_initial = m;
    }
    void Employee::setDepartment(short d){
        department = d;
    }

    std::string Employee::getName() const{
        return name;
    }
    std::string Employee::getFamilyName() const{
        return familyName;
    }
    char Employee::getMiddleInitial() const{
        return middle_initial;
    }
    short Employee::getDepartment(){
        return department;
    }
}
