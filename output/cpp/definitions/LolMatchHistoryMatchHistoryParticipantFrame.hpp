#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantFrame_t {
    uint16_t participantId;
    LolMatchHistoryMatchHistoryPosition_t position;
    uint16_t jungleMinionsKilled;
    uint16_t teamScore;
    int32_t currentGold;
    uint16_t dominionScore;
    int32_t totalGold;
    uint16_t minionsKilled;
    uint16_t level;
    uint32_t xp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    j["participantId"] = v.participantId;
    j["position"] = v.position;
    j["jungleMinionsKilled"] = v.jungleMinionsKilled;
    j["teamScore"] = v.teamScore;
    j["currentGold"] = v.currentGold;
    j["dominionScore"] = v.dominionScore;
    j["totalGold"] = v.totalGold;
    j["minionsKilled"] = v.minionsKilled;
    j["level"] = v.level;
    j["xp"] = v.xp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    v.participantId = j.at("participantId").get<uint16_t>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>();
    v.teamScore = j.at("teamScore").get<uint16_t>();
    v.currentGold = j.at("currentGold").get<int32_t>();
    v.dominionScore = j.at("dominionScore").get<uint16_t>();
    v.totalGold = j.at("totalGold").get<int32_t>();
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>();
    v.level = j.at("level").get<uint16_t>();
    v.xp = j.at("xp").get<uint32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantFrame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
