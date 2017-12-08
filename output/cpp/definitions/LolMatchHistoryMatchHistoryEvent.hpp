#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent_t {
    uint16_t teamId;
    std::string buildingType;
    uint64_t timestamp;
    uint16_t itemId;
    std::vector<uint16_t> assistingParticipantIds;
    LolMatchHistoryMatchHistoryPosition_t position;
    std::string towerType;
    std::string laneType;
    uint16_t participantId;
    std::string type;
    std::string monsterSubType;
    std::string monsterType;
    uint16_t killerId;
    uint16_t victimId;
    uint16_t skillSlot;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent_t& v) {
    j["teamId"] = v.teamId;
    j["buildingType"] = v.buildingType;
    j["timestamp"] = v.timestamp;
    j["itemId"] = v.itemId;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["position"] = v.position;
    j["towerType"] = v.towerType;
    j["laneType"] = v.laneType;
    j["participantId"] = v.participantId;
    j["type"] = v.type;
    j["monsterSubType"] = v.monsterSubType;
    j["monsterType"] = v.monsterType;
    j["killerId"] = v.killerId;
    j["victimId"] = v.victimId;
    j["skillSlot"] = v.skillSlot;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent_t& v) {
    v.teamId = j.at("teamId").get<uint16_t>();
    v.buildingType = j.at("buildingType").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.itemId = j.at("itemId").get<uint16_t>();
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.towerType = j.at("towerType").get<std::string>();
    v.laneType = j.at("laneType").get<std::string>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.type = j.at("type").get<std::string>();
    v.monsterSubType = j.at("monsterSubType").get<std::string>();
    v.monsterType = j.at("monsterType").get<std::string>();
    v.killerId = j.at("killerId").get<uint16_t>();
    v.victimId = j.at("victimId").get<uint16_t>();
    v.skillSlot = j.at("skillSlot").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
