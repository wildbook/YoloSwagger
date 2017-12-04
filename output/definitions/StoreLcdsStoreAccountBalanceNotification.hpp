#ifndef SWAGGER_TYPES_StoreLcdsStoreAccountBalanceNotification_HPP
#define SWAGGER_TYPES_StoreLcdsStoreAccountBalanceNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct StoreLcdsStoreAccountBalanceNotification {
    // 
    int64_t ip;
    // 
    int64_t rp;
  };

  void to_json(nlohmann::json& j, const StoreLcdsStoreAccountBalanceNotification& v) {
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  void from_json(const nlohmann::json& j, StoreLcdsStoreAccountBalanceNotification& v) {
    v.ip = j.at("ip").get<int64_t>;
    v.rp = j.at("rp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_StoreLcdsStoreAccountBalanceNotification_HPP
