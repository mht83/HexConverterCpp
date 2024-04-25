//////////////////////////////////////////////written by mht83/////////////////////////////////////////

#include <iostream>
#include <iomanip> 
#include <string>
#include <sstream>
#include <vector>

std::string to_hexa(std::vector<int> a) {
    std::string result = "";
    for (auto x : a) {
        
        std::stringstream ss;
        ss << std::hex << std::setw(2) << std::setfill('0') << x;
        result += ss.str();
    }
    return result;
}

int main() {
    std::vector<int> a = { 1, 2, 3, 4, 5, 6 };
    std::string result1 = to_hexa(a);
    std::cout << "Output for {1, 2, 3, 4, 5, 6}: " << result1 << std::endl;

    std::vector<int> b = { 0xBA, 0xAD, 0xF0, 0x0D };
    std::string result2 = to_hexa(b);
    std::cout << "Output for {0xBA, 0xAD, 0xF0, 0x0D}: " << result2 << std::endl;

    return 0;
}
