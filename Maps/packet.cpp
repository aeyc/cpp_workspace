//
//  packet.cpp
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include "packet.h"
#include <iostream>
Packet::Packet():hdr_counter(0){}
Packet::~Packet(){
    for(auto& elem : headers)
    {
        delete[] elem.second;
    }
}

bool Packet::addHeader(Header* p){
    if (p == nullptr){delete p; return false;}
    std::pair<std::map< Header::OsiLayer, Header*>::iterator,bool> ret;
    ret = headers.insert ( std::pair< Header::OsiLayer, Header*>(p->getLayer(),p) );
    if (ret.second==false) {
      std::cout << "Given element is already existed in position"<<ret.first->second << '\n';
        delete p;
      return false;
    }
    return true;
}

int Packet::getNumHeaders() const{
    return hdr_counter;
}
void Packet::print() const{
    for(auto& elem : headers)
    {
        std::cout<<elem.second->getInfo()<<std::endl;
    }
    
}
