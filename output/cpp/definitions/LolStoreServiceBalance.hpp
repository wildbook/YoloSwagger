#ifndef SWAGGER_TYPES_LolStoreServiceBalance_HPP
#define SWAGGER_TYPES_LolStoreServiceBalance_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreServiceBalance {
    // 
    std::string currency;
    // 
    int64_t amount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceBalance& v) {
    j["currency"] = v.currency;
    j["amount"] = v.amount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceBalance& v) {
    v.currency = j.at("currency").get<std::string>;
    v.amount = j.at("amount").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreServiceBalance_HPP
