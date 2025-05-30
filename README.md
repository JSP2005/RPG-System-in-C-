# Simple RPG Battle Game C++

Project Overview

This is a simple console-based RPG battle game written in C++. The player chooses a character class and then battles through a series of enemies: a Fighter, an Archer, and finally a Boss. The game demonstrates basic object-oriented programming concepts such as inheritance, polymorphism, and encapsulation. It also includes a simple turn-based combat system where the player can choose attack types.

-----------------

How to Play

Run the game.

Choose your character class (Swordsman or Mage).

Enter commands to perform normal or bonus attacks.

Defeat enemies one by one.

Survive until you defeat the final Boss to win.

-----------------

Class Descriptions

Character

Description: The abstract base class representing any game character.

Purpose: Provides common attributes (name, stats) and methods (attack, takeDamage) that all characters share.

Key Methods:

attack(Character* target): Virtual method to attack another character.

takeDamage(int dmg): Reduces health based on damage taken.


Player (inherits from Character)

Description: Represents the player-controlled characters.

Purpose: Extends Character with player-specific behavior.

Key Classes:

Swordsman: A melee fighter with balanced health and attack.

Mage: A magic user with unique stats and attacks.


Fighter (inherits from Character)
Description: An enemy character that the player fights first.

Purpose: Demonstrates enemy behavior and stats.

Archer (inherits from Character)
Description: A ranged enemy that the player fights second.

Purpose: Provides variation in enemy types and combat styles.

Boss (inherits from Character)
Description: The final and toughest enemy in the game.

Purpose: Provides the final challenge for the player.

-----------------

Additional Notes

The game uses polymorphism to allow different character types to implement their own versions of attack.

The combat loop continues until either the player or the current enemy’s health reaches zero.

The player can choose between normal and bonus attacks, affecting the damage dealt.
