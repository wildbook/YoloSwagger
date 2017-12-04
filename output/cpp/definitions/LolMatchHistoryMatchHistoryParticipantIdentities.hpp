#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentities_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentities_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryParticipantIdentities {
    // 
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer player;
    // 
    uint16_t participantId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    j["player"] = v.player;
    j["participantId"] = v.participantId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer>;
    v.participantId = j.at("participantId").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentities_HPP
