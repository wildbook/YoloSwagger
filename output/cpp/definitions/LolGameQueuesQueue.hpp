#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
namespace leagueapi {
  struct LolGameQueuesQueue_t {
    std::vector<int32_t> allowablePremadeSizes;
    std::string gameMode;
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::string description;
    bool isTeamBuilderManaged;
    uint32_t championsRequiredToPlay;
    std::string type;
    int32_t minimumParticipantListSize;
    bool areFreeChampionsAllowed;
    std::string gameMutator;
    uint32_t maxLevel;
    std::string name;
    int32_t id;
    LolGameQueuesQueueGameCategory_t category;
    bool isRanked;
    LolGameQueuesQueueReward_t queueRewards;
    std::string detailedDescription;
    uint64_t lastToggledOnTime;
    int32_t maximumParticipantListSize;
    LolGameQueuesQueueGameTypeConfig_t gameTypeConfig;
    uint32_t minLevel;
    bool isTeamOnly;
    bool spectatorEnabled;
    int32_t numPlayersPerTeam;
    std::string shortName;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint64_t lastToggledOffTime;
    int32_t mapId;
    bool showPositionSelector;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueue_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["gameMode"] = v.gameMode;
    j["queueAvailability"] = v.queueAvailability;
    j["description"] = v.description;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameMutator"] = v.gameMutator;
    j["maxLevel"] = v.maxLevel;
    j["name"] = v.name;
    j["id"] = v.id;
    j["category"] = v.category;
    j["isRanked"] = v.isRanked;
    j["queueRewards"] = v.queueRewards;
    j["detailedDescription"] = v.detailedDescription;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["minLevel"] = v.minLevel;
    j["isTeamOnly"] = v.isTeamOnly;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["shortName"] = v.shortName;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["mapId"] = v.mapId;
    j["showPositionSelector"] = v.showPositionSelector;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueue_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.description = j.at("description").get<std::string>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
  }
  inline std::string to_string(const LolGameQueuesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
