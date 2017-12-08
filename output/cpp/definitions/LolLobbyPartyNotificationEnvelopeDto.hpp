#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPlayerDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyNotificationEnvelopeDto_t {
    std::optional<LolLobbyPlayerDto_t> player;
    std::optional<LolLobbyQueueRestrictionDto_t> queueRestriction;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyNotificationEnvelopeDto_t& v) {
    if(v.player)
      j["player"] = *v.player;
    if(v.queueRestriction)
      j["queueRestriction"] = *v.queueRestriction;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyNotificationEnvelopeDto_t& v) {
    if(auto it = j.find("player"); it != j.end() && !it->is_null())
      v.player = it->get<LolLobbyPlayerDto_t>();
    if(auto it = j.find("queueRestriction"); it != j.end() && !it->is_null())
      v.queueRestriction = it->get<LolLobbyQueueRestrictionDto_t>();
  }
  inline std::string to_string(const LolLobbyPartyNotificationEnvelopeDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
