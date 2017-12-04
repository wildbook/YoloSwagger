#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantFrame_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantFrame_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryParticipantFrame {
    // 
    int32_t totalGold;
    // 
    uint16_t teamScore;
    // 
    uint16_t participantId;
    // 
    uint16_t level;
    // 
    int32_t currentGold;
    // 
    uint16_t minionsKilled;
    // 
    uint16_t dominionScore;
    // 
    LolMatchHistoryMatchHistoryPosition position;
    // 
    uint32_t xp;
    // 
    uint16_t jungleMinionsKilled;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
    j["totalGold"] = v.totalGold;
    j["teamScore"] = v.teamScore;
    j["participantId"] = v.participantId;
    j["level"] = v.level;
    j["currentGold"] = v.currentGold;
    j["minionsKilled"] = v.minionsKilled;
    j["dominionScore"] = v.dominionScore;
    j["position"] = v.position;
    j["xp"] = v.xp;
    j["jungleMinionsKilled"] = v.jungleMinionsKilled;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
    v.totalGold = j.at("totalGold").get<int32_t>;
    v.teamScore = j.at("teamScore").get<uint16_t>;
    v.participantId = j.at("participantId").get<uint16_t>;
    v.level = j.at("level").get<uint16_t>;
    v.currentGold = j.at("currentGold").get<int32_t>;
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>;
    v.dominionScore = j.at("dominionScore").get<uint16_t>;
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>;
    v.xp = j.at("xp").get<uint32_t>;
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantFrame_HPP
