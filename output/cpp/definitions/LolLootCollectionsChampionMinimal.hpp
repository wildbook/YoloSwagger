#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionMinimal_t {
    int32_t id;
    LolLootCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionMinimal_t& v) {
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionMinimal_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
  }
}
