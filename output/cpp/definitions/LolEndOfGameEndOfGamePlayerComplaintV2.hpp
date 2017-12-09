#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayerComplaintV2_t {
    std::string comment;
    uint64_t reportedSummonerId;
    uint64_t gameId;
    std::string offenses;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    j["comment"] = v.comment;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["gameId"] = v.gameId;
    j["offenses"] = v.offenses;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    v.comment = j.at("comment").get<std::string>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.offenses = j.at("offenses").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
