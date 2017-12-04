#ifndef SWAGGER_TYPES_LolChampSelectLegacyLoginSessionStates_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectLegacyLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSessionStates& v) {
    switch(v) {
      case LolChampSelectLegacyLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolChampSelectLegacyLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolChampSelectLegacyLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolChampSelectLegacyLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolChampSelectLegacyLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChampSelectLegacyLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChampSelectLegacyLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolChampSelectLegacyLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyLoginSessionStates_HPP
