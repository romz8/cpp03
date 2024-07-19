# C++ Module 03 - Inheritance

## Overview

This repository contains the implementations for Module 03 of the 42 School's C++ curriculum, focusing on inheritance, a fundamental concept in object-oriented programming that allows a class to inherit properties and behaviors from another class.

## Status

Validated on 24/01/2024. Grade: 100%.

## General Information

- **Compiler used**: c++
- **Compilation flags**: -Wall -Wextra -Werror -std=c++98
- **Standard**: C++98 for compliance and simplicity, per the 42 School curriculum's requirements.

## Projects

This module is divided into four exercises, each emphasizing different aspects of C++ inheritance.

#### Exercise 00: Aaaaand... OPEN!
- **Directory**: `ex00/`
- **Files**: `Makefile`, `main.cpp`, `ClapTrap.{h, hpp}`, `ClapTrap.cpp`
- **Description**: Implement a class `ClapTrap` with the following attributes:
  - `Name`: passed as a parameter to the constructor.
  - `Hit points` (10): represents the health of the ClapTrap.
  - `Energy points` (10).
  - `Attack damage` (0).
  Add public member functions to simulate attacking, taking damage, and repairing, with appropriate energy and health checks.
- **Key Concepts**: Class definition, member functions, constructors, destructors, encapsulation.

#### Exercise 01: Serena, my love!
- **Directory**: `ex01/`
- **Files**: `Makefile`, `main.cpp`, `ClapTrap.{h, hpp}`, `ClapTrap.cpp`, `ScavTrap.{h, hpp}`, `ScavTrap.cpp`
- **Description**: Create a derived class `ScavTrap` that inherits from `ClapTrap`. Override the attack function and add a new member function `guardGate`.
  - `Hit points` (100)
  - `Energy points` (50)
  - `Attack damage` (20)
- **Key Concepts**: Inheritance, method overriding, constructor/destructor chaining.

#### Exercise 02: Repetitive work
- **Directory**: `ex02/`
- **Files**: `Makefile`, `main.cpp`, `ClapTrap.{h, hpp}`, `ClapTrap.cpp`, `ScavTrap.{h, hpp}`, `ScavTrap.cpp`, `FragTrap.{h, hpp}`, `FragTrap.cpp`
- **Description**: Implement another derived class `FragTrap` with different attributes and an additional function `highFivesGuys`.
  - `Hit points` (100)
  - `Energy points` (100)
  - `Attack damage` (30)
- **Key Concepts**: Further inheritance practice, method overriding, creating multiple derived classes.

#### Exercise 03: Now it’s weird!
- **Directory**: `ex03/`
- **Files**: `Makefile`, `main.cpp`, `ClapTrap.{h, hpp}`, `ClapTrap.cpp`, `ScavTrap.{h, hpp}`, `ScavTrap.cpp`, `FragTrap.{h, hpp}`, `FragTrap.cpp`, `DiamondTrap.{h, hpp}`, `DiamondTrap.cpp`
- **Objective**: Create a class `DiamondTrap` that inherits from both `ScavTrap` and `FragTrap`. It should demonstrate multiple inheritance and utilize member functions from both base classes.
  - `Name`: private attribute with a unique naming convention.
  - Inherit attributes from `FragTrap` and `ScavTrap`.
  - Add a unique function `whoAmI` to display the object's identity.
- **Key Concepts**: Multiple inheritance, scope resolution, constructor initialization lists.

### Compilation and Usage

Each exercise comes with a `Makefile` facilitating the compilation process. Use the following make commands to compile and clean each project:

```sh
cd ex00 && make && ./open
cd ex01 && make && ./serena
cd ex02 && make && ./repetitive
cd ex03 && make && ./weird
```
