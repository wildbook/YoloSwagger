#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    bool premadeSizeAllowed;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
    int32_t maxTeamSize;
    std::string customMutatorName;
    std::string pickType;
    std::vector<int32_t> allowablePremadeSizes;
    bool showPositionSelector;
    std::string gameMode;
    std::string customLobbyName;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    bool isCustom;
    std::vector<std::string> customRewardsDisabledReasons;
    std::string gameMutator;
    int32_t mapId;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
    int32_t maxLobbySize;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isLobbyFull;
    int32_t maxHumanPlayers;
    int32_t queueId;
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["customSpectators"] = v.customSpectators;
    j["maxTeamSize"] = v.maxTeamSize;
    j["customMutatorName"] = v.customMutatorName;
    j["pickType"] = v.pickType;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["showPositionSelector"] = v.showPositionSelector;
    j["gameMode"] = v.gameMode;
    j["customLobbyName"] = v.customLobbyName;
    j["customTeam100"] = v.customTeam100;
    j["isCustom"] = v.isCustom;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["customTeam200"] = v.customTeam200;
    j["maxLobbySize"] = v.maxLobbySize;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isLobbyFull"] = v.isLobbyFull;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["queueId"] = v.queueId;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>();
    v.customMutatorName = j.at("customMutatorName").get<std::string>();
    v.pickType = j.at("pickType").get<std::string>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.customLobbyName = j.at("customLobbyName").get<std::string>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
  }
}
