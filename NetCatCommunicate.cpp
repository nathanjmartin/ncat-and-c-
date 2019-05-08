#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;



void communicate(int port, string ip_address) {
    ostringstream oss;
    oss << ip_address << " " << port;
    string netcat = "nc ";
    netcat += oss.str();

    const char *command = netcat.c_str();
    system(command);
}



int main() {
    int portNumber;
    string ip;
    cout << "Enter a port number to listen on: ";
    cin >> portNumber;

    cout << "Enter an ip address to communicate to: ";
    cin >> ip;

    communicate(portNumber, ip);
}
