#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
    uint32_t maxPlayerCount;
    std::string tournamentGameMode;
    std::string gameMode;
    int32_t mapId;
    std::string gameServerRegion;
    int32_t teamSize;
    std::string gameMutator;
    std::string tournamentPassbackDataPacket;
    LolLobbyQueueGameTypeConfig_t mutators;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    std::string tournamentPassbackUrl;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["gameServerRegion"] = v.gameServerRegion;
    j["teamSize"] = v.teamSize;
    j["gameMutator"] = v.gameMutator;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["mutators"] = v.mutators;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
