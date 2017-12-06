#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantFrame_t {
    uint16_t jungleMinionsKilled;
    uint16_t teamScore;
    int32_t currentGold;
    int32_t totalGold;
    uint16_t participantId;
    uint16_t dominionScore;
    uint32_t xp;
    uint16_t level;
    uint16_t minionsKilled;
    LolMatchHistoryMatchHistoryPosition_t position;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    j["jungleMinionsKilled"] = v.jungleMinionsKilled;
    j["teamScore"] = v.teamScore;
    j["currentGold"] = v.currentGold;
    j["totalGold"] = v.totalGold;
    j["participantId"] = v.participantId;
    j["dominionScore"] = v.dominionScore;
    j["xp"] = v.xp;
    j["level"] = v.level;
    j["minionsKilled"] = v.minionsKilled;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>();
    v.teamScore = j.at("teamScore").get<uint16_t>();
    v.currentGold = j.at("currentGold").get<int32_t>();
    v.totalGold = j.at("totalGold").get<int32_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.dominionScore = j.at("dominionScore").get<uint16_t>();
    v.xp = j.at("xp").get<uint32_t>();
    v.level = j.at("level").get<uint16_t>();
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
  }
}
