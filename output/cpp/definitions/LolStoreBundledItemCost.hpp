#ifndef SWAGGER_TYPES_LolStoreBundledItemCost_HPP
#define SWAGGER_TYPES_LolStoreBundledItemCost_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreBundledItemCost {
    // 
    std::string currency;
    // 
    float discount;
    // 
    int64_t cost;
    // 
    std::string costType;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItemCost& v) {
    j["currency"] = v.currency;
    j["discount"] = v.discount;
    j["cost"] = v.cost;
    j["costType"] = v.costType;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItemCost& v) {
    v.currency = j.at("currency").get<std::string>;
    v.discount = j.at("discount").get<float>;
    v.cost = j.at("cost").get<int64_t>;
    v.costType = j.at("costType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreBundledItemCost_HPP
