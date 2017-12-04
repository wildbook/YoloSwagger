#ifndef SWAGGER_TYPES_LolEndOfGameGameflowAvailability_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameGameflowAvailability {
    // 
    std::string state;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameGameflowAvailability& v) {
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameGameflowAvailability& v) {
    v.state = j.at("state").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowAvailability_HPP
