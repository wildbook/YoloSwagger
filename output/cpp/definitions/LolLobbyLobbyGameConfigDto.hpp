#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto_t {
    std::string_t customLobbyName;
    int32_t_t maxHumanPlayers;
    bool_t premadeSizeAllowed;
    bool_t showPositionSelector;
    int32_t_t maxTeamSize;
    LolLobbyQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t_t mapId;
    std::string_t pickType;
    std::string_t gameMode;
    bool_t isLobbyFull;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam200;
    int32_t_t queueId;
    std::vector<LolLobbyLobbyParticipantDto_t> customSpectators;
    std::string_t customMutatorName;
    std::string_t gameMutator;
    std::vector<LolLobbyLobbyParticipantDto_t> customTeam100;
    int32_t_t maxLobbySize;
    bool_t isCustom;
    bool_t isTeamBuilderManaged;
    std::vector<std::string> customRewardsDisabledReasons;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto_t& v) {
    j["customLobbyName"] = v.customLobbyName;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["showPositionSelector"] = v.showPositionSelector;
    j["maxTeamSize"] = v.maxTeamSize;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["mapId"] = v.mapId;
    j["pickType"] = v.pickType;
    j["gameMode"] = v.gameMode;
    j["isLobbyFull"] = v.isLobbyFull;
    j["customTeam200"] = v.customTeam200;
    j["queueId"] = v.queueId;
    j["customSpectators"] = v.customSpectators;
    j["customMutatorName"] = v.customMutatorName;
    j["gameMutator"] = v.gameMutator;
    j["customTeam100"] = v.customTeam100;
    j["maxLobbySize"] = v.maxLobbySize;
    j["isCustom"] = v.isCustom;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto_t& v) {
    v.customLobbyName = j.at("customLobbyName").get<std::string_t>();
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t_t>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool_t>();
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t_t>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.mapId = j.at("mapId").get<int32_t_t>();
    v.pickType = j.at("pickType").get<std::string_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.isLobbyFull = j.at("isLobbyFull").get<bool_t>();
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.customMutatorName = j.at("customMutatorName").get<std::string_t>();
    v.gameMutator = j.at("gameMutator").get<std::string_t>();
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto_t>>();
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t_t>();
    v.isCustom = j.at("isCustom").get<bool_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool_t>();
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLobbyLobbyGameConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
