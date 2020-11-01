//
//  Manager.h
//  Pre_Lab02
//
//  Created by Ayca Begum Tascioglu on 1.11.2020.
//

#ifndef Manager_h
#define Manager_h
#include <list>
#include "Employee.h"
namespace Manager{
class Manager:public Employee::Employee{
public:
    short getLevel() const;
    std::list<Employee*> group;
    short level;
};
};

#endif /* Manager_h */
