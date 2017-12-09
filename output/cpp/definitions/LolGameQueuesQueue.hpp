#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameQueuesQueue_t {
    std::string description;
    uint32_t championsRequiredToPlay;
    bool areFreeChampionsAllowed;
    bool showPositionSelector;
    std::string shortName;
    LolGameQueuesQueueAvailability_t queueAvailability;
    LolGameQueuesQueueGameCategory_t category;
    bool isTeamBuilderManaged;
    bool isTeamOnly;
    bool isRanked;
    LolGameQueuesQueueReward_t queueRewards;
    std::string detailedDescription;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint32_t maxLevel;
    bool spectatorEnabled;
    int32_t mapId;
    LolGameQueuesQueueGameTypeConfig_t gameTypeConfig;
    uint64_t lastToggledOnTime;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
    int32_t id;
    std::string name;
    std::string gameMode;
    uint64_t lastToggledOffTime;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t minimumParticipantListSize;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue_t& v) {
    j["description"] = v.description;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["showPositionSelector"] = v.showPositionSelector;
    j["shortName"] = v.shortName;
    j["queueAvailability"] = v.queueAvailability;
    j["category"] = v.category;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["isTeamOnly"] = v.isTeamOnly;
    j["isRanked"] = v.isRanked;
    j["queueRewards"] = v.queueRewards;
    j["detailedDescription"] = v.detailedDescription;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["maxLevel"] = v.maxLevel;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["mapId"] = v.mapId;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue_t& v) {
    v.description = j.at("description").get<std::string>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.shortName = j.at("shortName").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolGameQueuesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
