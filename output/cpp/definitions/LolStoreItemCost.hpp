#ifndef SWAGGER_TYPES_LolStoreItemCost_HPP
#define SWAGGER_TYPES_LolStoreItemCost_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreItemCost {
    // 
    std::string currency;
    // 
    int64_t cost;
    // 
    float discount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemCost& v) {
    j["currency"] = v.currency;
    j["cost"] = v.cost;
    j["discount"] = v.discount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemCost& v) {
    v.currency = j.at("currency").get<std::string>;
    v.cost = j.at("cost").get<int64_t>;
    v.discount = j.at("discount").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolStoreItemCost_HPP
