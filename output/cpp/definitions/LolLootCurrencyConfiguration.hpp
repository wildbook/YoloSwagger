#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootCurrencyConfiguration_t {
    std::vector<std::string> currenciesUsingCapWallets;
  };

  inline void to_json(nlohmann::json& j, const LolLootCurrencyConfiguration_t& v) {
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets;
  }

  inline void from_json(const nlohmann::json& j, LolLootCurrencyConfiguration_t& v) {
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLootCurrencyConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
