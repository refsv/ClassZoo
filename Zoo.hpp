#include <iostream>
#include <string>

class Animal {
protected:
    std::string m_name;
    std::string m_species;

public:
    Animal(std::string name, std::string species);
    void displayInformation();
};

class Amphibian : public Animal {
public:
    Amphibian(std::string name, std::string species);
    void characteristics();
};

class Fish : public Animal {
public:
    Fish(std::string name, std::string species);
    void characteristics();
};

class Bird : public Animal {
public:
    Bird(std::string name, std::string species);
    void characteristics();
};


class Mammal : public Animal {
public:
    Mammal(std::string name, std::string species);
    void characteristics();
};

class Reptile : public Animal {
public:
    Reptile(std::string name, std::string species);
    void characteristics();
};

class Invertebrate : public Animal {
public:
    Invertebrate(std::string name, std::string species);
    void characteristics();
};
