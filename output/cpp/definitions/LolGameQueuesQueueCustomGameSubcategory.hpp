#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGameSubcategory_t {
    int32_t maxPlayerCount;
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::string gameMode;
    uint32_t maxLevel;
    int32_t mapId;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    int32_t numPlayersPerTeam;
    std::string gameMutator;
    std::vector<LolGameQueuesQueueGameTypeConfig_t> mutators;
    int32_t minimumParticipantListSize;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["maxLevel"] = v.maxLevel;
    j["mapId"] = v.mapId;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["mutators"] = v.mutators;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSubcategory_t& v) {
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig_t>>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
