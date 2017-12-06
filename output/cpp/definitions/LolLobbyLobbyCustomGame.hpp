#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomGame_t {
    std::string gameType;
    std::string passbackUrl;
    std::string lobbyName;
    int32_t maxPlayerSlots;
    std::string ownerSummonerName;
    bool hasPassword;
    int32_t mapId;
    uint64_t id;
    std::string spectatorPolicy;
    int32_t filledPlayerSlots;
    int32_t filledSpectatorSlots;
    uint64_t maxSpectatorSlots;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGame_t& v) {
    j["gameType"] = v.gameType;
    j["passbackUrl"] = v.passbackUrl;
    j["lobbyName"] = v.lobbyName;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
    j["ownerSummonerName"] = v.ownerSummonerName;
    j["hasPassword"] = v.hasPassword;
    j["mapId"] = v.mapId;
    j["id"] = v.id;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGame_t& v) {
    v.gameType = j.at("gameType").get<std::string>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>();
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>();
    v.hasPassword = j.at("hasPassword").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>();
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>();
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>();
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>();
  }
}
