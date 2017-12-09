#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    std::string customLobbyName;
    std::vector<int32_t> allowablePremadeSizes;
    std::string pickType;
    std::vector<std::string> customRewardsDisabledReasons;
    int32_t mapId;
    bool premadeSizeAllowed;
    std::string customMutatorName;
    bool isCustom;
    bool showPositionSelector;
    bool isTeamBuilderManaged;
    bool isLobbyFull;
    int32_t queueId;
    int32_t maxTeamSize;
    int32_t maxLobbySize;
    std::string gameMutator;
    std::string gameMode;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    int32_t maxHumanPlayers;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["customLobbyName"] = v.customLobbyName;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["pickType"] = v.pickType;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["mapId"] = v.mapId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["customMutatorName"] = v.customMutatorName;
    j["isCustom"] = v.isCustom;
    j["showPositionSelector"] = v.showPositionSelector;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["isLobbyFull"] = v.isLobbyFull;
    j["queueId"] = v.queueId;
    j["maxTeamSize"] = v.maxTeamSize;
    j["maxLobbySize"] = v.maxLobbySize;
    j["gameMutator"] = v.gameMutator;
    j["gameMode"] = v.gameMode;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["customSpectators"] = v.customSpectators;
    j["customTeam100"] = v.customTeam100;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["customTeam200"] = v.customTeam200;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.customLobbyName = j.at("customLobbyName").get<std::string>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.pickType = j.at("pickType").get<std::string>();
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.customMutatorName = j.at("customMutatorName").get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
