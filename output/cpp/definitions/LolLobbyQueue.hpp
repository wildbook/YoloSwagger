#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueReward.hpp"
#include "LolLobbyQueueGameCategory.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolLobbyQueue_t {
    std::vector<int32_t> allowablePremadeSizes;
    int32_t mapId;
    LolLobbyQueueGameCategory_t category;
    int32_t id;
    bool isTeamBuilderManaged;
    LolLobbyQueueAvailability_t queueAvailability;
    std::string gameMode;
    uint32_t minLevel;
    LolLobbyQueueReward_t queueRewards;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool spectatorEnabled;
    std::string description;
    bool areFreeChampionsAllowed;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    bool isRanked;
    int32_t maximumParticipantListSize;
    std::string type;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    std::string detailedDescription;
    std::string name;
    std::string shortName;
    bool showPositionSelector;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueue_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["mapId"] = v.mapId;
    j["category"] = v.category;
    j["id"] = v.id;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["minLevel"] = v.minLevel;
    j["queueRewards"] = v.queueRewards;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["description"] = v.description;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["isRanked"] = v.isRanked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["isTeamOnly"] = v.isTeamOnly;
    j["detailedDescription"] = v.detailedDescription;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
    j["showPositionSelector"] = v.showPositionSelector;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueue_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.category = j.at("category").get<LolLobbyQueueGameCategory_t>();
    v.id = j.at("id").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.queueRewards = j.at("queueRewards").get<LolLobbyQueueReward_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
  }
  inline std::string to_string(const LolLobbyQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
