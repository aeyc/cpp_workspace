//
//  print-headers.cpp
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include <iostream>
#include "mac-header.h"
#include "transport-header.h"
#include "packet.h"
int main(){
    Packet packet1;
    packet1.addHeader(new MacHeader{7});
    packet1.addHeader(new TransportHeader{89});
    bool flag_nullptr = packet1.addHeader(nullptr);
    std::cout<<"Is the insertion of nullptr successful? "<<flag_nullptr<<std::endl;
    bool flag_duplicate = packet1.addHeader(new TransportHeader{89});
    std::cout<<"Is the insertion of duplicate element successful? "<<flag_duplicate<<std::endl;
    packet1.print();
}
