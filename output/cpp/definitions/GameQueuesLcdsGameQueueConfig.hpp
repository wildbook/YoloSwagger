#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    std::string gameMode;
    uint32_t minimumQueueDodgeDelayTime;
    bool botsCanSpawnOnBlueSide;
    std::string queueStateString;
    std::string cacheName;
    std::string mapSelectionAlgorithm;
    uint32_t minimumParticipantListSize;
    std::string queueBonusKey;
    uint32_t maxLevel;
    bool thresholdEnabled;
    bool disallowFreeChampions;
    bool ranked;
    int32_t id;
    uint32_t blockedMinutesThreshold;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    std::string pointsConfigKey;
    int32_t gameTypeConfigId;
    std::string typeString;
    uint32_t maximumParticipantListSize;
    bool teamOnly;
    uint32_t minLevel;
    uint64_t lastToggledOnTime;
    std::vector<int32_t> supportedMapIds;
    std::string queueState;
    std::string type;
    uint32_t numPlayersPerTeam;
    std::vector<std::string> gameMutators;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint64_t lastToggledOffTime;
    bool randomizeTeamSizes;
    int64_t thresholdSize;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsGameQueueConfig_t& v) {
    j["gameMode"] = v.gameMode;
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime;
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide;
    j["queueStateString"] = v.queueStateString;
    j["cacheName"] = v.cacheName;
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["queueBonusKey"] = v.queueBonusKey;
    j["maxLevel"] = v.maxLevel;
    j["thresholdEnabled"] = v.thresholdEnabled;
    j["disallowFreeChampions"] = v.disallowFreeChampions;
    j["ranked"] = v.ranked;
    j["id"] = v.id;
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold;
    j["matchingThrottleConfig"] = v.matchingThrottleConfig;
    j["pointsConfigKey"] = v.pointsConfigKey;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["typeString"] = v.typeString;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["teamOnly"] = v.teamOnly;
    j["minLevel"] = v.minLevel;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["supportedMapIds"] = v.supportedMapIds;
    j["queueState"] = v.queueState;
    j["type"] = v.type;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutators"] = v.gameMutators;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["randomizeTeamSizes"] = v.randomizeTeamSizes;
    j["thresholdSize"] = v.thresholdSize;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsGameQueueConfig_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>();
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>();
    v.queueStateString = j.at("queueStateString").get<std::string>();
    v.cacheName = j.at("cacheName").get<std::string>();
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>();
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>();
    v.ranked = j.at("ranked").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.typeString = j.at("typeString").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.teamOnly = j.at("teamOnly").get<bool>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
    v.queueState = j.at("queueState").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t>();
  }
  inline std::string to_string(const GameQueuesLcdsGameQueueConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
