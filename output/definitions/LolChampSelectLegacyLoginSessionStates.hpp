#ifndef SWAGGER_TYPES_LolChampSelectLegacyLoginSessionStates_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolChampSelectLegacyLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSessionStates& v) {
    switch(v) {
      case LolChampSelectLegacyLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolChampSelectLegacyLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolChampSelectLegacyLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolChampSelectLegacyLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolChampSelectLegacyLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChampSelectLegacyLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolChampSelectLegacyLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChampSelectLegacyLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyLoginSessionStates_HPP
