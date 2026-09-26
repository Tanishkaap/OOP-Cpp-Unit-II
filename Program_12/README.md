# Program 12 - Virtual Base Class

## Aim

To implement a virtual base class and understand the diamond inheritance problem.

## Concept Used

* Multiple Inheritance
* Diamond Inheritance
* Virtual Base Class
* Constructor

## Description

This program demonstrates the use of virtual inheritance to avoid duplicate copies of a base class.

The `Person` class is inherited virtually by both `Student` and `Employee`. The `TeachingAssistant` class then inherits from both of them.

Virtual inheritance ensures that only one copy of the `Person` class is present in the final derived class.

## Expected Output

```text
Name: Riya
```

## Learning Outcome

This program helps in understanding diamond inheritance and how virtual base classes solve the duplicate base class problem.
