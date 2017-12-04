#ifndef SWAGGER_TYPES_LolKrShutdownLawShutdownLawStatus_HPP
#define SWAGGER_TYPES_LolKrShutdownLawShutdownLawStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolKrShutdownLawShutdownLawStatus {
    // 
    CUT_OFF = 2,
    // 
    NONE = 0,
    // 
    WARNING = 1,
  };

  void to_json(nlohmann::json& j, const LolKrShutdownLawShutdownLawStatus& v) {
    switch(v) {
      case LolKrShutdownLawShutdownLawStatus::CUT_OFF:
        j = "CUT_OFF";
      break;
      case LolKrShutdownLawShutdownLawStatus::NONE:
        j = "NONE";
      break;
      case LolKrShutdownLawShutdownLawStatus::WARNING:
        j = "WARNING";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolKrShutdownLawShutdownLawStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "CUT_OFF"){
      v = LolKrShutdownLawShutdownLawStatus::CUT_OFF;
      return;
    }
    if(s == "NONE"){
      v = LolKrShutdownLawShutdownLawStatus::NONE;
      return;
    }
    if(s == "WARNING"){
      v = LolKrShutdownLawShutdownLawStatus::WARNING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolKrShutdownLawShutdownLawStatus_HPP
