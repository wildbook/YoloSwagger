#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsGameDTO_t {
    std::string queueTypeName;
    std::string gameType;
    int32_t mapId;
    std::vector<nlohmann::json> playerChampionSelections;
    std::vector<nlohmann::json> teamOne;
    std::vector<nlohmann::json> teamTwo;
    int32_t spectatorDelay;
    std::string gameState;
    int32_t maxNumPlayers;
    uint64_t id;
    std::string gameMode;
    int32_t gameTypeConfigId;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO_t& v) {
    j["queueTypeName"] = v.queueTypeName;
    j["gameType"] = v.gameType;
    j["mapId"] = v.mapId;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
    j["spectatorDelay"] = v.spectatorDelay;
    j["gameState"] = v.gameState;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["id"] = v.id;
    j["gameMode"] = v.gameMode;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO_t& v) {
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>();
    v.gameState = j.at("gameState").get<std::string>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
  }
  inline std::string to_string(const GameflowLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
