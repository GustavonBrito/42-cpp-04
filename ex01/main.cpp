/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:46:26 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 16:46:27 by gustavo-lin      ###   ########.fr       */
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
    print_section("TEST 1: Basic Animal Array with Half Dogs, Half Cats");

    const Animal* animals[6];

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

    print_section("TEST 2: Deep Copy Test - Dog Copy Constructor");

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

    print_section("TEST 3: Deep Copy Test - Cat Copy Constructor");

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

    print_section("TEST 4: Assignment Operator Test - Dog");

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

    print_section("TEST 5: Assignment Operator Test - Cat");

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

    print_section("TEST 6: Multiple Ideas Storage and Retrieval");

    Dog dog_with_ideas("Thoughtful Dog");

    dog_with_ideas.getBrain()->setIdea(0, "Chase balls");
    dog_with_ideas.getBrain()->setIdea(1, "Play fetch");
    dog_with_ideas.getBrain()->setIdea(5, "Nap time");
    dog_with_ideas.getBrain()->setIdea(99, "Last idea");

    std::cout << "Dog's ideas:" << std::endl;
    std::cout << "[0]: " << dog_with_ideas.getBrain()->getIdea(0) << std::endl;
    std::cout << "[1]: " << dog_with_ideas.getBrain()->getIdea(1) << std::endl;
    std::cout << "[5]: " << dog_with_ideas.getBrain()->getIdea(5) << std::endl;
    std::cout << "[99]: " << dog_with_ideas.getBrain()->getIdea(99) << std::endl;
    std::cout << "[50] (unset): '" << dog_with_ideas.getBrain()->getIdea(50) << "'" << std::endl;

    print_section("TEST 7: Brain Copy Independence");

    Dog master("Master");
    master.getBrain()->setIdea(0, "Teach tricks");

    Dog student = master;
    student.getBrain()->setIdea(0, "Learn tricks");

    std::cout << "Master's idea[0]: " << master.getBrain()->getIdea(0) << std::endl;
    std::cout << "Student's idea[0]: " << student.getBrain()->getIdea(0) << std::endl;

    print_section("TEST 8: Stack Cleanup and Destruction Order");

    std::cout << "Creating local animals on stack..." << std::endl;
    {
        Dog stack_dog("StackDog");
        Cat stack_cat("StackCat");
        std::cout << "Stack animals created" << std::endl;
    }
    std::cout << "Stack animals destroyed (should see destructors called)" << std::endl;

    print_section("TEST 9: Mixed Dynamic Allocation");

    const Animal* mixed_animals[4];

    mixed_animals[0] = new Dog("Dynamic Dog 1");
    mixed_animals[1] = new Cat("Dynamic Cat 1");
    mixed_animals[2] = new Dog("Dynamic Dog 2");
    mixed_animals[3] = new Cat("Dynamic Cat 2");

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

    print_section("TEST 10: All Tests Completed Successfully");

    return 0;
}
