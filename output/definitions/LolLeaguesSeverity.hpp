#ifndef SWAGGER_TYPES_LolLeaguesSeverity_HPP
#define SWAGGER_TYPES_LolLeaguesSeverity_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLeaguesSeverity {
'    // 
    ALERT = 1,
    // 
    WARNING = 0,
  };

  void to_json(nlohmann::json& j, const LolLeaguesSeverity& v) {
    switch(v) {
      case LolLeaguesSeverity::ALERT:
        j = "ALERT";
      break;
      case LolLeaguesSeverity::WARNING:
        j = "WARNING";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLeaguesSeverity& v) {
    const auto s& = j.get<std::string>();
    if(s == "ALERT"){
      v = LolLeaguesSeverity::ALERT;
      return;
    }
    if(s == "WARNING"){
      v = LolLeaguesSeverity::WARNING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesSeverity_HPP
