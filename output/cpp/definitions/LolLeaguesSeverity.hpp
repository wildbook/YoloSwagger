#ifndef SWAGGER_TYPES_LolLeaguesSeverity_HPP
#define SWAGGER_TYPES_LolLeaguesSeverity_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesSeverity {
    // 
    WARNING = 0,
    // 
    ALERT = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesSeverity& v) {
    switch(v) {
      case LolLeaguesSeverity::WARNING:
        j = "WARNING";
      break;
      case LolLeaguesSeverity::ALERT:
        j = "ALERT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesSeverity& v) {
    const auto& s = j.get<std::string>();
    if(s == "WARNING"){
      v = LolLeaguesSeverity::WARNING;
      return;
    }
    if(s == "ALERT"){
      v = LolLeaguesSeverity::ALERT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesSeverity_HPP
