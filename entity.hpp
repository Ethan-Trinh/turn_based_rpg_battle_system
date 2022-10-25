#include <iostream>

class Entity {
private:
//  Entity Name + Type
    std::string name_;
    std::string type_;

// Entity Stats
    float health_points_;
    float attack_points_;
    float defense_points_;
    float special_attack_;
    float special_defense_;
    float speed_;

public:
// Constructor
    Entity () : Entity ("Pikachu", "Electric", 25, 25, 25, 25, 25, 25) {}

    Entity (const std::string& name, std::string type, 
            float health_points, float attack_points, float defense_points,
            float special_attack, float special_defense, float speed) 
            : name_(name), type_(type), 
            health_points_(health_points), attack_points_(attack_points), defense_points_(defense_points),
            special_attack_(special_attack), special_defense_(special_defense), speed_(speed) {}

// Get any needed Stat
    float get_HP() const { return health_points_; }
    float get_ATK() const { return attack_points_; }
    float get_DEF() const { return defense_points_; }
    float get_SPATK() const { return special_attack_; }
    float get_SPDEF() const { return special_defense_; }
    float get_SPEED() const { return speed_; }

// print entire Entity status
    void print_status();
};