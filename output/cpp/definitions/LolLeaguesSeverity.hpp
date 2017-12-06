#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesSeverity_t {
    ALERT_E = 1,
    WARNING_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesSeverity_t& v) {
    switch(v) {
      case LolLeaguesSeverity_t::ALERT_E:
        j = "ALERT";
      break;
      case LolLeaguesSeverity_t::WARNING_E:
        j = "WARNING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesSeverity_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ALERT"){
      v = LolLeaguesSeverity_t::ALERT_E;
      return;
    }
    if(s == "WARNING"){
      v = LolLeaguesSeverity_t::WARNING_E;
      return;
    }
  }
}
