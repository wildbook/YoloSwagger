#ifndef SWAGGER_TYPES_LolGameQueuesQueue_HPP
#define SWAGGER_TYPES_LolGameQueuesQueue_HPP
#include <json.hpp>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesQueue {
    // 
    LolGameQueuesQueueAvailability queueAvailability;
    // 
    std::string gameMode;
    // 
    int32_t mapId;
    // 
    bool areFreeChampionsAllowed;
    // 
    LolGameQueuesQueueGameTypeConfig gameTypeConfig;
    // 
    int32_t id;
    // 
    LolGameQueuesQueueGameCategory category;
    // 
    uint64_t lastToggledOffTime;
    // 
    LolGameQueuesQueueReward queueRewards;
    // 
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    // 
    bool isTeamOnly;
    // 
    int32_t maximumParticipantListSize;
    // 
    std::string detailedDescription;
    // 
    uint32_t maxLevel;
    // 
    uint32_t championsRequiredToPlay;
    // 
    std::string description;
    // 
    uint64_t lastToggledOnTime;
    // 
    uint32_t minLevel;
    // 
    std::string gameMutator;
    // 
    bool isRanked;
    // 
    std::string shortName;
    // 
    int32_t numPlayersPerTeam;
    // 
    bool spectatorEnabled;
    // 
    std::string name;
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    std::string type;
    // 
    bool showPositionSelector;
    // 
    int32_t minimumParticipantListSize;
    // 
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["category"] = v.category;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["queueRewards"] = v.queueRewards;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["isTeamOnly"] = v.isTeamOnly;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["detailedDescription"] = v.detailedDescription;
    j["maxLevel"] = v.maxLevel;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["description"] = v.description;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["minLevel"] = v.minLevel;
    j["gameMutator"] = v.gameMutator;
    j["isRanked"] = v.isRanked;
    j["shortName"] = v.shortName;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["name"] = v.name;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["type"] = v.type;
    j["showPositionSelector"] = v.showPositionSelector;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig>;
    v.id = j.at("id").get<int32_t>;
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory>;
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>;
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward>;
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>;
    v.isTeamOnly = j.at("isTeamOnly").get<bool>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.detailedDescription = j.at("detailedDescription").get<std::string>;
    v.maxLevel = j.at("maxLevel").get<uint32_t>;
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>;
    v.description = j.at("description").get<std::string>;
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.isRanked = j.at("isRanked").get<bool>;
    v.shortName = j.at("shortName").get<std::string>;
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.type = j.at("type").get<std::string>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueue_HPP
