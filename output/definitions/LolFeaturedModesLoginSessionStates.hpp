#ifndef SWAGGER_TYPES_LolFeaturedModesLoginSessionStates_HPP
#define SWAGGER_TYPES_LolFeaturedModesLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesLoginSessionStates& v) {
    switch(v) {
      case LolFeaturedModesLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolFeaturedModesLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolFeaturedModesLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolFeaturedModesLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolFeaturedModesLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolFeaturedModesLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolFeaturedModesLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolFeaturedModesLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesLoginSessionStates_HPP
