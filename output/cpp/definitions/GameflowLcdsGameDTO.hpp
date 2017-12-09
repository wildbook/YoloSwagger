#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsGameDTO_t {
    int32_t mapId;
    uint64_t id;
    std::vector<nlohmann::json> teamOne;
    std::string gameType;
    std::string queueTypeName;
    std::string gameState;
    std::string gameMode;
    std::vector<nlohmann::json> playerChampionSelections;
    int32_t maxNumPlayers;
    int32_t gameTypeConfigId;
    std::vector<nlohmann::json> teamTwo;
    int32_t spectatorDelay;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO_t& v) {
    j["mapId"] = v.mapId;
    j["id"] = v.id;
    j["teamOne"] = v.teamOne;
    j["gameType"] = v.gameType;
    j["queueTypeName"] = v.queueTypeName;
    j["gameState"] = v.gameState;
    j["gameMode"] = v.gameMode;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["teamTwo"] = v.teamTwo;
    j["spectatorDelay"] = v.spectatorDelay;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO_t& v) {
    v.mapId = j.at("mapId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.gameType = j.at("gameType").get<std::string>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>();
  }
  inline std::string to_string(const GameflowLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
