#ifndef SWAGGER_TYPES_LolStoreBundled_HPP
#define SWAGGER_TYPES_LolStoreBundled_HPP
#include <json.hpp>
#include "LolStoreBundledItemCost.hpp"
#include "LolStoreBundledItem.hpp"
namespace leagueapi {
  // 
  struct LolStoreBundled {
    // 
    bool flexible;
    // 
    std::vector<LolStoreBundledItemCost> minimumPrices;
    // 
    std::vector<LolStoreBundledItem> items;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundled& v) {
    j["flexible"] = v.flexible;
    j["minimumPrices"] = v.minimumPrices;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundled& v) {
    v.flexible = j.at("flexible").get<bool>;
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>;
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>;
  }

}
#endif // SWAGGER_TYPES_LolStoreBundled_HPP
