#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolGameQueuesQueue_t {
    std::string gameMode;
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::string shortName;
    LolGameQueuesQueueReward_t queueRewards;
    int32_t mapId;
    std::string gameMutator;
    std::vector<int32_t> allowablePremadeSizes;
    bool showPositionSelector;
    uint32_t maxLevel;
    int32_t id;
    std::string type;
    bool spectatorEnabled;
    std::string description;
    uint32_t minLevel;
    int32_t maximumParticipantListSize;
    std::string detailedDescription;
    uint32_t championsRequiredToPlay;
    int32_t minimumParticipantListSize;
    uint64_t lastToggledOnTime;
    bool isRanked;
    int32_t numPlayersPerTeam;
    bool isTeamBuilderManaged;
    LolGameQueuesQueueGameCategory_t category;
    bool isTeamOnly;
    LolGameQueuesQueueGameTypeConfig_t gameTypeConfig;
    uint64_t lastToggledOffTime;
    bool areFreeChampionsAllowed;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue_t& v) {
    j["gameMode"] = v.gameMode;
    j["queueAvailability"] = v.queueAvailability;
    j["shortName"] = v.shortName;
    j["queueRewards"] = v.queueRewards;
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["showPositionSelector"] = v.showPositionSelector;
    j["maxLevel"] = v.maxLevel;
    j["id"] = v.id;
    j["type"] = v.type;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["description"] = v.description;
    j["minLevel"] = v.minLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["detailedDescription"] = v.detailedDescription;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["isRanked"] = v.isRanked;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["category"] = v.category;
    j["isTeamOnly"] = v.isTeamOnly;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolGameQueuesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
