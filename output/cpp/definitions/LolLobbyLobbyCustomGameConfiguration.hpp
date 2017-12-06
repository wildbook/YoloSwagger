#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    LolLobbyQueueGameTypeConfig_t mutators;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    uint32_t maxPlayerCount;
    std::string gameMode;
    int32_t teamSize;
    std::string gameServerRegion;
    std::string gameMutator;
    int32_t mapId;
    std::string tournamentGameMode;
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
    std::string tournamentPassbackUrl;
    std::string tournamentPassbackDataPacket;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["mutators"] = v.mutators;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["gameMode"] = v.gameMode;
    j["teamSize"] = v.teamSize;
    j["gameServerRegion"] = v.gameServerRegion;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
  }
}
