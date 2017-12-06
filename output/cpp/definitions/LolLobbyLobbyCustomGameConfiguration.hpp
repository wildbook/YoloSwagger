#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    std::string gameMode;
    std::string gameMutator;
    std::string gameServerRegion;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    int32_t mapId;
    uint32_t maxPlayerCount;
    LolLobbyQueueGameTypeConfig_t mutators;
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
    int32_t teamSize;
    std::string tournamentGameMode;
    std::string tournamentPassbackDataPacket;
    std::string tournamentPassbackUrl;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["gameServerRegion"] = v.gameServerRegion;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["mapId"] = v.mapId;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["mutators"] = v.mutators;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["teamSize"] = v.teamSize;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
  }
}
