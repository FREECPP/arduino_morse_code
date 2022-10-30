#include <iostream>
#include <string>

class test_class
{
public:
    int test_num;
    std::string test_strg;
};

int main()
{
    test_class test_object;

    // object one
    test_object.test_num = 12;
    test_object.test_strg = "Hello";
    // object two
    test_class t_object_2;

    t_object_2.test_num = 13;
    t_object_2.test_strg = "What up";

    std::cout << test_object.test_num << std::endl;
    std::cout << test_object.test_strg << std::endl;

    std::cout << t_object_2.test_num << std::endl;
    std::cout << t_object_2.test_strg << std::endl;
    return 0;
}