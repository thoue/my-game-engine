#include "message.h"

Message::Message(std::string message) {
    this->message = message;
}

void Message::display() {
    std::cout << message << std::endl;
}