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
    for(int k = 0; k < headers.size(); k++) {
        delete headers[k];
    }
}

bool Packet::addHeader(Header* p){
    if(p!= nullptr){
        headers.emplace_back(p);
        hdr_counter++;
        return true;
    }
    return false;
}

int Packet::getNumHeaders() const{
    return hdr_counter;
}
void Packet::print() const{
    for (int i =0; i< hdr_counter; i++){
        std::cout<< headers[i]->getInfo() <<std::endl;
    }
    
}
