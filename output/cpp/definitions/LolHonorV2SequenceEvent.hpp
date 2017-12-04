#ifndef SWAGGER_TYPES_LolHonorV2SequenceEvent_HPP
#define SWAGGER_TYPES_LolHonorV2SequenceEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2SequenceEvent {
    // 
    int32_t priority;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2SequenceEvent& v) {
    j["priority"] = v.priority;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2SequenceEvent& v) {
    v.priority = j.at("priority").get<int32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2SequenceEvent_HPP
