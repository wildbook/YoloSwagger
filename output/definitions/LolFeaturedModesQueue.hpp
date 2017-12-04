#ifndef SWAGGER_TYPES_LolFeaturedModesQueue_HPP
#define SWAGGER_TYPES_LolFeaturedModesQueue_HPP
#include <json.hpp>
#include "LolFeaturedModesQueueGameCategory.hpp"
#include "LolFeaturedModesQueueAvailability.hpp"
namespace leagueapi {
  // 
  struct LolFeaturedModesQueue {
    // 
    LolFeaturedModesQueueGameCategory category;
    // 
    std::string gameMode;
    // 
    std::string gameMutator;
    // 
    int32_t id;
    // 
    uint64_t lastToggledOffTime;
    // 
    uint64_t lastToggledOnTime;
    // 
    int32_t mapId;
    // 
    std::string name;
    // 
    LolFeaturedModesQueueAvailability queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue& v) {
    j["category"] = v.category;
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["mapId"] = v.mapId;
    j["name"] = v.name;
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue& v) {
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>;
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesQueue_HPP
