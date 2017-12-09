#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPhaseInfo_t {
    int32_t period;
    int64_t phaseId;
    bool isBracketComplete;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo_t& v) {
    j["period"] = v.period;
    j["phaseId"] = v.phaseId;
    j["isBracketComplete"] = v.isBracketComplete;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo_t& v) {
    v.period = j.at("period").get<int32_t>();
    v.phaseId = j.at("phaseId").get<int64_t>();
    v.isBracketComplete = j.at("isBracketComplete").get<bool>();
  }
  inline std::string to_string(const LolClashRosterPhaseInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
