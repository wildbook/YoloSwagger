#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPhaseInfo_t {
    int64_t phaseId;
    int32_t period;
    bool isBracketComplete;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo_t& v) {
    j["phaseId"] = v.phaseId;
    j["period"] = v.period;
    j["isBracketComplete"] = v.isBracketComplete;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo_t& v) {
    v.phaseId = j.at("phaseId").get<int64_t>();
    v.period = j.at("period").get<int32_t>();
    v.isBracketComplete = j.at("isBracketComplete").get<bool>();
  }
}
