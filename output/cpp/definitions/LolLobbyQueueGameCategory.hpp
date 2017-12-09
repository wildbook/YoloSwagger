#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyQueueGameCategory_t {
    VersusAi_E = 3,
    None_E = 0,
    PvP_E = 2,
    Custom_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameCategory_t& v) {
    switch(v) {
      case LolLobbyQueueGameCategory_t::VersusAi_E:
        j = "VersusAi";
      break;
      case LolLobbyQueueGameCategory_t::None_E:
        j = "None";
      break;
      case LolLobbyQueueGameCategory_t::PvP_E:
        j = "PvP";
      break;
      case LolLobbyQueueGameCategory_t::Custom_E:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolLobbyQueueGameCategory_t::VersusAi_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyQueueGameCategory_t::None_E;
      return;
    }
    if(s == "PvP"){
      v = LolLobbyQueueGameCategory_t::PvP_E;
      return;
    }
    if(s == "Custom"){
      v = LolLobbyQueueGameCategory_t::Custom_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyQueueGameCategory_t& v) {
    switch(v) {
      case LolLobbyQueueGameCategory_t::VersusAi_E:
        return "VersusAi";
      case LolLobbyQueueGameCategory_t::None_E:
        return "None";
      case LolLobbyQueueGameCategory_t::PvP_E:
        return "PvP";
      case LolLobbyQueueGameCategory_t::Custom_E:
        return "Custom";
    }
  }

}
