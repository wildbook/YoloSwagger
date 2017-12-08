#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetWallet.hpp"
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseResponse_t {
    std::vector<LolPurchaseWidgetPurchaseItem_t> items;
    LolPurchaseWidgetWallet_t wallet;
    std::vector<LolPurchaseWidgetTransaction_t> transactions;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseResponse_t& v) {
    j["items"] = v.items;
    j["wallet"] = v.wallet;
    j["transactions"] = v.transactions;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseResponse_t& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem_t>>();
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet_t>();
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction_t>>();
  }
  inline std::string to_string(const LolPurchaseWidgetPurchaseResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
