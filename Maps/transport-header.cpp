//
//  mac-header.cpp
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include <stdio.h>
#include "transport-header.h"
TransportHeader::TransportHeader(int s):Header(Header::OsiLayer::TRAN,s){}
std::string TransportHeader::getInfo() const{
    return "Transport header";
}
