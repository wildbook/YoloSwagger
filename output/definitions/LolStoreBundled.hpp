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
    std::vector<LolStoreBundledItem> items;
    // 
    std::vector<LolStoreBundledItemCost> minimumPrices;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundled& v) {
    j["flexible"] = v.flexible;
    j["items"] = v.items;
    j["minimumPrices"] = v.minimumPrices;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundled& v) {
    v.flexible = j.at("flexible").get<bool>;
    v.items = j.at("items").get<std::vector<LolStoreBundledItem>>;
    v.minimumPrices = j.at("minimumPrices").get<std::vector<LolStoreBundledItemCost>>;
  }

}
#endif // SWAGGER_TYPES_LolStoreBundled_HPP
