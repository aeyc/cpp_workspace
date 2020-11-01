//
//  VirtualFunctions.cpp
//  ClassHierarchies
//
//  Created by Ayca Begum Tascioglu on 1.11.2020.
//

/*
 A function declared virtual can be redefined (“overridden”)
 in a derived class
 • it must keep the same list of arguments
 • it must keep the same return type
 except for return type pointers or references that can be relaxed
 from the Base to the Derived class
 • the complier and linker will guarantee that the correct
 function is called
 • it is defined in the base class
 • it can be overridden in derived classes only if needed
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
struct Header{
    virtual std::string print() {
        std::cout<<"Hello Header"<<std::endl;
        return std::string("Size =");
    }
    int size;
};
struct MACHeader:public Header{
    std::string print() {
        std::cout<<"Hello MAC"<<std::endl;
        //std::string tmp = "MacHeader";
        return Header::print() + std::string("MacHeader");
        //return tmp;
    }
    int src;
    int dest;
};
struct TCPHeader:public Header{
    
    int con_w;
};
struct UDPHeader:public Header{
    //if no additional params then no need to redefine virtual func
    
};

struct Employee{
    virtual void print() const;
};
void f(std::vector<Employee*> vec){ //Employee* can point to Employee or Manager
    for (Employee* elem : vec){
        elem->print(); //here we want to use a different print()
        //for an actual Employee or an actual Manager
        //there are more members to be printed with Manager
    }
}
/*
int main(){
    Header* p = new MACHeader();
    
    std::cout<<p->print()<<std::endl; //calls print in MACHeader
    //
     //out:
     //Hello MAC
     //Hello Header
     //Size =MacHeader
     //
    std::cout<<"Hello world"<<std::endl;
    return 0;
}
*/
