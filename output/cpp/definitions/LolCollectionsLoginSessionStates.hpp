#ifndef SWAGGER_TYPES_LolCollectionsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolCollectionsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolCollectionsLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSessionStates& v) {
    switch(v) {
      case LolCollectionsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolCollectionsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolCollectionsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolCollectionsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolCollectionsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolCollectionsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolCollectionsLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolCollectionsLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolCollectionsLoginSessionStates_HPP
