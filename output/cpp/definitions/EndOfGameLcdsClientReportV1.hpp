#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsClientReportV1_t {
    uint64_t offenderSummonerId;
    uint64_t gameId;
    std::string offenses;
    std::string comments;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsClientReportV1_t& v) {
    j["offenderSummonerId"] = v.offenderSummonerId;
    j["gameId"] = v.gameId;
    j["offenses"] = v.offenses;
    j["comments"] = v.comments;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsClientReportV1_t& v) {
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.offenses = j.at("offenses").get<std::string>();
    v.comments = j.at("comments").get<std::string>();
  }
}
