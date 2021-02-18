/* 
 * [2019] Signet Lab - Programming for ICT
 * All Rights Reserved.
 * 
 * Authors Filippo Campagnaro and Michele Polese 
 */

#include "ethernet-connector.h"
#include <iostream>

const std::string EthConn::LOCAL_HOST = "127.0.0.1";

EthConn::EthConn(const std::string& ip_addr, int port_num):ip(ip_addr),port(port_num){
// TODO: implement the class costructor
    
}

EthConn::EthConn(int port_num)
:
ip(EthConn::LOCAL_HOST),
port(port_num)
{

}

void EthConn::print(std::ostream& out) const
{
  out << "EthConn port = " << std::to_string(port) 
      << " ip = " << ip;
}

std::ostream& operator<<(std::ostream& out, const EthConn& conn){
// TODO: implement the operator <<, considering that it will have to work for 
//       EthConn and derived classes.
// SUGGESTION: check the examples..
    conn.print(out);
    return out;
}
/**
 * Get the IP address of the last remote host connected.
 * @return the ip address
 */
//TODO: implement the method getIp()
std::string EthConn::getIp() const{
    return ip;
}
/**
 * Get the socket port number.
 * @return the port number
 */
//TODO: implement the method getPort()
int EthConn::getPort() const{
    return port;
}
