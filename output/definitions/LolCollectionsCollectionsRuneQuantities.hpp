#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantities_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantities_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsRuneQuantity.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsRuneQuantities {
    // 
    std::vector<LolCollectionsCollectionsRuneQuantity> runeQuantities;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantities& v) {
    j["runeQuantities"] = v.runeQuantities;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantities& v) {
    v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantities_HPP
