//
//  PrivateClass.cpp
//  ClassHierarchies
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

/*
 if not specified private is default for classes
 */
struct Header{
    virtual std::string print(int a,int b) {
        std::cout<<"Hello Header"<<std::endl;
        return std::string("Size =");
    }
    
    int size;
};
struct MACHeader:public Header{
    int src;
    int dest;
};
struct MACPrivHeader:private Header{
    void f() {print(1,2);} //can reach in the class
    //but cannot use it as an interface anymore
    int src;
    int dest;
};
struct CSMHeader:public MACHeader{ //can reach MAC variables, and Header variables
    //->public inheritance
    double max_backoff;
};
struct CSMPrivHeader:public MACPrivHeader{
    //void f1() {print(1,2);} //ERROR: print is a private func of Header
    //Header is not accessible from CSMPricHeader
    double max_backoff;
};
int main(){
    
    MACPrivHeader objpriv{};
    //objpriv.print(1,2); //ERROR: print is a private member of Header
    objpriv.f(); //ok
    return 0;
}

