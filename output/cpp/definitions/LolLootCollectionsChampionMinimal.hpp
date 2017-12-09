#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionMinimal_t {
    LolLootCollectionsOwnership_t ownership;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolLootCollectionsChampionMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
