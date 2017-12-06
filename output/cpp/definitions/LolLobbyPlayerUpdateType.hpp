#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyPlayerUpdateType_t {
    Direct_E = 1,
    None_E = 0,
    RMS_E = 3,
    ServiceProxy_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerUpdateType_t& v) {
    switch(v) {
      case LolLobbyPlayerUpdateType_t::Direct_E:
        j = "Direct";
      break;
      case LolLobbyPlayerUpdateType_t::None_E:
        j = "None";
      break;
      case LolLobbyPlayerUpdateType_t::RMS_E:
        j = "RMS";
      break;
      case LolLobbyPlayerUpdateType_t::ServiceProxy_E:
        j = "ServiceProxy";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerUpdateType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Direct"){
      v = LolLobbyPlayerUpdateType_t::Direct_E;
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
    if(s == "ServiceProxy"){
      v = LolLobbyPlayerUpdateType_t::ServiceProxy_E;
      return;
    }
  }
}
