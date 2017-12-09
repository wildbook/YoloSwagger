#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsStoreAccountBalanceNotification_t {
    int64_t rp;
    int64_t ip;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreAccountBalanceNotification_t& v) {
    j["rp"] = v.rp;
    j["ip"] = v.ip;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreAccountBalanceNotification_t& v) {
    v.rp = j.at("rp").get<int64_t>();
    v.ip = j.at("ip").get<int64_t>();
  }
  inline std::string to_string(const StoreLcdsStoreAccountBalanceNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
