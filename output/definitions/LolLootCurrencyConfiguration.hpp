#ifndef SWAGGER_TYPES_LolLootCurrencyConfiguration_HPP
#define SWAGGER_TYPES_LolLootCurrencyConfiguration_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootCurrencyConfiguration {
    // 
    std::vector<std::string> currenciesUsingCapWallets;
  };

  inline void to_json(nlohmann::json& j, const LolLootCurrencyConfiguration& v) {
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets;
  }

  inline void from_json(const nlohmann::json& j, LolLootCurrencyConfiguration& v) {
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLootCurrencyConfiguration_HPP
