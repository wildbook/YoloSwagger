#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsGameDTO_t {
    std::string gameMode;
    std::vector<nlohmann::json> teamOne;
    std::string gameState;
    std::string gameType;
    int32_t spectatorDelay;
    int32_t mapId;
    std::string queueTypeName;
    std::vector<nlohmann::json> teamTwo;
    int32_t maxNumPlayers;
    std::vector<nlohmann::json> playerChampionSelections;
    uint64_t id;
    int32_t gameTypeConfigId;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO_t& v) {
    j["gameMode"] = v.gameMode;
    j["teamOne"] = v.teamOne;
    j["gameState"] = v.gameState;
    j["gameType"] = v.gameType;
    j["spectatorDelay"] = v.spectatorDelay;
    j["mapId"] = v.mapId;
    j["queueTypeName"] = v.queueTypeName;
    j["teamTwo"] = v.teamTwo;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["id"] = v.id;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.gameState = j.at("gameState").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.id = j.at("id").get<uint64_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
  }
  inline std::string to_string(const GameflowLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
