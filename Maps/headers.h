//
//  headers.h
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//
/*
 Inside the class Header we need to define:

 scoped enum OsiLayer = {PHY=1,MAC,NET,TRAN,SESS,PRES,APP};
 (const) member variable OsiLayer layer initialized at the constructor of the Header class (change it to Header(OsiLayer l, int size))
 MacHeader(int size) will call Header(OsiLayer::MAC,size)
 -finished 0 error
 */
#ifndef HEADER_H
#define HEADER_H
#include <string>
class Header{
public:
    enum class OsiLayer{PHY=1,MAC,NET,TRAN,SESS,PRES,APP};
    Header(const OsiLayer l,int s);
    //~Header();
    void setSize(int s);
    int getSize() const;
    OsiLayer getLayer() const;
    //virtual std::string getInfo() const;
    virtual std::string getInfo() const = 0;
    
protected:
    int size;
    const OsiLayer layer;
};

#endif /* headers_h */
