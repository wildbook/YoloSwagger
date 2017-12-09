#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueGameCategory.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyQueueReward.hpp"
namespace leagueapi {
  struct LolLobbyQueue_t {
    std::string description;
    bool areFreeChampionsAllowed;
    bool showPositionSelector;
    std::string shortName;
    LolLobbyQueueAvailability_t queueAvailability;
    bool isTeamBuilderManaged;
    LolLobbyQueueGameCategory_t category;
    bool isTeamOnly;
    bool isRanked;
    LolLobbyQueueReward_t queueRewards;
    std::string detailedDescription;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool spectatorEnabled;
    int32_t mapId;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
    int32_t id;
    std::string name;
    std::string gameMode;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t minimumParticipantListSize;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueue_t& v) {
    j["description"] = v.description;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["showPositionSelector"] = v.showPositionSelector;
    j["shortName"] = v.shortName;
    j["queueAvailability"] = v.queueAvailability;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["category"] = v.category;
    j["isTeamOnly"] = v.isTeamOnly;
    j["isRanked"] = v.isRanked;
    j["queueRewards"] = v.queueRewards;
    j["detailedDescription"] = v.detailedDescription;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["mapId"] = v.mapId;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueue_t& v) {
    v.description = j.at("description").get<std::string>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.shortName = j.at("shortName").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.category = j.at("category").get<LolLobbyQueueGameCategory_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.queueRewards = j.at("queueRewards").get<LolLobbyQueueReward_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolLobbyQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
