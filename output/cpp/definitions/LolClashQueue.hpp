#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashQueueReward.hpp"
#include "LolClashQueueAvailability.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
#include "LolClashQueueGameCategory.hpp"
namespace leagueapi {
  struct LolClashQueue_t {
    bool spectatorEnabled;
    std::string gameMode;
    LolClashQueueAvailability_t queueAvailability;
    std::string detailedDescription;
    bool isTeamBuilderManaged;
    int32_t mapId;
    std::string type;
    int32_t minimumParticipantListSize;
    bool areFreeChampionsAllowed;
    std::string gameMutator;
    uint32_t maxLevel;
    std::string name;
    int32_t id;
    bool isRanked;
    LolClashQueueReward_t queueRewards;
    std::string description;
    int32_t maximumParticipantListSize;
    LolClashQueueGameTypeConfig_t gameTypeConfig;
    uint32_t minLevel;
    bool isTeamOnly;
    int32_t numPlayersPerTeam;
    std::string shortName;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    LolClashQueueGameCategory_t category;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueue_t& v) {
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["gameMode"] = v.gameMode;
    j["queueAvailability"] = v.queueAvailability;
    j["detailedDescription"] = v.detailedDescription;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["mapId"] = v.mapId;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameMutator"] = v.gameMutator;
    j["maxLevel"] = v.maxLevel;
    j["name"] = v.name;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["queueRewards"] = v.queueRewards;
    j["description"] = v.description;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["minLevel"] = v.minLevel;
    j["isTeamOnly"] = v.isTeamOnly;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["shortName"] = v.shortName;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["category"] = v.category;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueue_t& v) {
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward_t>();
    v.description = j.at("description").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.category = j.at("category").get<LolClashQueueGameCategory_t>();
  }
  inline std::string to_string(const LolClashQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
