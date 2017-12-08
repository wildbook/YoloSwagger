#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayerComplaintV2_t {
    std::string comment;
    std::string offenses;
    uint64_t gameId;
    uint64_t reportedSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    j["comment"] = v.comment;
    j["offenses"] = v.offenses;
    j["gameId"] = v.gameId;
    j["reportedSummonerId"] = v.reportedSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    v.comment = j.at("comment").get<std::string>();
    v.offenses = j.at("offenses").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayerComplaintV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
