#ifndef SWAGGER_TYPES_LolCollectionsCollectionsMastery_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsMastery_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsMastery {
    // 
    uint32_t id;
    // 
    int32_t rank;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsMastery& v) {
    j["id"] = v.id;
    j["rank"] = v.rank;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsMastery& v) {
    v.id = j.at("id").get<uint32_t>;
    v.rank = j.at("rank").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsMastery_HPP
