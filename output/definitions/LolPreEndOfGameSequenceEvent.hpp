#ifndef SWAGGER_TYPES_LolPreEndOfGameSequenceEvent_HPP
#define SWAGGER_TYPES_LolPreEndOfGameSequenceEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPreEndOfGameSequenceEvent {
    // 
    std::string name;
    // 
    int32_t priority;
  };

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameSequenceEvent& v) {
    j["name"] = v.name;
    j["priority"] = v.priority;
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameSequenceEvent& v) {
    v.name = j.at("name").get<std::string>;
    v.priority = j.at("priority").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPreEndOfGameSequenceEvent_HPP
