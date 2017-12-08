#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesSeverity_t {
    WARNING_E = 0,
    ALERT_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesSeverity_t& v) {
    switch(v) {
      case LolLeaguesSeverity_t::WARNING_E:
        j = "WARNING";
      break;
      case LolLeaguesSeverity_t::ALERT_E:
        j = "ALERT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesSeverity_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WARNING"){
      v = LolLeaguesSeverity_t::WARNING_E;
      return;
    }
    if(s == "ALERT"){
      v = LolLeaguesSeverity_t::ALERT_E;
      return;
    }
  }
  inline std::string to_string(const LolLeaguesSeverity_t& v) {
    switch(v) {
      case LolLeaguesSeverity_t::WARNING_E:
        return "WARNING";
      case LolLeaguesSeverity_t::ALERT_E:
        return "ALERT";
    }
  }

}
