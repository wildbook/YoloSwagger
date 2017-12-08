#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowAvailability_t {
    std::string_t state;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowAvailability_t& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowAvailability_t& v) {
    v.state = j.at("state").get<std::string_t>();
  }
  inline std::string to_string(const LolEndOfGameGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
