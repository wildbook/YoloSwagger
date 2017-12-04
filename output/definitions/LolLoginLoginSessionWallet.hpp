#ifndef SWAGGER_TYPES_LolLoginLoginSessionWallet_HPP
#define SWAGGER_TYPES_LolLoginLoginSessionWallet_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLoginSessionWallet {
    // 
    int64_t ip;
    // 
    int64_t rp;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSessionWallet& v) {
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSessionWallet& v) {
    v.ip = j.at("ip").get<int64_t>;
    v.rp = j.at("rp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginSessionWallet_HPP
