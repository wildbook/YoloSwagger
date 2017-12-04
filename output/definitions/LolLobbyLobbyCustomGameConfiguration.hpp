#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomGameConfiguration_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomGameConfiguration_HPP
#include <json.hpp>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyCustomGameConfiguration {
    // 
    std::string gameMode;
    // 
    std::string gameMutator;
    // 
    std::string gameServerRegion;
    // 
    LolLobbyQueueGameTypeConfig gameTypeConfig;
    // 
    int32_t mapId;
    // 
    uint32_t maxPlayerCount;
    // 
    LolLobbyQueueGameTypeConfig mutators;
    // 
    LolLobbyQueueCustomGameSpectatorPolicy spectatorPolicy;
    // 
    int32_t teamSize;
    // 
    std::string tournamentGameMode;
    // 
    std::string tournamentPassbackDataPacket;
    // 
    std::string tournamentPassbackUrl;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGameConfiguration& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGameConfiguration& v) {
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>;
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig>;
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>;
    v.teamSize = j.at("teamSize").get<int32_t>;
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>;
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>;
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomGameConfiguration_HPP
