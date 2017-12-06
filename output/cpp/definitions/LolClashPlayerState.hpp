#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashPlayerState_t {
    HAS_ROSTER_E = 1,
    NO_ROSTER_E = 0,
    ELIMINATED_E = 3,
    BRACKET_ROSTER_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerState_t& v) {
    switch(v) {
      case LolClashPlayerState_t::HAS_ROSTER_E:
        j = "HAS_ROSTER";
      break;
      case LolClashPlayerState_t::NO_ROSTER_E:
        j = "NO_ROSTER";
      break;
      case LolClashPlayerState_t::ELIMINATED_E:
        j = "ELIMINATED";
      break;
      case LolClashPlayerState_t::BRACKET_ROSTER_E:
        j = "BRACKET_ROSTER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "HAS_ROSTER"){
      v = LolClashPlayerState_t::HAS_ROSTER_E;
      return;
    }
    if(s == "NO_ROSTER"){
      v = LolClashPlayerState_t::NO_ROSTER_E;
      return;
    }
    if(s == "ELIMINATED"){
      v = LolClashPlayerState_t::ELIMINATED_E;
      return;
    }
    if(s == "BRACKET_ROSTER"){
      v = LolClashPlayerState_t::BRACKET_ROSTER_E;
      return;
    }
  }
}
