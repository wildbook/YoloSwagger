#ifndef SWAGGER_TYPES_LolStoreServiceWallet_HPP
#define SWAGGER_TYPES_LolStoreServiceWallet_HPP
#include <json.hpp>
#include "LolStoreServiceBalance.hpp"
namespace leagueapi {
  // 
  struct LolStoreServiceWallet {
    // 
    std::vector<LolStoreServiceBalance> balances;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceWallet& v) {
    j["balances"] = v.balances;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceWallet& v) {
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance>>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreServiceWallet_HPP
