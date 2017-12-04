#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyRemovedFromGameReason_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyRemovedFromGameReason_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLobbyTeamBuilderLobbyRemovedFromGameReason {
'    // 
    Disbanded = 2,
    // 
    GameStartError = 7,
    // 
    Kicked = 1,
    // 
    Left = 3,
    // 
    None = 0,
    // 
    Other = 5,
    // 
    ServiceError = 4,
    // 
    ServiceShutdown = 8,
    // 
    Timeout = 6,
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    switch(v) {
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded:
        j = "Disbanded";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError:
        j = "GameStartError";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked:
        j = "Kicked";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left:
        j = "Left";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::None:
        j = "None";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other:
        j = "Other";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout:
        j = "Timeout";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    const auto s& = j.get<std::string>();
    if(s == "Disbanded"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded;
      return;
    }
    if(s == "GameStartError"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked;
      return;
    }
    if(s == "Left"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left;
      return;
    }
    if(s == "None"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::None;
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
    if(s == "ServiceShutdown"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown;
      return;
    }
    if(s == "Timeout"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyRemovedFromGameReason_HPP
