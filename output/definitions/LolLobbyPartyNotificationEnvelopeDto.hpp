#ifndef SWAGGER_TYPES_LolLobbyPartyNotificationEnvelopeDto_HPP
#define SWAGGER_TYPES_LolLobbyPartyNotificationEnvelopeDto_HPP
#include <json.hpp>
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyPlayerDto.hpp"
namespace test {
  // 
  struct LolLobbyPartyNotificationEnvelopeDto {
'    // 
    LolLobbyPlayerDto player;
    // 
    LolLobbyQueueRestrictionDto queueRestriction;
  };

  void to_json(nlohmann::json& j, const LolLobbyPartyNotificationEnvelopeDto& v) {
    j["player"] = v.player;
    j["queueRestriction"] = v.queueRestriction;
  }

  void from_json(const nlohmann::json& j, LolLobbyPartyNotificationEnvelopeDto& v) {
    v.player = j.at("player").get<LolLobbyPlayerDto>;
    v.queueRestriction = j.at("queueRestriction").get<LolLobbyQueueRestrictionDto>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyNotificationEnvelopeDto_HPP
