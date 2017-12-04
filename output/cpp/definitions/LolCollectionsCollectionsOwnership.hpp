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
    LolCollectionsCollectionsRental rental;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsOwnership_HPP
