#ifndef SWAGGER_TYPES_LolClashRosterPlayerNotification_HPP
#define SWAGGER_TYPES_LolClashRosterPlayerNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
#include "PlayerDTO.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterPlayerNotification {
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    PlayerDTO player;
    // 
    RosterDTO roster;
    // 
    uint64_t sourcePlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerNotification& v) {
    j["notifyReason"] = v.notifyReason;
    j["player"] = v.player;
    j["roster"] = v.roster;
    j["sourcePlayerId"] = v.sourcePlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.player = j.at("player").get<PlayerDTO>;
    v.roster = j.at("roster").get<RosterDTO>;
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPlayerNotification_HPP
