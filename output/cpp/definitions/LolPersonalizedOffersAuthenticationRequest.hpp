#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationRequest_t {
    std::string_t token;
    std::string_t tokenType;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationRequest_t& v) {
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationRequest_t& v) {
    v.token = j.at("token").get<std::string_t>();
    v.tokenType = j.at("tokenType").get<std::string_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersAuthenticationRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
