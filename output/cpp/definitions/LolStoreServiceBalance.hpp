#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreServiceBalance_t {
    std::string_t currency;
    int64_t_t amount;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceBalance_t& v) {
    j["currency"] = v.currency;
    j["amount"] = v.amount;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceBalance_t& v) {
    v.currency = j.at("currency").get<std::string_t>();
    v.amount = j.at("amount").get<int64_t_t>();
  }
  inline std::string to_string(const LolStoreServiceBalance_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
