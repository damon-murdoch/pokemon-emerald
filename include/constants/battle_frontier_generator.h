#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H

enum {
    BFG_SPREAD_TYPE_OFFENSIVE,
    BFG_SPREAD_TYPE_DEFENSIVE,
};

enum {
    BFG_SPREAD_CATEGORY_PHYSICAL,
    BFG_SPREAD_CATEGORY_SPECIAL, 
    BFG_SPREAD_CATEGORY_MIXED
};

enum {
    BFG_MOVE_SELECT_DEFAULT,                 // Default moves (Only replace if required)
    BFG_MOVE_SELECT_RANDOM,                  // Select moves completely randomly (From Level Up / Teachable Moves)
    BFG_MOVE_SELECT_FILTERED,
    BFG_MOVE_SELECT_FILTERED_ATTACKS_ONLY,
    BFG_MOVE_SELECT_VARIABLE                 // Switch based on VAR()
};

#endif // GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H