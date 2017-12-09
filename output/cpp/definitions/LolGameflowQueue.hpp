#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueueReward.hpp"
#include "LolGameflowQueueGameCategory.hpp"
#include "LolGameflowQueueGameTypeConfig.hpp"
#include "LolGameflowQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameflowQueue_t {
    std::string description;
    bool areFreeChampionsAllowed;
    std::string shortName;
    LolGameflowQueueAvailability_t queueAvailability;
    LolGameflowQueueGameCategory_t category;
    bool isTeamBuilderManaged;
    bool isTeamOnly;
    bool isRanked;
    LolGameflowQueueReward_t queueRewards;
    std::string detailedDescription;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint32_t maxLevel;
    bool spectatorEnabled;
    int32_t mapId;
    LolGameflowQueueGameTypeConfig_t gameTypeConfig;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
    int32_t id;
    std::string name;
    std::string gameMode;
    int32_t minimumParticipantListSize;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueue_t& v) {
    j["description"] = v.description;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
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
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueue_t& v) {
    v.description = j.at("description").get<std::string>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.shortName = j.at("shortName").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameflowQueueAvailability_t>();
    v.category = j.at("category").get<LolGameflowQueueGameCategory_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.queueRewards = j.at("queueRewards").get<LolGameflowQueueReward_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameflowQueueGameTypeConfig_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolGameflowQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
