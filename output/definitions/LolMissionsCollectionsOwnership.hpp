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
    bool owned;
    // 
    LolMissionsCollectionsRental rental;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsOwnership_HPP
