#ifndef SWAGGER_TYPES_GameflowLcdsGameDTO_HPP
#define SWAGGER_TYPES_GameflowLcdsGameDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct GameflowLcdsGameDTO {
    // 
    int32_t maxNumPlayers;
    // 
    int32_t gameTypeConfigId;
    // 
    std::vector<nlohmann::json> teamOne;
    // 
    std::string queueTypeName;
    // 
    std::string gameMode;
    // 
    int32_t mapId;
    // 
    std::string gameType;
    // 
    std::string gameState;
    // 
    int32_t spectatorDelay;
    // 
    std::vector<nlohmann::json> teamTwo;
    // 
    std::vector<nlohmann::json> playerChampionSelections;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO& v) {
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["teamOne"] = v.teamOne;
    j["queueTypeName"] = v.queueTypeName;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["gameType"] = v.gameType;
    j["gameState"] = v.gameState;
    j["spectatorDelay"] = v.spectatorDelay;
    j["teamTwo"] = v.teamTwo;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>;
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>;
    v.queueTypeName = j.at("queueTypeName").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.gameType = j.at("gameType").get<std::string>;
    v.gameState = j.at("gameState").get<std::string>;
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>;
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>;
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_GameflowLcdsGameDTO_HPP
