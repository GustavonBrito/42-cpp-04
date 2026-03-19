/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:18:47 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:36:13 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"

void print_section(const std::string& title)
{
    std::cout << "\n==================================" << std::endl;
    std::cout << title << std::endl;
    std::cout << "==================================" << std::endl;
}

int main()
{
    print_section("TEST 1: Basic Polymorphism (from exercise)");
    
    const Animal* j = new Dog("Bobby");
    const Animal* i = new Cat("Whiskers");
    
    std::cout << "\nDog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;
    
    std::cout << "\nCat makes sound: ";
    i->makeSound();
    
    std::cout << "Dog makes sound: ";
    j->makeSound();
    
    delete j;
    delete i;

    print_section("TEST 2: Copy Constructor Test");
    
    Dog originalDog("Max");
    Dog copiedDog = originalDog;
    
    std::cout << "Original Dog name: " << originalDog.getName() << std::endl;
    std::cout << "Copied Dog name: " << copiedDog.getName() << std::endl;
    
    print_section("TEST 3: Assignment Operator Test");
    
    Dog dog1("Buddy");
    Dog dog2("Rex");
    
    std::cout << "Before assignment - dog2 name: " << dog2.getName() << std::endl;
    dog2 = dog1;
    std::cout << "After assignment - dog2 name: " << dog2.getName() << std::endl;

    print_section("TEST 4: Cat Copy and Assignment");
    
    Cat cat1("Mittens");
    Cat cat2 = cat1;
    Cat cat3("Whiskers");
    cat3 = cat1;
    
    std::cout << "cat1 name: " << cat1.getName() << ", type: " << cat1.getType() << std::endl;
    std::cout << "cat2 name: " << cat2.getName() << ", type: " << cat2.getType() << std::endl;
    std::cout << "cat3 name: " << cat3.getName() << ", type: " << cat3.getType() << std::endl;

    print_section("TEST 5: Polymorphic Array");
    
    const Animal* animals[4] = {
        new Dog("Waldo"),
        new Cat("Luna"),
        new Dog("Charlie"),
        new Cat("Oliver")
    };
    
    for (int idx = 0; idx < 4; idx++) {
        std::cout << "Animal " << idx << " (" << animals[idx]->getType() << ") says: ";
        animals[idx]->makeSound();
    }
    
    for (int idx = 0; idx < 4; idx++) {
        delete animals[idx];
    }

    print_section("TEST 6: Wrong Implementation (Without Virtual)");
    
    const WrongAnimal* wrongJ = new WrongCat("FailCat");
    
    std::cout << "\nWrongCat type: " << wrongJ->getType() << std::endl;
    std::cout << "WrongCat makes sound (WRONG): ";
    wrongJ->makeSound();
    
    std::cout << "\nCompare with correct implementation:" << std::endl;
    const Animal* correctI = new Cat("GoodCat");
    std::cout << "Cat type: " << correctI->getType() << std::endl;
    std::cout << "Cat makes sound (CORRECT): ";
    correctI->makeSound();
    
    delete wrongJ;
    delete correctI;

    print_section("TEST 7: More Constructors Tests");
    
    std::cout << "Creating dog with no name:" << std::endl;
    Dog defaultDog;
    std::cout << "Dog name: '" << defaultDog.getName() << "' (empty)" << std::endl;
    std::cout << "Dog type: " << defaultDog.getType() << std::endl;
    
    std::cout << "\nCreating cat with no name:" << std::endl;
    Cat defaultCat;
    std::cout << "Cat name: '" << defaultCat.getName() << "' (empty)" << std::endl;
    std::cout << "Cat type: " << defaultCat.getType() << std::endl;

    print_section("TEST 8: Setters Test");
    
    Dog testDog("OldName");
    std::cout << "Original dog name: " << testDog.getName() << std::endl;
    testDog.setName("NewName");
    std::cout << "Updated dog name: " << testDog.getName() << std::endl;
    
    Cat testCat;
    testCat.setName("AnyName");
    testCat.setType("Cat");
    std::cout << "\nCat name: " << testCat.getName() << std::endl;
    std::cout << "Cat type: " << testCat.getType() << std::endl;

    print_section("TEST 9: Dynamic Memory and Cleanup");
    
    std::cout << "Creating multiple animals..." << std::endl;
    Animal* dynamicDog = new Dog("DynamicDog");
    Animal* dynamicCat = new Cat("DynamicCat");
    
    std::cout << "\nDynamic Dog: " << dynamicDog->getType() << " - ";
    dynamicDog->makeSound();
    
    std::cout << "Dynamic Cat: " << dynamicCat->getType() << " - ";
    dynamicCat->makeSound();
    
    std::cout << "\nCleaning up..." << std::endl;
    delete dynamicDog;
    delete dynamicCat;

    print_section("TEST 10: All Tests Completed Successfully");
    
    return 0;
}
