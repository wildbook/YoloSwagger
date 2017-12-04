#ifndef SWAGGER_TYPES_LolClashPlaymodeRestrictedInfo_HPP
#define SWAGGER_TYPES_LolClashPlaymodeRestrictedInfo_HPP
#include <json.hpp>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  // 
  struct LolClashPlaymodeRestrictedInfo {
    // 
    bool isRestricted;
    // 
    LolClashPresenceState presenceState;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo& v) {
    j["isRestricted"] = v.isRestricted;
    j["presenceState"] = v.presenceState;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo& v) {
    v.isRestricted = j.at("isRestricted").get<bool>;
    v.presenceState = j.at("presenceState").get<LolClashPresenceState>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlaymodeRestrictedInfo_HPP
