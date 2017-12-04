#ifndef SWAGGER_TYPES_LolPlayerBehaviorReporterFeedback_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorReporterFeedback_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPlayerBehaviorReporterFeedback {
    // 
    std::string type;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReporterFeedback& v) {
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReporterFeedback& v) {
    v.type = j.at("type").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorReporterFeedback_HPP
