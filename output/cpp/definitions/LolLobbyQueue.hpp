#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueReward.hpp"
#include "LolLobbyQueueGameCategory.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolLobbyQueue_t {
    bool areFreeChampionsAllowed;
    std::string name;
    std::string description;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    int32_t id;
    bool spectatorEnabled;
    LolLobbyQueueAvailability_t queueAvailability;
    int32_t numPlayersPerTeam;
    std::string shortName;
    bool showPositionSelector;
    std::string detailedDescription;
    bool isTeamOnly;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t minimumParticipantListSize;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string gameMutator;
    int32_t mapId;
    LolLobbyQueueGameCategory_t category;
    std::string type;
    bool isRanked;
    int32_t maximumParticipantListSize;
    LolLobbyQueueReward_t queueRewards;
    bool isTeamBuilderManaged;
    uint32_t minLevel;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueue_t& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["name"] = v.name;
    j["description"] = v.description;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["queueAvailability"] = v.queueAvailability;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["shortName"] = v.shortName;
    j["showPositionSelector"] = v.showPositionSelector;
    j["detailedDescription"] = v.detailedDescription;
    j["isTeamOnly"] = v.isTeamOnly;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["category"] = v.category;
    j["type"] = v.type;
    j["isRanked"] = v.isRanked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["queueRewards"] = v.queueRewards;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["minLevel"] = v.minLevel;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueue_t& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.id = j.at("id").get<int32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.category = j.at("category").get<LolLobbyQueueGameCategory_t>();
    v.type = j.at("type").get<std::string>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.queueRewards = j.at("queueRewards").get<LolLobbyQueueReward_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
}
