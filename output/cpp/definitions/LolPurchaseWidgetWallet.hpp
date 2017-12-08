#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetBalance.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetWallet_t {
    std::vector<LolPurchaseWidgetBalance_t> balances;
    int32_t version;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetWallet_t& v) {
    j["balances"] = v.balances;
    j["version"] = v.version;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetWallet_t& v) {
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance_t>>();
    v.version = j.at("version").get<int32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetWallet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
