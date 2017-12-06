#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolKrShutdownLawShutdownLawStatus_t {
    CUT_OFF_E = 2,
    NONE_E = 0,
    WARNING_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolKrShutdownLawShutdownLawStatus_t& v) {
    switch(v) {
      case LolKrShutdownLawShutdownLawStatus_t::CUT_OFF_E:
        j = "CUT_OFF";
      break;
      case LolKrShutdownLawShutdownLawStatus_t::NONE_E:
        j = "NONE";
      break;
      case LolKrShutdownLawShutdownLawStatus_t::WARNING_E:
        j = "WARNING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolKrShutdownLawShutdownLawStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CUT_OFF"){
      v = LolKrShutdownLawShutdownLawStatus_t::CUT_OFF_E;
      return;
    }
    if(s == "NONE"){
      v = LolKrShutdownLawShutdownLawStatus_t::NONE_E;
      return;
    }
    if(s == "WARNING"){
      v = LolKrShutdownLawShutdownLawStatus_t::WARNING_E;
      return;
    }
  }
}
