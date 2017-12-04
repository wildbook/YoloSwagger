#ifndef SWAGGER_TYPES_LcdsGameDTO_HPP
#define SWAGGER_TYPES_LcdsGameDTO_HPP
#include <json.hpp>
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  // 
  struct LcdsGameDTO {
    // 
    std::string gameMode;
    // 
    std::vector<std::string> gameMutators;
    // 
    std::string gameState;
    // 
    std::string gameType;
    // 
    int32_t gameTypeConfigId;
    // 
    int64_t id;
    // 
    int32_t mapId;
    // 
    int32_t maxNumPlayers;
    // 
    std::string name;
    // 
    std::vector<LcdsPlayerParticipant> observers;
    // 
    int64_t optimisticLock;
    // 
    LcdsPlayerParticipant ownerSummary;
    // 
    std::string passbackDataPacket;
    // 
    std::string passbackUrl;
    // 
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    // 
    std::string roomName;
    // 
    std::string roomPassword;
    // 
    std::string spectatorsAllowed;
    // 
    std::vector<LcdsPlayerParticipant> teamOne;
    // 
    std::vector<LcdsPlayerParticipant> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameDTO& v) {
    j["gameMode"] = v.gameMode;
    j["gameMutators"] = v.gameMutators;
    j["gameState"] = v.gameState;
    j["gameType"] = v.gameType;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["id"] = v.id;
    j["mapId"] = v.mapId;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["name"] = v.name;
    j["observers"] = v.observers;
    j["optimisticLock"] = v.optimisticLock;
    j["ownerSummary"] = v.ownerSummary;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["passbackUrl"] = v.passbackUrl;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["roomName"] = v.roomName;
    j["roomPassword"] = v.roomPassword;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameDTO& v) {
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.gameState = j.at("gameState").get<std::string>;
    v.gameType = j.at("gameType").get<std::string>;
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>;
    v.optimisticLock = j.at("optimisticLock").get<int64_t>;
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>;
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>;
    v.passbackUrl = j.at("passbackUrl").get<std::string>;
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>;
    v.roomName = j.at("roomName").get<std::string>;
    v.roomPassword = j.at("roomPassword").get<std::string>;
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>;
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>;
  }

}
#endif // SWAGGER_TYPES_LcdsGameDTO_HPP
