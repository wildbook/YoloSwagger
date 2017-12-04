#ifndef SWAGGER_TYPES_LolClashRosterPhaseInfo_HPP
#define SWAGGER_TYPES_LolClashRosterPhaseInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRosterPhaseInfo {
    // 
    bool isBracketComplete;
    // 
    int64_t phaseId;
    // 
    int32_t period;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo& v) {
    j["isBracketComplete"] = v.isBracketComplete;
    j["phaseId"] = v.phaseId;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo& v) {
    v.isBracketComplete = j.at("isBracketComplete").get<bool>;
    v.phaseId = j.at("phaseId").get<int64_t>;
    v.period = j.at("period").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPhaseInfo_HPP
