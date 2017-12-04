#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeWarning_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeWarning_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderMatchmakingDodgeWarning {
    // 
    None = 0,
    // 
    Penalty = 2,
    // 
    Warning = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeWarning& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeWarning::None:
        j = "None";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeWarning::Penalty:
        j = "Penalty";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeWarning::Warning:
        j = "Warning";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeWarning& v) {
    const auto s& = j.get<std::string>();
    if(s == "None"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::None;
      return;
    }
    if(s == "Penalty"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::Penalty;
      return;
    }
    if(s == "Warning"){
      v = LolLobbyTeamBuilderMatchmakingDodgeWarning::Warning;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeWarning_HPP
