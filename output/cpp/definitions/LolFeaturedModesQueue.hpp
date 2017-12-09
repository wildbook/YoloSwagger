#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesQueueGameCategory.hpp"
#include "LolFeaturedModesQueueAvailability.hpp"
namespace leagueapi {
  struct LolFeaturedModesQueue_t {
    uint64_t lastToggledOnTime;
    std::string gameMode;
    uint64_t lastToggledOffTime;
    std::string gameMutator;
    LolFeaturedModesQueueAvailability_t queueAvailability;
    std::string name;
    LolFeaturedModesQueueGameCategory_t category;
    int32_t id;
    int32_t mapId;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue_t& v) {
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["gameMode"] = v.gameMode;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["gameMutator"] = v.gameMutator;
    j["queueAvailability"] = v.queueAvailability;
    j["name"] = v.name;
    j["category"] = v.category;
    j["id"] = v.id;
    j["mapId"] = v.mapId;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue_t& v) {
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability_t>();
    v.name = j.at("name").get<std::string>();
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory_t>();
    v.id = j.at("id").get<int32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
  }
  inline std::string to_string(const LolFeaturedModesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
