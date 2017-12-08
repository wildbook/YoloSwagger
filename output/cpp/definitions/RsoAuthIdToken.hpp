#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthIdToken_t {
    std::string token;
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthIdToken_t& v) {
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthIdToken_t& v) {
    v.token = j.at("token").get<std::string>();
    v.expiry = j.at("expiry").get<uint64_t>();
  }
  inline std::string to_string(const RsoAuthIdToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
