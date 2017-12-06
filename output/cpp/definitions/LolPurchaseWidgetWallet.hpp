#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetBalance.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetWallet_t {
    uint64_t accountId;
    std::vector<LolPurchaseWidgetBalance_t> balances;
    int32_t version;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetWallet_t& v) {
    j["accountId"] = v.accountId;
    j["balances"] = v.balances;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetWallet_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance_t>>();
    v.version = j.at("version").get<int32_t>();
  }
}
