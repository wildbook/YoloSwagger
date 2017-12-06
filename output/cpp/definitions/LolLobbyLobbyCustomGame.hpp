#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomGame_t {
    int32_t filledPlayerSlots;
    int32_t filledSpectatorSlots;
    std::string gameType;
    bool hasPassword;
    uint64_t id;
    std::string lobbyName;
    int32_t mapId;
    int32_t maxPlayerSlots;
    uint64_t maxSpectatorSlots;
    std::string ownerSummonerName;
    std::string passbackUrl;
    std::string spectatorPolicy;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGame_t& v) {
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
    j["gameType"] = v.gameType;
    j["hasPassword"] = v.hasPassword;
    j["id"] = v.id;
    j["lobbyName"] = v.lobbyName;
    j["mapId"] = v.mapId;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
    j["ownerSummonerName"] = v.ownerSummonerName;
    j["passbackUrl"] = v.passbackUrl;
    j["spectatorPolicy"] = v.spectatorPolicy;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGame_t& v) {
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>();
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.hasPassword = j.at("hasPassword").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>();
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>();
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>();
  }
}
