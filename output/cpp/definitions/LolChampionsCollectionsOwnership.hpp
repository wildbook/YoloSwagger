#ifndef SWAGGER_TYPES_LolChampionsCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsOwnership_HPP
#include <json.hpp>
#include "LolChampionsCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    LolChampionsCollectionsRental rental;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.rental = j.at("rental").get<LolChampionsCollectionsRental>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsOwnership_HPP
