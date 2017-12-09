#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingReadyCheckState_t {
    Invalid_E = 0,
    StrangerNotReady_E = 3,
    PartyNotReady_E = 4,
    EveryoneReady_E = 2,
    InProgress_E = 1,
    Error_E = 5,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::StrangerNotReady_E:
        j = "StrangerNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::PartyNotReady_E:
        j = "PartyNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::EveryoneReady_E:
        j = "EveryoneReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::InProgress_E:
        j = "InProgress";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::Error_E:
        j = "Error";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::Invalid_E;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::StrangerNotReady_E;
      return;
    }
    if(s == "PartyNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::PartyNotReady_E;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::EveryoneReady_E;
      return;
    }
    if(s == "InProgress"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::InProgress_E;
      return;
    }
    if(s == "Error"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::Error_E;
      return;
    }
  }
  inline std::string to_string(const LolMatchmakingMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckState_t::Invalid_E:
        return "Invalid";
      case LolMatchmakingMatchmakingReadyCheckState_t::StrangerNotReady_E:
        return "StrangerNotReady";
      case LolMatchmakingMatchmakingReadyCheckState_t::PartyNotReady_E:
        return "PartyNotReady";
      case LolMatchmakingMatchmakingReadyCheckState_t::EveryoneReady_E:
        return "EveryoneReady";
      case LolMatchmakingMatchmakingReadyCheckState_t::InProgress_E:
        return "InProgress";
      case LolMatchmakingMatchmakingReadyCheckState_t::Error_E:
        return "Error";
    }
  }

}
