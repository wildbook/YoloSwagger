#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantFrame_t {
    uint16_t teamScore;
    uint16_t level;
    uint32_t xp;
    LolMatchHistoryMatchHistoryPosition_t position;
    int32_t totalGold;
    uint16_t dominionScore;
    uint16_t minionsKilled;
    int32_t currentGold;
    uint16_t participantId;
    uint16_t jungleMinionsKilled;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    j["teamScore"] = v.teamScore;
    j["level"] = v.level;
    j["xp"] = v.xp;
    j["position"] = v.position;
    j["totalGold"] = v.totalGold;
    j["dominionScore"] = v.dominionScore;
    j["minionsKilled"] = v.minionsKilled;
    j["currentGold"] = v.currentGold;
    j["participantId"] = v.participantId;
    j["jungleMinionsKilled"] = v.jungleMinionsKilled;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    v.teamScore = j.at("teamScore").get<uint16_t>();
    v.level = j.at("level").get<uint16_t>();
    v.xp = j.at("xp").get<uint32_t>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.totalGold = j.at("totalGold").get<int32_t>();
    v.dominionScore = j.at("dominionScore").get<uint16_t>();
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>();
    v.currentGold = j.at("currentGold").get<int32_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
