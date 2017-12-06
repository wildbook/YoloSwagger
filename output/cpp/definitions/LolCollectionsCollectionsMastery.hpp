#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsMastery_t {
    int32_t rank;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMastery_t& v) {
    j["rank"] = v.rank;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMastery_t& v) {
    v.rank = j.at("rank").get<int32_t>();
    v.id = j.at("id").get<uint32_t>();
  }
}
