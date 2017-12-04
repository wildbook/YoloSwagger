#ifndef SWAGGER_TYPES_GameflowLcdsGameDTO_HPP
#define SWAGGER_TYPES_GameflowLcdsGameDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct GameflowLcdsGameDTO {
    // 
    std::string gameMode;
    // 
    std::string gameState;
    // 
    std::string gameType;
    // 
    int32_t gameTypeConfigId;
    // 
    uint64_t id;
    // 
    int32_t mapId;
    // 
    int32_t maxNumPlayers;
    // 
    std::vector<nlohmann::json> playerChampionSelections;
    // 
    std::string queueTypeName;
    // 
    int32_t spectatorDelay;
    // 
    std::vector<nlohmann::json> teamOne;
    // 
    std::vector<nlohmann::json> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO& v) {
    j["gameMode"] = v.gameMode;
    j["gameState"] = v.gameState;
    j["gameType"] = v.gameType;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["id"] = v.id;
    j["mapId"] = v.mapId;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["queueTypeName"] = v.queueTypeName;
    j["spectatorDelay"] = v.spectatorDelay;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO& v) {
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameState = j.at("gameState").get<std::string>;
    v.gameType = j.at("gameType").get<std::string>;
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>;
    v.id = j.at("id").get<uint64_t>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>;
    v.queueTypeName = j.at("queueTypeName").get<std::string>;
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>;
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_GameflowLcdsGameDTO_HPP
