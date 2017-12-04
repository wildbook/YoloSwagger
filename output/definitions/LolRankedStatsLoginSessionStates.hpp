#ifndef SWAGGER_TYPES_LolRankedStatsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolRankedStatsLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolRankedStatsLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolRankedStatsLoginSessionStates& v) {
    switch(v) {
      case LolRankedStatsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolRankedStatsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolRankedStatsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolRankedStatsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolRankedStatsLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolRankedStatsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolRankedStatsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolRankedStatsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolRankedStatsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsLoginSessionStates_HPP
