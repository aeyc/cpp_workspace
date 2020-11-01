//
//  main.cpp
//  ClassHierarchies - Type specifying with Enum
//
//  Created by Ayca Begum Tascioglu on 1.11.2020.
//

#include <iostream>
#include <vector>
struct Employee{
    enum class Empl_type{manager,employee};
    Empl_type m_type;
    Employee():m_type{Empl_type::employee}{}
};
struct Manager:public Employee{
    Manager(){
        m_type = Empl_type::manager;
    }
};
struct Header{
    enum HeaderType{MAC,TCP,UDP};
    int size;
    HeaderType type;
};
struct MACHeader:public Header{
    //constructor
    MACHeader(){
        type = MAC;
    }
    int src;
    int dest;
};
struct TCPHeader:public Header{
    //constructor
    TCPHeader(){
        type = TCP;
    }
    int con_w;
};
struct UDPHeader:public Header{
    //constructor
    UDPHeader(){
        type = UDP;
    }
    
};
struct Packet{
    std::vector<Header> v;
};
/*
int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    Header* p = new MACHeader();
    std::cout<<"P->type "<<p->type<<std::endl; //out:0
    //return 0;
}
*/
