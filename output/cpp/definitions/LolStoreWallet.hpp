#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreWallet_t {
    int64_t_t ip;
    int64_t_t rp;
  };

  inline void to_json(nlohmann::json& j, const LolStoreWallet_t& v) {
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, LolStoreWallet_t& v) {
    v.ip = j.at("ip").get<int64_t_t>();
    v.rp = j.at("rp").get<int64_t_t>();
  }
  inline std::string to_string(const LolStoreWallet_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
