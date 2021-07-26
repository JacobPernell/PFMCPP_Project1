#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       dog
//  action 1:   barks
dog.bark();
//  action 2:   begs for treats
dog.begForTreats();
//  action 3:   sleeps
dog.sleep();

//  2)
//  Noun:       phone
//  action 1:   rings
phone.ring();
//  action 2:   send text message
phone.sendTextMessage();
//  action 3:   power turns off
phone.powerOff();
 
//  3)
//  Noun:       TV
//  action 1:   turn on
tv.turnOn();
//  action 2:   increase volume
tv.increaseVolume();
//  action 3:   change channel
tv.changeChannel();
 
//  4)
//  Noun:       person
//  action 1:   sleep
person.sleep();
//  action 2:   eat
person.eat();
//  action 3:   run
person.run();
 
//  5)
//  Noun:       airplane
//  action 1:   take off
airplane.takeOff();
//  action 2:   engage landing gear
airplane.engageLandingGear();
//  action 3:   do a barrel roll
airplane.barrelRoll();

//  6)
//  Noun:       chef
//  action 1:   cut food
chef.cutIngredient();
//  action 2:   stir soup
chef.stirSoup();
//  action 3:   turn on stove
chef.turnOnStove();
 
//  7)
//  Noun:       horse
//  action 1: neigh
horse.neigh();
//  action 2:   gallop
horse.gallop();
//  action 3:   graze
horse.graze();
 
//  8)
//  Noun:       C++
//  action 1:   compile
cpp.compile();
//  action 2:   throw error
cpp.throwError();
//  action 3:   run compiled program
cpp.runProgram();
 
//  9)
//  Noun:       camera
//  action 1:   start recording
camera.startRecord();
//  action 2:   take photo
camera.takePhoto();
//  action 3:   change aperture settings
camera.changeAperture();

//  10)
//  Noun:       GitHub
//  action 1:   create new repo
github.createRepo();
//  action 2:   send PR
github.pullRequest();
//  action 3:   merge a PR
github.mergePullRequest();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
