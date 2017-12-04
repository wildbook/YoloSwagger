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
    bool owned;
    // 
    LolChampionsCollectionsRental rental;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.rental = j.at("rental").get<LolChampionsCollectionsRental>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsOwnership_HPP
