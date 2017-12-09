#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashQueueAvailability.hpp"
#include "LolClashQueueGameCategory.hpp"
#include "LolClashQueueReward.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolClashQueue_t {
    bool isTeamBuilderManaged;
    int32_t mapId;
    LolClashQueueGameCategory_t category;
    int32_t id;
    LolClashQueueReward_t queueRewards;
    LolClashQueueAvailability_t queueAvailability;
    std::string gameMode;
    uint32_t minLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool spectatorEnabled;
    std::string description;
    bool areFreeChampionsAllowed;
    LolClashQueueGameTypeConfig_t gameTypeConfig;
    bool isRanked;
    int32_t maximumParticipantListSize;
    std::string type;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    std::string detailedDescription;
    uint32_t maxLevel;
    std::string shortName;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueue_t& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["mapId"] = v.mapId;
    j["category"] = v.category;
    j["id"] = v.id;
    j["queueRewards"] = v.queueRewards;
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["minLevel"] = v.minLevel;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["description"] = v.description;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["isRanked"] = v.isRanked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["isTeamOnly"] = v.isTeamOnly;
    j["detailedDescription"] = v.detailedDescription;
    j["maxLevel"] = v.maxLevel;
    j["shortName"] = v.shortName;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueue_t& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.category = j.at("category").get<LolClashQueueGameCategory_t>();
    v.id = j.at("id").get<int32_t>();
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolClashQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
