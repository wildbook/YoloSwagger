#ifndef SWAGGER_TYPES_EndOfGameLcdsClientReportV1_HPP
#define SWAGGER_TYPES_EndOfGameLcdsClientReportV1_HPP
#include <json.hpp>
namespace test {
  // 
  struct EndOfGameLcdsClientReportV1 {
'    // 
    std::string comments;
    // 
    uint64_t gameId;
    // 
    uint64_t offenderSummonerId;
    // 
    std::string offenses;
  };

  void to_json(nlohmann::json& j, const EndOfGameLcdsClientReportV1& v) {
    j["comments"] = v.comments;
    j["gameId"] = v.gameId;
    j["offenderSummonerId"] = v.offenderSummonerId;
    j["offenses"] = v.offenses;
  }

  void from_json(const nlohmann::json& j, EndOfGameLcdsClientReportV1& v) {
    v.comments = j.at("comments").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>;
    v.offenses = j.at("offenses").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsClientReportV1_HPP
