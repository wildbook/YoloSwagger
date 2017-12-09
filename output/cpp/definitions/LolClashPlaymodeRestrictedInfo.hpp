#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  struct LolClashPlaymodeRestrictedInfo_t {
    LolClashPresenceState_t presenceState;
    bool isRestricted;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo_t& v) {
    j["presenceState"] = v.presenceState;
    j["isRestricted"] = v.isRestricted;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo_t& v) {
    v.presenceState = j.at("presenceState").get<LolClashPresenceState_t>();
    v.isRestricted = j.at("isRestricted").get<bool>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
  inline std::string to_string(const LolClashPlaymodeRestrictedInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
