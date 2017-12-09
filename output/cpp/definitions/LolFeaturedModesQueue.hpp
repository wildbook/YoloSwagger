#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesQueueGameCategory.hpp"
#include "LolFeaturedModesQueueAvailability.hpp"
namespace leagueapi {
  struct LolFeaturedModesQueue_t {
    LolFeaturedModesQueueAvailability_t queueAvailability;
    std::string gameMode;
    std::string name;
    uint64_t lastToggledOnTime;
    uint64_t lastToggledOffTime;
    LolFeaturedModesQueueGameCategory_t category;
    int32_t id;
    int32_t mapId;
    std::string gameMutator;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["name"] = v.name;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["category"] = v.category;
    j["id"] = v.id;
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory_t>();
    v.id = j.at("id").get<int32_t>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
  }
  inline std::string to_string(const LolFeaturedModesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
