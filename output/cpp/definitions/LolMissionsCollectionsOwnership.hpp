#ifndef SWAGGER_TYPES_LolMissionsCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsOwnership_HPP
#include <json.hpp>
#include "LolMissionsCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolMissionsCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    LolMissionsCollectionsRental rental;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsOwnership_HPP
