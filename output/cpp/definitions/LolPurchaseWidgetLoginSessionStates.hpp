#ifndef SWAGGER_TYPES_LolPurchaseWidgetLoginSessionStates_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPurchaseWidgetLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetLoginSessionStates& v) {
    switch(v) {
      case LolPurchaseWidgetLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPurchaseWidgetLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPurchaseWidgetLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolPurchaseWidgetLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolPurchaseWidgetLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPurchaseWidgetLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPurchaseWidgetLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolPurchaseWidgetLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetLoginSessionStates_HPP
