#ifndef SWAGGER_TYPES_LolPlayerBehaviorReporterFeedback_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorReporterFeedback_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPlayerBehaviorReporterFeedback {
    // 
    uint64_t id;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolPlayerBehaviorReporterFeedback& v) {
    j["id"] = v.id;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolPlayerBehaviorReporterFeedback& v) {
    v.id = j.at("id").get<uint64_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorReporterFeedback_HPP
