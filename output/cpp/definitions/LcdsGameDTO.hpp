#ifndef SWAGGER_TYPES_LcdsGameDTO_HPP
#define SWAGGER_TYPES_LcdsGameDTO_HPP
#include <json.hpp>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  // 
  struct LcdsGameDTO {
    // 
    int64_t optimisticLock;
    // 
    int32_t maxNumPlayers;
    // 
    int32_t gameTypeConfigId;
    // 
    std::string name;
    // 
    std::vector<LcdsPlayerParticipant> teamOne;
    // 
    LcdsPlayerParticipant ownerSummary;
    // 
    std::vector<LcdsPlayerParticipant> teamTwo;
    // 
    std::string gameMode;
    // 
    int32_t mapId;
    // 
    std::string gameType;
    // 
    std::vector<LcdsPlayerParticipant> observers;
    // 
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    // 
    std::string spectatorsAllowed;
    // 
    std::string gameState;
    // 
    std::string passbackUrl;
    // 
    std::vector<std::string> gameMutators;
    // 
    std::string passbackDataPacket;
    // 
    std::string roomName;
    // 
    std::string roomPassword;
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO& v) {
    j["optimisticLock"] = v.optimisticLock;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["name"] = v.name;
    j["teamOne"] = v.teamOne;
    j["ownerSummary"] = v.ownerSummary;
    j["teamTwo"] = v.teamTwo;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["gameType"] = v.gameType;
    j["observers"] = v.observers;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["gameState"] = v.gameState;
    j["passbackUrl"] = v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["roomName"] = v.roomName;
    j["roomPassword"] = v.roomPassword;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO& v) {
    v.optimisticLock = j.at("optimisticLock").get<int64_t>;
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>;
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>;
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.gameType = j.at("gameType").get<std::string>;
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>;
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>;
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>;
    v.gameState = j.at("gameState").get<std::string>;
    v.passbackUrl = j.at("passbackUrl").get<std::string>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>;
    v.roomName = j.at("roomName").get<std::string>;
    v.roomPassword = j.at("roomPassword").get<std::string>;
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LcdsGameDTO_HPP
