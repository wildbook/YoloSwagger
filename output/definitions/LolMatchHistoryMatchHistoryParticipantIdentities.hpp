#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentities_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentities_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryParticipantIdentities {
    // 
    uint16_t participantId;
    // 
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer player;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    j["participantId"] = v.participantId;
    j["player"] = v.player;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentities& v) {
    v.participantId = j.at("participantId").get<uint16_t>;
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantIdentities_HPP
