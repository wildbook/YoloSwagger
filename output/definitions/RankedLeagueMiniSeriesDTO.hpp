#ifndef SWAGGER_TYPES_RankedLeagueMiniSeriesDTO_HPP
#define SWAGGER_TYPES_RankedLeagueMiniSeriesDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RankedLeagueMiniSeriesDTO {
    // 
    uint64_t losses;
    // 
    std::string progress;
    // 
    uint64_t target;
    // 
    uint64_t timeLeftToPlayMillis;
    // 
    uint64_t wins;
  };

  void to_json(nlohmann::json& j, const RankedLeagueMiniSeriesDTO& v) {
    j["losses"] = v.losses;
    j["progress"] = v.progress;
    j["target"] = v.target;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["wins"] = v.wins;
  }

  void from_json(const nlohmann::json& j, RankedLeagueMiniSeriesDTO& v) {
    v.losses = j.at("losses").get<uint64_t>;
    v.progress = j.at("progress").get<std::string>;
    v.target = j.at("target").get<uint64_t>;
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>;
    v.wins = j.at("wins").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RankedLeagueMiniSeriesDTO_HPP
