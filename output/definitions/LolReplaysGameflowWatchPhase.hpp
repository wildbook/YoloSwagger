#ifndef SWAGGER_TYPES_LolReplaysGameflowWatchPhase_HPP
#define SWAGGER_TYPES_LolReplaysGameflowWatchPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolReplaysGameflowWatchPhase {
    // 
    None = 0,
    // 
    WatchFailedToLaunch = 3,
    // 
    WatchInProgress = 2,
    // 
    WatchStarted = 1,
  };

  void to_json(nlohmann::json& j, const LolReplaysGameflowWatchPhase& v) {
    switch(v) {
      case LolReplaysGameflowWatchPhase::None:
        j = "None";
      break;
      case LolReplaysGameflowWatchPhase::WatchFailedToLaunch:
        j = "WatchFailedToLaunch";
      break;
      case LolReplaysGameflowWatchPhase::WatchInProgress:
        j = "WatchInProgress";
      break;
      case LolReplaysGameflowWatchPhase::WatchStarted:
        j = "WatchStarted";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolReplaysGameflowWatchPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "None"){
      v = LolReplaysGameflowWatchPhase::None;
      return;
    }
    if(s == "WatchFailedToLaunch"){
      v = LolReplaysGameflowWatchPhase::WatchFailedToLaunch;
      return;
    }
    if(s == "WatchInProgress"){
      v = LolReplaysGameflowWatchPhase::WatchInProgress;
      return;
    }
    if(s == "WatchStarted"){
      v = LolReplaysGameflowWatchPhase::WatchStarted;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolReplaysGameflowWatchPhase_HPP
