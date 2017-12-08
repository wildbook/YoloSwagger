#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    std::string gameMode;
    bool isTeamBuilderManaged;
    std::string customLobbyName;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    int32_t maxTeamSize;
    int32_t mapId;
    std::string gameMutator;
    std::string pickType;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    int32_t maxHumanPlayers;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t queueId;
    std::string customMutatorName;
    bool showPositionSelector;
    bool premadeSizeAllowed;
    std::vector<std::string> customRewardsDisabledReasons;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
    bool isLobbyFull;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
    bool isCustom;
    int32_t maxLobbySize;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["gameMode"] = v.gameMode;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["customLobbyName"] = v.customLobbyName;
    j["customTeam100"] = v.customTeam100;
    j["maxTeamSize"] = v.maxTeamSize;
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
    j["pickType"] = v.pickType;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["queueId"] = v.queueId;
    j["customMutatorName"] = v.customMutatorName;
    j["showPositionSelector"] = v.showPositionSelector;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["customTeam200"] = v.customTeam200;
    j["isLobbyFull"] = v.isLobbyFull;
    j["customSpectators"] = v.customSpectators;
    j["isCustom"] = v.isCustom;
    j["maxLobbySize"] = v.maxLobbySize;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.customLobbyName = j.at("customLobbyName").get<std::string>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.pickType = j.at("pickType").get<std::string>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.customMutatorName = j.at("customMutatorName").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
