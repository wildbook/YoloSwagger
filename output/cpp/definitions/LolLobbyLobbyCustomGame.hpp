#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomGame_t {
    std::string ownerSummonerName;
    std::string lobbyName;
    int32_t filledPlayerSlots;
    std::string gameType;
    int32_t mapId;
    uint64_t id;
    std::string passbackUrl;
    bool hasPassword;
    std::string spectatorPolicy;
    int32_t filledSpectatorSlots;
    uint64_t maxSpectatorSlots;
    int32_t maxPlayerSlots;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGame_t& v) {
    j["ownerSummonerName"] = v.ownerSummonerName;
    j["lobbyName"] = v.lobbyName;
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["gameType"] = v.gameType;
    j["mapId"] = v.mapId;
    j["id"] = v.id;
    j["passbackUrl"] = v.passbackUrl;
    j["hasPassword"] = v.hasPassword;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGame_t& v) {
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>();
    v.lobbyName = j.at("lobbyName").get<std::string>();
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.passbackUrl = j.at("passbackUrl").get<std::string>();
    v.hasPassword = j.at("hasPassword").get<bool>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>();
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>();
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>();
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
