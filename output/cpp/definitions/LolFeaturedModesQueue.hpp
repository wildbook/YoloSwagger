#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesQueueGameCategory.hpp"
#include "LolFeaturedModesQueueAvailability.hpp"
namespace leagueapi {
  struct LolFeaturedModesQueue_t {
    LolFeaturedModesQueueGameCategory_t category;
    LolFeaturedModesQueueAvailability_t queueAvailability;
    std::string name;
    uint64_t lastToggledOffTime;
    uint64_t lastToggledOnTime;
    std::string gameMode;
    int32_t mapId;
    std::string gameMutator;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueue_t& v) {
    j["category"] = v.category;
    j["queueAvailability"] = v.queueAvailability;
    j["name"] = v.name;
    j["lastToggledOffTime"] = v.lastToggledOffTime;
    j["lastToggledOnTime"] = v.lastToggledOnTime;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueue_t& v) {
    v.category = j.at("category").get<LolFeaturedModesQueueGameCategory_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolFeaturedModesQueueAvailability_t>();
    v.name = j.at("name").get<std::string>();
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>();
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolFeaturedModesQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
