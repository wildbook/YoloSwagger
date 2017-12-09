#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomGame_t {
    std::string passbackUrl;
    bool hasPassword;
    int32_t mapId;
    std::string spectatorPolicy;
    uint64_t id;
    int32_t maxPlayerSlots;
    uint64_t maxSpectatorSlots;
    std::string lobbyName;
    int32_t filledPlayerSlots;
    std::string ownerSummonerName;
    std::string gameType;
    int32_t filledSpectatorSlots;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGame_t& v) {
    j["passbackUrl"] = v.passbackUrl;
    j["hasPassword"] = v.hasPassword;
    j["mapId"] = v.mapId;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["id"] = v.id;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
    j["lobbyName"] = v.lobbyName;
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["ownerSummonerName"] = v.ownerSummonerName;
    j["gameType"] = v.gameType;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGame_t& v) {
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.hasPassword = j.at("hasPassword").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>();
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>();
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
