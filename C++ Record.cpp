Program 1: Illustrate Class and Objects

AIM:
To write a C++ program to illustrate the concept of class and objects.

ALGORITHM:
1.Start the program.
2.Create a class named Student with data members such as name, rollNo, and marks.
3.Define member functions:
getData() to input student details.
displayData() to display student details.
4.Create an object of the Student class in the main() function.
5.Call the member functions using the object.
6.Display the student details.
7.Stop the program.

PROGRAM:
#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1; // Object creation
    s1.getData();
    s1.displayData();
    return 0;
}
Enter name: Vaishnavi
Enter roll number: 101
Enter marks: 89.5
--- Student Details ---
Name: Vaishnavi
Roll Number: 101
Marks: 89.5

RESULT:
Thus, the concept of class and object was successfully illustrated using C++.

PROGRAM 2: Implement Member Function Defined Inside and Outside the Class
AIM:
To write a C++ program to define and implement member functions both inside and outside the class.

ALGORITHM:
1.Start the program.
2.Create a class named Employee with data members: empName, empId, and salary.
3.Define one function (getData()) inside the class to read details.
4.Declare another function (displayData()) inside the class but define it outside the class using the scope resolution operator ::.
5.Create an object of the class in main() and call both member functions.
6.Display the entered details.
7.Stop the program.

PROGRAM:
#include <iostream>
using namespace std;

class Employee {
    string empName;
    int empId;
    float salary;

public:
    void getData() { // Defined inside the class
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData(); // Declaration only
};

void Employee::displayData() {
    cout << "\n--- Employee Details ---\n";
    cout << "Name: " << empName << endl;
    cout << "Employee ID: " << empId << endl;
    cout << "Salary: " << salary << endl;
}

int main() {
    Employee e1;
    e1.getData();
    e1.displayData();
    return 0;
}


OUTPUT:
Enter Employee Name: Ramesh
Enter Employee ID: 2001
Enter Salary: 45000

--- Employee Details ---
Name: Ramesh
Employee ID: 2001
Salary: 45000


RESULT:
Thus, the program successfully implemented member functions defined both inside and outside the class using the scope resolution operator

Program 3: Constructor and Destructor Implementation

AIM:
To write a C++ program that demonstrates the concept of constructor and destructor.

ALGORITHM:
1.Start the program.
2.Create a class named Sample with a data member n.
3.Define a constructor that initializes n when an object is created.
4.Define a destructor that displays a message when an object is destroyed.
5.Create objects of the class inside the main() function.
6.Observe when the constructor and destructor are called.
7.Stop the program.

PROGRAM:
#include <iostream>
using namespace std;

class Sample {
    int n;
public:
    // Constructor
    Sample(int x) {
        n = x;
        cout << "Constructor called. Value of n = " << n << endl;
    }

    // Destructor
    Sample() {
        cout << "Destructor called. Value of n = " << n << endl;
    }
};

int main() {
    cout << "Creating first object...\n";
    Sample s1(10);

    cout << "\nCreating second object...\n";
    Sample s2(20);

    cout << "\nExiting main...\n";
    return 0;
}

OUTPUT:
Creating first object...
Constructor called. Value of n = 10

Creating second object...
Constructor called. Value of n = 20

Exiting main...
Destructor called. Value of n = 20
Destructor called. Value of n = 10

RESULT:
Thus, the program successfully demonstrated the concept of constructor and destructor in C++.

Program 4: Constructor Overloading

AIM:
To write a C++ program that demonstrates constructor overloading — multiple constructors with different parameter lists.

ALGORITHM:
1.Start the program.
2.Create a class named Rectangle with data members length and breadth.
3.Define three constructors:
.Default constructor to initialize both values to 0.
.Parameterized constructor with one argument (square).
.Parameterized constructor with two arguments (rectangle).
4..Create different objects to invoke each constructor.
5.Display the area for each case.
6.Stop the program.

PROGRAM:
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Constructor with one argument
    Rectangle(int l) {
        length = breadth = l;
    }

    // Constructor with two arguments
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;           // Calls default constructor
    Rectangle r2(5);        // Calls constructor with one argument
    Rectangle r3(4, 6);     // Calls constructor with two arguments

    cout << "Area of rectangle r1: " << r1.area() << endl;
    cout << "Area of rectangle r2: " << r2.area() << endl;
    cout << "Area of rectangle r3: " << r3.area() << endl;

    return 0;
}

Area of rectangle r1: 0
Area of rectangle r2: 25
Area of rectangle r3: 24

RESULT:
Thus, the program successfully illustrated constructor overloading in C++.

Program 5: Copy Constructor

AIM:
To write a C++ program that demonstrates the concept of a copy constructor.

ALGORITHM:
1.Start the program.
2.Create a class named Number with a data member num.
3.Define a parameterized constructor to initialize the value.
4.Define a copy constructor that initializes an object using another object of the same class.
5.Create one object using the parameterized constructor and another using the copy constructor.
5.Display the values to verify that copying occurred correctly.
6.Stop the program.

PROGRAM:
#include <iostream>
using namespace std;

class Number {
    int num;

public:
    // Parameterized constructor
    Number(int n) {
        num = n;
        cout << "Parameterized constructor called.\n";
    }

    // Copy constructor
    Number(const Number &obj) {
        num = obj.num;
        cout << "Copy constructor called.\n";
    }

    void display() {
        cout << "Value of num: " << num << endl;
    }
};

int main() {
    Number n1(50);    // Parameterized constructor
    Number n2 = n1;   // Copy constructor

    cout << "\nDisplaying n1: ";
    n1.display();

    cout << "Displaying n2: ";
    n2.display();

    return 0;
}
Parameterized constructor called.
Copy constructor called.

Displaying n1: Value of num: 50
Displaying n2: Value of num: 50

RESULT:
Thus, the program successfully demonstrated the concept of the copy constructor in C++.

Program 6: Inline Function

AIM:
To write a C++ program that demonstrates the concept of an inline function.

ALGORITHM:
1.Start the program.
2.Create an inline function that performs a simple calculation (for example, multiplying two numbers).
3.Use the keyword inline before the function definition.
4.Call the inline function multiple times to observe its execution.
5.Display the results.
6.Stop the program.

PROGRAM:
#include <iostream>
using namespace std;

// Inline function definition
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Multiplication of " << x << " and " << y << " is: " << multiply(x, y) << endl;
    cout << "Multiplication of 3 and 4 is: " << multiply(3, 4) << endl;
    cout << "Multiplication of 5 and 6 is: " << multiply(5, 6) << endl;

    return 0;
}

OUTPUT:
Enter two numbers: 10 20
Multiplication of 10 and 20 is: 200
Multiplication of 3 and 4 is: 12
Multiplication of 5 and 6 is: 30

RESULT:
Thus, the program successfully demonstrated the use of an inline function in C++ to improve performance by reducing function call overhead.

Program 7: Friend Function

AIM:
To write a C++ program to illustrate the use of a friend function to access private data members of a class.

ALGORITHM:

Start the program.

Create a class named Box with private data members length, breadth, and height.

Declare a friend function that can access these private members.

Define the friend function outside the class using the scope resolution operator.

Create an object of Box, input values, and call the friend function to calculate and display the volume.

Stop the program.

--=







































=


