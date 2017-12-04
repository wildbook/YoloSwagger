#ifndef SWAGGER_TYPES_LolEndOfGameEndOfGamePlayerComplaintV2_HPP
#define SWAGGER_TYPES_LolEndOfGameEndOfGamePlayerComplaintV2_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameEndOfGamePlayerComplaintV2 {
'    // 
    std::string comment;
    // 
    uint64_t gameId;
    // 
    std::string offenses;
    // 
    uint64_t reportedSummonerId;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    j["comment"] = v.comment;
    j["gameId"] = v.gameId;
    j["offenses"] = v.offenses;
    j["reportedSummonerId"] = v.reportedSummonerId;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    v.comment = j.at("comment").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.offenses = j.at("offenses").get<std::string>;
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameEndOfGamePlayerComplaintV2_HPP
