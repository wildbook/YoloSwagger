#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  struct LolClashPlaymodeRestrictedInfo_t {
    int64_t tournamentId;
    LolClashPresenceState_t presenceState;
    bool isRestricted;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["presenceState"] = v.presenceState;
    j["isRestricted"] = v.isRestricted;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.presenceState = j.at("presenceState").get<LolClashPresenceState_t>();
    v.isRestricted = j.at("isRestricted").get<bool>();
  }
}
