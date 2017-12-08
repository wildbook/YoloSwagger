#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ProcessControlProcess_t {
    std::string status;
    std::optional<float> restart-countdown-seconds;
  };

  inline void to_json(nlohmann::json& j, const ProcessControlProcess_t& v) {
    j["status"] = v.status;
    if(v.restart-countdown-seconds)
      j["restart-countdown-seconds"] = *v.restart-countdown-seconds;
  }

  inline void from_json(const nlohmann::json& j, ProcessControlProcess_t& v) {
    v.status = j.at("status").get<std::string>();
    if(auto it = j.find("restart-countdown-seconds"); it != j.end() && !it->is_null())
      v.restart-countdown-seconds = it->get<float>();
  }
  inline std::string to_string(const ProcessControlProcess_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
