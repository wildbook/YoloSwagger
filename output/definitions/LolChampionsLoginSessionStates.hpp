#ifndef SWAGGER_TYPES_LolChampionsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolChampionsLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolChampionsLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolChampionsLoginSessionStates& v) {
    switch(v) {
      case LolChampionsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolChampionsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolChampionsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolChampionsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolChampionsLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolChampionsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChampionsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolChampionsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChampionsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampionsLoginSessionStates_HPP
