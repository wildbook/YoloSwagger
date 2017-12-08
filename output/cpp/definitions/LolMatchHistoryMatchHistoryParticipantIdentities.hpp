#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentities_t {
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t player;
    uint16_t participantId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentities_t& v) {
    j["player"] = v.player;
    j["participantId"] = v.participantId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentities_t& v) {
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantIdentities_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
