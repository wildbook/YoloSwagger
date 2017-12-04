#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPosition_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPosition_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPosition {
    // 
    int16_t x;
    // 
    int16_t y;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPosition& v) {
    j["x"] = v.x;
    j["y"] = v.y;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPosition& v) {
    v.x = j.at("x").get<int16_t>;
    v.y = j.at("y").get<int16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPosition_HPP
