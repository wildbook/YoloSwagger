#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsGameDTO_t {
    int32_t_t maxNumPlayers;
    int32_t_t gameTypeConfigId;
    std::vector<nlohmann::json> teamOne;
    std::string_t queueTypeName;
    std::string_t gameMode;
    int32_t_t mapId;
    std::string_t gameType;
    std::string_t gameState;
    int32_t_t spectatorDelay;
    std::vector<nlohmann::json> teamTwo;
    std::vector<nlohmann::json> playerChampionSelections;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsGameDTO_t& v) {
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

  inline void from_json(const nlohmann::json& j, GameflowLcdsGameDTO_t& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t_t>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.queueTypeName = j.at("queueTypeName").get<std::string_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.mapId = j.at("mapId").get<int32_t_t>();
    v.gameType = j.at("gameType").get<std::string_t>();
    v.gameState = j.at("gameState").get<std::string_t>();
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t_t>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const GameflowLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
