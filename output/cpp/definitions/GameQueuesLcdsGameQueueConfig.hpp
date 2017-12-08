#pragma once
#include <json.hpp>
#include <optional>
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace leagueapi {
  struct GameQueuesLcdsGameQueueConfig_t {
    bool_t disallowFreeChampions;
    bool_t teamOnly;
    std::string_t mapSelectionAlgorithm;
    std::string_t gameMode;
    uint32_t_t minimumQueueDodgeDelayTime;
    std::string_t cacheName;
    bool_t botsCanSpawnOnBlueSide;
    bool_t thresholdEnabled;
    int32_t_t id;
    std::string_t queueStateString;
    uint64_t_t lastToggledOffTime;
    std::string_t typeString;
    uint32_t_t maxSummonerLevelForFirstWinOfTheDay;
    std::vector<int32_t> supportedMapIds;
    uint32_t_t blockedMinutesThreshold;
    uint32_t_t maximumParticipantListSize;
    uint32_t_t maxLevel;
    std::string_t queueBonusKey;
    uint64_t_t lastToggledOnTime;
    int64_t_t thresholdSize;
    uint32_t_t minLevel;
    GameQueuesLcdsMatchingThrottleConfig_t matchingThrottleConfig;
    std::string_t pointsConfigKey;
    bool_t randomizeTeamSizes;
    uint32_t_t numPlayersPerTeam;
    std::string_t type;
    int32_t_t gameTypeConfigId;
    uint32_t_t minimumParticipantListSize;
    bool_t ranked;
    std::vector<std::string> gameMutators;
    std::string_t queueState;
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
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool_t>();
    v.teamOnly = j.at("teamOnly").get<bool_t>();
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t_t>();
    v.cacheName = j.at("cacheName").get<std::string_t>();
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool_t>();
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool_t>();
    v.id = j.at("id").get<int32_t_t>();
    v.queueStateString = j.at("queueStateString").get<std::string_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t_t>();
    v.typeString = j.at("typeString").get<std::string_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t_t>();
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>();
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t_t>();
    v.queueBonusKey = j.at("queueBonusKey").get<std::string_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t_t>();
    v.thresholdSize = j.at("thresholdSize").get<int64_t_t>();
    v.minLevel = j.at("minLevel").get<uint32_t_t>();
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig_t>();
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string_t>();
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t_t>();
    v.type = j.at("type").get<std::string_t>();
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t_t>();
    v.ranked = j.at("ranked").get<bool_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.queueState = j.at("queueState").get<std::string_t>();
  }
  inline std::string to_string(const GameQueuesLcdsGameQueueConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
