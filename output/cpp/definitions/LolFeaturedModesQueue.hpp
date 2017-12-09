#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesQueueGameCategory.hpp"
#include "LolFeaturedModesQueueAvailability.hpp"
namespace leagueapi {
  struct LolFeaturedModesQueue_t {
    int32_t mapId;
    std::string gameMutator;
    int32_t id;
    std::string name;
    std::string gameMode;
    uint64_t lastToggledOffTime;
    LolFeaturedModesQueueAvailability_t queueAvailability;
    LolFeaturedModesQueueGameCategory_t category;
    uint64_t lastToggledOnTime;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue_t& v) {
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["queueAvailability"] = v.queueAvailability;
    j["category"] = v.category;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue_t& v) {
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability_t>();
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
  }
  inline std::string to_string(const LolFeaturedModesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
