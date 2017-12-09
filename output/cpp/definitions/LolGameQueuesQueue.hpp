#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameQueuesQueue_t {
    std::vector<int32_t> allowablePremadeSizes;
    int32_t mapId;
    LolGameQueuesQueueAvailability_t queueAvailability;
    LolGameQueuesQueueGameCategory_t category;
    int32_t id;
    bool isTeamBuilderManaged;
    uint32_t championsRequiredToPlay;
    std::string detailedDescription;
    std::string gameMode;
    uint32_t minLevel;
    LolGameQueuesQueueReward_t queueRewards;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool spectatorEnabled;
    std::string description;
    bool areFreeChampionsAllowed;
    LolGameQueuesQueueGameTypeConfig_t gameTypeConfig;
    bool isRanked;
    uint64_t lastToggledOnTime;
    uint64_t lastToggledOffTime;
    int32_t maximumParticipantListSize;
    std::string type;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    uint32_t maxLevel;
    std::string shortName;
    bool showPositionSelector;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["mapId"] = v.mapId;
    j["queueAvailability"] = v.queueAvailability;
    j["category"] = v.category;
    j["id"] = v.id;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["detailedDescription"] = v.detailedDescription;
    j["gameMode"] = v.gameMode;
    j["minLevel"] = v.minLevel;
    j["queueRewards"] = v.queueRewards;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["description"] = v.description;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["isRanked"] = v.isRanked;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["isTeamOnly"] = v.isTeamOnly;
    j["maxLevel"] = v.maxLevel;
    j["shortName"] = v.shortName;
    j["showPositionSelector"] = v.showPositionSelector;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory_t>();
    v.id = j.at("id").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolGameQueuesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
