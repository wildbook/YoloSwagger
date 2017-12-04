#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryEvent_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryEvent_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryEvent {
    // 
    uint16_t itemId;
    // 
    std::string type;
    // 
    uint16_t participantId;
    // 
    uint16_t killerId;
    // 
    uint16_t victimId;
    // 
    uint64_t timestamp;
    // 
    uint16_t skillSlot;
    // 
    std::string towerType;
    // 
    uint16_t teamId;
    // 
    std::vector<uint16_t> assistingParticipantIds;
    // 
    LolMatchHistoryMatchHistoryPosition position;
    // 
    std::string monsterType;
    // 
    std::string monsterSubType;
    // 
    std::string buildingType;
    // 
    std::string laneType;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent& v) {
    j["itemId"] = v.itemId;
    j["type"] = v.type;
    j["participantId"] = v.participantId;
    j["killerId"] = v.killerId;
    j["victimId"] = v.victimId;
    j["timestamp"] = v.timestamp;
    j["skillSlot"] = v.skillSlot;
    j["towerType"] = v.towerType;
    j["teamId"] = v.teamId;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["position"] = v.position;
    j["monsterType"] = v.monsterType;
    j["monsterSubType"] = v.monsterSubType;
    j["buildingType"] = v.buildingType;
    j["laneType"] = v.laneType;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent& v) {
    v.itemId = j.at("itemId").get<uint16_t>;
    v.type = j.at("type").get<std::string>;
    v.participantId = j.at("participantId").get<uint16_t>;
    v.killerId = j.at("killerId").get<uint16_t>;
    v.victimId = j.at("victimId").get<uint16_t>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.skillSlot = j.at("skillSlot").get<uint16_t>;
    v.towerType = j.at("towerType").get<std::string>;
    v.teamId = j.at("teamId").get<uint16_t>;
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>;
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>;
    v.monsterType = j.at("monsterType").get<std::string>;
    v.monsterSubType = j.at("monsterSubType").get<std::string>;
    v.buildingType = j.at("buildingType").get<std::string>;
    v.laneType = j.at("laneType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryEvent_HPP
