#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class Position_t {
    MIDDLE_E = 1,
    UTILITY_E = 4,
    UNSELECTED_E = 6,
    TOP_E = 0,
    FILL_E = 5,
    JUNGLE_E = 3,
    BOTTOM_E = 2,
  };

  inline void to_json(nlohmann::json& j, const Position_t& v) {
    switch(v) {
      case Position_t::MIDDLE_E:
        j = "MIDDLE";
      break;
      case Position_t::UTILITY_E:
        j = "UTILITY";
      break;
      case Position_t::UNSELECTED_E:
        j = "UNSELECTED";
      break;
      case Position_t::TOP_E:
        j = "TOP";
      break;
      case Position_t::FILL_E:
        j = "FILL";
      break;
      case Position_t::JUNGLE_E:
        j = "JUNGLE";
      break;
      case Position_t::BOTTOM_E:
        j = "BOTTOM";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, Position_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "MIDDLE"){
      v = Position_t::MIDDLE_E;
      return;
    }
    if(s == "UTILITY"){
      v = Position_t::UTILITY_E;
      return;
    }
    if(s == "UNSELECTED"){
      v = Position_t::UNSELECTED_E;
      return;
    }
    if(s == "TOP"){
      v = Position_t::TOP_E;
      return;
    }
    if(s == "FILL"){
      v = Position_t::FILL_E;
      return;
    }
    if(s == "JUNGLE"){
      v = Position_t::JUNGLE_E;
      return;
    }
    if(s == "BOTTOM"){
      v = Position_t::BOTTOM_E;
      return;
    }
  }
  inline std::string to_string(const Position_t& v) {
    switch(v) {
      case Position_t::MIDDLE_E:
        return "MIDDLE";
      case Position_t::UTILITY_E:
        return "UTILITY";
      case Position_t::UNSELECTED_E:
        return "UNSELECTED";
      case Position_t::TOP_E:
        return "TOP";
      case Position_t::FILL_E:
        return "FILL";
      case Position_t::JUNGLE_E:
        return "JUNGLE";
      case Position_t::BOTTOM_E:
        return "BOTTOM";
    }
  }

}
