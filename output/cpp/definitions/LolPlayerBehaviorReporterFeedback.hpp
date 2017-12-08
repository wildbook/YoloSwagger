#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReporterFeedback_t {
    std::string_t type;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReporterFeedback_t& v) {
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReporterFeedback_t& v) {
    v.type = j.at("type").get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorReporterFeedback_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
