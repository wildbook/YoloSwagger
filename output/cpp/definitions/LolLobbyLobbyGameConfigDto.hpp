#ifndef SWAGGER_TYPES_LolLobbyLobbyGameConfigDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyGameConfigDto_HPP
#include <json.hpp>
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyGameConfigDto {
    // 
    std::string customLobbyName;
    // 
    int32_t maxHumanPlayers;
    // 
    bool premadeSizeAllowed;
    // 
    bool showPositionSelector;
    // 
    int32_t maxTeamSize;
    // 
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    int32_t mapId;
    // 
    std::string pickType;
    // 
    std::string gameMode;
    // 
    bool isLobbyFull;
    // 
    std::vector<LolLobbyLobbyParticipantDto> customTeam200;
    // 
    int32_t queueId;
    // 
    std::vector<LolLobbyLobbyParticipantDto> customSpectators;
    // 
    std::string customMutatorName;
    // 
    std::string gameMutator;
    // 
    std::vector<LolLobbyLobbyParticipantDto> customTeam100;
    // 
    int32_t maxLobbySize;
    // 
    bool isCustom;
    // 
    bool isTeamBuilderManaged;
    // 
    std::vector<std::string> customRewardsDisabledReasons;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyGameConfigDto& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyGameConfigDto& v) {
    v.customLobbyName = j.at("customLobbyName").get<std::string>;
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>;
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>;
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>;
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.pickType = j.at("pickType").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.isLobbyFull = j.at("isLobbyFull").get<bool>;
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto>>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto>>;
    v.customMutatorName = j.at("customMutatorName").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto>>;
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyGameConfigDto_HPP
