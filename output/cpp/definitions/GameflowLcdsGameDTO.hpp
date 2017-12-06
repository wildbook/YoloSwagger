#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsGameDTO_t {
    std::string gameType;
    int32_t spectatorDelay;
    int32_t maxNumPlayers;
    std::string gameMode;
    std::string queueTypeName;
    std::string gameState;
    std::vector<nlohmann::json> teamTwo;
    int32_t mapId;
    std::vector<nlohmann::json> playerChampionSelections;
    uint64_t id;
    std::vector<nlohmann::json> teamOne;
    int32_t gameTypeConfigId;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO_t& v) {
    j["gameType"] = v.gameType;
    j["spectatorDelay"] = v.spectatorDelay;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameMode"] = v.gameMode;
    j["queueTypeName"] = v.queueTypeName;
    j["gameState"] = v.gameState;
    j["teamTwo"] = v.teamTwo;
    j["mapId"] = v.mapId;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["id"] = v.id;
    j["teamOne"] = v.teamOne;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO_t& v) {
    v.gameType = j.at("gameType").get<std::string>();
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.id = j.at("id").get<uint64_t>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
  }
}
