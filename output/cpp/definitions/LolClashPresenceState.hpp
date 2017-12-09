#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashPresenceState_t {
    NONE_E = 0,
    LOCKED_IN_E = 1,
    SCOUTING_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashPresenceState_t& v) {
    switch(v) {
      case LolClashPresenceState_t::NONE_E:
        j = "NONE";
      break;
      case LolClashPresenceState_t::LOCKED_IN_E:
        j = "LOCKED_IN";
      break;
      case LolClashPresenceState_t::SCOUTING_E:
        j = "SCOUTING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashPresenceState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "NONE"){
      v = LolClashPresenceState_t::NONE_E;
      return;
    }
    if(s == "LOCKED_IN"){
      v = LolClashPresenceState_t::LOCKED_IN_E;
      return;
    }
    if(s == "SCOUTING"){
      v = LolClashPresenceState_t::SCOUTING_E;
      return;
    }
  }
  inline std::string to_string(const LolClashPresenceState_t& v) {
    switch(v) {
      case LolClashPresenceState_t::NONE_E:
        return "NONE";
      case LolClashPresenceState_t::LOCKED_IN_E:
        return "LOCKED_IN";
      case LolClashPresenceState_t::SCOUTING_E:
        return "SCOUTING";
    }
  }

}
