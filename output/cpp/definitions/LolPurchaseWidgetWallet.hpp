#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetBalance.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetWallet_t {
    uint64_t accountId;
    int32_t version;
    std::vector<LolPurchaseWidgetBalance_t> balances;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetWallet_t& v) {
    j["accountId"] = v.accountId;
    j["version"] = v.version;
    j["balances"] = v.balances;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetWallet_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.version = j.at("version").get<int32_t>();
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance_t>>();
  }
  inline std::string to_string(const LolPurchaseWidgetWallet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
