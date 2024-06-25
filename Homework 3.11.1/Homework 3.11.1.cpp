#include <iostream>
#include <vector>
#include <utility>

template <typename T>
void move_vectors(std::vector<T>& source, std::vector<T>& destination) {
    destination = std::move(source);
    source.clear(); 
}

int main() {
    std::vector<std::string> one = { "test_string1", "test_string2" };
    std::vector<std::string> two;

   
    move_vectors(one, two);

    std::cout << "Contents of 'one' after move:" << std::endl;
    for (const auto& str : one) {
        std::cout << str << std::endl;
    }

    std::cout << "Contents of 'two' after move:" << std::endl;
    for (const auto& str : two) {
        std::cout << str << std::endl;
    }

    return 0;
}
