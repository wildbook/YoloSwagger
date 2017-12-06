#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGameSubcategory_t {
    std::string gameMutator;
    uint32_t maxLevel;
    int32_t mapId;
    int32_t maxPlayerCount;
    int32_t maximumParticipantListSize;
    std::vector<LolGameQueuesQueueGameTypeConfig_t> mutators;
    int32_t minimumParticipantListSize;
    std::string gameMode;
    uint32_t minLevel;
    LolGameQueuesQueueAvailability_t queueAvailability;
    int32_t numPlayersPerTeam;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    j["gameMutator"] = v.gameMutator;
    j["maxLevel"] = v.maxLevel;
    j["mapId"] = v.mapId;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["mutators"] = v.mutators;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["gameMode"] = v.gameMode;
    j["minLevel"] = v.minLevel;
    j["queueAvailability"] = v.queueAvailability;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSubcategory_t& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig_t>>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
  }
}
