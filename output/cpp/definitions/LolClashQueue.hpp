#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashQueueAvailability.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
#include "LolClashQueueReward.hpp"
#include "LolClashQueueGameCategory.hpp"
namespace leagueapi {
  struct LolClashQueue_t {
    std::string gameMode;
    std::string shortName;
    LolClashQueueReward_t queueRewards;
    int32_t mapId;
    std::string gameMutator;
    uint32_t maxLevel;
    int32_t id;
    std::string type;
    bool spectatorEnabled;
    std::string description;
    uint32_t minLevel;
    int32_t maximumParticipantListSize;
    std::string detailedDescription;
    LolClashQueueAvailability_t queueAvailability;
    bool isRanked;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool isTeamBuilderManaged;
    LolClashQueueGameCategory_t category;
    bool isTeamOnly;
    LolClashQueueGameTypeConfig_t gameTypeConfig;
    bool areFreeChampionsAllowed;
    int32_t minimumParticipantListSize;
    int32_t numPlayersPerTeam;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueue_t& v) {
    j["gameMode"] = v.gameMode;
    j["shortName"] = v.shortName;
    j["queueRewards"] = v.queueRewards;
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
    j["maxLevel"] = v.maxLevel;
    j["id"] = v.id;
    j["type"] = v.type;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["description"] = v.description;
    j["minLevel"] = v.minLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["detailedDescription"] = v.detailedDescription;
    j["queueAvailability"] = v.queueAvailability;
    j["isRanked"] = v.isRanked;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["category"] = v.category;
    j["isTeamOnly"] = v.isTeamOnly;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueue_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.category = j.at("category").get<LolClashQueueGameCategory_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolClashQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
