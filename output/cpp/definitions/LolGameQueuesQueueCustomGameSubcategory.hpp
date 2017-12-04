#ifndef SWAGGER_TYPES_LolGameQueuesQueueCustomGameSubcategory_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueCustomGameSubcategory_HPP
#include <json.hpp>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesQueueCustomGameSubcategory {
    // 
    int32_t numPlayersPerTeam;
    // 
    int32_t maxPlayerCount;
    // 
    LolGameQueuesQueueAvailability queueAvailability;
    // 
    std::string gameMode;
    // 
    int32_t mapId;
    // 
    uint32_t minLevel;
    // 
    std::string gameMutator;
    // 
    int32_t maximumParticipantListSize;
    // 
    int32_t minimumParticipantListSize;
    // 
    std::vector<LolGameQueuesQueueGameTypeConfig> mutators;
    // 
    uint32_t maxLevel;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSubcategory& v) {
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["minLevel"] = v.minLevel;
    j["gameMutator"] = v.gameMutator;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["mutators"] = v.mutators;
    j["maxLevel"] = v.maxLevel;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSubcategory& v) {
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>;
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>;
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig>>;
    v.maxLevel = j.at("maxLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueCustomGameSubcategory_HPP
