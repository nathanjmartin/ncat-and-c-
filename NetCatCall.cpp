#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

void listen(int port) {
    ostringstream oss;
    oss << port;
    string netcat = "nc -l ";
    netcat += oss.str();
    cout << "Listening on port " << port << "!" << endl;
    
    const char *command = netcat.c_str();
    system(command);ss
}

void communicate(int port, string ip_address) {
    ostringstream oss;
    oss << ip_address << " " << port;
    string netcat = "nc ";
}

int main() {
    int portNumber;
    cout << "Enter a port number to listen on: ";
    cin >> portNumber;
    listen(portNumber);
}

