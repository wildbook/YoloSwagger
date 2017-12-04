#ifndef SWAGGER_TYPES_LolPurchaseWidgetWallet_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetWallet_HPP
#include <json.hpp>
#include "LolPurchaseWidgetBalance.hpp"
namespace test {
  // 
  struct LolPurchaseWidgetWallet {
'    // 
    uint64_t accountId;
    // 
    std::vector<LolPurchaseWidgetBalance> balances;
    // 
    int32_t version;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetWallet& v) {
    j["accountId"] = v.accountId;
    j["balances"] = v.balances;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetWallet& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.balances = j.at("balances").get<std::vector<LolPurchaseWidgetBalance>>;
    v.version = j.at("version").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetWallet_HPP
