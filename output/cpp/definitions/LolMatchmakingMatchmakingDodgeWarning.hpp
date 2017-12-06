#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingDodgeWarning_t {
    Penalty_E = 2,
    None_E = 0,
    Warning_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeWarning_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingDodgeWarning_t::Penalty_E:
        j = "Penalty";
      break;
      case LolMatchmakingMatchmakingDodgeWarning_t::None_E:
        j = "None";
      break;
      case LolMatchmakingMatchmakingDodgeWarning_t::Warning_E:
        j = "Warning";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeWarning_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Penalty"){
      v = LolMatchmakingMatchmakingDodgeWarning_t::Penalty_E;
      return;
    }
    if(s == "None"){
      v = LolMatchmakingMatchmakingDodgeWarning_t::None_E;
      return;
    }
    if(s == "Warning"){
      v = LolMatchmakingMatchmakingDodgeWarning_t::Warning_E;
      return;
    }
  }
}
