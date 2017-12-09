#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantIdentityPlayer.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentities_t {
    uint16_t participantId;
    LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t player;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentities_t& v) {
    j["participantId"] = v.participantId;
    j["player"] = v.player;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentities_t& v) {
    v.participantId = j.at("participantId").get<uint16_t>();
    v.player = j.at("player").get<LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantIdentities_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
