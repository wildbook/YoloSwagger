#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowWatchPhase_t {
    None_E = 0,
    WatchInProgress_E = 2,
    WatchFailedToLaunch_E = 3,
    WatchStarted_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowWatchPhase_t& v) {
    switch(v) {
      case LolGameflowGameflowWatchPhase_t::None_E:
        j = "None";
      break;
      case LolGameflowGameflowWatchPhase_t::WatchInProgress_E:
        j = "WatchInProgress";
      break;
      case LolGameflowGameflowWatchPhase_t::WatchFailedToLaunch_E:
        j = "WatchFailedToLaunch";
      break;
      case LolGameflowGameflowWatchPhase_t::WatchStarted_E:
        j = "WatchStarted";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowWatchPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolGameflowGameflowWatchPhase_t::None_E;
      return;
    }
    if(s == "WatchInProgress"){
      v = LolGameflowGameflowWatchPhase_t::WatchInProgress_E;
      return;
    }
    if(s == "WatchFailedToLaunch"){
      v = LolGameflowGameflowWatchPhase_t::WatchFailedToLaunch_E;
      return;
    }
    if(s == "WatchStarted"){
      v = LolGameflowGameflowWatchPhase_t::WatchStarted_E;
      return;
    }
  }
}
