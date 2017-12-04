#ifndef SWAGGER_TYPES_LolStoreSale_HPP
#define SWAGGER_TYPES_LolStoreSale_HPP
#include <json.hpp>
#include "LolStoreItemCost.hpp"
namespace leagueapi {
  // 
  struct LolStoreSale {
    // 
    std::vector<LolStoreItemCost> prices;
    // 
    std::string startDate;
    // 
    std::string endDate;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSale& v) {
    j["prices"] = v.prices;
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSale& v) {
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>;
    v.startDate = j.at("startDate").get<std::string>;
    v.endDate = j.at("endDate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreSale_HPP
