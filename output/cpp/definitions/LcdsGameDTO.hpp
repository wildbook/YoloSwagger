#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsGameDTO_t {
    LcdsPlayerParticipant_t ownerSummary;
    std::vector<LcdsPlayerParticipant_t> teamOne;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    int32_t mapId;
    std::string roomPassword;
    std::string roomName;
    std::vector<std::string> gameMutators;
    int64_t id;
    std::string passbackDataPacket;
    int64_t optimisticLock;
    std::string gameType;
    int32_t gameTypeConfigId;
    std::string passbackUrl;
    std::string gameState;
    std::string gameMode;
    std::string name;
    int32_t maxNumPlayers;
    std::vector<LcdsPlayerParticipant_t> observers;
    std::string spectatorsAllowed;
    std::vector<LcdsPlayerParticipant_t> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO_t& v) {
    j["ownerSummary"] = v.ownerSummary;
    j["teamOne"] = v.teamOne;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["mapId"] = v.mapId;
    j["roomPassword"] = v.roomPassword;
    j["roomName"] = v.roomName;
    j["gameMutators"] = v.gameMutators;
    j["id"] = v.id;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["optimisticLock"] = v.optimisticLock;
    j["gameType"] = v.gameType;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["passbackUrl"] = v.passbackUrl;
    j["gameState"] = v.gameState;
    j["gameMode"] = v.gameMode;
    j["name"] = v.name;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["observers"] = v.observers;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO_t& v) {
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant_t>();
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant_t>>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.id = j.at("id").get<int64_t>();
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant_t>>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant_t>>();
  }
  inline std::string to_string(const LcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
