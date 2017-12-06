#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowAvailability_t {
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowAvailability_t& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowAvailability_t& v) {
    v.state = j.at("state").get<std::string>();
  }
}
