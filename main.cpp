#include <iostream>
#include "Zoo.hpp"

int main() {
    int categoryChoice;
    int animalChoice;

    std::cout << "Select a category of animals:" << std::endl;
    std::cout << "1. Amphibians" << std::endl;
    std::cout << "2. Fish" << std::endl;
    std::cout << "3. Birds" << std::endl;
    std::cout << "4. Mammals" << std::endl;
    std::cout << "5. Reptiles" << std::endl;
    std::cout << "6. Invertebrates" << std::endl;

    std::cout << "Enter the number of the category: ";
    std::cin >> categoryChoice;

    while (categoryChoice < 1 || categoryChoice > 6) {
        std::cout << "Invalid input. Please enter a number between 1 and 6: ";
        std::cin >> categoryChoice;
    }

    std::string animalNames[6][3] = {
        {"Frog", "Salamander", "Toad"},
        {"Goldfish", "Piranha", "Sea Trout"},
        {"Eagle", "Tit", "Flamingo"},
        {"Lion", "Koala", "Elephant"},
        {"Cobra", "Turtle", "Iguana"},
        {"Spider", "Jellyfish", "Coral"}
    };
    std::string animalUkrainianNames[6][3] = {
        {"Лягушка", "Саламандра", "Жаба"},
        {"Золота рибка", "Піранья", "Морська форель"},
        {"Орел", "Синиця", "Фламінго"},
        {"Лев", "Коала", "Слон"},
        {"Кобра", "Черепаха", "Ігуана"},
        {"Павук", "Медуза", "Корал"}
    };

    std::cout << "Select an animal:" << std::endl;

    for (int i = 1; i <= 3; i++) {
    std::cout << i << ". " << animalNames[categoryChoice-1][i-1] << std::endl;
}


    std::cout << "Enter the number of the animal: ";
    std::cin >> animalChoice;

    while (animalChoice < 1 || animalChoice > 3) {
        std::cout << "Invalid input. Please enter a number between 1 and 3: ";
        std::cin >> animalChoice;
    }


    std::string selectedAnimalName = animalNames[categoryChoice-1][animalChoice-1];
    std::string selectedAnimalUkrainianName = animalUkrainianNames[categoryChoice-1][animalChoice-1];

    if (categoryChoice == 1) {
        Amphibian selectedAmphibian(selectedAnimalName, selectedAnimalUkrainianName);
        selectedAmphibian.displayInformation();
        selectedAmphibian.characteristics();
    } else if (categoryChoice == 2) {
        Fish selectedFish(selectedAnimalName, selectedAnimalUkrainianName);
        selectedFish.displayInformation();
        selectedFish.characteristics();
    } else if (categoryChoice == 3) {
        Bird selectedBird(selectedAnimalName, selectedAnimalUkrainianName);
        selectedBird.displayInformation();
        selectedBird.characteristics();
    } else if (categoryChoice == 4) {
        Mammal selectedMammal(selectedAnimalName, selectedAnimalUkrainianName);
        selectedMammal.displayInformation();
        selectedMammal.characteristics();
    } else if (categoryChoice == 5) {
        Reptile selectedReptile(selectedAnimalName, selectedAnimalUkrainianName);
        selectedReptile.displayInformation();
        selectedReptile.characteristics();
    } else if (categoryChoice == 6) {
        Invertebrate selectedInvertebrate(selectedAnimalName, selectedAnimalUkrainianName);
        selectedInvertebrate.displayInformation();
        selectedInvertebrate.characteristics();
    }

    return 0;
}
