#include "entity.hpp"
#include <iostream>

void Entity::print_status() {
    std::cout << "Name: " << name_ << "\n";
    std::cout << "Type: " << type_ << "\n";
    std::cout << "HP: " << health_points_ << "\n";
    std::cout << "ATK: " << health_points_ << "\n";
    std::cout << "DEF: " << health_points_ << "\n";
    std::cout << "SPATK: " << health_points_ << "\n";
    std::cout << "SPDEF: " << health_points_ << "\n";
    std::cout << "SPEED: " << health_points_ << "\n";
}