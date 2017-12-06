#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsGameDataChampionSummary_t {
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionSummary_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionSummary_t& v) {
    v.id = j.at("id").get<int32_t>();
  }
}
