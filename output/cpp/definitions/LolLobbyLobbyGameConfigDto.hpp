#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    int32_t maxTeamSize;
    std::vector<int32_t> allowablePremadeSizes;
    std::string gameMode;
    bool showPositionSelector;
    int32_t maxHumanPlayers;
    bool isTeamBuilderManaged;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::string customLobbyName;
    int32_t mapId;
    bool premadeSizeAllowed;
    std::string customMutatorName;
    bool isCustom;
    std::string pickType;
    int32_t queueId;
    std::string gameMutator;
    std::vector<std::string> customRewardsDisabledReasons;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    int32_t maxLobbySize;
    bool isLobbyFull;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["maxTeamSize"] = v.maxTeamSize;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["gameMode"] = v.gameMode;
    j["showPositionSelector"] = v.showPositionSelector;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["customLobbyName"] = v.customLobbyName;
    j["mapId"] = v.mapId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["customMutatorName"] = v.customMutatorName;
    j["isCustom"] = v.isCustom;
    j["pickType"] = v.pickType;
    j["queueId"] = v.queueId;
    j["gameMutator"] = v.gameMutator;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["customTeam100"] = v.customTeam100;
    j["maxLobbySize"] = v.maxLobbySize;
    j["isLobbyFull"] = v.isLobbyFull;
    j["customTeam200"] = v.customTeam200;
    j["customSpectators"] = v.customSpectators;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.customLobbyName = j.at("customLobbyName").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.customMutatorName = j.at("customMutatorName").get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.pickType = j.at("pickType").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
