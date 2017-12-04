#ifndef SWAGGER_TYPES_LolClashRosterPhaseInfo_HPP
#define SWAGGER_TYPES_LolClashRosterPhaseInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRosterPhaseInfo {
    // 
    bool isBracketComplete;
    // 
    int32_t period;
    // 
    int64_t phaseId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPhaseInfo& v) {
    j["isBracketComplete"] = v.isBracketComplete;
    j["period"] = v.period;
    j["phaseId"] = v.phaseId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPhaseInfo& v) {
    v.isBracketComplete = j.at("isBracketComplete").get<bool>;
    v.period = j.at("period").get<int32_t>;
    v.phaseId = j.at("phaseId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPhaseInfo_HPP
