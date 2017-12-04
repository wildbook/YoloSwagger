#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryEvent_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryEvent_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryEvent {
    // 
    std::vector<uint16_t> assistingParticipantIds;
    // 
    std::string buildingType;
    // 
    uint16_t itemId;
    // 
    uint16_t killerId;
    // 
    std::string laneType;
    // 
    std::string monsterSubType;
    // 
    std::string monsterType;
    // 
    uint16_t participantId;
    // 
    LolMatchHistoryMatchHistoryPosition position;
    // 
    uint16_t skillSlot;
    // 
    uint16_t teamId;
    // 
    uint64_t timestamp;
    // 
    std::string towerType;
    // 
    std::string type;
    // 
    uint16_t victimId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent& v) {
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["buildingType"] = v.buildingType;
    j["itemId"] = v.itemId;
    j["killerId"] = v.killerId;
    j["laneType"] = v.laneType;
    j["monsterSubType"] = v.monsterSubType;
    j["monsterType"] = v.monsterType;
    j["participantId"] = v.participantId;
    j["position"] = v.position;
    j["skillSlot"] = v.skillSlot;
    j["teamId"] = v.teamId;
    j["timestamp"] = v.timestamp;
    j["towerType"] = v.towerType;
    j["type"] = v.type;
    j["victimId"] = v.victimId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent& v) {
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>;
    v.buildingType = j.at("buildingType").get<std::string>;
    v.itemId = j.at("itemId").get<uint16_t>;
    v.killerId = j.at("killerId").get<uint16_t>;
    v.laneType = j.at("laneType").get<std::string>;
    v.monsterSubType = j.at("monsterSubType").get<std::string>;
    v.monsterType = j.at("monsterType").get<std::string>;
    v.participantId = j.at("participantId").get<uint16_t>;
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition>;
    v.skillSlot = j.at("skillSlot").get<uint16_t>;
    v.teamId = j.at("teamId").get<uint16_t>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.towerType = j.at("towerType").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.victimId = j.at("victimId").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryEvent_HPP
