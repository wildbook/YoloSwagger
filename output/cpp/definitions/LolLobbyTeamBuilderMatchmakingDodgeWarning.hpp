#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingDodgeWarning_t {
    Penalty_E = 2,
    Warning_E = 1,
    None_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeWarning_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Penalty_E:
        j = "Penalty";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Warning_E:
        j = "Warning";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::None_E:
        j = "None";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeWarning_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Penalty"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Penalty_E;
      return;
    }
    if(s == "Warning"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Warning_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning_t::None_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingDodgeWarning_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Penalty_E:
        return "Penalty";
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::Warning_E:
        return "Warning";
      case LolLobbyTeamBuilderMatchmakingDodgeWarning_t::None_E:
        return "None";
    }
  }

}
