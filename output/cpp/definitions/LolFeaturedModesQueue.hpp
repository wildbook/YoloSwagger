#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesQueueAvailability.hpp"
#include "LolFeaturedModesQueueGameCategory.hpp"
namespace leagueapi {
  struct LolFeaturedModesQueue_t {
    std::string gameMutator;
    int32_t mapId;
    std::string name;
    int32_t id;
    uint64_t lastToggledOffTime;
    LolFeaturedModesQueueGameCategory_t category;
    std::string gameMode;
    uint64_t lastToggledOnTime;
    LolFeaturedModesQueueAvailability_t queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue_t& v) {
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["name"] = v.name;
    j["id"] = v.id;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["category"] = v.category;
    j["gameMode"] = v.gameMode;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue_t& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability_t>();
  }
}
