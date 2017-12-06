#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingDodgeWarning_t {
    None_E = 0,
    Penalty_E = 2,
    Warning_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeWarning_t& v) {
    switch(v) {
      case LolClashMatchmakingDodgeWarning_t::None_E:
        j = "None";
      break;
      case LolClashMatchmakingDodgeWarning_t::Penalty_E:
        j = "Penalty";
      break;
      case LolClashMatchmakingDodgeWarning_t::Warning_E:
        j = "Warning";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeWarning_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolClashMatchmakingDodgeWarning_t::None_E;
      return;
    }
    if(s == "Penalty"){
      v = LolClashMatchmakingDodgeWarning_t::Penalty_E;
      return;
    }
    if(s == "Warning"){
      v = LolClashMatchmakingDodgeWarning_t::Warning_E;
      return;
    }
  }
}
