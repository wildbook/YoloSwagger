#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationSendTokenRequest_t {
    std::string mediator;
    std::string locale;
    std::string device;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationSendTokenRequest_t& v) {
    j["mediator"] = v.mediator;
    j["locale"] = v.locale;
    j["device"] = v.device;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationSendTokenRequest_t& v) {
    v.mediator = j.at("mediator").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.device = j.at("device").get<std::string>();
  }
}
