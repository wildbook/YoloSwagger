#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsMastery_t {
    uint32_t_t id;
    int32_t_t rank;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMastery_t& v) {
    j["id"] = v.id;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMastery_t& v) {
    v.id = j.at("id").get<uint32_t_t>();
    v.rank = j.at("rank").get<int32_t_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
