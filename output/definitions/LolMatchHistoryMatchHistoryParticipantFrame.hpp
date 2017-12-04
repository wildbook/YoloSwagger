#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantFrame_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantFrame_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryParticipantFrame {
    // 
    int32_t currentGold;
    // 
    uint16_t dominionScore;
    // 
    uint16_t jungleMinionsKilled;
    // 
    uint16_t level;
    // 
    uint16_t minionsKilled;
    // 
    uint16_t participantId;
    // 
    LolMatchHistoryMatchHistoryPosition position;
    // 
    uint16_t teamScore;
    // 
    int32_t totalGold;
    // 
    uint32_t xp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantFrame& v) {
    j["currentGold"] = v.currentGold;
    j["dominionScore"] = v.dominionScore;
    j["jungleMinionsKilled"] = v.jungleMinionsKilled;
    j["level"] = v.level;
    j["minionsKilled"] = v.minionsKilled;
    j["participantId"] = v.participantId;
    j["position"] = v.position;
    j["teamScore"] = v.teamScore;
    j["totalGold"] = v.totalGold;
    j["xp"] = v.xp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantFrame& v) {
    v.currentGold = j.at("currentGold").get<int32_t>;
    v.dominionScore = j.at("dominionScore").get<uint16_t>;
    v.jungleMinionsKilled = j.at("jungleMinionsKilled").get<uint16_t>;
    v.level = j.at("level").get<uint16_t>;
    v.minionsKilled = j.at("minionsKilled").get<uint16_t>;
    v.participantId = j.at("participantId").get<uint16_t>;
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>;
    v.teamScore = j.at("teamScore").get<uint16_t>;
    v.totalGold = j.at("totalGold").get<int32_t>;
    v.xp = j.at("xp").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipantFrame_HPP
