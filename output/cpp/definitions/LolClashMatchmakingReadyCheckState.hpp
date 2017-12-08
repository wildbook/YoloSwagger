#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingReadyCheckState_t {
    PartyNotReady_E = 4,
    StrangerNotReady_E = 3,
    EveryoneReady_E = 2,
    Invalid_E = 0,
    Error_E = 5,
    InProgress_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckState_t::PartyNotReady_E:
        j = "PartyNotReady";
      break;
      case LolClashMatchmakingReadyCheckState_t::StrangerNotReady_E:
        j = "StrangerNotReady";
      break;
      case LolClashMatchmakingReadyCheckState_t::EveryoneReady_E:
        j = "EveryoneReady";
      break;
      case LolClashMatchmakingReadyCheckState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolClashMatchmakingReadyCheckState_t::Error_E:
        j = "Error";
      break;
      case LolClashMatchmakingReadyCheckState_t::InProgress_E:
        j = "InProgress";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyNotReady"){
      v = LolClashMatchmakingReadyCheckState_t::PartyNotReady_E;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolClashMatchmakingReadyCheckState_t::StrangerNotReady_E;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolClashMatchmakingReadyCheckState_t::EveryoneReady_E;
      return;
    }
    if(s == "Invalid"){
      v = LolClashMatchmakingReadyCheckState_t::Invalid_E;
      return;
    }
    if(s == "Error"){
      v = LolClashMatchmakingReadyCheckState_t::Error_E;
      return;
    }
    if(s == "InProgress"){
      v = LolClashMatchmakingReadyCheckState_t::InProgress_E;
      return;
    }
  }
  inline std::string to_string(const LolClashMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckState_t::PartyNotReady_E:
        return "PartyNotReady";
      case LolClashMatchmakingReadyCheckState_t::StrangerNotReady_E:
        return "StrangerNotReady";
      case LolClashMatchmakingReadyCheckState_t::EveryoneReady_E:
        return "EveryoneReady";
      case LolClashMatchmakingReadyCheckState_t::Invalid_E:
        return "Invalid";
      case LolClashMatchmakingReadyCheckState_t::Error_E:
        return "Error";
      case LolClashMatchmakingReadyCheckState_t::InProgress_E:
        return "InProgress";
    }
  }

}
