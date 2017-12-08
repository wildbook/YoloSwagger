#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2SequenceEvent_t {
    int32_t_t priority;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2SequenceEvent_t& v) {
    j["priority"] = v.priority;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2SequenceEvent_t& v) {
    v.priority = j.at("priority").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolHonorV2SequenceEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
