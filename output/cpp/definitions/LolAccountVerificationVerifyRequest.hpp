#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationVerifyRequest_t {
    std::string_t token;
    std::string_t mediator;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyRequest_t& v) {
    j["token"] = v.token;
    j["mediator"] = v.mediator;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyRequest_t& v) {
    v.token = j.at("token").get<std::string_t>();
    v.mediator = j.at("mediator").get<std::string_t>();
  }
  inline std::string to_string(const LolAccountVerificationVerifyRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
