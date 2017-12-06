#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersWallet_t {
    int64_t rp;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersWallet_t& v) {
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersWallet_t& v) {
    v.rp = j.at("rp").get<int64_t>();
  }
}
