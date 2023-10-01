#include <iostream>
#include <set>

int main(int argc, char **argv) {
    std::set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (auto i = s.begin(); i != s.end(); i++) {
        std::cout << *i << ' ';
        }
    std::cout << std::endl;

    return 0;
}

