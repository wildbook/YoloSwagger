#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    std::string type;
    std::string mapSelectionAlgorithm;
    bool thresholdEnabled;
    std::string gameMode;
    bool randomizeTeamSizes;
    uint32_t maxLevel;
    int32_t id;
    uint32_t minimumQueueDodgeDelayTime;
    std::string queueState;
    std::vector<std::string> gameMutators;
    std::string cacheName;
    std::string queueBonusKey;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    uint32_t numPlayersPerTeam;
    bool teamOnly;
    int64_t thresholdSize;
    std::string pointsConfigKey;
    uint64_t lastToggledOnTime;
    bool ranked;
    uint32_t minimumParticipantListSize;
    int32_t gameTypeConfigId;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool disallowFreeChampions;
    bool botsCanSpawnOnBlueSide;
    std::string queueStateString;
    uint32_t maximumParticipantListSize;
    uint32_t blockedMinutesThreshold;
    uint64_t lastToggledOffTime;
    std::string typeString;
    uint32_t minLevel;
    std::vector<int32_t> supportedMapIds;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsGameQueueConfig_t& v) {
    j["type"] = v.type;
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm;
    j["thresholdEnabled"] = v.thresholdEnabled;
    j["gameMode"] = v.gameMode;
    j["randomizeTeamSizes"] = v.randomizeTeamSizes;
    j["maxLevel"] = v.maxLevel;
    j["id"] = v.id;
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime;
    j["queueState"] = v.queueState;
    j["gameMutators"] = v.gameMutators;
    j["cacheName"] = v.cacheName;
    j["queueBonusKey"] = v.queueBonusKey;
    j["matchingThrottleConfig"] = v.matchingThrottleConfig;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["teamOnly"] = v.teamOnly;
    j["thresholdSize"] = v.thresholdSize;
    j["pointsConfigKey"] = v.pointsConfigKey;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["ranked"] = v.ranked;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["disallowFreeChampions"] = v.disallowFreeChampions;
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide;
    j["queueStateString"] = v.queueStateString;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["typeString"] = v.typeString;
    j["minLevel"] = v.minLevel;
    j["supportedMapIds"] = v.supportedMapIds;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsGameQueueConfig_t& v) {
    v.type = j.at("type").get<std::string>();
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>();
    v.queueState = j.at("queueState").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.cacheName = j.at("cacheName").get<std::string>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>();
    v.teamOnly = j.at("teamOnly").get<bool>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>();
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>();
    v.queueStateString = j.at("queueStateString").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.typeString = j.at("typeString").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
  }
}
