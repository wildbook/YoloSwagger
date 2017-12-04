#ifndef SWAGGER_TYPES_LolLeaguesQueue_HPP
#define SWAGGER_TYPES_LolLeaguesQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesQueue {
    // 
    nlohmann::json type;
  };

  void to_json(nlohmann::json& j, const LolLeaguesQueue& v) {
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolLeaguesQueue& v) {
    v.type = j.at("type").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesQueue_HPP
