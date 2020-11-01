//
//  Override.cpp
//  ClassHierarchies
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
struct Header{
    virtual std::string print(int a,int b) {
        std::cout<<"Hello Header"<<std::endl;
        return std::string("Size =");
    }
    virtual std::string print1(int a,int b) {
        std::cout<<"Hello Header"<<std::endl;
        return std::string("Size =");
    }
    int size;
};
struct MACHeader:public Header{
    std::string print(int b) const {
        std::cout<<"Hello MAC"<<std::endl;
        //std::string tmp = "MacHeader";
        //return Header::print() + std::string("MacHeader");
        return std::string("MacHeader");
        //return tmp;
    }
    std::string print1(int a, int b) override{
        std::cout<<"Hello MAC"<<std::endl;
        //std::string tmp = "MacHeader";
        //return Header::print() + std::string("MacHeader");
        return std::string("MacHeader");
        //return tmp;
    }
    int src;
    int dest;
};
/*
int main(){
    MACHeader obj{};
    obj.print(1);
    //obj.print(1,2); //this class doesnt have this func, you're hiding it
    obj.print1(1,2);
    return 0;
}
*/
