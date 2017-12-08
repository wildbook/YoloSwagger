#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPhaseInfo_t {
    bool_t isBracketComplete;
    int64_t_t phaseId;
    int32_t_t period;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo_t& v) {
    j["isBracketComplete"] = v.isBracketComplete;
    j["phaseId"] = v.phaseId;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo_t& v) {
    v.isBracketComplete = j.at("isBracketComplete").get<bool_t>();
    v.phaseId = j.at("phaseId").get<int64_t_t>();
    v.period = j.at("period").get<int32_t_t>();
  }
  inline std::string to_string(const LolClashRosterPhaseInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
