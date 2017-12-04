#ifndef SWAGGER_TYPES_EndOfGameLcdsClientReportV1_HPP
#define SWAGGER_TYPES_EndOfGameLcdsClientReportV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsClientReportV1 {
    // 
    std::string offenses;
    // 
    uint64_t offenderSummonerId;
    // 
    uint64_t gameId;
    // 
    std::string comments;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsClientReportV1& v) {
    j["offenses"] = v.offenses;
    j["offenderSummonerId"] = v.offenderSummonerId;
    j["gameId"] = v.gameId;
    j["comments"] = v.comments;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsClientReportV1& v) {
    v.offenses = j.at("offenses").get<std::string>;
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.comments = j.at("comments").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsClientReportV1_HPP
