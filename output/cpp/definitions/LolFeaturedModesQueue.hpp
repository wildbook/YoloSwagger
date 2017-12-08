#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesQueueAvailability.hpp"
#include "LolFeaturedModesQueueGameCategory.hpp"
namespace leagueapi {
  struct LolFeaturedModesQueue_t {
    std::string gameMode;
    uint64_t lastToggledOnTime;
    int32_t id;
    LolFeaturedModesQueueGameCategory_t category;
    uint64_t lastToggledOffTime;
    std::string gameMutator;
    int32_t mapId;
    std::string name;
    LolFeaturedModesQueueAvailability_t queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue_t& v) {
    j["gameMode"] = v.gameMode;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["id"] = v.id;
    j["category"] = v.category;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["name"] = v.name;
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.id = j.at("id").get<int32_t>();
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory_t>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability_t>();
  }
  inline std::string to_string(const LolFeaturedModesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
