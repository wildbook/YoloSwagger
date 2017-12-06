#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingReadyCheckState_t {
    EveryoneReady_E = 2,
    StrangerNotReady_E = 3,
    Invalid_E = 0,
    PartyNotReady_E = 4,
    Error_E = 5,
    InProgress_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckState_t::EveryoneReady_E:
        j = "EveryoneReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::StrangerNotReady_E:
        j = "StrangerNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::PartyNotReady_E:
        j = "PartyNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::Error_E:
        j = "Error";
      break;
      case LolMatchmakingMatchmakingReadyCheckState_t::InProgress_E:
        j = "InProgress";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "EveryoneReady"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::EveryoneReady_E;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::StrangerNotReady_E;
      return;
    }
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::Invalid_E;
      return;
    }
    if(s == "PartyNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::PartyNotReady_E;
      return;
    }
    if(s == "Error"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::Error_E;
      return;
    }
    if(s == "InProgress"){
      v = LolMatchmakingMatchmakingReadyCheckState_t::InProgress_E;
      return;
    }
  }
}
