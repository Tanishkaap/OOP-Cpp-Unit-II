# Program 08 - Constructor and Destructor Order

## Aim

To understand the order of execution of constructors and destructors in inheritance.

## Concept Used

* Constructor
* Destructor
* Inheritance
* Object Lifecycle

## Description

This program demonstrates the order in which constructors and destructors are called when a derived class object is created.

The base class constructor executes first, followed by the derived class constructor.

During destruction, the derived class destructor executes first, followed by the base class destructor.

## Expected Output

```text
Base constructor
Derived constructor
Derived destructor
Base destructor
```

## Learning Outcome

This program helps in understanding the lifecycle of objects in inheritance and the order of constructor and destructor execution.
