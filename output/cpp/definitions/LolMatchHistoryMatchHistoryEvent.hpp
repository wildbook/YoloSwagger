#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent_t {
    uint16_t_t itemId;
    std::string_t type;
    uint16_t_t participantId;
    uint16_t_t killerId;
    uint16_t_t victimId;
    uint64_t_t timestamp;
    uint16_t_t skillSlot;
    std::string_t towerType;
    uint16_t_t teamId;
    std::vector<uint16_t> assistingParticipantIds;
    LolMatchHistoryMatchHistoryPosition_t position;
    std::string_t monsterType;
    std::string_t monsterSubType;
    std::string_t buildingType;
    std::string_t laneType;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent_t& v) {
    v.itemId = j.at("itemId").get<uint16_t_t>();
    v.type = j.at("type").get<std::string_t>();
    v.participantId = j.at("participantId").get<uint16_t_t>();
    v.killerId = j.at("killerId").get<uint16_t_t>();
    v.victimId = j.at("victimId").get<uint16_t_t>();
    v.timestamp = j.at("timestamp").get<uint64_t_t>();
    v.skillSlot = j.at("skillSlot").get<uint16_t_t>();
    v.towerType = j.at("towerType").get<std::string_t>();
    v.teamId = j.at("teamId").get<uint16_t_t>();
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.monsterType = j.at("monsterType").get<std::string_t>();
    v.monsterSubType = j.at("monsterSubType").get<std::string_t>();
    v.buildingType = j.at("buildingType").get<std::string_t>();
    v.laneType = j.at("laneType").get<std::string_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
