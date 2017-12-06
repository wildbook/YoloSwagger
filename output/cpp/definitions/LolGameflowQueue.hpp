#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueueGameTypeConfig.hpp"
#include "LolGameflowQueueGameCategory.hpp"
#include "LolGameflowQueueAvailability.hpp"
#include "LolGameflowQueueReward.hpp"
namespace leagueapi {
  struct LolGameflowQueue_t {
    bool areFreeChampionsAllowed;
    std::string name;
    std::string type;
    std::string description;
    uint32_t maxLevel;
    int32_t id;
    bool spectatorEnabled;
    LolGameflowQueueAvailability_t queueAvailability;
    int32_t numPlayersPerTeam;
    LolGameflowQueueGameTypeConfig_t gameTypeConfig;
    std::string detailedDescription;
    bool isTeamOnly;
    int32_t minimumParticipantListSize;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string gameMutator;
    int32_t mapId;
    LolGameflowQueueGameCategory_t category;
    std::string shortName;
    bool isRanked;
    int32_t maximumParticipantListSize;
    LolGameflowQueueReward_t queueRewards;
    bool isTeamBuilderManaged;
    uint32_t minLevel;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueue_t& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["name"] = v.name;
    j["type"] = v.type;
    j["description"] = v.description;
    j["maxLevel"] = v.maxLevel;
    j["id"] = v.id;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["queueAvailability"] = v.queueAvailability;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["detailedDescription"] = v.detailedDescription;
    j["isTeamOnly"] = v.isTeamOnly;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["category"] = v.category;
    j["shortName"] = v.shortName;
    j["isRanked"] = v.isRanked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["queueRewards"] = v.queueRewards;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["minLevel"] = v.minLevel;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueue_t& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameflowQueueAvailability_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameflowQueueGameTypeConfig_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.category = j.at("category").get<LolGameflowQueueGameCategory_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.queueRewards = j.at("queueRewards").get<LolGameflowQueueReward_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
}
