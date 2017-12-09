#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueGameCategory.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyQueueReward.hpp"
namespace leagueapi {
  struct LolLobbyQueue_t {
    std::vector<int32_t> allowablePremadeSizes;
    std::string gameMode;
    int32_t numPlayersPerTeam;
    std::string detailedDescription;
    bool isTeamBuilderManaged;
    int32_t mapId;
    std::string type;
    int32_t minimumParticipantListSize;
    bool areFreeChampionsAllowed;
    std::string gameMutator;
    std::string name;
    int32_t id;
    bool isRanked;
    LolLobbyQueueReward_t queueRewards;
    std::string description;
    int32_t maximumParticipantListSize;
    LolLobbyQueueGameTypeConfig_t gameTypeConfig;
    uint32_t minLevel;
    bool isTeamOnly;
    bool spectatorEnabled;
    LolLobbyQueueAvailability_t queueAvailability;
    std::string shortName;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    LolLobbyQueueGameCategory_t category;
    bool showPositionSelector;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueue_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["gameMode"] = v.gameMode;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["detailedDescription"] = v.detailedDescription;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["mapId"] = v.mapId;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameMutator"] = v.gameMutator;
    j["name"] = v.name;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["queueRewards"] = v.queueRewards;
    j["description"] = v.description;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["minLevel"] = v.minLevel;
    j["isTeamOnly"] = v.isTeamOnly;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["queueAvailability"] = v.queueAvailability;
    j["shortName"] = v.shortName;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["category"] = v.category;
    j["showPositionSelector"] = v.showPositionSelector;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueue_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.queueRewards = j.at("queueRewards").get<LolLobbyQueueReward_t>();
    v.description = j.at("description").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.category = j.at("category").get<LolLobbyQueueGameCategory_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
  }
  inline std::string to_string(const LolLobbyQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
