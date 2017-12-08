#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPresenceState.hpp"
namespace leagueapi {
  struct LolClashPlaymodeRestrictedInfo_t {
    LolClashPresenceState_t presenceState;
    int64_t_t tournamentId;
    bool_t isRestricted;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlaymodeRestrictedInfo_t& v) {
    j["presenceState"] = v.presenceState;
    j["tournamentId"] = v.tournamentId;
    j["isRestricted"] = v.isRestricted;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlaymodeRestrictedInfo_t& v) {
    v.presenceState = j.at("presenceState").get<LolClashPresenceState_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
    v.isRestricted = j.at("isRestricted").get<bool_t>();
  }
  inline std::string to_string(const LolClashPlaymodeRestrictedInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
