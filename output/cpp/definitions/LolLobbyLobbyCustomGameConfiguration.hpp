#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration_t {
    std::string tournamentGameMode;
    int32_t mapId;
    LolLobbyQueueGameTypeConfig_t mutators;
    uint32_t maxPlayerCount;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    LolLobbyQueueCustomGameSpectatorPolicy_t spectatorPolicy;
    std::string gameServerRegion;
    std::string tournamentPassbackDataPacket;
    std::string gameMutator;
    int32_t teamSize;
    std::string gameMode;
    std::string tournamentPassbackUrl;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration_t& v) {
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["mapId"] = v.mapId;
    j["mutators"] = v.mutators;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["gameServerRegion"] = v.gameServerRegion;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["gameMutator"] = v.gameMutator;
    j["teamSize"] = v.teamSize;
    j["gameMode"] = v.gameMode;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration_t& v) {
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>();
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.teamSize = j.at("teamSize").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGameConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
