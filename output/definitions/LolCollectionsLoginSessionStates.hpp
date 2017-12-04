#ifndef SWAGGER_TYPES_LolCollectionsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolCollectionsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolCollectionsLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolCollectionsLoginSessionStates& v) {
    switch(v) {
      case LolCollectionsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolCollectionsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolCollectionsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolCollectionsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolCollectionsLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolCollectionsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolCollectionsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolCollectionsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolCollectionsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolCollectionsLoginSessionStates_HPP
