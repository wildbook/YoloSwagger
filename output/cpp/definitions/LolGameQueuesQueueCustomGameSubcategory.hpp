#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGameSubcategory_t {
    int32_t minimumParticipantListSize;
    std::string gameMode;
    std::string gameMutator;
    uint32_t maxLevel;
    uint32_t minLevel;
    int32_t maximumParticipantListSize;
    int32_t numPlayersPerTeam;
    int32_t mapId;
    int32_t maxPlayerCount;
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::vector<LolGameQueuesQueueGameTypeConfig_t> mutators;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["maxLevel"] = v.maxLevel;
    j["minLevel"] = v.minLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["mapId"] = v.mapId;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["queueAvailability"] = v.queueAvailability;
    j["mutators"] = v.mutators;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSubcategory_t& v) {
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig_t>>();
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
