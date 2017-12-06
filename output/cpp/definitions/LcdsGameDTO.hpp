#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsGameDTO_t {
    std::string gameType;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    int32_t maxNumPlayers;
    std::string roomPassword;
    std::vector<LcdsPlayerParticipant_t> observers;
    std::vector<LcdsPlayerParticipant_t> teamOne;
    std::string passbackUrl;
    std::string gameMode;
    std::string passbackDataPacket;
    std::string roomName;
    std::string gameState;
    std::string spectatorsAllowed;
    LcdsPlayerParticipant_t ownerSummary;
    std::vector<LcdsPlayerParticipant_t> teamTwo;
    int32_t mapId;
    int64_t id;
    int64_t optimisticLock;
    std::string name;
    std::vector<std::string> gameMutators;
    int32_t gameTypeConfigId;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO_t& v) {
    j["gameType"] = v.gameType;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["roomPassword"] = v.roomPassword;
    j["observers"] = v.observers;
    j["teamOne"] = v.teamOne;
    j["passbackUrl"] = v.passbackUrl;
    j["gameMode"] = v.gameMode;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["roomName"] = v.roomName;
    j["gameState"] = v.gameState;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["ownerSummary"] = v.ownerSummary;
    j["teamTwo"] = v.teamTwo;
    j["mapId"] = v.mapId;
    j["id"] = v.id;
    j["optimisticLock"] = v.optimisticLock;
    j["name"] = v.name;
    j["gameMutators"] = v.gameMutators;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO_t& v) {
    v.gameType = j.at("gameType").get<std::string>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant_t>>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>();
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant_t>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant_t>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
  }
}
