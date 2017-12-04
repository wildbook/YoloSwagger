#ifndef SWAGGER_TYPES_LolPersonalizedOffersLoginSessionStates_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPersonalizedOffersLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersLoginSessionStates& v) {
    switch(v) {
      case LolPersonalizedOffersLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPersonalizedOffersLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPersonalizedOffersLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolPersonalizedOffersLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolPersonalizedOffersLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPersonalizedOffersLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPersonalizedOffersLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolPersonalizedOffersLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersLoginSessionStates_HPP