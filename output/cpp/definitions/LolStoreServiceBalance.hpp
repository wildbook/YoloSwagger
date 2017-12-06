#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreServiceBalance_t {
    int64_t amount;
    std::string currency;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceBalance_t& v) {
    j["amount"] = v.amount;
    j["currency"] = v.currency;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceBalance_t& v) {
    v.amount = j.at("amount").get<int64_t>();
    v.currency = j.at("currency").get<std::string>();
  }
}
