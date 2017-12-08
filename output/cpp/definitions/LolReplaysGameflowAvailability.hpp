#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysGameflowAvailability_t {
    std::string_t state;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowAvailability_t& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowAvailability_t& v) {
    v.state = j.at("state").get<std::string_t>();
  }
  inline std::string to_string(const LolReplaysGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
