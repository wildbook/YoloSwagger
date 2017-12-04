#ifndef SWAGGER_TYPES_LolReplaysReplayContextData_HPP
#define SWAGGER_TYPES_LolReplaysReplayContextData_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplayContextData {
    // 
    std::string componentType;
  };

  void to_json(nlohmann::json& j, const LolReplaysReplayContextData& v) {
    j["componentType"] = v.componentType;
  }

  void from_json(const nlohmann::json& j, LolReplaysReplayContextData& v) {
    v.componentType = j.at("componentType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplayContextData_HPP
