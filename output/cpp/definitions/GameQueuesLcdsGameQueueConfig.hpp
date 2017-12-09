#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    std::string type;
    std::vector<int32_t> supportedMapIds;
    uint32_t minimumQueueDodgeDelayTime;
    std::string pointsConfigKey;
    bool teamOnly;
    bool thresholdEnabled;
    bool botsCanSpawnOnBlueSide;
    uint32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t blockedMinutesThreshold;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint32_t maxLevel;
    bool ranked;
    std::string queueBonusKey;
    std::string typeString;
    std::string cacheName;
    int64_t thresholdSize;
    std::string queueStateString;
    int32_t id;
    uint64_t lastToggledOnTime;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    uint32_t numPlayersPerTeam;
    bool randomizeTeamSizes;
    std::string queueState;
    std::string mapSelectionAlgorithm;
    std::vector<std::string> gameMutators;
    std::string gameMode;
    uint64_t lastToggledOffTime;
    int32_t gameTypeConfigId;
    uint32_t minimumParticipantListSize;
    bool disallowFreeChampions;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsGameQueueConfig_t& v) {
    j["type"] = v.type;
    j["supportedMapIds"] = v.supportedMapIds;
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime;
    j["pointsConfigKey"] = v.pointsConfigKey;
    j["teamOnly"] = v.teamOnly;
    j["thresholdEnabled"] = v.thresholdEnabled;
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["maxLevel"] = v.maxLevel;
    j["ranked"] = v.ranked;
    j["queueBonusKey"] = v.queueBonusKey;
    j["typeString"] = v.typeString;
    j["cacheName"] = v.cacheName;
    j["thresholdSize"] = v.thresholdSize;
    j["queueStateString"] = v.queueStateString;
    j["id"] = v.id;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["matchingThrottleConfig"] = v.matchingThrottleConfig;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["randomizeTeamSizes"] = v.randomizeTeamSizes;
    j["queueState"] = v.queueState;
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm;
    j["gameMutators"] = v.gameMutators;
    j["gameMode"] = v.gameMode;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["disallowFreeChampions"] = v.disallowFreeChampions;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsGameQueueConfig_t& v) {
    v.type = j.at("type").get<std::string>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>();
    v.teamOnly = j.at("teamOnly").get<bool>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>();
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>();
    v.typeString = j.at("typeString").get<std::string>();
    v.cacheName = j.at("cacheName").get<std::string>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t>();
    v.queueStateString = j.at("queueStateString").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>();
    v.queueState = j.at("queueState").get<std::string>();
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>();
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>();
  }
  inline std::string to_string(const GameQueuesLcdsGameQueueConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
