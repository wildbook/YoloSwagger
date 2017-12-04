#ifndef SWAGGER_TYPES_LolLobbyLobbyRemovedFromGameReason_HPP
#define SWAGGER_TYPES_LolLobbyLobbyRemovedFromGameReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyRemovedFromGameReason {
    // 
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

  void to_json(nlohmann::json& j, const LolLobbyLobbyRemovedFromGameReason& v) {
    switch(v) {
      case LolLobbyLobbyRemovedFromGameReason::Disbanded:
        j = "Disbanded";
      break;
      case LolLobbyLobbyRemovedFromGameReason::GameStartError:
        j = "GameStartError";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Kicked:
        j = "Kicked";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Left:
        j = "Left";
      break;
      case LolLobbyLobbyRemovedFromGameReason::None:
        j = "None";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Other:
        j = "Other";
      break;
      case LolLobbyLobbyRemovedFromGameReason::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyLobbyRemovedFromGameReason::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Timeout:
        j = "Timeout";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyRemovedFromGameReason& v) {
    const auto s& = j.get<std::string>();
    if(s == "Disbanded"){
      v = LolLobbyLobbyRemovedFromGameReason::Disbanded;
      return;
    }
    if(s == "GameStartError"){
      v = LolLobbyLobbyRemovedFromGameReason::GameStartError;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyLobbyRemovedFromGameReason::Kicked;
      return;
    }
    if(s == "Left"){
      v = LolLobbyLobbyRemovedFromGameReason::Left;
      return;
    }
    if(s == "None"){
      v = LolLobbyLobbyRemovedFromGameReason::None;
      return;
    }
    if(s == "Other"){
      v = LolLobbyLobbyRemovedFromGameReason::Other;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyLobbyRemovedFromGameReason::ServiceError;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyLobbyRemovedFromGameReason::ServiceShutdown;
      return;
    }
    if(s == "Timeout"){
      v = LolLobbyLobbyRemovedFromGameReason::Timeout;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyRemovedFromGameReason_HPP
