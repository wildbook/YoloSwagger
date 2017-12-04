#ifndef SWAGGER_TYPES_CollectionsLcdsTalentEntry_HPP
#define SWAGGER_TYPES_CollectionsLcdsTalentEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsTalentEntry {
    // 
    int32_t talentId;
    // 
    int32_t rank;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsTalentEntry& v) {
    j["talentId"] = v.talentId;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsTalentEntry& v) {
    v.talentId = j.at("talentId").get<int32_t>;
    v.rank = j.at("rank").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsTalentEntry_HPP
