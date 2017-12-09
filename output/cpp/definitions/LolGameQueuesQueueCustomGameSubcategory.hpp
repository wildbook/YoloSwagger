#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGameSubcategory_t {
    int32_t numPlayersPerTeam;
    std::vector<LolGameQueuesQueueGameTypeConfig_t> mutators;
    std::string gameMutator;
    int32_t mapId;
    uint32_t minLevel;
    int32_t maximumParticipantListSize;
    std::string gameMode;
    int32_t maxPlayerCount;
    LolGameQueuesQueueAvailability_t queueAvailability;
    uint32_t maxLevel;
    int32_t minimumParticipantListSize;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["mutators"] = v.mutators;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["minLevel"] = v.minLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["gameMode"] = v.gameMode;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["queueAvailability"] = v.queueAvailability;
    j["maxLevel"] = v.maxLevel;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSubcategory_t& v) {
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig_t>>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
