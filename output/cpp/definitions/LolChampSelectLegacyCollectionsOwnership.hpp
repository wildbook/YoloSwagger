#ifndef SWAGGER_TYPES_LolChampSelectLegacyCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyCollectionsOwnership_HPP
#include <json.hpp>
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    LolChampSelectLegacyCollectionsRental rental;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyCollectionsOwnership_HPP
