#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  struct LolClashPlaymodeRestrictedInfo_t {
    int64_t tournamentId;
    bool isRestricted;
    LolClashPresenceState_t presenceState;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["isRestricted"] = v.isRestricted;
    j["presenceState"] = v.presenceState;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.isRestricted = j.at("isRestricted").get<bool>();
    v.presenceState = j.at("presenceState").get<LolClashPresenceState_t>();
  }
  inline std::string to_string(const LolClashPlaymodeRestrictedInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
