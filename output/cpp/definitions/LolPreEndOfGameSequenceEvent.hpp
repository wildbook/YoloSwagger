#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPreEndOfGameSequenceEvent_t {
    int32_t priority;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameSequenceEvent_t& v) {
    j["priority"] = v.priority;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameSequenceEvent_t& v) {
    v.priority = j.at("priority").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolPreEndOfGameSequenceEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
