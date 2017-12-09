#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyRemovedFromGameReason_t {
    Timeout_E = 6,
    Other_E = 5,
    Kicked_E = 1,
    ServiceError_E = 4,
    None_E = 0,
    Left_E = 3,
    ServiceShutdown_E = 8,
    Disbanded_E = 2,
    GameStartError_E = 7,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyRemovedFromGameReason_t& v) {
    switch(v) {
      case LolLobbyLobbyRemovedFromGameReason_t::Timeout_E:
        j = "Timeout";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::Other_E:
        j = "Other";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::Kicked_E:
        j = "Kicked";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::ServiceError_E:
        j = "ServiceError";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::None_E:
        j = "None";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::Left_E:
        j = "Left";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::ServiceShutdown_E:
        j = "ServiceShutdown";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::Disbanded_E:
        j = "Disbanded";
      break;
      case LolLobbyLobbyRemovedFromGameReason_t::GameStartError_E:
        j = "GameStartError";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyRemovedFromGameReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Timeout"){
      v = LolLobbyLobbyRemovedFromGameReason_t::Timeout_E;
      return;
    }
    if(s == "Other"){
      v = LolLobbyLobbyRemovedFromGameReason_t::Other_E;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyLobbyRemovedFromGameReason_t::Kicked_E;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyLobbyRemovedFromGameReason_t::ServiceError_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyLobbyRemovedFromGameReason_t::None_E;
      return;
    }
    if(s == "Left"){
      v = LolLobbyLobbyRemovedFromGameReason_t::Left_E;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyLobbyRemovedFromGameReason_t::ServiceShutdown_E;
      return;
    }
    if(s == "Disbanded"){
      v = LolLobbyLobbyRemovedFromGameReason_t::Disbanded_E;
      return;
    }
    if(s == "GameStartError"){
      v = LolLobbyLobbyRemovedFromGameReason_t::GameStartError_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyLobbyRemovedFromGameReason_t& v) {
    switch(v) {
      case LolLobbyLobbyRemovedFromGameReason_t::Timeout_E:
        return "Timeout";
      case LolLobbyLobbyRemovedFromGameReason_t::Other_E:
        return "Other";
      case LolLobbyLobbyRemovedFromGameReason_t::Kicked_E:
        return "Kicked";
      case LolLobbyLobbyRemovedFromGameReason_t::ServiceError_E:
        return "ServiceError";
      case LolLobbyLobbyRemovedFromGameReason_t::None_E:
        return "None";
      case LolLobbyLobbyRemovedFromGameReason_t::Left_E:
        return "Left";
      case LolLobbyLobbyRemovedFromGameReason_t::ServiceShutdown_E:
        return "ServiceShutdown";
      case LolLobbyLobbyRemovedFromGameReason_t::Disbanded_E:
        return "Disbanded";
      case LolLobbyLobbyRemovedFromGameReason_t::GameStartError_E:
        return "GameStartError";
    }
  }

}
