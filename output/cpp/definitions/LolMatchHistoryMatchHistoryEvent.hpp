#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent_t {
    uint16_t itemId;
    uint64_t timestamp;
    std::vector<uint16_t> assistingParticipantIds;
    uint16_t victimId;
    uint16_t participantId;
    std::string monsterType;
    std::string towerType;
    uint16_t teamId;
    LolMatchHistoryMatchHistoryPosition_t position;
    uint16_t killerId;
    std::string monsterSubType;
    std::string laneType;
    std::string buildingType;
    std::string type;
    uint16_t skillSlot;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent_t& v) {
    j["itemId"] = v.itemId;
    j["timestamp"] = v.timestamp;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["victimId"] = v.victimId;
    j["participantId"] = v.participantId;
    j["monsterType"] = v.monsterType;
    j["towerType"] = v.towerType;
    j["teamId"] = v.teamId;
    j["position"] = v.position;
    j["killerId"] = v.killerId;
    j["monsterSubType"] = v.monsterSubType;
    j["laneType"] = v.laneType;
    j["buildingType"] = v.buildingType;
    j["type"] = v.type;
    j["skillSlot"] = v.skillSlot;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent_t& v) {
    v.itemId = j.at("itemId").get<uint16_t>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>();
    v.victimId = j.at("victimId").get<uint16_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.monsterType = j.at("monsterType").get<std::string>();
    v.towerType = j.at("towerType").get<std::string>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.killerId = j.at("killerId").get<uint16_t>();
    v.monsterSubType = j.at("monsterSubType").get<std::string>();
    v.laneType = j.at("laneType").get<std::string>();
    v.buildingType = j.at("buildingType").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.skillSlot = j.at("skillSlot").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
