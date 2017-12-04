#ifndef SWAGGER_TYPES_LolReplaysGameflowAvailability_HPP
#define SWAGGER_TYPES_LolReplaysGameflowAvailability_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolReplaysGameflowAvailability {
'    // 
    std::string state;
  };

  void to_json(nlohmann::json& j, const LolReplaysGameflowAvailability& v) {
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolReplaysGameflowAvailability& v) {
    v.state = j.at("state").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysGameflowAvailability_HPP
