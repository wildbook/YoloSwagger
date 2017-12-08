#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsGameDTO_t {
    std::string gameMode;
    std::vector<LcdsPlayerParticipant_t> teamOne;
    std::string gameState;
    std::string gameType;
    std::string spectatorsAllowed;
    std::string roomName;
    int32_t mapId;
    std::string name;
    std::vector<LcdsPlayerParticipant_t> teamTwo;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    int32_t maxNumPlayers;
    int64_t id;
    std::string roomPassword;
    std::vector<LcdsPlayerParticipant_t> observers;
    int64_t optimisticLock;
    int32_t gameTypeConfigId;
    std::string passbackUrl;
    std::vector<std::string> gameMutators;
    LcdsPlayerParticipant_t ownerSummary;
    std::string passbackDataPacket;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO_t& v) {
    j["gameMode"] = v.gameMode;
    j["teamOne"] = v.teamOne;
    j["gameState"] = v.gameState;
    j["gameType"] = v.gameType;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["roomName"] = v.roomName;
    j["mapId"] = v.mapId;
    j["name"] = v.name;
    j["teamTwo"] = v.teamTwo;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["id"] = v.id;
    j["roomPassword"] = v.roomPassword;
    j["observers"] = v.observers;
    j["optimisticLock"] = v.optimisticLock;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["passbackUrl"] = v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    j["ownerSummary"] = v.ownerSummary;
    j["passbackDataPacket"] = v.passbackDataPacket;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant_t>>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant_t>>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant_t>>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant_t>();
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>();
  }
  inline std::string to_string(const LcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
