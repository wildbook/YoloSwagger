#ifndef SWAGGER_TYPES_LolClashChangeNameRequest_HPP
#define SWAGGER_TYPES_LolClashChangeNameRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashChangeNameRequest {
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolClashChangeNameRequest& v) {
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolClashChangeNameRequest& v) {
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashChangeNameRequest_HPP
