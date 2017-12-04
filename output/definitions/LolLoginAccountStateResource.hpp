#ifndef SWAGGER_TYPES_LolLoginAccountStateResource_HPP
#define SWAGGER_TYPES_LolLoginAccountStateResource_HPP
#include <json.hpp>
#include "LolLoginAccountStateType.hpp"
namespace leagueapi {
  // 
  struct LolLoginAccountStateResource {
    // 
    LolLoginAccountStateType state;
  };

  void to_json(nlohmann::json& j, const LolLoginAccountStateResource& v) {
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolLoginAccountStateResource& v) {
    v.state = j.at("state").get<LolLoginAccountStateType>;
  }

}
#endif // SWAGGER_TYPES_LolLoginAccountStateResource_HPP
