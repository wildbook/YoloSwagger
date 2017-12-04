#ifndef SWAGGER_TYPES_LolRankedStatsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolRankedStatsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolRankedStatsLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsLoginSessionStates& v) {
    switch(v) {
      case LolRankedStatsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolRankedStatsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolRankedStatsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolRankedStatsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolRankedStatsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolRankedStatsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolRankedStatsLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolRankedStatsLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsLoginSessionStates_HPP
