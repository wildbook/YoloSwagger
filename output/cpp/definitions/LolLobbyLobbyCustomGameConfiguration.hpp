#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    std::string gameMode;
    std::string gameServerRegion;
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
    int32_t mapId;
    std::string gameMutator;
    uint32_t maxPlayerCount;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    std::string tournamentPassbackDataPacket;
    int32_t teamSize;
    LolLobbyQueueGameTypeConfig_t mutators;
    std::string tournamentGameMode;
    std::string tournamentPassbackUrl;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["gameMode"] = v.gameMode;
    j["gameServerRegion"] = v.gameServerRegion;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["teamSize"] = v.teamSize;
    j["mutators"] = v.mutators;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
