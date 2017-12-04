#ifndef SWAGGER_TYPES_LolStoreWallet_HPP
#define SWAGGER_TYPES_LolStoreWallet_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolStoreWallet {
'    // 
    int64_t ip;
    // 
    int64_t rp;
  };

  void to_json(nlohmann::json& j, const LolStoreWallet& v) {
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  void from_json(const nlohmann::json& j, LolStoreWallet& v) {
    v.ip = j.at("ip").get<int64_t>;
    v.rp = j.at("rp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreWallet_HPP
