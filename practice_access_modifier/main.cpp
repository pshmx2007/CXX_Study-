#include <iostream>

/**
 * this is practice for finding out c++ type struct and c type struct differences.
 * In the c++, we can implement inherits, functions in the struct.
 * So, class and struct actually are not quite different, but basically access modifier are different.
 *  
 */

typedef struct struct_person
{
    std::string name = "Seonghyeon Park";
    int age = 27;
}struct_person;

typedef struct struct_student :  struct_person
{
private:
    int grade = 2;
public:
    struct_student()
    {
        std::cout << name << ", " << age << std::endl;
    }
}struct_student;


int main(int argc, char* argv[])
{
    std::cout << argv[1] << std::endl;
    struct_student student_instance = struct_student();
    return 0;
}