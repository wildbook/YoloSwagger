#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreServiceBalance.hpp"
namespace leagueapi {
  struct LolStoreServiceWallet_t {
    std::vector<LolStoreServiceBalance_t> balances;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceWallet_t& v) {
    j["balances"] = v.balances;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceWallet_t& v) {
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance_t>>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolStoreServiceWallet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
