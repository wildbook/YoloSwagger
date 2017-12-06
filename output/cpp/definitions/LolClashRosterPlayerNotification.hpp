#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerDTO.hpp"
#include "RosterDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashRosterPlayerNotification_t {
    LolClashRosterNotifyReason_t notifyReason;
    PlayerDTO_t player;
    RosterDTO_t roster;
    uint64_t sourcePlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerNotification_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["player"] = v.player;
    j["roster"] = v.roster;
    j["sourcePlayerId"] = v.sourcePlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerNotification_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.player = j.at("player").get<PlayerDTO_t>();
    v.roster = j.at("roster").get<RosterDTO_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
  }
}
