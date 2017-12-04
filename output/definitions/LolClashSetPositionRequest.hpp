#ifndef SWAGGER_TYPES_LolClashSetPositionRequest_HPP
#define SWAGGER_TYPES_LolClashSetPositionRequest_HPP
#include <json.hpp>
#include "Position.hpp"
namespace leagueapi {
  // 
  struct LolClashSetPositionRequest {
    // 
    Position position;
  };

  void to_json(nlohmann::json& j, const LolClashSetPositionRequest& v) {
    j["position"] = v.position;
  }

  void from_json(const nlohmann::json& j, LolClashSetPositionRequest& v) {
    v.position = j.at("position").get<Position>;
  }

}
#endif // SWAGGER_TYPES_LolClashSetPositionRequest_HPP
