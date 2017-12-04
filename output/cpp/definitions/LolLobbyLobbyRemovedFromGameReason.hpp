#ifndef SWAGGER_TYPES_LolLobbyLobbyRemovedFromGameReason_HPP
#define SWAGGER_TYPES_LolLobbyLobbyRemovedFromGameReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyRemovedFromGameReason {
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

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyRemovedFromGameReason& v) {
    switch(v) {
      case LolLobbyLobbyRemovedFromGameReason::None:
        j = "None";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Kicked:
        j = "Kicked";
      break;
      case LolLobbyLobbyRemovedFromGameReason::GameStartError:
        j = "GameStartError";
      break;
      case LolLobbyLobbyRemovedFromGameReason::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Disbanded:
        j = "Disbanded";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Other:
        j = "Other";
      break;
      case LolLobbyLobbyRemovedFromGameReason::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Timeout:
        j = "Timeout";
      break;
      case LolLobbyLobbyRemovedFromGameReason::Left:
        j = "Left";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyRemovedFromGameReason& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolLobbyLobbyRemovedFromGameReason::None;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyLobbyRemovedFromGameReason::Kicked;
      return;
    }
    if(s == "GameStartError"){
      v = LolLobbyLobbyRemovedFromGameReason::GameStartError;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyLobbyRemovedFromGameReason::ServiceShutdown;
      return;
    }
    if(s == "Disbanded"){
      v = LolLobbyLobbyRemovedFromGameReason::Disbanded;
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
    if(s == "Timeout"){
      v = LolLobbyLobbyRemovedFromGameReason::Timeout;
      return;
    }
    if(s == "Left"){
      v = LolLobbyLobbyRemovedFromGameReason::Left;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyRemovedFromGameReason_HPP
