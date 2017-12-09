#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsGameDTO_t {
    std::vector<nlohmann::json> teamTwo;
    int32_t maxNumPlayers;
    std::vector<nlohmann::json> playerChampionSelections;
    std::string gameType;
    int32_t mapId;
    std::vector<nlohmann::json> teamOne;
    int32_t gameTypeConfigId;
    std::string gameMode;
    std::string queueTypeName;
    std::string gameState;
    int32_t spectatorDelay;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["gameType"] = v.gameType;
    j["mapId"] = v.mapId;
    j["teamOne"] = v.teamOne;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["gameMode"] = v.gameMode;
    j["queueTypeName"] = v.queueTypeName;
    j["gameState"] = v.gameState;
    j["spectatorDelay"] = v.spectatorDelay;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.gameType = j.at("gameType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueTypeName = j.at("queueTypeName").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const GameflowLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
