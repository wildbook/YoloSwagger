#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
namespace leagueapi {
  struct LolClashRosterPlayerNotification_t {
    PlayerDTO_t player;
    uint64_t sourcePlayerId;
    LolClashRosterNotifyReason_t notifyReason;
    RosterDTO_t roster;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterPlayerNotification_t& v) {
    j["player"] = v.player;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["notifyReason"] = v.notifyReason;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterPlayerNotification_t& v) {
    v.player = j.at("player").get<PlayerDTO_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.roster = j.at("roster").get<RosterDTO_t>();
  }
  inline std::string to_string(const LolClashRosterPlayerNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
