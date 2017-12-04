#ifndef SWAGGER_TYPES_LolCollectionsCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsOwnership_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    bool owned;
    // 
    LolCollectionsCollectionsRental rental;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsOwnership_HPP
