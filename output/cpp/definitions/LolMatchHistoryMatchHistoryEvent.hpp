#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent_t {
    std::string type;
    uint16_t skillSlot;
    std::string towerType;
    uint16_t participantId;
    uint64_t timestamp;
    std::string monsterType;
    std::string buildingType;
    uint16_t killerId;
    std::vector<uint16_t> assistingParticipantIds;
    std::string laneType;
    uint16_t victimId;
    uint16_t itemId;
    std::string monsterSubType;
    uint16_t teamId;
    LolMatchHistoryMatchHistoryPosition_t position;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent_t& v) {
    j["type"] = v.type;
    j["skillSlot"] = v.skillSlot;
    j["towerType"] = v.towerType;
    j["participantId"] = v.participantId;
    j["timestamp"] = v.timestamp;
    j["monsterType"] = v.monsterType;
    j["buildingType"] = v.buildingType;
    j["killerId"] = v.killerId;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["laneType"] = v.laneType;
    j["victimId"] = v.victimId;
    j["itemId"] = v.itemId;
    j["monsterSubType"] = v.monsterSubType;
    j["teamId"] = v.teamId;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent_t& v) {
    v.type = j.at("type").get<std::string>();
    v.skillSlot = j.at("skillSlot").get<uint16_t>();
    v.towerType = j.at("towerType").get<std::string>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.monsterType = j.at("monsterType").get<std::string>();
    v.buildingType = j.at("buildingType").get<std::string>();
    v.killerId = j.at("killerId").get<uint16_t>();
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>();
    v.laneType = j.at("laneType").get<std::string>();
    v.victimId = j.at("victimId").get<uint16_t>();
    v.itemId = j.at("itemId").get<uint16_t>();
    v.monsterSubType = j.at("monsterSubType").get<std::string>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
  }
}
