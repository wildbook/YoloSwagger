#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ProcessControlProcess_t {
    std::optional<float> restart-countdown-seconds;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const ProcessControlProcess_t& v) {
    if(v.restart-countdown-seconds)
      j["restart-countdown-seconds"] = *v.restart-countdown-seconds;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, ProcessControlProcess_t& v) {
    if(auto it = j.find("restart-countdown-seconds"); it != j.end() !it->is_null())
      v.restart-countdown-seconds = it->get<float>();
    v.status = j.at("status").get<std::string>();
  }
}
