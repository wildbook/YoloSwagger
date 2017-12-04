#ifndef SWAGGER_TYPES_EndOfGameLcdsHarassmentReport_HPP
#define SWAGGER_TYPES_EndOfGameLcdsHarassmentReport_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsHarassmentReport {
    // 
    std::string comment;
    // 
    std::string reportSource;
    // 
    uint64_t gameId;
    // 
    uint64_t reportedSummonerId;
    // 
    uint64_t reportingSummonerId;
    // 
    std::string offense;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsHarassmentReport& v) {
    j["comment"] = v.comment;
    j["reportSource"] = v.reportSource;
    j["gameId"] = v.gameId;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["reportingSummonerId"] = v.reportingSummonerId;
    j["offense"] = v.offense;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsHarassmentReport& v) {
    v.comment = j.at("comment").get<std::string>;
    v.reportSource = j.at("reportSource").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>;
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>;
    v.offense = j.at("offense").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsHarassmentReport_HPP
