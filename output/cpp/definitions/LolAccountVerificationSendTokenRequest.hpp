#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationSendTokenRequest_t {
    std::string_t device;
    std::string_t locale;
    std::string_t mediator;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationSendTokenRequest_t& v) {
    j["device"] = v.device;
    j["locale"] = v.locale;
    j["mediator"] = v.mediator;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationSendTokenRequest_t& v) {
    v.device = j.at("device").get<std::string_t>();
    v.locale = j.at("locale").get<std::string_t>();
    v.mediator = j.at("mediator").get<std::string_t>();
  }
  inline std::string to_string(const LolAccountVerificationSendTokenRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
