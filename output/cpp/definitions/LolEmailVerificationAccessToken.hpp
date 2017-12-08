#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationAccessToken_t {
    uint64_t expiry;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationAccessToken_t& v) {
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationAccessToken_t& v) {
    v.expiry = j.at("expiry").get<uint64_t>();
    v.token = j.at("token").get<std::string>();
  }
  inline std::string to_string(const LolEmailVerificationAccessToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
