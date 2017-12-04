#ifndef SWAGGER_TYPES_EndOfGameStats_HPP
#define SWAGGER_TYPES_EndOfGameStats_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameStats {
    // 
    uint64_t timeUntilNextFirstWinBonus;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameStats& v) {
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameStats& v) {
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameStats_HPP
