#ifndef SWAGGER_TYPES_LolStoreItemCost_HPP
#define SWAGGER_TYPES_LolStoreItemCost_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreItemCost {
    // 
    int64_t cost;
    // 
    std::string currency;
    // 
    float discount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemCost& v) {
    j["cost"] = v.cost;
    j["currency"] = v.currency;
    j["discount"] = v.discount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemCost& v) {
    v.cost = j.at("cost").get<int64_t>;
    v.currency = j.at("currency").get<std::string>;
    v.discount = j.at("discount").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolStoreItemCost_HPP
