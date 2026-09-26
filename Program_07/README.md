# Program 07 - Multiple Inheritance Ambiguity

## Aim

To understand and resolve ambiguity in multiple inheritance using the scope-resolution operator.

## Concept Used

* Multiple Inheritance
* Ambiguity
* Scope-Resolution Operator `::`
* Base Class Functions

## Description

In this program, both `Academic` and `Sports` classes contain a function named `display()`.

When the `Student` class inherits from both classes, calling `display()` directly creates ambiguity.

The scope-resolution operator is used to clearly specify which base class function should be called.

## Learning Outcome

This program helps in understanding ambiguity in multiple inheritance and how the scope-resolution operator can be used to resolve it.
