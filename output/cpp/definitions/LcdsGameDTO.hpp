#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsGameDTO_t {
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::vector<LcdsPlayerParticipant_t> teamTwo;
    std::string roomPassword;
    std::string passbackDataPacket;
    int32_t mapId;
    std::string spectatorsAllowed;
    std::string gameType;
    std::string passbackUrl;
    std::vector<LcdsPlayerParticipant_t> teamOne;
    int64_t optimisticLock;
    std::string gameState;
    std::vector<std::string> gameMutators;
    int32_t maxNumPlayers;
    LcdsPlayerParticipant_t ownerSummary;
    std::vector<LcdsPlayerParticipant_t> observers;
    int64_t id;
    std::string name;
    std::string gameMode;
    std::string roomName;
    int32_t gameTypeConfigId;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO_t& v) {
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["teamTwo"] = v.teamTwo;
    j["roomPassword"] = v.roomPassword;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["mapId"] = v.mapId;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["gameType"] = v.gameType;
    j["passbackUrl"] = v.passbackUrl;
    j["teamOne"] = v.teamOne;
    j["optimisticLock"] = v.optimisticLock;
    j["gameState"] = v.gameState;
    j["gameMutators"] = v.gameMutators;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["ownerSummary"] = v.ownerSummary;
    j["observers"] = v.observers;
    j["id"] = v.id;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
    j["roomName"] = v.roomName;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO_t& v) {
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant_t>>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant_t>>();
    v.optimisticLock = j.at("optimisticLock").get<int64_t>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant_t>();
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant_t>>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
  }
  inline std::string to_string(const LcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
