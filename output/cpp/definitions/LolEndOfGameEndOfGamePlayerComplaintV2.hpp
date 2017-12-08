#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayerComplaintV2_t {
    std::string offenses;
    std::string comment;
    uint64_t gameId;
    uint64_t reportedSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    j["offenses"] = v.offenses;
    j["comment"] = v.comment;
    j["gameId"] = v.gameId;
    j["reportedSummonerId"] = v.reportedSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    v.offenses = j.at("offenses").get<std::string>();
    v.comment = j.at("comment").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
