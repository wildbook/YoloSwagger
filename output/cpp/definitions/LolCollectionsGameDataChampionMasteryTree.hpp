#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsGameDataChampionMasteryGroup.hpp"
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryTree_t {
    std::vector<LolCollectionsGameDataChampionMasteryGroup_t> groups;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryTree_t& v) {
    j["groups"] = v.groups;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryTree_t& v) {
    v.groups = j.at("groups").get<std::vector<LolCollectionsGameDataChampionMasteryGroup_t>>();
  }
}
