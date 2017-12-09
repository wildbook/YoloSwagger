#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsGameDTO_t {
    std::vector<LcdsPlayerParticipant_t> teamTwo;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    int32_t maxNumPlayers;
    std::string passbackDataPacket;
    std::string gameType;
    int32_t mapId;
    std::vector<std::string> gameMutators;
    LcdsPlayerParticipant_t ownerSummary;
    std::vector<LcdsPlayerParticipant_t> teamOne;
    std::string passbackUrl;
    int32_t gameTypeConfigId;
    std::string roomPassword;
    std::string gameMode;
    std::string roomName;
    std::vector<LcdsPlayerParticipant_t> observers;
    int64_t optimisticLock;
    std::string gameState;
    std::string spectatorsAllowed;
    int64_t id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["gameType"] = v.gameType;
    j["mapId"] = v.mapId;
    j["gameMutators"] = v.gameMutators;
    j["ownerSummary"] = v.ownerSummary;
    j["teamOne"] = v.teamOne;
    j["passbackUrl"] = v.passbackUrl;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["roomPassword"] = v.roomPassword;
    j["gameMode"] = v.gameMode;
    j["roomName"] = v.roomName;
    j["observers"] = v.observers;
    j["optimisticLock"] = v.optimisticLock;
    j["gameState"] = v.gameState;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant_t>>();
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant_t>();
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant_t>>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant_t>>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.gameState = j.at("gameState").get<std::string>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
