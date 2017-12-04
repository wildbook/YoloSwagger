#ifndef SWAGGER_TYPES_LolGameflowGameflowWatchPhase_HPP
#define SWAGGER_TYPES_LolGameflowGameflowWatchPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowGameflowWatchPhase {
    // 
    None = 0,
    // 
    WatchStarted = 1,
    // 
    WatchInProgress = 2,
    // 
    WatchFailedToLaunch = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowWatchPhase& v) {
    switch(v) {
      case LolGameflowGameflowWatchPhase::None:
        j = "None";
      break;
      case LolGameflowGameflowWatchPhase::WatchStarted:
        j = "WatchStarted";
      break;
      case LolGameflowGameflowWatchPhase::WatchInProgress:
        j = "WatchInProgress";
      break;
      case LolGameflowGameflowWatchPhase::WatchFailedToLaunch:
        j = "WatchFailedToLaunch";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowWatchPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolGameflowGameflowWatchPhase::None;
      return;
    }
    if(s == "WatchStarted"){
      v = LolGameflowGameflowWatchPhase::WatchStarted;
      return;
    }
    if(s == "WatchInProgress"){
      v = LolGameflowGameflowWatchPhase::WatchInProgress;
      return;
    }
    if(s == "WatchFailedToLaunch"){
      v = LolGameflowGameflowWatchPhase::WatchFailedToLaunch;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowWatchPhase_HPP
