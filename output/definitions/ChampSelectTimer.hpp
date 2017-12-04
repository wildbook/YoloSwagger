#ifndef SWAGGER_TYPES_ChampSelectTimer_HPP
#define SWAGGER_TYPES_ChampSelectTimer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectTimer {
    // 
    std::string phase;
  };

  void to_json(nlohmann::json& j, const ChampSelectTimer& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, ChampSelectTimer& v) {
    v.phase = j.at("phase").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectTimer_HPP
