#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent_t {
    std::string laneType;
    std::string monsterSubType;
    LolMatchHistoryMatchHistoryPosition_t position;
    uint16_t skillSlot;
    std::string type;
    uint64_t timestamp;
    uint16_t killerId;
    uint16_t participantId;
    uint16_t itemId;
    std::vector<uint16_t> assistingParticipantIds;
    std::string monsterType;
    std::string towerType;
    uint16_t victimId;
    uint16_t teamId;
    std::string buildingType;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent_t& v) {
    j["laneType"] = v.laneType;
    j["monsterSubType"] = v.monsterSubType;
    j["position"] = v.position;
    j["skillSlot"] = v.skillSlot;
    j["type"] = v.type;
    j["timestamp"] = v.timestamp;
    j["killerId"] = v.killerId;
    j["participantId"] = v.participantId;
    j["itemId"] = v.itemId;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["monsterType"] = v.monsterType;
    j["towerType"] = v.towerType;
    j["victimId"] = v.victimId;
    j["teamId"] = v.teamId;
    j["buildingType"] = v.buildingType;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent_t& v) {
    v.laneType = j.at("laneType").get<std::string>();
    v.monsterSubType = j.at("monsterSubType").get<std::string>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.skillSlot = j.at("skillSlot").get<uint16_t>();
    v.type = j.at("type").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.killerId = j.at("killerId").get<uint16_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.itemId = j.at("itemId").get<uint16_t>();
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>();
    v.monsterType = j.at("monsterType").get<std::string>();
    v.towerType = j.at("towerType").get<std::string>();
    v.victimId = j.at("victimId").get<uint16_t>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.buildingType = j.at("buildingType").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
