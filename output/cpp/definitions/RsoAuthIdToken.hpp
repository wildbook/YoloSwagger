#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthIdToken_t {
    uint64_t expiry;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthIdToken_t& v) {
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthIdToken_t& v) {
    v.expiry = j.at("expiry").get<uint64_t>();
    v.token = j.at("token").get<std::string>();
  }
}
