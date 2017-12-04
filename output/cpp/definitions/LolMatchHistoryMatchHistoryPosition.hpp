#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPosition_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPosition_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPosition {
    // 
    int16_t y;
    // 
    int16_t x;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPosition& v) {
    j["y"] = v.y;
    j["x"] = v.x;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPosition& v) {
    v.y = j.at("y").get<int16_t>;
    v.x = j.at("x").get<int16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPosition_HPP
