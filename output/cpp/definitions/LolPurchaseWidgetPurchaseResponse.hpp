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
    LolPurchaseWidgetWallet wallet;
    // 
    std::vector<LolPurchaseWidgetTransaction> transactions;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseResponse& v) {
    j["items"] = v.items;
    j["wallet"] = v.wallet;
    j["transactions"] = v.transactions;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseResponse& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>;
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>;
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetPurchaseResponse_HPP
