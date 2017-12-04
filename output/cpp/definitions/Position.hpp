#ifndef SWAGGER_TYPES_Position_HPP
#define SWAGGER_TYPES_Position_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class Position {
    // 
    BOTTOM = 2,
    // 
    TOP = 0,
    // 
    MIDDLE = 1,
    // 
    JUNGLE = 3,
    // 
    UTILITY = 4,
    // 
    UNSELECTED = 6,
    // 
    FILL = 5,
  };

  inline void to_json(nlohmann::json& j, const Position& v) {
    switch(v) {
      case Position::BOTTOM:
        j = "BOTTOM";
      break;
      case Position::TOP:
        j = "TOP";
      break;
      case Position::MIDDLE:
        j = "MIDDLE";
      break;
      case Position::JUNGLE:
        j = "JUNGLE";
      break;
      case Position::UTILITY:
        j = "UTILITY";
      break;
      case Position::UNSELECTED:
        j = "UNSELECTED";
      break;
      case Position::FILL:
        j = "FILL";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, Position& v) {
    const auto& s = j.get<std::string>();
    if(s == "BOTTOM"){
      v = Position::BOTTOM;
      return;
    }
    if(s == "TOP"){
      v = Position::TOP;
      return;
    }
    if(s == "MIDDLE"){
      v = Position::MIDDLE;
      return;
    }
    if(s == "JUNGLE"){
      v = Position::JUNGLE;
      return;
    }
    if(s == "UTILITY"){
      v = Position::UTILITY;
      return;
    }
    if(s == "UNSELECTED"){
      v = Position::UNSELECTED;
      return;
    }
    if(s == "FILL"){
      v = Position::FILL;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_Position_HPP
