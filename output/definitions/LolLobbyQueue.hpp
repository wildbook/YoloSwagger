#ifndef SWAGGER_TYPES_LolLobbyQueue_HPP
#define SWAGGER_TYPES_LolLobbyQueue_HPP
#include <json.hpp>
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueReward.hpp"
#include "LolLobbyQueueAvailability.hpp"
#include "LolLobbyQueueGameCategory.hpp"
namespace leagueapi {
  // 
  struct LolLobbyQueue {
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    bool areFreeChampionsAllowed;
    // 
    LolLobbyQueueGameCategory category;
    // 
    std::string description;
    // 
    std::string detailedDescription;
    // 
    std::string gameMode;
    // 
    std::string gameMutator;
    // 
    LolLobbyQueueGameTypeConfig gameTypeConfig;
    // 
    int32_t id;
    // 
    bool isRanked;
    // 
    bool isTeamBuilderManaged;
    // 
    bool isTeamOnly;
    // 
    int32_t mapId;
    // 
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    // 
    int32_t maximumParticipantListSize;
    // 
    uint32_t minLevel;
    // 
    int32_t minimumParticipantListSize;
    // 
    std::string name;
    // 
    int32_t numPlayersPerTeam;
    // 
    LolLobbyQueueAvailability queueAvailability;
    // 
    LolLobbyQueueReward queueRewards;
    // 
    std::string shortName;
    // 
    bool showPositionSelector;
    // 
    bool spectatorEnabled;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolLobbyQueue& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["category"] = v.category;
    j["description"] = v.description;
    j["detailedDescription"] = v.detailedDescription;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["isTeamOnly"] = v.isTeamOnly;
    j["mapId"] = v.mapId;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["name"] = v.name;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["queueAvailability"] = v.queueAvailability;
    j["queueRewards"] = v.queueRewards;
    j["shortName"] = v.shortName;
    j["showPositionSelector"] = v.showPositionSelector;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolLobbyQueue& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.category = j.at("category").get<LolLobbyQueueGameCategory>;
    v.description = j.at("description").get<std::string>;
    v.detailedDescription = j.at("detailedDescription").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>;
    v.id = j.at("id").get<int32_t>;
    v.isRanked = j.at("isRanked").get<bool>;
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>;
    v.isTeamOnly = j.at("isTeamOnly").get<bool>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>;
    v.queueRewards = j.at("queueRewards").get<LolLobbyQueueReward>;
    v.shortName = j.at("shortName").get<std::string>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueue_HPP
