#ifndef SWAGGER_TYPES_LolClashPlaymodeRestrictedInfo_HPP
#define SWAGGER_TYPES_LolClashPlaymodeRestrictedInfo_HPP
#include <json.hpp>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  // 
  struct LolClashPlaymodeRestrictedInfo {
    // 
    LolClashPresenceState presenceState;
    // 
    int64_t tournamentId;
    // 
    bool isRestricted;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo& v) {
    j["presenceState"] = v.presenceState;
    j["tournamentId"] = v.tournamentId;
    j["isRestricted"] = v.isRestricted;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo& v) {
    v.presenceState = j.at("presenceState").get<LolClashPresenceState>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.isRestricted = j.at("isRestricted").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlaymodeRestrictedInfo_HPP
