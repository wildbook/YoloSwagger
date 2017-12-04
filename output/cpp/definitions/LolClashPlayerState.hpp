#ifndef SWAGGER_TYPES_LolClashPlayerState_HPP
#define SWAGGER_TYPES_LolClashPlayerState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashPlayerState {
    // 
    NO_ROSTER = 0,
    // 
    HAS_ROSTER = 1,
    // 
    ELIMINATED = 3,
    // 
    BRACKET_ROSTER = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerState& v) {
    switch(v) {
      case LolClashPlayerState::NO_ROSTER:
        j = "NO_ROSTER";
      break;
      case LolClashPlayerState::HAS_ROSTER:
        j = "HAS_ROSTER";
      break;
      case LolClashPlayerState::ELIMINATED:
        j = "ELIMINATED";
      break;
      case LolClashPlayerState::BRACKET_ROSTER:
        j = "BRACKET_ROSTER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerState& v) {
    const auto& s = j.get<std::string>();
    if(s == "NO_ROSTER"){
      v = LolClashPlayerState::NO_ROSTER;
      return;
    }
    if(s == "HAS_ROSTER"){
      v = LolClashPlayerState::HAS_ROSTER;
      return;
    }
    if(s == "ELIMINATED"){
      v = LolClashPlayerState::ELIMINATED;
      return;
    }
    if(s == "BRACKET_ROSTER"){
      v = LolClashPlayerState::BRACKET_ROSTER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerState_HPP
