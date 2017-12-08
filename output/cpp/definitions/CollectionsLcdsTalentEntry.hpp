#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsTalentEntry_t {
    int32_t_t talentId;
    int32_t_t rank;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsTalentEntry_t& v) {
    j["talentId"] = v.talentId;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsTalentEntry_t& v) {
    v.talentId = j.at("talentId").get<int32_t_t>();
    v.rank = j.at("rank").get<int32_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsTalentEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
