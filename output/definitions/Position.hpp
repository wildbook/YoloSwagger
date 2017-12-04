#ifndef SWAGGER_TYPES_Position_HPP
#define SWAGGER_TYPES_Position_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class Position {
    // 
    BOTTOM = 2,
    // 
    FILL = 5,
    // 
    JUNGLE = 3,
    // 
    MIDDLE = 1,
    // 
    TOP = 0,
    // 
    UNSELECTED = 6,
    // 
    UTILITY = 4,
  };

  inline void to_json(nlohmann::json& j, const Position& v) {
    switch(v) {
      case Position::BOTTOM:
        j = "BOTTOM";
      break;
      case Position::FILL:
        j = "FILL";
      break;
      case Position::JUNGLE:
        j = "JUNGLE";
      break;
      case Position::MIDDLE:
        j = "MIDDLE";
      break;
      case Position::TOP:
        j = "TOP";
      break;
      case Position::UNSELECTED:
        j = "UNSELECTED";
      break;
      case Position::UTILITY:
        j = "UTILITY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, Position& v) {
    const auto s& = j.get<std::string>();
    if(s == "BOTTOM"){
      v = Position::BOTTOM;
      return;
    }
    if(s == "FILL"){
      v = Position::FILL;
      return;
    }
    if(s == "JUNGLE"){
      v = Position::JUNGLE;
      return;
    }
    if(s == "MIDDLE"){
      v = Position::MIDDLE;
      return;
    }
    if(s == "TOP"){
      v = Position::TOP;
      return;
    }
    if(s == "UNSELECTED"){
      v = Position::UNSELECTED;
      return;
    }
    if(s == "UTILITY"){
      v = Position::UTILITY;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_Position_HPP
