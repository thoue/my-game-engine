#pragma once
#include <iostream>
using namespace std;

class Message {
    private: 
        std::string message;
    public: 
        Message(std::string message = "Hello World");
        void display();
};