#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashQueueAvailability.hpp"
#include "LolClashQueueReward.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
#include "LolClashQueueGameCategory.hpp"
namespace leagueapi {
  struct LolClashQueue_t {
    LolClashQueueAvailability_t queueAvailability;
    std::string_t gameMode;
    int32_t_t mapId;
    bool_t areFreeChampionsAllowed;
    LolClashQueueGameTypeConfig_t gameTypeConfig;
    int32_t_t id;
    LolClashQueueGameCategory_t category;
    LolClashQueueReward_t queueRewards;
    uint32_t_t maxSummonerLevelForFirstWinOfTheDay;
    bool_t isTeamOnly;
    int32_t_t maximumParticipantListSize;
    std::string_t detailedDescription;
    uint32_t_t maxLevel;
    std::string_t description;
    uint32_t_t minLevel;
    std::string_t gameMutator;
    bool_t isRanked;
    std::string_t shortName;
    int32_t_t numPlayersPerTeam;
    bool_t spectatorEnabled;
    std::string_t name;
    std::string_t type;
    int32_t_t minimumParticipantListSize;
    bool_t isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueue_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["category"] = v.category;
    j["queueRewards"] = v.queueRewards;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["isTeamOnly"] = v.isTeamOnly;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["detailedDescription"] = v.detailedDescription;
    j["maxLevel"] = v.maxLevel;
    j["description"] = v.description;
    j["minLevel"] = v.minLevel;
    j["gameMutator"] = v.gameMutator;
    j["isRanked"] = v.isRanked;
    j["shortName"] = v.shortName;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["name"] = v.name;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueue_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.mapId = j.at("mapId").get<int32_t_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig_t>();
    v.id = j.at("id").get<int32_t_t>();
    v.category = j.at("category").get<LolClashQueueGameCategory_t>();
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t_t>();
    v.description = j.at("description").get<std::string_t>();
    v.minLevel = j.at("minLevel").get<uint32_t_t>();
    v.gameMutator = j.at("gameMutator").get<std::string_t>();
    v.isRanked = j.at("isRanked").get<bool_t>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool_t>();
  }
  inline std::string to_string(const LolClashQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
