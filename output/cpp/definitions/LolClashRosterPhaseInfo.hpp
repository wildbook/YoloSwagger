#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPhaseInfo_t {
    bool isBracketComplete;
    int32_t period;
    int64_t phaseId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo_t& v) {
    j["isBracketComplete"] = v.isBracketComplete;
    j["period"] = v.period;
    j["phaseId"] = v.phaseId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo_t& v) {
    v.isBracketComplete = j.at("isBracketComplete").get<bool>();
    v.period = j.at("period").get<int32_t>();
    v.phaseId = j.at("phaseId").get<int64_t>();
  }
}
