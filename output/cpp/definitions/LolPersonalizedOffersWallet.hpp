#ifndef SWAGGER_TYPES_LolPersonalizedOffersWallet_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersWallet_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersWallet {
    // 
    int64_t rp;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersWallet& v) {
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersWallet& v) {
    v.rp = j.at("rp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersWallet_HPP
