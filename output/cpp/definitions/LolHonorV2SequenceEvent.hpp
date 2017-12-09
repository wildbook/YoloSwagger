#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2SequenceEvent_t {
    std::string name;
    int32_t priority;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2SequenceEvent_t& v) {
    j["name"] = v.name;
    j["priority"] = v.priority;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2SequenceEvent_t& v) {
    v.name = j.at("name").get<std::string>();
    v.priority = j.at("priority").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2SequenceEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
