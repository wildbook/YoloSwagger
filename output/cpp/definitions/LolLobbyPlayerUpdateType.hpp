#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyPlayerUpdateType_t {
    Direct_E = 1,
    ServiceProxy_E = 2,
    None_E = 0,
    RMS_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerUpdateType_t& v) {
    switch(v) {
      case LolLobbyPlayerUpdateType_t::Direct_E:
        j = "Direct";
      break;
      case LolLobbyPlayerUpdateType_t::ServiceProxy_E:
        j = "ServiceProxy";
      break;
      case LolLobbyPlayerUpdateType_t::None_E:
        j = "None";
      break;
      case LolLobbyPlayerUpdateType_t::RMS_E:
        j = "RMS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerUpdateType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Direct"){
      v = LolLobbyPlayerUpdateType_t::Direct_E;
      return;
    }
    if(s == "ServiceProxy"){
      v = LolLobbyPlayerUpdateType_t::ServiceProxy_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyPlayerUpdateType_t::None_E;
      return;
    }
    if(s == "RMS"){
      v = LolLobbyPlayerUpdateType_t::RMS_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyPlayerUpdateType_t& v) {
    switch(v) {
      case LolLobbyPlayerUpdateType_t::Direct_E:
        return "Direct";
      case LolLobbyPlayerUpdateType_t::ServiceProxy_E:
        return "ServiceProxy";
      case LolLobbyPlayerUpdateType_t::None_E:
        return "None";
      case LolLobbyPlayerUpdateType_t::RMS_E:
        return "RMS";
    }
  }

}
