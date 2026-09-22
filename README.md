# OOP-CPP-UNIT-3
# OOP C++ Assignment - Unit III

- **Student Name:** Parth Bhupesh Lohi
- **PRN:** 125UME1165
- **Class/Division:** S.Y-C
- **Course Name:** Object-Oriented Programming (OOPs)
- **Unit Covered:** Unit III

---

## List of Programs (Real-Time Applications)
1. **Real-Time Application 1:** Vehicle Rental & Inheritance Hierarchy System
2. **Real-Time Application 2:** Employee Payroll & Polymorphic Salary Calculator
3. **Real-Time Application 3:** Inventory File Management & Stream Handling System

---

## Brief Description of Each Program

### Program 01
🚗 Vehicle Rental & Inheritance Hierarchy System
An object-oriented C++ program demonstrating multi-level and hierarchical inheritance to manage different types of vehicles in a rental management system.

🚀 Key Features
* **Inheritance Hierarchy:** Utilizes a base class `Vehicle` and derived classes like `Car` and `Bike` to promote code reusability.
* **Access Specifiers:** Implements `protected` members to allow smooth data access within derived classes while maintaining encapsulation.
* **Constructor Chaining:** Demonstrates the invocation of base class constructors from derived class constructors for proper initialization.
* **Function Overriding:** Implements base-class method overriding in derived classes to calculate rental pricing based on specific vehicle types.

📊 Sample Output
=== Vehicle Rental System ===
Vehicle ID: V001 | Type: Car | Model: Sedan | Rental Rate/Day: Rs. 2500
Vehicle ID: V002 | Type: Bike | Model: Sports | Rental Rate/Day: Rs. 800

Total Rental Cost for Car (5 days): Rs. 12500

---

### Program 02
💳 Employee Payroll & Polymorphic Salary Calculator
A robust C++ program utilizing runtime polymorphism, virtual functions, and abstract classes to compute salaries for different categories of employees.

🚀 Key Features
* **Abstract Classes & Pure Virtual Functions:** Declares a pure virtual function `calculateSalary()` inside an abstract base class `Employee`.
* **Runtime Polymorphism:** Employs base class pointers/references to invoke overridden methods dynamically based on the object type at runtime (`FullTimeEmployee`, `PartTimeEmployee`).
* **Virtual Destructors:** Implements virtual destructors to ensure proper memory cleanup and prevent memory leaks when deleting derived objects through base pointers.
* **Dynamic Behavior:** Seamlessly processes heterogeneous collections of employees through a uniform interface.

📊 Sample Output
=== Employee Payroll Report ===
Name: Amit Patil | Type: Full-Time | Net Salary: Rs. 45000
Name: Sneha Kulkarni | Type: Part-Time | Net Salary: Rs. 12000

Processing polymorphic salary calculations successfully...

---

### Program 03
📦 Inventory File Management & Stream Handling System
An object-oriented C++ program designed to write, read, and manipulate product inventory data persistently using file input/output streams (`fstream`).

🚀 Key Features
* **File Stream Operations:** Utilizes `ofstream` for writing inventory data to files and `ifstream` for reading and displaying records.
* **Error Handling:** Validates whether files open successfully before performing read or write operations to prevent application crashes.
* **Data Persistence:** Stores structural object data onto secondary storage so records remain intact across program executions.
* **Formatting & Stream Methods:** Uses manipulator functions (`setw`, `left`) and loop conditions (`eof()`) to parse file streams efficiently.

📊 Sample Output
=== Writing Inventory Data to File ===
Record successfully written to 'inventory.txt'.

=== Reading Inventory Data from File ===
ID       Product Name     Price      Stock
-------------------------------------------
101      Keyboard         1200       25
102      Mouse            450        60
