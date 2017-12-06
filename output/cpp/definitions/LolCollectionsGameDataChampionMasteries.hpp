#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsGameDataChampionMasteryTree.hpp"
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteries_t {
    LolCollectionsGameDataChampionMasteryTree_t tree;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteries_t& v) {
    j["tree"] = v.tree;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteries_t& v) {
    v.tree = j.at("tree").get<LolCollectionsGameDataChampionMasteryTree_t>();
  }
}
