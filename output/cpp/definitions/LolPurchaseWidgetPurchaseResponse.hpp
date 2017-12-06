#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetWallet.hpp"
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseResponse_t {
    std::vector<LolPurchaseWidgetPurchaseItem_t> items;
    std::vector<LolPurchaseWidgetTransaction_t> transactions;
    LolPurchaseWidgetWallet_t wallet;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseResponse_t& v) {
    j["items"] = v.items;
    j["transactions"] = v.transactions;
    j["wallet"] = v.wallet;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseResponse_t& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem_t>>();
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction_t>>();
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet_t>();
  }
}
