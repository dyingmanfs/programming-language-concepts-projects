# Programming Language Concepts Projects

A collection of Haskell and C++ projects exploring different programming paradigms and software design concepts.

The repository covers:

- Functional programming with Haskell
- Recursive tree structures
- Object-oriented programming with C++
- Inheritance and polymorphism
- Dynamic memory management
- Class hierarchies
- Board-game logic

## Projects

### Project 1 – University Organisation Tree in Haskell

A functional programming project that represents a university organisation as a recursive tree structure.

The tree stores organisational units together with their number of employees.

Example hierarchy:

```text
Rectorate
├── General Secretary
├── Social Sciences
│   ├── Economics
│   ├── Political Science
│   └── Education
└── Engineering
    ├── Computer Engineering
    ├── Mechanical Engineering
    └── Electrical Engineering
```

The implementation defines a custom recursive tree data type:

```haskell
data Tree =
    Node (String, Integer) [Tree]
    | Leaf (String, Integer)
```

Main operations include:

- Constructing an organisation tree
- Recursively traversing the tree
- Calculating the total number of employees in a section
- Finding the managing entity of a section
- Finding the complete management path to the root

Example functions:

```text
unitree
sectionsize
managingentity
managelist
```

Concepts demonstrated:

- Functional programming
- Algebraic data types
- Recursive data structures
- Pattern matching
- Recursion
- List processing

---

### Project 2 – C++ University Campus Management System

An object-oriented command-line application for managing buildings and rooms within a university campus.

The application is designed around a hierarchy of C++ classes.

```text
University
    │
    └── Building
           │
           └── Room
                ├── Classroom
                └── Office
```

Main classes:

- `University`
- `Building`
- `Room`
- `Classroom`
- `Office`

The system supports:

- Adding buildings
- Adding classrooms
- Adding offices
- Displaying buildings
- Displaying rooms
- Filtering rooms by type
- Counting classrooms and offices
- Finding available offices
- Calculating total office capacity
- Finding classrooms suitable for a given number of students

### Object-Oriented Concepts

The project demonstrates:

- Classes and objects
- Constructors
- Destructors
- Inheritance
- Virtual functions
- Polymorphism
- Function overloading
- Operator overloading
- Dynamic memory management
- Encapsulation

`Classroom` and `Office` inherit from the base `Room` class.

```text
Room
├── Classroom
└── Office
```

The `University` object manages buildings, while each `Building` manages its collection of rooms.

---

### Project 3 – Gold Rush Alaska

A two-player C++ board game implemented using object-oriented programming.

Players explore a randomly generated grid containing hidden resources and hazards.

Possible elements include:

```text
F → Food
I → Wood
S → Medical Supplies
G → Gold
W → Wolf
B → Bear
```

Players select coordinates on the board to discover hidden elements.

Resources may increase health or score, while wild animals may damage the player.

### Element Hierarchy

The game uses an object-oriented inheritance hierarchy:

```text
Elements
├── Food
├── Wood
├── MedicalSupplies
├── Gold
└── Wild
     ├── Wolf
     └── Bear
```

The base `Elements` class defines common behaviour for resources and hazards.

Derived classes implement element-specific behaviour.

### Player System

Each player maintains:

- Health
- Score
- Gathered resources
- Gold count
- Wood count

Players may receive bonus health based on collected resources.

### Grid System

The `Grid_Class` manages the game board and randomly deploys elements.

It is responsible for:

- Board creation
- Random resource placement
- Resource lookup
- Displaying discovered cells
- Managing hidden cells

### Wild Animal Encounters

When a player encounters a wolf or bear, they predict whether a randomly generated value will be odd or even.

A correct prediction allows the player to escape.

An incorrect prediction causes health damage.

### Game Ending

The game determines the winner according to the players' final scores.

Concepts demonstrated:

- Object-oriented programming
- Inheritance
- Polymorphism
- Virtual functions
- Dynamic allocation
- Randomized gameplay
- Grid-based game logic
- Class composition

---

## Repository Structure

```text
programming-language-concepts-projects/
│
├── project-1-haskell-university-tree/
│   └── src/
│       └── university_tree.hs
│
├── project-2-cpp-campus-management/
│   ├── src/
│   │   ├── main.cpp
│   │   ├── University.cpp
│   │   ├── University.h
│   │   ├── Building.cpp
│   │   ├── Building.h
│   │   ├── Room.cpp
│   │   ├── Room.h
│   │   ├── Office.cpp
│   │   ├── Office.h
│   │   ├── Classroom.cpp
│   │   └── Classroom.h
│   └── CMakeLists.txt
│
├── project-3-cpp-gold-rush/
│   ├── src/
│   │   ├── main.cpp
│   │   ├── Elements.cpp
│   │   ├── Elements.h
│   │   ├── Food.cpp
│   │   ├── Food.h
│   │   ├── Wood.cpp
│   │   ├── Wood.h
│   │   ├── MedicalSupplies.cpp
│   │   ├── MedicalSupplies.h
│   │   ├── Gold.cpp
│   │   ├── Gold.h
│   │   ├── Wild.cpp
│   │   ├── Wild.h
│   │   ├── Wolf.cpp
│   │   ├── Wolf.h
│   │   ├── Bear.cpp
│   │   ├── Bear.h
│   │   ├── Player.cpp
│   │   ├── Player.h
│   │   ├── Grid_Class.cpp
│   │   └── Grid_Class.h
│   └── CMakeLists.txt
│
├── README.md
└── .gitignore
```

## Technologies

- Haskell
- C++
- CMake
- Functional Programming
- Object-Oriented Programming

## Concepts Practiced

- Functional programming
- Recursion
- Algebraic data types
- Tree structures
- Classes and objects
- Inheritance
- Polymorphism
- Virtual functions
- Dynamic memory allocation
- Object composition
- Randomized game logic
- Grid-based systems

## Development Progression

```text
Project 1
Haskell + Functional Programming
Recursive Trees
        ↓
Project 2
C++ Object-Oriented Programming
Inheritance + Polymorphism
        ↓
Project 3
C++ Game Architecture
Class Hierarchies + Game Logic
```

## Academic Context

These projects were developed as part of:

**CNG242 – Programming Language Concepts**

at **METU Northern Cyprus Campus**.

## Contributors

Project 1 and Project 2:

- Furkan Sağlam

Project 3:

- Furkan Sağlam
- Fatih Sağlam

## Keywords

`Haskell` `C++` `Functional Programming` `OOP` `Recursion` `Trees` `Inheritance` `Polymorphism` `CMake` `Game Development`
