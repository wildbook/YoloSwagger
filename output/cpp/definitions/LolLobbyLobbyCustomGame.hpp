#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomGame_t {
    std::string_t lobbyName;
    std::string_t spectatorPolicy;
    int32_t_t maxPlayerSlots;
    int32_t_t mapId;
    std::string_t gameType;
    bool_t hasPassword;
    uint64_t_t maxSpectatorSlots;
    int32_t_t filledSpectatorSlots;
    std::string_t passbackUrl;
    int32_t_t filledPlayerSlots;
    uint64_t_t id;
    std::string_t ownerSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomGame_t& v) {
    j["lobbyName"] = v.lobbyName;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
    j["mapId"] = v.mapId;
    j["gameType"] = v.gameType;
    j["hasPassword"] = v.hasPassword;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
    j["passbackUrl"] = v.passbackUrl;
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["id"] = v.id;
    j["ownerSummonerName"] = v.ownerSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomGame_t& v) {
    v.lobbyName = j.at("lobbyName").get<std::string_t>();
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string_t>();
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t_t>();
    v.mapId = j.at("mapId").get<int32_t_t>();
    v.gameType = j.at("gameType").get<std::string_t>();
    v.hasPassword = j.at("hasPassword").get<bool_t>();
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t_t>();
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t_t>();
    v.passbackUrl = j.at("passbackUrl").get<std::string_t>();
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t_t>();
    v.id = j.at("id").get<uint64_t_t>();
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
