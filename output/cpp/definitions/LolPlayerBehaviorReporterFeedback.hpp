#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReporterFeedback_t {
    uint64_t id;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReporterFeedback_t& v) {
    j["id"] = v.id;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReporterFeedback_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolPlayerBehaviorReporterFeedback_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
