#ifndef SWAGGER_TYPES_LolClashRosterPlayerNotification_HPP
#define SWAGGER_TYPES_LolClashRosterPlayerNotification_HPP
#include <json.hpp>
#include "PlayerDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterPlayerNotification {
    // 
    PlayerDTO player;
    // 
    uint64_t sourcePlayerId;
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    RosterDTO roster;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerNotification& v) {
    j["player"] = v.player;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["notifyReason"] = v.notifyReason;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerNotification& v) {
    v.player = j.at("player").get<PlayerDTO>;
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.roster = j.at("roster").get<RosterDTO>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPlayerNotification_HPP
