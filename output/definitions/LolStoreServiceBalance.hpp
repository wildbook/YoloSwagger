#ifndef SWAGGER_TYPES_LolStoreServiceBalance_HPP
#define SWAGGER_TYPES_LolStoreServiceBalance_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreServiceBalance {
    // 
    int64_t amount;
    // 
    std::string currency;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceBalance& v) {
    j["amount"] = v.amount;
    j["currency"] = v.currency;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceBalance& v) {
    v.amount = j.at("amount").get<int64_t>;
    v.currency = j.at("currency").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreServiceBalance_HPP
