#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    LolLobbyQueueGameTypeConfig_t mutators;
    int32_t mapId;
    int32_t teamSize;
    std::string gameServerRegion;
    uint32_t maxPlayerCount;
    std::string tournamentPassbackUrl;
    std::string gameMode;
    std::string tournamentGameMode;
    std::string tournamentPassbackDataPacket;
    std::string gameMutator;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["mutators"] = v.mutators;
    j["mapId"] = v.mapId;
    j["teamSize"] = v.teamSize;
    j["gameServerRegion"] = v.gameServerRegion;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
    j["gameMode"] = v.gameMode;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["gameMutator"] = v.gameMutator;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
