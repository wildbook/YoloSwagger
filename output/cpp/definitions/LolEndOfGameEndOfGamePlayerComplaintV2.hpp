#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayerComplaintV2_t {
    uint64_t gameId;
    uint64_t reportedSummonerId;
    std::string offenses;
    std::string comment;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    j["gameId"] = v.gameId;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["offenses"] = v.offenses;
    j["comment"] = v.comment;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
    v.offenses = j.at("offenses").get<std::string>();
    v.comment = j.at("comment").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
