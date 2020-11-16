//
//  packet.h
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#ifndef H_PACKET
#define H_PACKET
#include <string>
#include <map>
#include "headers.h"
/*
 try to provide a solution using the std data structures, e.g., using std::map< Header::OsiLayer, Header*> headers;
 change addHeader from void to bool addHeader(Header* p); that forbids both insertion of null pointers and layers already inserted (i.e., no more than one MAC, one TRAN, etc..)
 */
class Packet{

private:
    int hdr_counter;
    std::map< Header::OsiLayer, Header*> headers;
public:
    Packet();
    ~Packet();
    bool addHeader(Header* p);
    int getNumHeaders() const;
    void print() const;
    
};

#endif /* headers_h */
