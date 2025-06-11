# Simple RPG Battle Game C++

This project is a turn-based RPG battle simulator developed in C++. It applies fundamental object-oriented programming (OOP) concepts such as inheritance, polymorphism, method overloading, overriding and encapsulation. The user selects a character class and participates in a combat sequence against three enemy types: a Fighter, an Archer, and a Boss. The game proceeds until either the player defeats all enemies or is defeated.

Problem Statement

The purpose of this project is to simulate a basic combat system using OOP in C++. The player controls a character, chooses between different attack options, and battles enemies with distinct behaviors. This setup mirrors the structure of simple RPG games and is useful for demonstrating how OOP principles can be used to model real-world systems like game mechanics.

Class Structure

The Character class is the base class representing any combat participant in the game. It includes attributes such as name and a Stats object, which handles health and attack values. The Character class also defines a virtual attack method, allowing derived classes to implement their own versions. This class is not meant to be instantiated directly and is therefore an abstract class. 

The Stats class is a utility class used by all characters to encapsulate their health and attack attributes. It provides methods to retrieve and update these values in a controlled manner.

The Player class inherits from Character and adds functionality specific to player-controlled characters. It includes an overloaded attack method that allows an optional bonus damage value. Like Character, this class is not intended to be instantiated directly but provides a foundation for concrete player classes.

Two classes, Swordsman and Mage, inherit from Player. These represent the character types the user can choose to play. They each implement the base attack method and benefit from the attack overload with bonus damage.

On the enemy side, there are three classes: Fighter, Archer, and Boss, which all derive from Character. Each one represents an enemy the player must face and can have distinct stats or attack behavior.

Gameplay Flow

At the beginning of the game, the user is prompted to choose between playing as a Swordsman or a Mage. Once a character is selected, the player faces the Fighter, the Archer, and finally the Boss in sequential battles. During each turn, the player is given the option to perform a normal attack or a bonus attack. After the player's action, the enemy retaliates if still alive. This cycle continues until either the player defeats all enemies or their health reaches zero.

Object-Oriented Concepts Demonstrated

This project effectively demonstrates several key OOP concepts. Inheritance is used to define a class hierarchy where different character types share common functionality. Polymorphism allows the game loop to interact with characters using base class pointers, enabling dynamic behavior based on the actual object type. Method overloading is used in the Player class to allow different attack methods. Override is used to ensure that the attack method in the derived classes correctly overrides the virtual attack method declared in the base class Character. Encapsulation is enforced through the Stats class, which provides controlled access to the characters' health and attack values.


![Simple RPG Battle Game C++ UML drawio](https://github.com/user-attachments/assets/670bbcba-d6fb-45e6-8604-0a4bf57afd52)


