#ifndef SWAGGER_TYPES_LolPurchaseWidgetWallet_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetWallet_HPP
#include <json.hpp>
#include "LolPurchaseWidgetBalance.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetWallet {
    // 
    std::vector<LolPurchaseWidgetBalance> balances;
    // 
    int32_t version;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetWallet& v) {
    j["balances"] = v.balances;
    j["version"] = v.version;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetWallet& v) {
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance>>;
    v.version = j.at("version").get<int32_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetWallet_HPP
