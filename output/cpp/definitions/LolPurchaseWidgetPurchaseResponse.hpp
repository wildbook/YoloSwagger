#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetPurchaseItem.hpp"
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetWallet.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseResponse_t {
    LolPurchaseWidgetWallet_t wallet;
    std::vector<LolPurchaseWidgetTransaction_t> transactions;
    std::vector<LolPurchaseWidgetPurchaseItem_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseResponse_t& v) {
    j["wallet"] = v.wallet;
    j["transactions"] = v.transactions;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseResponse_t& v) {
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet_t>();
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction_t>>();
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem_t>>();
  }
}
