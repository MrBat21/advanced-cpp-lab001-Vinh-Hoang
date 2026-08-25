#include <iostream>
#include "project/exercise.hpp"
using namespace std;

std::string get_greeting() {
    return "Hello, Pextra Academy!";

int main() {
    std::cout << get_greeting() << '\n';
    cout << hello_message(); // LAB: UNCOMMENT THIS LINE
    return 0;
}
