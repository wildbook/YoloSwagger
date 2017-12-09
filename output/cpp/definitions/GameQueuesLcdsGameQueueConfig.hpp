#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    std::string mapSelectionAlgorithm;
    bool disallowFreeChampions;
    bool botsCanSpawnOnBlueSide;
    std::vector<std::string> gameMutators;
    int32_t id;
    int32_t gameTypeConfigId;
    std::string gameMode;
    std::string queueStateString;
    std::string pointsConfigKey;
    uint32_t minLevel;
    bool thresholdEnabled;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    std::vector<int32_t> supportedMapIds;
    uint64_t lastToggledOnTime;
    uint64_t lastToggledOffTime;
    std::string typeString;
    uint32_t maximumParticipantListSize;
    std::string type;
    bool randomizeTeamSizes;
    std::string queueState;
    uint32_t minimumParticipantListSize;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint32_t maxLevel;
    bool ranked;
    std::string cacheName;
    bool teamOnly;
    uint32_t minimumQueueDodgeDelayTime;
    std::string queueBonusKey;
    int64_t thresholdSize;
    uint32_t numPlayersPerTeam;
    uint32_t blockedMinutesThreshold;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsGameQueueConfig_t& v) {
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm;
    j["disallowFreeChampions"] = v.disallowFreeChampions;
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide;
    j["gameMutators"] = v.gameMutators;
    j["id"] = v.id;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["gameMode"] = v.gameMode;
    j["queueStateString"] = v.queueStateString;
    j["pointsConfigKey"] = v.pointsConfigKey;
    j["minLevel"] = v.minLevel;
    j["thresholdEnabled"] = v.thresholdEnabled;
    j["matchingThrottleConfig"] = v.matchingThrottleConfig;
    j["supportedMapIds"] = v.supportedMapIds;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["typeString"] = v.typeString;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["type"] = v.type;
    j["randomizeTeamSizes"] = v.randomizeTeamSizes;
    j["queueState"] = v.queueState;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["maxLevel"] = v.maxLevel;
    j["ranked"] = v.ranked;
    j["cacheName"] = v.cacheName;
    j["teamOnly"] = v.teamOnly;
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime;
    j["queueBonusKey"] = v.queueBonusKey;
    j["thresholdSize"] = v.thresholdSize;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsGameQueueConfig_t& v) {
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>();
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>();
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.id = j.at("id").get<int32_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.queueStateString = j.at("queueStateString").get<std::string>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.typeString = j.at("typeString").get<std::string>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.type = j.at("type").get<std::string>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>();
    v.queueState = j.at("queueState").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.cacheName = j.at("cacheName").get<std::string>();
    v.teamOnly = j.at("teamOnly").get<bool>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>();
  }
  inline std::string to_string(const GameQueuesLcdsGameQueueConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
