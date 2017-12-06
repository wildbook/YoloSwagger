#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  struct LolClashPlaymodeRestrictedInfo_t {
    bool isRestricted;
    LolClashPresenceState_t presenceState;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo_t& v) {
    j["isRestricted"] = v.isRestricted;
    j["presenceState"] = v.presenceState;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo_t& v) {
    v.isRestricted = j.at("isRestricted").get<bool>();
    v.presenceState = j.at("presenceState").get<LolClashPresenceState_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
