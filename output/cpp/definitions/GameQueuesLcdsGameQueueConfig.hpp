#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    bool botsCanSpawnOnBlueSide;
    std::string gameMode;
    int32_t gameTypeConfigId;
    std::string pointsConfigKey;
    uint64_t lastToggledOnTime;
    uint64_t lastToggledOffTime;
    int64_t thresholdSize;
    std::string cacheName;
    bool randomizeTeamSizes;
    bool ranked;
    int32_t id;
    std::string queueStateString;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    std::vector<int32_t> supportedMapIds;
    std::vector<std::string> gameMutators;
    uint32_t maximumParticipantListSize;
    std::string typeString;
    uint32_t minLevel;
    bool thresholdEnabled;
    std::string queueState;
    uint32_t minimumParticipantListSize;
    uint32_t blockedMinutesThreshold;
    uint32_t numPlayersPerTeam;
    bool teamOnly;
    uint32_t minimumQueueDodgeDelayTime;
    std::string mapSelectionAlgorithm;
    std::string queueBonusKey;
    bool disallowFreeChampions;
    uint32_t maxLevel;
    std::string type;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsGameQueueConfig_t& v) {
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide;
    j["gameMode"] = v.gameMode;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["pointsConfigKey"] = v.pointsConfigKey;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["thresholdSize"] = v.thresholdSize;
    j["cacheName"] = v.cacheName;
    j["randomizeTeamSizes"] = v.randomizeTeamSizes;
    j["ranked"] = v.ranked;
    j["id"] = v.id;
    j["queueStateString"] = v.queueStateString;
    j["matchingThrottleConfig"] = v.matchingThrottleConfig;
    j["supportedMapIds"] = v.supportedMapIds;
    j["gameMutators"] = v.gameMutators;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["typeString"] = v.typeString;
    j["minLevel"] = v.minLevel;
    j["thresholdEnabled"] = v.thresholdEnabled;
    j["queueState"] = v.queueState;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["teamOnly"] = v.teamOnly;
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime;
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm;
    j["queueBonusKey"] = v.queueBonusKey;
    j["disallowFreeChampions"] = v.disallowFreeChampions;
    j["maxLevel"] = v.maxLevel;
    j["type"] = v.type;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsGameQueueConfig_t& v) {
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t>();
    v.cacheName = j.at("cacheName").get<std::string>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>();
    v.ranked = j.at("ranked").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.queueStateString = j.at("queueStateString").get<std::string>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.typeString = j.at("typeString").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>();
    v.queueState = j.at("queueState").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>();
    v.teamOnly = j.at("teamOnly").get<bool>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>();
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>();
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.type = j.at("type").get<std::string>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
  }
  inline std::string to_string(const GameQueuesLcdsGameQueueConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
