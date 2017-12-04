#ifndef SWAGGER_TYPES_LolHonorV2LoginSessionStates_HPP
#define SWAGGER_TYPES_LolHonorV2LoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolHonorV2LoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2LoginSessionStates& v) {
    switch(v) {
      case LolHonorV2LoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolHonorV2LoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolHonorV2LoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolHonorV2LoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2LoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolHonorV2LoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolHonorV2LoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolHonorV2LoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolHonorV2LoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolHonorV2LoginSessionStates_HPP
