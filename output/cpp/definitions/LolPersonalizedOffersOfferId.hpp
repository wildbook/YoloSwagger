#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOfferId_t {
    std::string_t offerId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferId_t& v) {
    j["offerId"] = v.offerId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferId_t& v) {
    v.offerId = j.at("offerId").get<std::string_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersOfferId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
