#ifndef SWAGGER_TYPES_LolLoginLcdsResponse_HPP
#define SWAGGER_TYPES_LolLoginLcdsResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLcdsResponse {
    // 
    nlohmann::json body;
    // 
    std::string typeName;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsResponse& v) {
    j["body"] = v.body;
    j["typeName"] = v.typeName;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsResponse& v) {
    v.body = j.at("body").get<nlohmann::json>;
    v.typeName = j.at("typeName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLcdsResponse_HPP
