#include "Zoo.hpp"

Animal::Animal( std::string name, std::string species)
    : m_name(name), m_species(species) {}

void Animal::displayInformation() { 
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Species: " << m_species << std::endl;
}

Amphibian::Amphibian( std::string name, std::string species)
    : Animal(name, species) {}

void Amphibian::characteristics() {
    std::cout << "Amphibian characteristics: Lives both in water and on land" << std::endl;
}

Fish::Fish( std::string name, std::string species)
    : Animal(name, species) {}

void Fish::characteristics() {
    std::cout << "Fish characteristics: Lives in water, breathes through gills" << std::endl;
}

Bird::Bird( std::string name, std::string species)
    : Animal(name, species) {}

void Bird::characteristics() {
    std::cout << "Bird characteristics: Has feathers and can fly" << std::endl;
}

Mammal::Mammal( std::string name, std::string species)
    : Animal(name, species) {}

void Mammal::characteristics() {
    std::cout << "Mammal characteristics: Gives birth to live young and nurses them with milk" << std::endl;
}

Reptile::Reptile( std::string name, std::string species)
    : Animal(name, species) {}

void Reptile::characteristics() {
    std::cout << "Reptile characteristics: Cold-blooded, covered in scales" << std::endl;
}

Invertebrate::Invertebrate( std::string name, std::string species)
    : Animal(name, species) {}

void Invertebrate::characteristics() {
    std::cout << "Invertebrate characteristics: No backbone or internal skeleton" << std::endl;
}
