#ifndef SWAGGER_TYPES_LolGameQueuesQueue_HPP
#define SWAGGER_TYPES_LolGameQueuesQueue_HPP
#include <json.hpp>
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesQueue {
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    bool areFreeChampionsAllowed;
    // 
    LolGameQueuesQueueGameCategory category;
    // 
    uint32_t championsRequiredToPlay;
    // 
    std::string description;
    // 
    std::string detailedDescription;
    // 
    std::string gameMode;
    // 
    std::string gameMutator;
    // 
    LolGameQueuesQueueGameTypeConfig gameTypeConfig;
    // 
    int32_t id;
    // 
    bool isRanked;
    // 
    bool isTeamBuilderManaged;
    // 
    bool isTeamOnly;
    // 
    uint64_t lastToggledOffTime;
    // 
    uint64_t lastToggledOnTime;
    // 
    int32_t mapId;
    // 
    uint32_t maxLevel;
    // 
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    // 
    int32_t maximumParticipantListSize;
    // 
    uint32_t minLevel;
    // 
    int32_t minimumParticipantListSize;
    // 
    std::string name;
    // 
    int32_t numPlayersPerTeam;
    // 
    LolGameQueuesQueueAvailability queueAvailability;
    // 
    LolGameQueuesQueueReward queueRewards;
    // 
    std::string shortName;
    // 
    bool showPositionSelector;
    // 
    bool spectatorEnabled;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["category"] = v.category;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["description"] = v.description;
    j["detailedDescription"] = v.detailedDescription;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["isTeamOnly"] = v.isTeamOnly;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["mapId"] = v.mapId;
    j["maxLevel"] = v.maxLevel;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["name"] = v.name;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["queueAvailability"] = v.queueAvailability;
    j["queueRewards"] = v.queueRewards;
    j["shortName"] = v.shortName;
    j["showPositionSelector"] = v.showPositionSelector;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory>;
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>;
    v.description = j.at("description").get<std::string>;
    v.detailedDescription = j.at("detailedDescription").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig>;
    v.id = j.at("id").get<int32_t>;
    v.isRanked = j.at("isRanked").get<bool>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.isTeamOnly = j.at("isTeamOnly").get<bool>;
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>;
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maxLevel = j.at("maxLevel").get<uint32_t>;
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>;
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward>;
    v.shortName = j.at("shortName").get<std::string>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueue_HPP
