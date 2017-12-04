#ifndef SWAGGER_TYPES_LolClashQueue_HPP
#define SWAGGER_TYPES_LolClashQueue_HPP
#include <json.hpp>
#include "LolClashQueueGameCategory.hpp"
#include "LolClashQueueReward.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
#include "LolClashQueueAvailability.hpp"
namespace test {
  // 
  struct LolClashQueue {
'    // 
    bool areFreeChampionsAllowed;
    // 
    LolClashQueueGameCategory category;
    // 
    std::string description;
    // 
    std::string detailedDescription;
    // 
    std::string gameMode;
    // 
    std::string gameMutator;
    // 
    LolClashQueueGameTypeConfig gameTypeConfig;
    // 
    int32_t id;
    // 
    bool isRanked;
    // 
    bool isTeamBuilderManaged;
    // 
    bool isTeamOnly;
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
    LolClashQueueAvailability queueAvailability;
    // 
    LolClashQueueReward queueRewards;
    // 
    std::string shortName;
    // 
    bool spectatorEnabled;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolClashQueue& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["category"] = v.category;
    j["description"] = v.description;
    j["detailedDescription"] = v.detailedDescription;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["isTeamOnly"] = v.isTeamOnly;
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
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolClashQueue& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.category = j.at("category").get<LolClashQueueGameCategory>;
    v.description = j.at("description").get<std::string>;
    v.detailedDescription = j.at("detailedDescription").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig>;
    v.id = j.at("id").get<int32_t>;
    v.isRanked = j.at("isRanked").get<bool>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.isTeamOnly = j.at("isTeamOnly").get<bool>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maxLevel = j.at("maxLevel").get<uint32_t>;
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability>;
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward>;
    v.shortName = j.at("shortName").get<std::string>;
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashQueue_HPP
