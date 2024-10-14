// //</>--- code #1
// //=====================

// #include "code1.hpp"

// int main(){
//     Base base;

//     DerivedPublic derived_public;
//     derived_public.print_members();

//     DerivedPublic derived_private;
//     derived_private.print_members();

//     DerivedPublic derived_protected;
//     derived_protected.print_members();
// }

// //</>--- code #2
// //=====================

// #include "code2.hpp"

// int main(){
//     Base base(10);
// }

// //</>--- code #3
// //=====================

// #include "code3.hpp"

// int main(){
//     Derived derived(20.5);
// }

// //</>--- code #4
// //=====================

// #include "code4.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

// //</>--- code #5
// //=====================

// #include "code5.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #6
//=====================

// #include "code6.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #7
//=====================
#include "person.hpp"

int main(){
    university::Person john = university::Person(
        "John Doe", 
        "john.doe@umd.edu", 
        "555-555-5555", 
        12, 1, 1980);
}