#ifndef SWAGGER_TYPES_CollectionsLcdsTalentEntry_HPP
#define SWAGGER_TYPES_CollectionsLcdsTalentEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsTalentEntry {
    // 
    int32_t rank;
    // 
    int32_t talentId;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsTalentEntry& v) {
    j["rank"] = v.rank;
    j["talentId"] = v.talentId;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsTalentEntry& v) {
    v.rank = j.at("rank").get<int32_t>;
    v.talentId = j.at("talentId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsTalentEntry_HPP
