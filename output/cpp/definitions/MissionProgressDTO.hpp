#ifndef SWAGGER_TYPES_MissionProgressDTO_HPP
#define SWAGGER_TYPES_MissionProgressDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MissionProgressDTO {
    // 
    int32_t totalCount;
    // 
    int32_t lastViewedProgress;
    // 
    int32_t currentProgress;
  };

  inline void to_json(nlohmann::json& j, const MissionProgressDTO& v) {
    j["totalCount"] = v.totalCount;
    j["lastViewedProgress"] = v.lastViewedProgress;
    j["currentProgress"] = v.currentProgress;
  }

  inline void from_json(const nlohmann::json& j, MissionProgressDTO& v) {
    v.totalCount = j.at("totalCount").get<int32_t>;
    v.lastViewedProgress = j.at("lastViewedProgress").get<int32_t>;
    v.currentProgress = j.at("currentProgress").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_MissionProgressDTO_HPP
