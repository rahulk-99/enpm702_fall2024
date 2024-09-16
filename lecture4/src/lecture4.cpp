/**
 * @file lecture3.cpp
 * @author Zeid Kootbally (zeidk@umd.edu)
 * @brief Code for lecture on STL Containers
 * @version 0.1
 * @date 2024-09-15
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iomanip>  // for output manipulator std::setprecision()
#include <iostream>
#include <limits>    // for the min and max range of a type
#include <typeinfo>  // needed for typeid

// STL containers
#include <string>
#include <vector>

union MyUnion {
    int int_value;
    char char_value;
};

using namespace std::literals::string_literals;

int main() {
    //</> 1
    //=====================
    // std::string s{"hello"};
    // std::cout << "-- string --" << '\n';
    // std::cout << s << '\n';

    // std::vector v{1, 2, 3};
    // std::cout << "-- vector --" << '\n';

    // for (const auto &item: v){
    //     std::cout << item << '\n';
    // }

    //</> 1
    //=====================
    // std::cout << typeid("hello, world\n").name() << '\n';  // char [14]
    // auto my_string{"hello, world\n"};
    // std::cout << typeid(my_string).name() << '\n';  // char const *

    //</> 2
    //=====================
    // int number;                                 // garbage
    // std::cout << "number: " << number << '\n';  // UB

    // std::string name;                       // empty string
    // std::cout << "name: " << name << '\n';  // name is an empty string

    //</> 3
    //=====================
    // std::string s0("Initial string");  // initialized from a C string
    // std::cout << s0 << '\n';

    // std::string s1;                                    // empty string
    // std::cout << s1 << '\n';

    // std::string s2(s0);                                // initialized from another string
    // std::cout << s2 << '\n';

    // std::string s3(s0, 8, 3);                          // "str"
    // std::cout << s3 << '\n';

    // std::string s4("Another character sequence", 12);  // "Another char"
    // std::cout << s4 << '\n';

    // std::string s5a(10, 'x');                          // "xxxxxxxxxx"
    // std::cout << s5a << '\n';

    // std::string s5b(10, 42);                           // "**********"
    // std::cout << s5b << '\n';

    // std::string s6(s0.begin(), s0.begin() + 7);        // "Initial"
    // std::cout << s6 << '\n';

    //</> 4
    //=====================
    // auto greeting1{"hello"};        // C string
    // std::cout << typeid(greeting1).name() << '\n';  // C string literal

    // auto greeting2{"hello"s};       // C++ string
    // std::cout << typeid(greeting2).name() << '\n';  // C++ string literal

    // std::cout << "hello" << '\n';  // C string literal
    // std::cout << "hello"s << '\n';  // C++ string literal

    //</> 5
    //=====================
    // std::string my_string{"short string"};
    // std::cout << sizeof(my_string) << '\n';
    // my_string = "This is now a longer string";
    // std::cout << sizeof(my_string) << '\n';
    // my_string = "This is now an even longer string";
    // std::cout << sizeof(my_string) << '\n';

    //</> 6
    //=====================
    // std::string my_string{"Life is cool"};
    // std::cout << "Size of: " << sizeof(my_string) << '\n';
    // std::cout << "Length: " << my_string.size() << '\n';
    // std::cout << "Capacity: " << my_string.capacity() << '\n';

    //</> 7
    //=====================
    // std::string my_string{"Life is so good!"};
    // std::cout << "Size of: " << sizeof(my_string) << '\n';
    // std::cout << "Length: " << my_string.size() << '\n';
    // std::cout << "Capacity: " << my_string.capacity() << '\n';

    //</> 8
    //=====================

    // // Declare a union variable
    // MyUnion data;
    // // std::cout << "Size of: " << sizeof(data) << '\n';

    // // Store an integer in the union
    // data.int_value = 42;
    // // Store a char in the union (overwrites the int)
    // data.char_value = 'H';

    // // Demonstrate that only the last assigned value is valid
    // std::cout << "char: " << data.char_value << '\n';
    // std::cout << "integer: " << data.int_value << '\n';

    //</> 9
    //=====================
    // std::string greeting{"hello"};
    // std::cout << greeting.length() << '\n';  // 5
    // // or
    // std::cout << greeting.size() << '\n';  // 5

    //</> 10
    //=====================
    // // initialization
    // std::string quote{"Just a flesh wound"};

    // // access characters
    // std::cout << quote.front() << '\n';  // return a ref to 1st character
    // quote.front() = 'j';                 // modify the 1st character
    // std::cout << quote[0] << '\n';       // return the 1st character
    // std::cout << quote[5] << '\n';       // return the 6th character
    // std::cout << quote.at(5) << '\n';    // return the 6th character
    // std::cout << quote.back() << '\n';   // return a ref to the last character
    // quote.back() = 'D';                  // modify the last character
    // std::cout << quote.back() << '\n';
    // quote[6] = 'A';     // modify the 7th character
    // quote.at(6) = 'a';  // modify the 7th character

    //</> 11
    //=====================
    // std::string greeting{"Hi"};
    // std::cout << greeting[10] << '\n';  // UB

    //</> 12
    //=====================
    // std::string greeting{"Hi"};
    // std::cout << greeting.at(10) << '\n';  // error

    //</> 13
    //=====================
    // std::string quote{"Just a flesh wound!"};
    // /*
    //     write a for loop to print each character of the string
    // */

    //</> 14
    //=====================
    // std::string quote{"Just a flesh wound!"};

    // for (char c : quote) {
    //     std::cout << c << ' ';
    // }
    // std::cout << '\n';

    //</> 15
    //=====================
    // std::string greeting{"Hi"};
    // for (auto it{greeting.begin()};
    //      it != greeting.end();
    //      ++it) {
    //     std::cout << *it << '\n';
    // }

    //</> 16
    //=====================
    // std::cout << "Enter your full name: ";  // e.g., John Doe
    // std::string name{};
    // std::cin >> name;  // John

    // std::cout << "Enter your student id: ";  // e.g., 123223LUJ
    // std::string student_id{};
    // std::cin >> student_id;  // Doe

    // std::cout << "Name: " << name << ", ID: " << student_id << '\n';

    //</> 17
    //=====================
    // std::cout << "Enter your full name: ";
    // std::string name{};
    // std::getline(std::cin >> std::ws, name);

    // std::cout << "Enter your student id: ";
    // std::string student_id{};
    // std::getline(std::cin >> std::ws, student_id);

    // std::cout << "Name: " << name << ", ID: " << student_id << '\n';

    //</> 18
    //=====================
    // std::string s1{"Hello"};
    // s1 += " World";  // append a string
    // s1 += '!';       // append a character
    // std::cout << s1 << '\n';

    // std::string s2{"Hello"};
    // std::string s3{"World"};
    // std::string s4{s2 + " " + s3};
    // std::cout << s4 << '\n';

    // std::string s5{"Hello"};
    // s5.append(" World!");
    // std::cout << s5 << '\n';

    // std::string s6{"Hello"};
    // s6.push_back('!');
    // std::cout << s6 << '\n';

    //</> 19
    //=====================
    // std::string s1{"Hello World"};
    // std::string s2{"Big "};
    // s1.insert(6, s2);  // Inserts at position 6
    // std::cout << s1 << '\n';

    // std::string s3 = "Hello World";
    // std::string s4 = "Wonderful Big Day";
    // s3.insert(6, s4, 10, 4);  // Inserts "Big" at the 6th position in s3
    // std::cout << s3 << '\n';

    // std::string s5 = "Hello World";
    // std::string s6 = "Beautiful ";
    // s5.insert(s5.begin() + 6, s6.begin(), s6.end());
    // std::cout << s5 << '\n';

    //</> 20
    //=====================
    // std::string s1{"Hello World"};
    // s1.erase(s1.size() - 6, 6);  // remove 6 characters starting from index 5
    // std::cout << s1 << '\n';

    // std::string s2{"Hello World"};
    // s2.erase(s2.begin() + 6, s2.end());
    // std::cout << s2 << '\n';

    // std::string s3 = "Hello";
    // s3.erase(4);
    // std::cout << s3 << '\n';

    // std::string s4{"Hello World"};
    // s4.clear();
    // std::cout << s4 << '\n';

    // std::string s5{"Hello"};
    // s5.pop_back();
    // std::cout << s5 << '\n';

    //</> 21
    //=====================
    // std::string s;
    // std::cout << "Size of std::string is " << sizeof s << " bytes\n"  // 32
    //           << "Default-constructed capacity is " << s.capacity()   // 15
    //           << " and size is " << s.size() << '\n';                 // 0

    // for (int i = 0; i < 42; i++)
    //     s.append(" 42 ");
    // std::cout << "Capacity after 42 appends is " << s.capacity()  // 240
    //           << " and size is " << s.size() << '\n';             // 168

    // s.clear();
    // std::cout << "Capacity after clear() is " << s.capacity()  // 240
    //           << " and size is " << s.size() << '\n';          // 0

    // s.shrink_to_fit();
    // std::cout << "Capacity after shrink_to_fit() is " << s.capacity()  // 15
    //           << " and size is " << s.size() << '\n';                  // 0

    //</> 22
    //=====================
    // std::string s{"aaa"};
    // std::cout << s.capacity() << '\n'; // 15
    // // new_cap > current capacity
    // s.reserve(20);
    // std::cout << s.capacity() << '\n'; // 30
    // // new_cap < current capacity
    // s.reserve(4);
    // std::cout << s.capacity() << '\n';  // 30
    // // new_cap < current size()
    // s.reserve(2);
    // std::cout << s.capacity() << '\n'; // 30

    //</> 23
    //=====================
    // //------ SSO: STACK Allocation
    // std::string s(3, 'A');              // "AAA"
    // std::cout << s.size() << '\n';      // 3
    // std::cout << s.capacity() << '\n';  // 15

    // //------- HEAP allocation
    // s.assign(16, 'B');                  // BBBBBBBBBBBBBBBB
    // std::cout << s.size() << '\n';      // 16
    // std::cout << s.capacity() << '\n';  // 30
    // s.assign(31, 'C');                  // CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
    // std::cout << s.size() << '\n';      // 31
    // std::cout << s.capacity() << '\n';  // 60

    //</> 22
    //=====================
    // std::string full_name;
    // full_name.reserve(100);  // allocate memory for 100 characters

    // std::cout << "Enter your first name: ";  // Albus
    // std::string first_name;
    // std::cin >> first_name;

    // std::cout << "Enter your middle name: ";  // Percival
    // std::string middle_name;
    // std::cin >> middle_name;

    // std::cout << "Enter your last name: ";  // Dumbledore
    // std::string last_name;
    // std::cin >> last_name;

    // // only the first character is kept
    // middle_name.resize(1);

    // full_name = first_name + " " + middle_name + ". " + last_name;
    // full_name.shrink_to_fit();  // capacity is now equal to size

    // std::cout << full_name << '\n';  // Albus P. Dumbledore

    //</> 25
    //=====================
    // std::string greeting{"Hello"};
    // auto it = greeting.end();
    // std::cout << *it << '\n';

    //</> 26
    //=====================
    // std::array<int, 5> a1{1, 2, 3, 4, 5};               // [1, 2, 3, 4, 5]
    // std::array<int, 10> a2{1, 2, 3, 4, 5, 6, 7, 8, 9};  // [1, 2, 3, 4, 5, 6, 7, 8, 9]

    // std::cout << sizeof(a1) << '\n';
    // std::cout << sizeof(a2) << '\n';

    //</> 27 -- C arrays
    //=====================
    // // zero initialization
    // int a1[2]{};  // [0, 0]
    // // explicit initialization
    // int a2[2]{1, 2};
    // // partial initialization
    // int a3[2]{1};  // [1, 0]
    // // size inference
    // int a4[]{1, 2};

    // // fill with explicit initialization
    // // up to but not including
    // int a5[3]{};               // [0, 0, 0]
    // std::fill(a5, a5 + 2, 3);  //[3, 3, 0]

    // // fill with partial initialization
    // // up to but not including
    // int a6[3]{};               // [0, 0, 0]
    // std::fill(a6, a6 + 2, 1);  //[1, 1, 0]

    //</> 27 -- C++ arrays
    //=====================
    // // zero initialization
    // std::array<int, 2> a1{};  // [0, 0]
    // // explicit initialization
    // std::array<int, 2> a2 = {1, 2};
    // // partial initialization
    // std::array<int, 2> a3 = {1};  // [1, 0]
    // //@\emphIII{no size inference}@

    // // fill with explicit initialization
    // // up to but not including
    // std::array<int, 2> a4;
    // std::fill(a4.begin(), a4.end(), 3);  //[3, 3]

    // // fill with partial initialization
    // // up to but not including
    // std::array<int, 3> a5{};
    // std::fill(a5.begin(), a5.begin() + 2, 1);  //[1, 1, 0]

    //</> 28
    //=====================
    // int my_array[5]{1, 2, 3, 4, 5};
    // std::cout << my_array << '\n';  // @

    // int* ptr = my_array;
    // // first element using pointer
    // int first_number = *ptr;
    // std::cout << first_number << '\n';  // 1
    // // second element using pointer arithmetic
    // int second_number = *(ptr + 1);
    // std::cout << second_number << '\n';  // 2

    // for (size_t i{0}; i < std::size(my_array); ++i) {
    //     std::cout << my_array[i] << ' ';
    // }
    // std::cout << '\n';

    //</> 29
    //=====================
    // int my_array[5]{1, 2, 3, 4, 5};
    // int* ptr = my_array;

    // for (size_t i{0}; i < std::size(my_array); ++i) {
    //     // write code here
    // }

    //</> 30
    //=====================
    // constexpr size_t length1{3};
    // size_t length2{3};

    // // C++ style array
    // std::array<int, 3> cpp_array1{};        // ok: 3 is a compile-time constant
    // std::array<int, length1> cpp_array2{};  // ok: length1 is a compile-time constant
    // std::array<int, length2> cpp_array3{};  // error: length2 is not a compile-time constant

    // // C-style array
    // int c_array1[3]{};        // ok: 3 is a compile-time constant
    // int c_array2[length1]{};  // ok: length1 is a compile-time constant
    // int c_array3[length2]{};  // error: length2 is not a compile-time constant
}
