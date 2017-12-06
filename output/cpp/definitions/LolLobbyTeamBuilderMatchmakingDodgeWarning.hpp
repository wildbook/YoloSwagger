#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingDodgeWarning_t {
    None_E = 0,
    Penalty_E = 2,
    Warning_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeWarning_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::None_E:
        j = "None";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Penalty_E:
        j = "Penalty";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Warning_E:
        j = "Warning";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeWarning_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning_t::None_E;
      return;
    }
    if(s == "Penalty"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Penalty_E;
      return;
    }
    if(s == "Warning"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Warning_E;
      return;
    }
  }
}
