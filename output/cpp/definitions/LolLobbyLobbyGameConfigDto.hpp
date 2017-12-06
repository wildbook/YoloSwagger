#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    std::vector<int32_t> allowablePremadeSizes;
    std::string customLobbyName;
    std::string customMutatorName;
    std::vector<std::string> customRewardsDisabledReasons;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
    std::string gameMode;
    std::string gameMutator;
    bool isCustom;
    bool isLobbyFull;
    bool isTeamBuilderManaged;
    int32_t mapId;
    int32_t maxHumanPlayers;
    int32_t maxLobbySize;
    int32_t maxTeamSize;
    std::string pickType;
    bool premadeSizeAllowed;
    int32_t queueId;
    bool showPositionSelector;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["customLobbyName"] = v.customLobbyName;
    j["customMutatorName"] = v.customMutatorName;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["customSpectators"] = v.customSpectators;
    j["customTeam100"] = v.customTeam100;
    j["customTeam200"] = v.customTeam200;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["isCustom"] = v.isCustom;
    j["isLobbyFull"] = v.isLobbyFull;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["mapId"] = v.mapId;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["maxLobbySize"] = v.maxLobbySize;
    j["maxTeamSize"] = v.maxTeamSize;
    j["pickType"] = v.pickType;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["queueId"] = v.queueId;
    j["showPositionSelector"] = v.showPositionSelector;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.customLobbyName = j.at("customLobbyName").get<std::string>();
    v.customMutatorName = j.at("customMutatorName").get<std::string>();
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>();
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>();
    v.pickType = j.at("pickType").get<std::string>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
  }
}
