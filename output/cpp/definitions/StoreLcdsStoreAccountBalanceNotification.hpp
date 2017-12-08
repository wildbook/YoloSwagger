#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsStoreAccountBalanceNotification_t {
    int64_t_t ip;
    int64_t_t rp;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreAccountBalanceNotification_t& v) {
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreAccountBalanceNotification_t& v) {
    v.ip = j.at("ip").get<int64_t_t>();
    v.rp = j.at("rp").get<int64_t_t>();
  }
  inline std::string to_string(const StoreLcdsStoreAccountBalanceNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
