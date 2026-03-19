/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:46:23 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

void print_section(const std::string& title)
{
    std::cout << "\n===================================" << std::endl;
    std::cout << title << std::endl;
    std::cout << "===================================" << std::endl;
}

int main()
{
    print_section("TEST 1: Cannot instantiate AAnimal directly (Abstract Class)");

    std::cout << "The following code would NOT compile:" << std::endl;
    std::cout << "  AAnimal animal; // ERROR: Cannot instantiate abstract class" << std::endl;
    std::cout << "  AAnimal* ptr = new AAnimal(); // ERROR: Cannot instantiate abstract class" << std::endl;
    std::cout << "\nThis is enforced at compile-time!" << std::endl;

    print_section("TEST 2: Can instantiate Dog and Cat (Concrete Classes)");

    const AAnimal* j = new Dog("Bobby");
    const AAnimal* i = new Cat("Whiskers");

    std::cout << "\nDog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;

    std::cout << "\nCat makes sound: ";
    i->makeSound();

    std::cout << "Dog makes sound: ";
    j->makeSound();

    delete j;
    delete i;

    print_section("TEST 3: Array of AAnimal pointers (Dog and Cat)");

    const AAnimal* animals[6];

    animals[0] = new Dog("Dog1");
    animals[1] = new Dog("Dog2");
    animals[2] = new Dog("Dog3");
    animals[3] = new Cat("Cat1");
    animals[4] = new Cat("Cat2");
    animals[5] = new Cat("Cat3");

    std::cout << "\nAll animals created. Testing makeSound():" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << animals[i]->getType() << " (" << animals[i]->getName() << "): ";
        animals[i]->makeSound();
    }

    std::cout << "\nDeleting all animals..." << std::endl;
    for (int i = 0; i < 6; i++)
    {
        delete animals[i];
    }

    print_section("TEST 4: Deep Copy Test - Dog Copy Constructor");

    Dog original_dog("OriginalDog");
    original_dog.getBrain()->setIdea(0, "Fetch the ball");
    original_dog.getBrain()->setIdea(1, "Chase the squirrel");

    Dog copied_dog = original_dog;

    std::cout << "Original Dog brain idea[0]: " << original_dog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog brain idea[0]: " << copied_dog.getBrain()->getIdea(0) << std::endl;

    copied_dog.getBrain()->setIdea(0, "Dig a hole");
    std::cout << "\nAfter modifying copied_dog's brain idea[0]:" << std::endl;
    std::cout << "Original Dog brain idea[0]: " << original_dog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog brain idea[0]: " << copied_dog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nBrain pointers are different: " << (original_dog.getBrain() != copied_dog.getBrain() ? "YES (deep copy)" : "NO (shallow copy)") << std::endl;

    print_section("TEST 5: Deep Copy Test - Cat Copy Constructor");

    Cat original_cat("OriginalCat");
    original_cat.getBrain()->setIdea(0, "Nap in the sun");
    original_cat.getBrain()->setIdea(1, "Hunt for mice");

    Cat copied_cat = original_cat;

    std::cout << "Original Cat brain idea[0]: " << original_cat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat brain idea[0]: " << copied_cat.getBrain()->getIdea(0) << std::endl;

    copied_cat.getBrain()->setIdea(0, "Scratch the couch");
    std::cout << "\nAfter modifying copied_cat's brain idea[0]:" << std::endl;
    std::cout << "Original Cat brain idea[0]: " << original_cat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat brain idea[0]: " << copied_cat.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nBrain pointers are different: " << (original_cat.getBrain() != copied_cat.getBrain() ? "YES (deep copy)" : "NO (shallow copy)") << std::endl;

    print_section("TEST 6: Assignment Operator Test - Dog");

    Dog dog1("Dog_A");
    Dog dog2("Dog_B");

    dog1.getBrain()->setIdea(0, "Dog A's idea");
    dog2.getBrain()->setIdea(0, "Dog B's idea");

    std::cout << "Before assignment:" << std::endl;
    std::cout << "dog1 brain idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 brain idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2 = dog1;

    std::cout << "\nAfter assignment (dog2 = dog1):" << std::endl;
    std::cout << "dog1 brain idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 brain idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(0, "Modified dog2's idea");
    std::cout << "\nAfter modifying dog2's brain idea[0]:" << std::endl;
    std::cout << "dog1 brain idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 brain idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nBrain pointers are different: " << (dog1.getBrain() != dog2.getBrain() ? "YES (deep copy)" : "NO (shallow copy)") << std::endl;

    print_section("TEST 7: Assignment Operator Test - Cat");

    Cat cat1("Cat_A");
    Cat cat2("Cat_B");

    cat1.getBrain()->setIdea(0, "Cat A's idea");
    cat2.getBrain()->setIdea(0, "Cat B's idea");

    std::cout << "Before assignment:" << std::endl;
    std::cout << "cat1 brain idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 brain idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    cat2 = cat1;

    std::cout << "\nAfter assignment (cat2 = cat1):" << std::endl;
    std::cout << "cat1 brain idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 brain idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    cat2.getBrain()->setIdea(0, "Modified cat2's idea");
    std::cout << "\nAfter modifying cat2's brain idea[0]:" << std::endl;
    std::cout << "cat1 brain idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 brain idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nBrain pointers are different: " << (cat1.getBrain() != cat2.getBrain() ? "YES (deep copy)" : "NO (shallow copy)") << std::endl;

    print_section("TEST 8: Polymorphism with AAnimal Base Class");

    const AAnimal* mixed_animals[4];

    mixed_animals[0] = new Dog("Polymorphic Dog 1");
    mixed_animals[1] = new Cat("Polymorphic Cat 1");
    mixed_animals[2] = new Dog("Polymorphic Dog 2");
    mixed_animals[3] = new Cat("Polymorphic Cat 2");

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal " << i << " (" << mixed_animals[i]->getType() << "): ";
        mixed_animals[i]->makeSound();
    }

    std::cout << "\nCleaning up mixed animals..." << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete mixed_animals[i];
    }

    print_section("TEST 9: Abstract Class Enforcement");

    std::cout << "The AAnimal class is ABSTRACT because:" << std::endl;
    std::cout << "1. It has a pure virtual method: virtual void makeSound() const = 0;" << std::endl;
    std::cout << "2. Any class with pure virtual methods cannot be instantiated" << std::endl;
    std::cout << "3. Only concrete subclasses (Dog, Cat) can be instantiated" << std::endl;
    std::cout << "\nThis prevents accidental instantiation of incomplete types" << std::endl;

    print_section("TEST 10: All Tests Completed Successfully");

    return 0;
}
