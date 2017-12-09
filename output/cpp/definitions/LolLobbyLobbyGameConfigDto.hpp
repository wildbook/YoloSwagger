#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    std::vector<std::string> customRewardsDisabledReasons;
    bool isLobbyFull;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t maxHumanPlayers;
    std::string customMutatorName;
    std::string customLobbyName;
    int32_t queueId;
    std::string pickType;
    int32_t mapId;
    bool premadeSizeAllowed;
    bool isTeamBuilderManaged;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::string gameMode;
    bool isCustom;
    bool showPositionSelector;
    int32_t maxTeamSize;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
    std::string gameMutator;
    int32_t maxLobbySize;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["isLobbyFull"] = v.isLobbyFull;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["customMutatorName"] = v.customMutatorName;
    j["customLobbyName"] = v.customLobbyName;
    j["queueId"] = v.queueId;
    j["pickType"] = v.pickType;
    j["mapId"] = v.mapId;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["gameMode"] = v.gameMode;
    j["isCustom"] = v.isCustom;
    j["showPositionSelector"] = v.showPositionSelector;
    j["maxTeamSize"] = v.maxTeamSize;
    j["customSpectators"] = v.customSpectators;
    j["gameMutator"] = v.gameMutator;
    j["maxLobbySize"] = v.maxLobbySize;
    j["customTeam100"] = v.customTeam100;
    j["customTeam200"] = v.customTeam200;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>();
    v.customMutatorName = j.at("customMutatorName").get<std::string>();
    v.customLobbyName = j.at("customLobbyName").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.pickType = j.at("pickType").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
