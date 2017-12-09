#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsClientReportV1_t {
    uint64_t offenderSummonerId;
    std::string comments;
    uint64_t gameId;
    std::string offenses;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsClientReportV1_t& v) {
    j["offenderSummonerId"] = v.offenderSummonerId;
    j["comments"] = v.comments;
    j["gameId"] = v.gameId;
    j["offenses"] = v.offenses;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsClientReportV1_t& v) {
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>();
    v.comments = j.at("comments").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.offenses = j.at("offenses").get<std::string>();
  }
  inline std::string to_string(const EndOfGameLcdsClientReportV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
