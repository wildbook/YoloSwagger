#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionProgressDTO_t {
    int32_t lastViewedProgress;
    int32_t currentProgress;
    int32_t totalCount;
  };

  inline void to_json(nlohmann::json& j, const MissionProgressDTO_t& v) {
    j["lastViewedProgress"] = v.lastViewedProgress;
    j["currentProgress"] = v.currentProgress;
    j["totalCount"] = v.totalCount;
  }

  inline void from_json(const nlohmann::json& j, MissionProgressDTO_t& v) {
    v.lastViewedProgress = j.at("lastViewedProgress").get<int32_t>();
    v.currentProgress = j.at("currentProgress").get<int32_t>();
    v.totalCount = j.at("totalCount").get<int32_t>();
  }
  inline std::string to_string(const MissionProgressDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
