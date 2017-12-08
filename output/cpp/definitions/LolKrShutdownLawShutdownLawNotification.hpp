#pragma once
#include <json.hpp>
#include <optional>
#include "LolKrShutdownLawShutdownLawStatus.hpp"
namespace leagueapi {
  struct LolKrShutdownLawShutdownLawNotification_t {
    LolKrShutdownLawShutdownLawStatus_t type;
  };

  inline void to_json(nlohmann::json& j, const LolKrShutdownLawShutdownLawNotification_t& v) {
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolKrShutdownLawShutdownLawNotification_t& v) {
    v.type = j.at("type").get<LolKrShutdownLawShutdownLawStatus_t>();
  }
  inline std::string to_string(const LolKrShutdownLawShutdownLawNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
