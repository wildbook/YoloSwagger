#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    bool disallowFreeChampions;
    bool teamOnly;
    std::string mapSelectionAlgorithm;
    std::string gameMode;
    uint32_t minimumQueueDodgeDelayTime;
    std::string cacheName;
    bool botsCanSpawnOnBlueSide;
    bool thresholdEnabled;
    int32_t id;
    std::string queueStateString;
    uint64_t lastToggledOffTime;
    std::string typeString;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::vector<int32_t> supportedMapIds;
    uint32_t blockedMinutesThreshold;
    uint32_t maximumParticipantListSize;
    uint32_t maxLevel;
    std::string queueBonusKey;
    uint64_t lastToggledOnTime;
    int64_t thresholdSize;
    uint32_t minLevel;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    std::string pointsConfigKey;
    bool randomizeTeamSizes;
    uint32_t numPlayersPerTeam;
    std::string type;
    int32_t gameTypeConfigId;
    uint32_t minimumParticipantListSize;
    bool ranked;
    std::vector<std::string> gameMutators;
    std::string queueState;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsGameQueueConfig_t& v) {
    j["disallowFreeChampions"] = v.disallowFreeChampions;
    j["teamOnly"] = v.teamOnly;
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm;
    j["gameMode"] = v.gameMode;
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime;
    j["cacheName"] = v.cacheName;
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide;
    j["thresholdEnabled"] = v.thresholdEnabled;
    j["id"] = v.id;
    j["queueStateString"] = v.queueStateString;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["typeString"] = v.typeString;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["supportedMapIds"] = v.supportedMapIds;
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["maxLevel"] = v.maxLevel;
    j["queueBonusKey"] = v.queueBonusKey;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["thresholdSize"] = v.thresholdSize;
    j["minLevel"] = v.minLevel;
    j["matchingThrottleConfig"] = v.matchingThrottleConfig;
    j["pointsConfigKey"] = v.pointsConfigKey;
    j["randomizeTeamSizes"] = v.randomizeTeamSizes;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["type"] = v.type;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["ranked"] = v.ranked;
    j["gameMutators"] = v.gameMutators;
    j["queueState"] = v.queueState;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsGameQueueConfig_t& v) {
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>();
    v.teamOnly = j.at("teamOnly").get<bool>();
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>();
    v.cacheName = j.at("cacheName").get<std::string>();
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.queueStateString = j.at("queueStateString").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.typeString = j.at("typeString").get<std::string>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>();
    v.type = j.at("type").get<std::string>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.queueState = j.at("queueState").get<std::string>();
  }
  inline std::string to_string(const GameQueuesLcdsGameQueueConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
