#ifndef SWAGGER_TYPES_LolStoreLoginSessionStates_HPP
#define SWAGGER_TYPES_LolStoreLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolStoreLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolStoreLoginSessionStates& v) {
    switch(v) {
      case LolStoreLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolStoreLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolStoreLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolStoreLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolStoreLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolStoreLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolStoreLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolStoreLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolStoreLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolStoreLoginSessionStates_HPP
