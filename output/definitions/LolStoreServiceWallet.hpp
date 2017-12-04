#ifndef SWAGGER_TYPES_LolStoreServiceWallet_HPP
#define SWAGGER_TYPES_LolStoreServiceWallet_HPP
#include <json.hpp>
#include "LolStoreServiceBalance.hpp"
namespace leagueapi {
  // 
  struct LolStoreServiceWallet {
    // 
    uint64_t accountId;
    // 
    std::vector<LolStoreServiceBalance> balances;
  };

  inline void to_json(nlohmann::json& j, const LolStoreServiceWallet& v) {
    j["accountId"] = v.accountId;
    j["balances"] = v.balances;
  }

  inline void from_json(const nlohmann::json& j, LolStoreServiceWallet& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.balances = j.at("balances").get<std::vector<LolStoreServiceBalance>>;
  }

}
#endif // SWAGGER_TYPES_LolStoreServiceWallet_HPP
