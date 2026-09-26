# Program 11 - Abstract Class

## Aim

To implement an abstract class using a pure virtual function in C++.

## Concept Used

* Abstract Class
* Pure Virtual Function
* Inheritance
* Function Overriding

## Description

The `Shape` class contains a pure virtual function called `area()`. Because of this, `Shape` becomes an abstract class.

The `Rectangle` and `Circle` classes inherit from `Shape` and provide their own implementation of the `area()` function.

## Expected Output

```text
Rectangle area: 15
Circle area: 12.5664
```

## Learning Outcome

This program helps in understanding abstract classes and how pure virtual functions are implemented in derived classes.
