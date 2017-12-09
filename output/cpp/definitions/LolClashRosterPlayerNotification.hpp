#pragma once
#include <json.hpp>
#include <optional>
#include "RosterDTO.hpp"
#include "PlayerDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashRosterPlayerNotification_t {
    PlayerDTO_t player;
    LolClashRosterNotifyReason_t notifyReason;
    uint64_t sourcePlayerId;
    RosterDTO_t roster;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerNotification_t& v) {
    j["player"] = v.player;
    j["notifyReason"] = v.notifyReason;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerNotification_t& v) {
    v.player = j.at("player").get<PlayerDTO_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
    v.roster = j.at("roster").get<RosterDTO_t>();
  }
  inline std::string to_string(const LolClashRosterPlayerNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
