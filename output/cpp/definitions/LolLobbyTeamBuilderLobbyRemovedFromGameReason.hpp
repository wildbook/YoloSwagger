#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyRemovedFromGameReason_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyRemovedFromGameReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderLobbyRemovedFromGameReason {
    // 
    None = 0,
    // 
    Kicked = 1,
    // 
    GameStartError = 7,
    // 
    ServiceShutdown = 8,
    // 
    Disbanded = 2,
    // 
    Other = 5,
    // 
    ServiceError = 4,
    // 
    Timeout = 6,
    // 
    Left = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    switch(v) {
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::None:
        j = "None";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked:
        j = "Kicked";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError:
        j = "GameStartError";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded:
        j = "Disbanded";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other:
        j = "Other";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout:
        j = "Timeout";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left:
        j = "Left";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::None;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked;
      return;
    }
    if(s == "GameStartError"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown;
      return;
    }
    if(s == "Disbanded"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded;
      return;
    }
    if(s == "Other"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError;
      return;
    }
    if(s == "Timeout"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout;
      return;
    }
    if(s == "Left"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyRemovedFromGameReason_HPP
