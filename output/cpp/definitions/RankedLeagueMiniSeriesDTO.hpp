#ifndef SWAGGER_TYPES_RankedLeagueMiniSeriesDTO_HPP
#define SWAGGER_TYPES_RankedLeagueMiniSeriesDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RankedLeagueMiniSeriesDTO {
    // 
    uint64_t wins;
    // 
    std::string progress;
    // 
    uint64_t losses;
    // 
    uint64_t target;
    // 
    uint64_t timeLeftToPlayMillis;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueMiniSeriesDTO& v) {
    j["wins"] = v.wins;
    j["progress"] = v.progress;
    j["losses"] = v.losses;
    j["target"] = v.target;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueMiniSeriesDTO& v) {
    v.wins = j.at("wins").get<uint64_t>;
    v.progress = j.at("progress").get<std::string>;
    v.losses = j.at("losses").get<uint64_t>;
    v.target = j.at("target").get<uint64_t>;
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RankedLeagueMiniSeriesDTO_HPP
