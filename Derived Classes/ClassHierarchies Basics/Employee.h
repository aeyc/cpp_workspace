//
//  Employee.h
//  Pre_Lab02
//
//  Created by Ayca Begum Tascioglu on 1.11.2020.
//

#ifndef Employee_h
#define Employee_h
#include <string>

namespace Employee{
class Employee{
public:
    Employee(const std::string& n,
                        const std::string& f,
                        char m,
                        short d);
    ~Employee();

    void setName(const std::string& n);
    void setFamilyName(const std::string& f);
    void setMiddleInitial(char m);
    void setDepartment(short d);
    
    std::string getName() const;
    std::string getFamilyName() const;
    char getMiddleInitial() const;
    short getDepartment();
private:
    std::string name;
    std::string familyName;
    char middle_initial;

    short department;
    
};
};

#endif /* Employee_h */
