#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomGame_t {
    int32_t filledPlayerSlots;
    std::string spectatorPolicy;
    std::string gameType;
    int32_t mapId;
    uint64_t maxSpectatorSlots;
    int32_t maxPlayerSlots;
    std::string lobbyName;
    uint64_t id;
    bool hasPassword;
    std::string passbackUrl;
    int32_t filledSpectatorSlots;
    std::string ownerSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGame_t& v) {
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["gameType"] = v.gameType;
    j["mapId"] = v.mapId;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
    j["lobbyName"] = v.lobbyName;
    j["id"] = v.id;
    j["hasPassword"] = v.hasPassword;
    j["passbackUrl"] = v.passbackUrl;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
    j["ownerSummonerName"] = v.ownerSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGame_t& v) {
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>();
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.hasPassword = j.at("hasPassword").get<bool>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>();
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
