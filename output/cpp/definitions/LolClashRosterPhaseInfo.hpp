#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterPhaseInfo_t {
    int32_t period;
    bool isBracketComplete;
    int64_t phaseId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo_t& v) {
    j["period"] = v.period;
    j["isBracketComplete"] = v.isBracketComplete;
    j["phaseId"] = v.phaseId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo_t& v) {
    v.period = j.at("period").get<int32_t>();
    v.isBracketComplete = j.at("isBracketComplete").get<bool>();
    v.phaseId = j.at("phaseId").get<int64_t>();
  }
  inline std::string to_string(const LolClashRosterPhaseInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
