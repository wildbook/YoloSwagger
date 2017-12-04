#ifndef SWAGGER_TYPES_LolChampSelectLegacyCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyCollectionsOwnership_HPP
#include <json.hpp>
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace test {
  // 
  struct LolChampSelectLegacyCollectionsOwnership {
'    // 
    bool freeToPlayReward;
    // 
    bool owned;
    // 
    LolChampSelectLegacyCollectionsRental rental;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyCollectionsOwnership_HPP
