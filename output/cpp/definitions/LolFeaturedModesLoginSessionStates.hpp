#ifndef SWAGGER_TYPES_LolFeaturedModesLoginSessionStates_HPP
#define SWAGGER_TYPES_LolFeaturedModesLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesLoginSessionStates& v) {
    switch(v) {
      case LolFeaturedModesLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolFeaturedModesLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolFeaturedModesLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolFeaturedModesLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolFeaturedModesLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolFeaturedModesLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolFeaturedModesLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolFeaturedModesLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesLoginSessionStates_HPP
