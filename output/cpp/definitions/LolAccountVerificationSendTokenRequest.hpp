#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationSendTokenRequest_t {
    std::string locale;
    std::string device;
    std::string mediator;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationSendTokenRequest_t& v) {
    j["locale"] = v.locale;
    j["device"] = v.device;
    j["mediator"] = v.mediator;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationSendTokenRequest_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.device = j.at("device").get<std::string>();
    v.mediator = j.at("mediator").get<std::string>();
  }
  inline std::string to_string(const LolAccountVerificationSendTokenRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
