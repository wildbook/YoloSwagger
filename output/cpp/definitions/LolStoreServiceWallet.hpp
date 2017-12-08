#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreServiceBalance.hpp"
namespace leagueapi {
  struct LolStoreServiceWallet_t {
    uint64_t accountId;
    std::vector<LolStoreServiceBalance_t> balances;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceWallet_t& v) {
    j["accountId"] = v.accountId;
    j["balances"] = v.balances;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceWallet_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance_t>>();
  }
  inline std::string to_string(const LolStoreServiceWallet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
