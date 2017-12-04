#ifndef SWAGGER_TYPES_LolItemSetsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolItemSetsLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolItemSetsLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolItemSetsLoginSessionStates& v) {
    switch(v) {
      case LolItemSetsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolItemSetsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolItemSetsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolItemSetsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolItemSetsLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolItemSetsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolItemSetsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolItemSetsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolItemSetsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolItemSetsLoginSessionStates_HPP
