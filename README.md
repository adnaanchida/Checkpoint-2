# Checkpoint-2 

# Instructions

Create files TwoAttackSupe.h and TwoAttackSupe.cpp that collectively contain the following functionality:
The class name will be TwoAttackSupe
The class will be a base class for what you see below in the next blurb
The class has one member variable, an integer value that maintains a health value
Its only constructor takes one parameter, which is the health value
Make sure to set up a virtual destructor since this is a base class
Develop a function called IsDefeated() which returns a bool
Return true if the health value is less than or equal to 0
Return false otherwise
Develop a virtual function called GetPunched() which doesn't return anything
Reduce the health by 5 every time the function gets called
Develop a virtual function called GetKicked() which doesn't return anything
Reduce the health randomly in the range of [0-10] every time the function gets called
Create files ThreeAttackSupe.h and ThreeAttackSupe.cpp that collectively contain the following functionality:
The class name will be ThreeAttackSupe
The class is a dervied class, with TwoAttackSupe being its base class
The class has one extra member variable, an integer value that maintains a stamina value
Its only constructor takes two parameters, the health value and the stamina
Make sure to call the base class constructor to set up the health
Set up the stamina value in the derived class constructor
Develop a virtual function called GetPunched() which doesn't return anything
Increase the stamina by 2, then reduce the health by the stamina value
Develop a virtual function called GetKicked() which doesn't return anything
Increase the stamina by 1, then add the stamina value to the health
Develop a virtual function called GetSuperPowered() which doesn't return anything
Reduce stamina to exactly 0, then reduce health by 20
Now the runner file should run without issue, and you can simulate the battle of a lifetime as often as you would like
Here is expected output, and your program might be slightly different but should not be by much if it is
Muscles Wins: 71.9
Bones Wins:   28.1
