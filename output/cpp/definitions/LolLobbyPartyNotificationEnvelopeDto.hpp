#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPlayerDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyNotificationEnvelopeDto_t {
    std::optional<LolLobbyQueueRestrictionDto_t> queueRestriction;
    std::optional<LolLobbyPlayerDto_t> player;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyNotificationEnvelopeDto_t& v) {
    if(v.queueRestriction)
      j["queueRestriction"] = *v.queueRestriction;
    if(v.player)
      j["player"] = *v.player;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyNotificationEnvelopeDto_t& v) {
    if(auto it = j.find("queueRestriction"); it != j.end() && !it->is_null())
      v.queueRestriction = it->get<LolLobbyQueueRestrictionDto_t>();
    if(auto it = j.find("player"); it != j.end() && !it->is_null())
      v.player = it->get<LolLobbyPlayerDto_t>();
  }
  inline std::string to_string(const LolLobbyPartyNotificationEnvelopeDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
