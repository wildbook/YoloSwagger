#ifndef SWAGGER_TYPES_LolPurchaseWidgetPurchaseResponse_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetPurchaseResponse_HPP
#include <json.hpp>
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetWallet.hpp"
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetPurchaseResponse {
    // 
    std::vector<LolPurchaseWidgetPurchaseItem> items;
    // 
    std::vector<LolPurchaseWidgetTransaction> transactions;
    // 
    LolPurchaseWidgetWallet wallet;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseResponse& v) {
    j["items"] = v.items;
    j["transactions"] = v.transactions;
    j["wallet"] = v.wallet;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseResponse& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>;
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>;
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetPurchaseResponse_HPP
