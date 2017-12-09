#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsClientReportV1_t {
    std::string comments;
    uint64_t gameId;
    std::string offenses;
    uint64_t offenderSummonerId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsClientReportV1_t& v) {
    j["comments"] = v.comments;
    j["gameId"] = v.gameId;
    j["offenses"] = v.offenses;
    j["offenderSummonerId"] = v.offenderSummonerId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsClientReportV1_t& v) {
    v.comments = j.at("comments").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.offenses = j.at("offenses").get<std::string>();
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const EndOfGameLcdsClientReportV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
