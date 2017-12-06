#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolGameQueuesQueue_t {
    bool areFreeChampionsAllowed;
    std::vector<int32_t> allowablePremadeSizes;
    std::string type;
    std::string description;
    uint32_t maxLevel;
    int32_t id;
    bool spectatorEnabled;
    LolGameQueuesQueueAvailability_t queueAvailability;
    LolGameQueuesQueueReward_t queueRewards;
    bool isTeamBuilderManaged;
    LolGameQueuesQueueGameTypeConfig_t gameTypeConfig;
    bool showPositionSelector;
    std::string detailedDescription;
    bool isTeamOnly;
    uint64_t lastToggledOnTime;
    int32_t minimumParticipantListSize;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string shortName;
    std::string gameMutator;
    int32_t mapId;
    LolGameQueuesQueueGameCategory_t category;
    std::string name;
    uint64_t lastToggledOffTime;
    bool isRanked;
    int32_t maximumParticipantListSize;
    uint32_t championsRequiredToPlay;
    int32_t numPlayersPerTeam;
    uint32_t minLevel;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue_t& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["type"] = v.type;
    j["description"] = v.description;
    j["maxLevel"] = v.maxLevel;
    j["id"] = v.id;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["queueAvailability"] = v.queueAvailability;
    j["queueRewards"] = v.queueRewards;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["showPositionSelector"] = v.showPositionSelector;
    j["detailedDescription"] = v.detailedDescription;
    j["isTeamOnly"] = v.isTeamOnly;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["shortName"] = v.shortName;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["category"] = v.category;
    j["name"] = v.name;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["isRanked"] = v.isRanked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["minLevel"] = v.minLevel;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue_t& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.type = j.at("type").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory_t>();
    v.name = j.at("name").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
}
