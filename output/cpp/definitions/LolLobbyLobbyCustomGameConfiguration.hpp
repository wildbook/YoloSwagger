#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    std::string gameServerRegion;
    std::string gameMode;
    std::string tournamentPassbackDataPacket;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    int32_t mapId;
    std::string tournamentPassbackUrl;
    int32_t teamSize;
    uint32_t maxPlayerCount;
    std::string gameMutator;
    LolLobbyQueueGameTypeConfig_t mutators;
    std::string tournamentGameMode;
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["gameServerRegion"] = v.gameServerRegion;
    j["gameMode"] = v.gameMode;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["mapId"] = v.mapId;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
    j["teamSize"] = v.teamSize;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["gameMutator"] = v.gameMutator;
    j["mutators"] = v.mutators;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["spectatorPolicy"] = v.spectatorPolicy;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
