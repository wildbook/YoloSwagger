#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingReadyCheckState_t {
    Error_E = 5,
    EveryoneReady_E = 2,
    InProgress_E = 1,
    Invalid_E = 0,
    PartyNotReady_E = 4,
    StrangerNotReady_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckState_t::Error_E:
        j = "Error";
      break;
      case LolClashMatchmakingReadyCheckState_t::EveryoneReady_E:
        j = "EveryoneReady";
      break;
      case LolClashMatchmakingReadyCheckState_t::InProgress_E:
        j = "InProgress";
      break;
      case LolClashMatchmakingReadyCheckState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolClashMatchmakingReadyCheckState_t::PartyNotReady_E:
        j = "PartyNotReady";
      break;
      case LolClashMatchmakingReadyCheckState_t::StrangerNotReady_E:
        j = "StrangerNotReady";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Error"){
      v = LolClashMatchmakingReadyCheckState_t::Error_E;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolClashMatchmakingReadyCheckState_t::EveryoneReady_E;
      return;
    }
    if(s == "InProgress"){
      v = LolClashMatchmakingReadyCheckState_t::InProgress_E;
      return;
    }
    if(s == "Invalid"){
      v = LolClashMatchmakingReadyCheckState_t::Invalid_E;
      return;
    }
    if(s == "PartyNotReady"){
      v = LolClashMatchmakingReadyCheckState_t::PartyNotReady_E;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolClashMatchmakingReadyCheckState_t::StrangerNotReady_E;
      return;
    }
  }
}
