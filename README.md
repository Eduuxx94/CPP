# CPP
This C++ repository is designed to help you understand the specifities of the language when compared to C. Time to dive into Object Oriented Programming!

Module 00: This first module of C++ is designed to help you understand the specifities of the language when compared to C. Time to dive into Object Oriented Programming!
    Exercise 00:
        The objective of this exercise is to create a program in C++ that takes a string as an argument and prints it in uppercase. If no argument is passed, the program should print a loud and unbearable feedback noise. The program must be implemented in C++.

    Exercise 01:
        This exercise requires creating a phone book program that behaves like an old-school phonebook. The program should implement two classes: PhoneBook and Contact. PhoneBook should be able to store up to 8 contacts, and when a new contact is added and the limit is exceeded, the oldest contact should be replaced. Contact should include fields for first name, last name, nickname, phone number, and darkest secret. When the program starts, the phonebook is empty and the user is prompted to enter one of three commands: ADD, SEARCH, or EXIT. ADD saves a new contact, SEARCH displays a specific contact, and EXIT quits the program. The program should wait for another command after executing one, and it should only accept the three aforementioned commands. The program must be implemented in C++.

    Exercise 02:
        The objective of this exercise is to recreate a missing file in C++. The file, Account.cpp, is missing, but Account.hpp and a log file are available. The Account class must be implemented in a way that matches the tests in the tests.cpp file and the log file. The program must be implemented in C++.

Module 01: This module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.
    Exercise 00:
        Implement a Zombie class with a private name attribute and a member function that allows zombies to announce themselves. Create functions to create a new zombie and create a random zombie.

    Exercise 01:
        Implement a function that allocates and initializes an array of Zombie objects with the given name. Call the announce function for each zombie and check for memory leaks.

    Exercise 02:
        Create a program that uses a string variable, a pointer to the string, and a reference to the string. Print the memory addresses and values of each variable.

    Exercise 03:
        Create a Weapon class with a private type attribute and getType and setType member functions. Create two classes, HumanA and HumanB, that have a name and a Weapon object. HumanA always has a weapon, while HumanB may or may not. Implement an attack function for both classes.

    Exercise 04:
        Create a program that takes a filename and two strings as parameters. The program should open the file specified by the filename, copy its contents to a new file with the same name but with a ".replace" extension, and replace every occurrence of the first string with the second string. You can use any member functions of the class std::string except for replace.

    Exercise 05:
        Create a Harl class with four private member functions: debug, info, warning, and error. The Harl class also has a public member function, complain, that takes a string parameter representing the log level and calls the appropriate private member function. Use pointers to member functions to avoid a large number of if/else statements.

    Exercise 06:
        Create a program that takes a log level as a parameter and displays all messages from that level and above. The program should use the Harl class from Exercise 05 and use the switch statement to handle the different log levels. Give the executable the name "harlFilter".

Module 02: This module is designed to help you understand Ad-hoc polymorphism, overloads and orthodox canonical classes in CPP.
    Exercise 00:
        Create a C++ class for fixed-point numbers that uses orthodox canonical form. The class should have private members for the fixed-point value and the number of fractional bits, and public members for a default constructor, copy constructor, copy assignment operator overload, destructor, a function to get the raw value of the fixed-point value, and a function to set the raw value of the fixed-point value. The goal is to learn about fixed-point numbers and how to create a class in orthodox canonical form.

    Exercise 01:
        Expand on the previous exercise by adding public constructors that take an integer or a floating-point number as parameters and convert them to the corresponding fixed-point value. Also add member functions to convert the fixed-point value to a floating-point or integer value. Finally, add an overload of the insertion operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as parameter. The goal is to create a more useful fixed-point number class.

    Exercise 02:
        Implement a Fixed-point number class with overloaded comparison, arithmetic, and increment/decrement operators. Also, add static member functions to find the minimum and maximum of two Fixed-point numbers. Test the class with a provided code snippet.

    Exercise 03:
        In this exercise, you will implement a function that determines whether a given point is inside a triangle or not. To do this, you will use the Fixed class you created in the previous exercises. The function should return true if the point is inside the triangle and false otherwise.

Module 03: This module is designed to help you understand Inheritance in CPP.
    Exercise 00:
        Implement the ClapTrap class with the required private attributes and public member functions, and write the constructors and destructor, so the code works as expected.

    Exercise 01:
        Create a derived robot called ScavTrap that inherits the constructors and destructor from ClapTrap. It has its own special capacity named guardGate that displays a message informing that ScavTrap is now in Gatekeeper mode.

    Exercise 02:
        Create another class called FragTrap that inherits from ClapTrap, with its own attributes and special capacity called highFivesGuys that displays a positive high fives request on the standard output.

    Exercise 03:
        Create a class named DiamondTrap that inherits from both FragTrap and ScavTrap. It has a name private attribute that is given the same variable's name as in the ClapTrap base class. The attributes and member functions are picked from either one of its parent classes.

Module 04: This module is designed to help you understand Subtype polymorphism, abstract classes and interfaces in CPP.
    Exercise 00:
        Implementing polymorphism through inheritance of classes, and creating base and derived classes. In this exercise, you will create a base class called "Animal" with one attribute and two derived classes named "Dog" and "Cat". You will implement polymorphism by creating a member function in the base class and calling it through derived classes, and ensuring that each derived class produces the appropriate sound.

    Exercise 01:
        Creating a class called "Brain" with an array of strings inside and setting up the relationship between the Dog and Cat classes through a private pointer attribute to Brain. Then you will create an array of Animal objects with half the objects being Dogs and the other half being Cats. You will also check for memory leaks.

    Exercise 02:
        Making the Animal class abstract to avoid mistakes, and preventing the instantiation of the default Animal class.

    Exercise 03:
        Implementing interfaces through the use of pure abstract classes and creating two concrete classes called "Ice" and "Cure".

Module 05: This module is designed to help you understand Try/Catch and Exceptions in CPP.
    Exercise 00:
        You need to create a Bureaucrat class with a name and a grade attribute, where the grade must be between 1 and 150. The class has getter functions and member functions to increment or decrement the bureaucrat's grade. The class also throws exceptions if the grade is out of range, and the insertion operator is overloaded to print the name and grade.

    Exercise 01:
        You need to create a Form class with a name, a boolean attribute indicating if it is signed, a grade required to sign it, and a grade required to execute it. The class also has getter functions and an overload of the insertion operator to print all the form's information. Additionally, the class has a member function to change the form's status to signed if the bureaucrat's grade is high enough, and an exception is thrown if the grade is too low. Lastly, the Bureaucrat class has a member function to sign the form, and a message is printed accordingly.

    Exercise 02:
        Create more concrete forms: ShrubberyCreationForm, RobotomyRequestForm, and PresidentialPardonForm, all derived from the base class AForm. Each form has specific required grades and functionalities, such as creating a file with ASCII trees, making drilling noises and robotomizing, or informing that the target has been pardoned. All forms have only one parameter in their constructor, which is the target of the form.

    Exercise 03:
        In this exercise, you are asked to implement the Intern class which has the ability to create Form objects using the makeForm() function. The makeForm() function takes two strings as parameters: the name of the form and the target of the form. It returns a pointer to a Form object initialized with the given name and target. If the name of the form passed as a parameter does not exist, an explicit error message should be printed.

Module 06: This module is designed to help you understand the different casts in CPP.
    